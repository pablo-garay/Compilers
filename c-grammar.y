%{
	#include <stdio.h>
	#include "c-grammar.h"
	#include "symbol_table.h"
	#include "int_buffer.h"
	
	#define NEXT_TOKEN (yychar == YYEMPTY) ? yychar = YYLEX : yychar

	void yyerror (const char *);	
	void begin_local_scope();
	void end_local_scope();
	void check_function_redefinition(char *name);
	void check_function_declared(char *name);
	void check_var_declared(char *name);
	void check_var_redefinition(char *name);
	int get_var_type(char *name);
	int get_function_type(char *name);
	int type_check(int type1, int type2, int operation);
	void function_type_check(char *function_name, int *function_actual_params);
	int *get_function_formal_params(char *name);
  	
    int print_enabled = TRUE;
  	short int errors = 0;	
	short int error_type = SINTAXIS;	
	extern yylineno;
	char *yytext;
	char *error_string = NULL; int error_param;

%}

%union {
   attributes attribute;
}

/* precedencia en orden en que aparecen tokens, de menor (arriba) a mayor (abajo) */
%token	<attribute> IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN
%token	TYPEDEF_NAME ENUMERATION_CONSTANT

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	<attribute> BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC NORETURN THREAD_LOCAL

%type <attribute> string constant primary_expression postfix_expression unary_expression argument_expression_list
%type <attribute> cast_expression multiplicative_expression additive_expression shift_expression relational_expression 
%type <attribute> equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression
%type <attribute> logical_or_expression conditional_expression assignment_expression expression expression_statement
%type <attribute> statement block_item initializer initializer_list init_declarator direct_declarator declarator 
%type <attribute> init_declarator_list declaration external_declaration type_specifier specifier_qualifier_list type_name 
%type <attribute> struct_or_union_specifier struct_or_union enum_specifier function_definition

%start translation_unit     /* define el start symbol */

%{
    /* typedef enum { LOCAL, GLOBAL } scope_type; */
    /* scope_type scope;                          */
  	int global_type_specifier = INTEGER;
  	hash_table_type global_symbol_table, current_scope_symbol_table, functions_symbol_table;
  	entry_data last_inserted_function;  	
%}

%%

left_parenthesis
	: '(' { PRINT("("); }
	;
	
right_parenthesis
	: ')' { PRINT(")"); }
	;
	
left_curly
	: '{' { PRINT("{"); }
	;
	
right_curly
	: '}' { PRINT("}"); }
	;
	
assign_op
    	: '=' { PRINT("="); }
    	;

primary_expression		
	: IDENTIFIER            
	  { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	    if (yychar != '('){ /* not a function call */
		check_var_declared($1.value);
		$$.type = get_var_type($1.value);
		PRINT("$");         
	    }
	    else{ /* function call */
		check_function_declared($1.value);
		$$.value = strdup($1.value);		
		$$.type = get_function_type($1.value);
	    }
            PRINT($1.value); free($1.value); 
	  } 
	| constant          				{ $$.type = $1.type; }	    
	| string					{ $$.type = $1.type; }
	| '(' expression ')'    			{ $$.type = $2.type; }
	;

constant 
	: I_CONSTANT					{ PRINT($1.value); free($1.value); } /* includes character_constant */	
							{ $$.type = INTEGER; }
	| F_CONSTANT            			{ PRINT($1.value); free($1.value); }
							{ $$.type = REAL; }
	| ENUMERATION_CONSTANT				{ $$.type = VACIO; }
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;
	
string
	: STRING_LITERAL        			{ PRINT($1.value); free($1.value); } 
							{ $$.type = CHARACTER; }
	;

postfix_expression
	: primary_expression				{ $$.type = $1.type; }
	| postfix_expression '[' { PRINT("["); } expression ']' { PRINT("]"); } 
	  {	if (IS_ARRAY($1.type)) ARRAY_BASIC_TYPE($1.type);
		if ($4.type==INTEGER) 
			$$.type=$1.type;
	   	 else 
			$$.type=ERROR_TIPO; 
	  }
	| postfix_expression '(' { PRINT("("); } ')' { PRINT(")"); } 				
	| postfix_expression '(' { PRINT("("); } argument_expression_list ')' 
	    { PRINT(")");
	      function_type_check($1.value, get_buffer_content($4.buffer));
	      free($1.value);
	      free_buffer($4.buffer); }
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP { PRINT("++"); }
	| postfix_expression DEC_OP { PRINT("--"); }
	;

argument_expression_list
	: assignment_expression
	    { $$.buffer = init_buffer(); buffer_add(&($$.buffer), $1.type); }
	    	
	| argument_expression_list ',' { PRINT(","); } assignment_expression
	    { $$.buffer = $1.buffer; buffer_add(&($$.buffer), $4.type); }
	;

unary_expression
	: postfix_expression 				{ $$.type = $1.type; }
	| INC_OP { PRINT("++"); } unary_expression	{ $$.type = $3.type; }
	| DEC_OP { PRINT("--"); } unary_expression	{ $$.type = $3.type; }
	| unary_operator cast_expression		{ $$.type = $2.type; }
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'	
	;

unary_operator
	: '&' { PRINT("&"); }
	| '*' { PRINT("*"); }
	| '+' { PRINT("+"); }
	| '-' { PRINT("-"); }
	| '~' { PRINT("~"); }
	| '!' { PRINT("!"); }
	;

cast_expression 
	: unary_expression 				{ $$.type = $1.type; }
	| '(' type_name ')' cast_expression		{ $$.type = $2.type; }
	;

multiplicative_expression
	: cast_expression 				{ $$.type = $1.type; }
	| multiplicative_expression '*' { PRINT("*"); } cast_expression 
	  { $$.type = type_check($1.type, $4.type, ARITHMETIC); }
	| multiplicative_expression '/' { PRINT("/"); } cast_expression
	  { $$.type = type_check($1.type, $4.type, ARITHMETIC); }
	| multiplicative_expression '%' { PRINT("%"); } cast_expression
	  { $$.type = type_check($1.type, $4.type, ARITHMETIC); }
	;

additive_expression
	: multiplicative_expression 			{ $$.type = $1.type; }
	| additive_expression '+' { PRINT("+"); } multiplicative_expression
	  { $$.type = type_check($1.type, $4.type, ARITHMETIC); }
	| additive_expression '-' { PRINT("-"); } multiplicative_expression
	  { $$.type = type_check($1.type, $4.type, ARITHMETIC); }
	;

shift_expression
	: additive_expression 				{ $$.type = $1.type; }
	| shift_expression LEFT_OP { PRINT("<<"); } additive_expression
	| shift_expression RIGHT_OP { PRINT(">>"); } additive_expression
	;

relational_expression
	: shift_expression 				{ $$.type = $1.type; }
	| relational_expression '<' { PRINT("<"); } shift_expression
	| relational_expression '>' { PRINT(">"); } shift_expression
	| relational_expression LE_OP { PRINT("<="); } shift_expression
	| relational_expression GE_OP { PRINT(">="); } shift_expression
	;

equality_expression
	: relational_expression 			{ $$.type = $1.type; }
	| equality_expression EQ_OP { PRINT("=="); } relational_expression
	| equality_expression NE_OP { PRINT("!="); } relational_expression
	;

and_expression
	: equality_expression 				{ $$.type = $1.type; }
	| and_expression '&' { PRINT("&"); } equality_expression
	;

exclusive_or_expression
	: and_expression 				{ $$.type = $1.type; }
	| exclusive_or_expression '^' { PRINT("^"); } and_expression
	;

inclusive_or_expression
	: exclusive_or_expression 			{ $$.type = $1.type; }
	| inclusive_or_expression '|' { PRINT("|"); } exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression 			{ $$.type = $1.type; }
	| logical_and_expression AND_OP { PRINT("&&"); } inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression 			{ $$.type = $1.type; }
	| logical_or_expression OR_OP { PRINT("||"); } logical_and_expression
	;

conditional_expression
	: logical_or_expression 			{ $$.type = $1.type; }
	| logical_or_expression '?' { PRINT("?"); } expression ':' { PRINT(":"); } conditional_expression
	;

assignment_expression
	: conditional_expression 			{ $$.type = $1.type; }
	| unary_expression assignment_operator assignment_expression 
	 { $$.type = type_check($1.type, $3.type, ASSIGNMENT); }
	;

assignment_operator
	: assign_op    
	| MUL_ASSIGN                    { PRINT("*="); }
	| DIV_ASSIGN                    { PRINT("/="); }
	| MOD_ASSIGN                    { PRINT("%="); }
	| ADD_ASSIGN                    { PRINT("+="); }
	| SUB_ASSIGN                    { PRINT("-="); }
	| LEFT_ASSIGN                   { PRINT("<<="); }
	| RIGHT_ASSIGN                  { PRINT(">>="); }
	| AND_ASSIGN                    { PRINT("&="); }
	| XOR_ASSIGN                    { PRINT("^="); }
	| OR_ASSIGN                     { PRINT("|="); }
	;

expression
	: assignment_expression 			{ $$.type = $1.type; }
	| expression ',' { PRINT(","); } assignment_expression 	
	  { $$.type = type_check($1.type, $4.type, EXPRESSION); }
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';' { PRINT(";"); }
	| declaration_specifiers init_declarator_list ';' { PRINT(";"); } { $$.type = $2.type; }
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	;

init_declarator_list
	: init_declarator 				{ $$.type = $1.type; }
	| init_declarator_list ',' { PRINT(";"); } init_declarator 	
	  { $$.type = type_check($1.type, $4.type, EXPRESSION); }
	;

init_declarator
	: declarator assign_op initializer  
		{   if (IS_ARRAY($1.type)) ARRAY_BASIC_TYPE($1.type);
			$$.type = type_check($1.type, $3.type, ASSIGNMENT); }
	| declarator					
	  	{$$.type = $1.type;}
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID		{ global_type_specifier = VOID; }		{ $$.type = VOID; }
	| CHAR          { global_type_specifier = CHARACTER; }		{ $$.type = CHARACTER; }
	| SHORT         { global_type_specifier = INTEGER; }		{ $$.type = INTEGER; }
	| INT           { global_type_specifier = INTEGER; }		{ $$.type = INTEGER; }
	| LONG          { global_type_specifier = INTEGER; }		{ $$.type = INTEGER; }
	| FLOAT         { global_type_specifier = REAL; }		{ $$.type = REAL; }
	| DOUBLE        { global_type_specifier = REAL; }		{ $$.type = REAL; }
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT							{ $$.type = VACIO; }
	| UNION								{ $$.type = VACIO; }
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list		
	  { if ($1.type==$2.type ) 
		$$.type = $1.type;
	    else 
		$$.type = ERROR_TIPO; 
	  }
	| type_specifier				{ $$.type = $1.type; }
	| type_qualifier specifier_qualifier_list	{ $$.type = VACIO; }
	| type_qualifier				{ $$.type = VACIO; }
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'			{ $$.type = VACIO; }
	| ENUM '{' enumerator_list ',' '}'		{ $$.type = VACIO; }
	| ENUM IDENTIFIER '{' enumerator_list '}'	{ $$.type = VACIO; }
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'	{ $$.type = VACIO; }
	| ENUM IDENTIFIER				{ $$.type = VACIO; }
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression
	| enumeration_constant
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	;

function_specifier
	: INLINE
	| NORETURN
	;

declarator
	: pointer direct_declarator 			{ $$.type = $2.type; }
	| direct_declarator 				{ $$.type = $1.type; }
	;

direct_declarator
	: IDENTIFIER            { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar == '('){
	                            check_function_redefinition($1.value);	                            
	                            PRINT("function "); /* function */
	                            last_inserted_function = table_insert($1.value, global_type_specifier, functions_symbol_table);
	                            begin_local_scope();
	                            $$.type = get_function_type($1.value); 
	                          }
	                          else {
	                            check_var_redefinition($1.value);
	                            PRINT("$");                       /* var */
	                            table_insert($1.value, TYPE(global_type_specifier), current_scope_symbol_table);
	                            $$.type = get_var_type($1.value);
	                          }
	                          //printf("ID: %s, TYPE: %d\n", $1.value, global_type_specifier);                       
	                          PRINT($1.value); free($1.value); 
	                        }
	| direct_declarator '[' ']'
	| direct_declarator '[' { print_enabled = FALSE; } assignment_expression ']' { print_enabled = TRUE; }
	| direct_declarator '(' { PRINT("("); } 
	  parameter_list ')'    { PRINT(")"); }
	| direct_declarator '(' ')' { PRINT("()"); }  
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' { PRINT(","); } parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator     { buffer_add(&last_inserted_function.formal_params, global_type_specifier); }
	| declaration_specifiers                { buffer_add(&last_inserted_function.formal_params, global_type_specifier); }
	;

type_name
	: specifier_qualifier_list			{ $$.type = $1.type; }
	;

initializer
	: '{' { PRINT("array("); } initializer_list maybe_comma '}' { PRINT(")"); } 
							{ $$.type = $3.type; } 
	| assignment_expression 			{ $$.type = $1.type; }
	;
	
maybe_comma
    	: /* empty */
    	| ',' { PRINT(","); }
    	;

initializer_list
	: initializer 					{ $$.type = $1.type; }
	| initializer_list ',' { PRINT(","); } initializer 
	  { $$.type = type_check($1.type, $4.type, INITIALIZER); }
	;

statement
	: labeled_statement				{ $$.type = VACIO; }
	| compound_statement				{ $$.type = VACIO; }
	| expression_statement 				{ $$.type = $1.type; } 
	| selection_statement   			{ $$.type = VACIO; }
	| iteration_statement   			{ $$.type = VACIO; }
	| jump_statement				{ $$.type = VACIO; }
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE { PRINT("case"); } constant_expression ':' { PRINT(":"); } statement
	| DEFAULT ':' { PRINT("default:"); } statement
	;

compound_statement
	: left_curly right_curly
	| left_curly  block_item_list right_curly 
	;

block_item_list
	: block_item 
	| block_item_list block_item
	| error block_item {yyerrok;}	
	;

block_item
	: declaration 					
	  { $$.type = $1.type;
	    if ($$.type==ERROR_TIPO){ 
		error_type = TIPO;
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 	  	
	    }
	  }
	| statement 					
	  { $$.type = $1.type; 
	    if ($$.type==ERROR_TIPO){ 
		error_type = TIPO;		
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
	    }
	  }
	;

expression_statement
	: ';' { PRINT(";"); } 
	| expression ';' { PRINT(";"); } 		{ $$.type = $1.type; } 
	;
	
if
	: IF { PRINT("if"); }
    	;	

selection_statement
	: if left_parenthesis expression right_parenthesis statement ELSE { PRINT("else"); } statement
	| if left_parenthesis expression right_parenthesis statement
	| SWITCH { PRINT("switch"); } left_parenthesis expression right_parenthesis statement
	;

for
	: FOR { PRINT("for"); }
	;
	
iteration_statement
	: WHILE { PRINT("while"); } left_parenthesis expression right_parenthesis  
	| DO { PRINT("do"); } statement WHILE { PRINT("while"); } left_parenthesis expression right_parenthesis 
	  ';' { PRINT(";"); }
	| for left_parenthesis expression_statement expression_statement right_parenthesis statement
	| for left_parenthesis expression_statement expression_statement expression right_parenthesis statement
	| for left_parenthesis declaration expression_statement right_parenthesis statement
	| for left_parenthesis declaration expression_statement expression right_parenthesis statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'                  { PRINT("continue;"); }
	| BREAK ';'                     { PRINT("break;"); }
	| RETURN ';'                    { PRINT("return;"); }
	| RETURN { PRINT("return "); } expression ';' { PRINT(";"); }
	;

translation_unit
	: external_declaration 
	| translation_unit external_declaration
	| error external_declaration { yyerrok; }	
	;

external_declaration
	: function_definition
	| declaration 
	  { $$.type = $1.type; 
	    if ($$.type==ERROR_TIPO){ 
		error_type = TIPO;		
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
	    }
	  }
	;

function_definition
	: declaration_specifiers declarator compound_statement                  { end_local_scope(); } 
	;

%%

void begin_local_scope(){
    /* scope = LOCAL;    */
    current_scope_symbol_table = create_table(); /* crear symbol table */     
}

void end_local_scope(){
    /* scope = GLOBAL;  */
    free_table(current_scope_symbol_table); /* liberar memoria */    
    current_scope_symbol_table = global_symbol_table; /* current scope = GLOBAL */     
}

void check_function_redefinition(char *name){
    if (lookup_string(name, functions_symbol_table)) {
	error_string = name;
	error_type = AMBITO;
	yyerror("intento de redefinir función");
    }
}

void check_var_redefinition(char *name){
    if (lookup_string(name, current_scope_symbol_table)) {
	error_string = name;
	error_type = AMBITO;
 	yyerror("intento de redefinir variable");
    }
}

void check_function_declared(char *name){
    if (!lookup_string(name, functions_symbol_table)) 
        fprintf(stderr, "Cerca de la línea %d: warning: declaración implícita de la función '%s'\n", yylineno, name);
}

void check_var_declared(char *name){
    if ( (!lookup_string(name, current_scope_symbol_table) && current_scope_symbol_table != global_symbol_table)
     &&   !lookup_string(name, global_symbol_table) ) {
	error_string = name;
	error_type = AMBITO;
	yyerror ("variable no declarada");
	
    }	
}

int get_var_type(char *name){
    list_pointer type;
    if ( (type = lookup_string(name, current_scope_symbol_table)) && current_scope_symbol_table != global_symbol_table)
     	return type->entry.type;
    else if ( (type = lookup_string(name, global_symbol_table)) )
	return type->entry.type;
    else 
	return COMODIN; 	
}


int get_function_type(char *name){
    list_pointer type;
    if ( (type = lookup_string(name, functions_symbol_table)) )
	return type->entry.type;
    else 
	return COMODIN; 	
}

int *get_function_formal_params(char *name){
    list_pointer entry;
    if ( (entry = lookup_string(name, functions_symbol_table)) )
	return get_buffer_content(entry->entry.formal_params);
    else 
	return NULL; 	
}

int type_check(int type1, int type2, int operation){
		
	if ( type1 == COMODIN || type2 == COMODIN ) return COMODIN;
	
	switch (operation){
		case ARITHMETIC:	/*Utilizado en: multiplicative_expression, additive_expression*/						
			if (IS_ARRAY(type1)) ARRAY_BASIC_TYPE(type1);
			if (IS_ARRAY(type2)) ARRAY_BASIC_TYPE(type2);			
			if (type1 == type2 && (type1 == INTEGER || type1 == REAL))
				return type1;
			else 
				return ERROR_TIPO;
			break;
		case ASSIGNMENT:	/*Utilizado en: assignment_expression, init_declarator*/
			if (type1 == type2) 
				return VACIO;	
			else
				return ERROR_TIPO; 		
			break;
		case INITIALIZER: 	/*Utilizado en: initializer_list*/
				if (type1 == type2) 
					return type1; 
				else 
					return ERROR_TIPO;	
				break;
		case EXPRESSION: 	/*Utilizado en: expression, init_declarator_list*/
				if (type1 != ERROR_TIPO && type2 != ERROR_TIPO ) 
					return VACIO;
	    		else 
					return ERROR_TIPO; 			
				break;
		default:
				return ERROR_TIPO;
				break;
	}
}

void function_type_check(char *function_name, int *function_actual_params){

    int i;
    int *function_formal_params;
    /* printf("\nComprobando tipos de funcion: %s llamada en linea %d\n", function_name, yylineno); */
    function_formal_params = get_function_formal_params(function_name); /* get formal params de funcion de symbol table */
    
    if (function_formal_params == NULL) return; /* no se encontro function en tabla de simbolos, retornar */
    
    /* printf("Comparar parametros formales:"); print_buffer(function_formal_params); printf("Con parametros actuales:"); print_buffer(function_actual_params); */
     
    for (i = 0;; i++){
        if (function_formal_params[i] == END_OF_BUFFER && function_actual_params[i] != END_OF_BUFFER){
            error_type = CANT_ARGS_FUNCION;
            error_string = function_name;
            yyerror("Demasiados argumentos para la funcion");
            return;
        }
        else if (function_actual_params[i] == END_OF_BUFFER && function_formal_params[i] != END_OF_BUFFER){
            error_type = CANT_ARGS_FUNCION;
            error_string = function_name;
            yyerror("Muy pocos argumentos en llamada a funcion");
            return;
        } else if (function_formal_params[i] == END_OF_BUFFER && function_actual_params[i] == END_OF_BUFFER){
            return;
        }
        else {
            if (function_formal_params[i] != function_actual_params[i]){
                error_type = TIPOS_INCOMPATIBLES_FUNCION;
                error_string = function_name; error_param = i + 1;
                yyerror("Tipo de argumento incompatible en llamada a funcion");
            }
        }
    }
                           
}

int main(){
    
    pFile = fopen (FILENAME , "w");
    if (pFile == NULL) perror ("Error al abrir el archivo");
    fputs ("<?php\n\n", pFile);
    
    global_symbol_table = create_table(); /* crear symbol table para variables con global scope */
    current_scope_symbol_table = global_symbol_table; /* current scope = GLOBAL */
    functions_symbol_table = create_table(); /* crear symbol table para funciones */     

    yyparse();
    
    fputs ("\n\n?>", pFile);
    fclose (pFile);
    
    if (errors > 0){
	    if( remove( FILENAME ) != 0 )
		  	perror( "Error al intentar eliminar el archivo" );
  		else
  		    printf("%d errores detectados\n", errors);
            puts( "No se generará traducción. Archivo eliminado exitosamente" );		
	}
	
	free_table(global_symbol_table); /* liberar memoria */
	free_table(functions_symbol_table); /* liberar memoria */
    return 0;
}

void yyerror (const char *message) {
	switch (error_type){
		case AMBITO:
		case CANT_ARGS_FUNCION:
			fprintf(stderr, "Línea %d: error: %s '%s'\n", yylineno, message, error_string);
			break;
		case TIPO:
			fprintf(stderr, "Línea %d: error: %s\n", yylineno, message);
			break;
	        case TIPOS_INCOMPATIBLES_FUNCION:
	                fprintf(stderr, "Línea %d: error: Tipo de argumento incompatible para argumento %d de '%s'\n", 
	                                 yylineno, error_param, error_string);
			break;
		default:
			fprintf(stderr, "Cerca de la línea %d: error: %s cerca de '%s'\n", yylineno, message, yytext);
			break;	
	}
	error_type = SINTAXIS;       	
	errors++;  
}

