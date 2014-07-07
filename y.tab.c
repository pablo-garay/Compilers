/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "c-grammar.y"

	#include <stdio.h>
	#include "c-grammar.h"
	#include "symbol_table.h"
	#include "int_buffer.h"
	
	#define NEXT_TOKEN (yychar == YYEMPTY) ? yychar = YYLEX : yychar

	void yyerror (const char *);	
	void begin_local_scope();
	void end_local_scope();
	int check_function_redefinition(char *name);
	void check_function_declared(char *name);
	void check_var_declared(char *name);
	int check_var_redefinition(char *name);
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



/* Line 268 of yacc.c  */
#line 102 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPEDEF_NAME = 285,
     ENUMERATION_CONSTANT = 286,
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     INLINE = 292,
     CONST = 293,
     RESTRICT = 294,
     VOLATILE = 295,
     BOOL = 296,
     CHAR = 297,
     SHORT = 298,
     INT = 299,
     LONG = 300,
     SIGNED = 301,
     UNSIGNED = 302,
     FLOAT = 303,
     DOUBLE = 304,
     VOID = 305,
     COMPLEX = 306,
     IMAGINARY = 307,
     STRUCT = 308,
     UNION = 309,
     ENUM = 310,
     ELLIPSIS = 311,
     CASE = 312,
     DEFAULT = 313,
     IF = 314,
     ELSE = 315,
     SWITCH = 316,
     WHILE = 317,
     DO = 318,
     FOR = 319,
     GOTO = 320,
     CONTINUE = 321,
     BREAK = 322,
     RETURN = 323,
     ALIGNAS = 324,
     ALIGNOF = 325,
     ATOMIC = 326,
     NORETURN = 327,
     THREAD_LOCAL = 328
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define BOOL 296
#define CHAR 297
#define SHORT 298
#define INT 299
#define LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define FLOAT 303
#define DOUBLE 304
#define VOID 305
#define COMPLEX 306
#define IMAGINARY 307
#define STRUCT 308
#define UNION 309
#define ENUM 310
#define ELLIPSIS 311
#define CASE 312
#define DEFAULT 313
#define IF 314
#define ELSE 315
#define SWITCH 316
#define WHILE 317
#define DO 318
#define FOR 319
#define GOTO 320
#define CONTINUE 321
#define BREAK 322
#define RETURN 323
#define ALIGNAS 324
#define ALIGNOF 325
#define ATOMIC 326
#define NORETURN 327
#define THREAD_LOCAL 328




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 31 "c-grammar.y"

   attributes attribute;



/* Line 293 of yacc.c  */
#line 290 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 63 "c-grammar.y"

    /* typedef enum { LOCAL, GLOBAL } scope_type; */
    /* scope_type scope;                          */
  	int global_type_specifier = INTEGER;
  	hash_table_type global_symbol_table, current_scope_symbol_table, functions_symbol_table;
  	entry_data last_inserted_function;  	


/* Line 343 of yacc.c  */
#line 311 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1027

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNRULES -- Number of states.  */
#define YYNSTATES  379

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    90,    83,     2,
      74,    75,    84,    85,    82,    86,    81,    89,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,    97,
      91,    78,    92,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,    94,    77,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    23,    25,    27,    29,    31,    33,    35,    36,    42,
      43,    48,    49,    55,    59,    63,    66,    69,    71,    72,
      77,    79,    80,    84,    85,    89,    92,    95,   100,   102,
     104,   106,   108,   110,   112,   114,   119,   121,   122,   127,
     128,   133,   134,   139,   141,   142,   147,   148,   153,   155,
     156,   161,   162,   167,   169,   170,   175,   176,   181,   182,
     187,   188,   193,   195,   196,   201,   202,   207,   209,   210,
     215,   217,   218,   223,   225,   226,   231,   233,   234,   239,
     241,   242,   247,   249,   250,   251,   259,   261,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   283,   285,   287,
     289,   290,   295,   297,   300,   301,   306,   309,   311,   314,
     316,   319,   321,   324,   326,   328,   329,   334,   338,   340,
     342,   344,   346,   348,   350,   352,   354,   356,   358,   360,
     362,   364,   366,   368,   370,   372,   374,   379,   385,   388,
     390,   392,   394,   397,   400,   404,   407,   409,   412,   414,
     416,   420,   423,   427,   429,   434,   440,   446,   453,   456,
     458,   462,   466,   468,   470,   472,   474,   476,   478,   481,
     483,   485,   489,   490,   496,   497,   503,   507,   511,   514,
     517,   519,   521,   524,   526,   527,   532,   535,   537,   539,
     540,   546,   548,   549,   551,   553,   554,   559,   561,   563,
     565,   567,   569,   571,   575,   576,   577,   584,   585,   590,
     593,   597,   599,   602,   605,   607,   609,   611,   614,   616,
     617,   626,   632,   633,   640,   642,   643,   649,   650,   651,
     661,   668,   676,   683,   691,   695,   698,   701,   704,   705,
     710,   712,   715,   718,   720,   722
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     210,     0,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,     3,    -1,   105,    -1,   107,    -1,    74,
     152,    75,    -1,     4,    -1,     5,    -1,    31,    -1,     3,
      -1,     6,    -1,   104,    -1,    -1,   108,    79,   109,   152,
      80,    -1,    -1,   108,    74,   110,    75,    -1,    -1,   108,
      74,   111,   112,    75,    -1,   108,    81,     3,    -1,   108,
       9,     3,    -1,   108,    10,    -1,   108,    11,    -1,   150,
      -1,    -1,   112,    82,   113,   150,    -1,   108,    -1,    -1,
      10,   115,   114,    -1,    -1,    11,   116,   114,    -1,   117,
     118,    -1,     8,   114,    -1,     8,    74,   184,    75,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      88,    -1,   114,    -1,    74,   184,    75,   118,    -1,   118,
      -1,    -1,   119,    84,   120,   118,    -1,    -1,   119,    89,
     121,   118,    -1,    -1,   119,    90,   122,   118,    -1,   119,
      -1,    -1,   123,    85,   124,   119,    -1,    -1,   123,    86,
     125,   119,    -1,   123,    -1,    -1,   126,    12,   127,   123,
      -1,    -1,   126,    13,   128,   123,    -1,   126,    -1,    -1,
     129,    91,   130,   126,    -1,    -1,   129,    92,   131,   126,
      -1,    -1,   129,    14,   132,   126,    -1,    -1,   129,    15,
     133,   126,    -1,   129,    -1,    -1,   134,    16,   135,   129,
      -1,    -1,   134,    17,   136,   129,    -1,   134,    -1,    -1,
     137,    83,   138,   134,    -1,   137,    -1,    -1,   139,    93,
     140,   137,    -1,   139,    -1,    -1,   141,    94,   142,   139,
      -1,   141,    -1,    -1,   143,    18,   144,   141,    -1,   143,
      -1,    -1,   145,    19,   146,   143,    -1,   145,    -1,    -1,
      -1,   145,    95,   148,   152,    96,   149,   147,    -1,   147,
      -1,   114,   151,   150,    -1,   103,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,    29,    -1,   150,    -1,    -1,
     152,    82,   153,   150,    -1,   147,    -1,   157,    97,    -1,
      -1,   157,   158,    97,   156,    -1,   161,   157,    -1,   161,
      -1,   162,   157,    -1,   162,    -1,   173,   157,    -1,   173,
      -1,   174,   157,    -1,   174,    -1,   160,    -1,    -1,   158,
      82,   159,   160,    -1,   175,   103,   185,    -1,   175,    -1,
      32,    -1,    33,    -1,    34,    -1,    73,    -1,    35,    -1,
      36,    -1,    50,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    48,    -1,    49,    -1,    46,    -1,    47,    -1,
     163,    -1,   170,    -1,   164,    76,   165,    77,    -1,   164,
       3,    76,   165,    77,    -1,   164,     3,    -1,    53,    -1,
      54,    -1,   166,    -1,   165,   166,    -1,   167,    97,    -1,
     167,   168,    97,    -1,   162,   167,    -1,   162,    -1,   173,
     167,    -1,   173,    -1,   169,    -1,   168,    82,   169,    -1,
      96,   154,    -1,   175,    96,   154,    -1,   175,    -1,    55,
      76,   171,    77,    -1,    55,    76,   171,    82,    77,    -1,
      55,     3,    76,   171,    77,    -1,    55,     3,    76,   171,
      82,    77,    -1,    55,     3,    -1,   172,    -1,   171,    82,
     172,    -1,   106,    78,   154,    -1,   106,    -1,    38,    -1,
      39,    -1,    40,    -1,    37,    -1,    72,    -1,   179,   176,
      -1,   176,    -1,     3,    -1,   176,    79,    80,    -1,    -1,
     176,    79,   177,   150,    80,    -1,    -1,   176,    74,   178,
     181,    75,    -1,   176,    74,    75,    -1,    84,   180,   179,
      -1,    84,   180,    -1,    84,   179,    -1,    84,    -1,   173,
      -1,   180,   173,    -1,   183,    -1,    -1,   181,    82,   182,
     183,    -1,   157,   175,    -1,   157,    -1,   167,    -1,    -1,
      76,   186,   188,   187,    77,    -1,   150,    -1,    -1,    82,
      -1,   185,    -1,    -1,   188,    82,   189,   185,    -1,   191,
      -1,   195,    -1,   198,    -1,   200,    -1,   204,    -1,   208,
      -1,     3,    96,   190,    -1,    -1,    -1,    57,   192,   154,
      96,   193,   190,    -1,    -1,    58,    96,   194,   190,    -1,
     101,   102,    -1,   101,   196,   102,    -1,   197,    -1,   196,
     197,    -1,     1,   197,    -1,   155,    -1,   190,    -1,    97,
      -1,   152,    97,    -1,    59,    -1,    -1,   199,    99,   152,
     100,   190,    60,   201,   190,    -1,   199,    99,   152,   100,
     190,    -1,    -1,    61,   202,    99,   152,   100,   190,    -1,
      64,    -1,    -1,    62,   205,    99,   152,   100,    -1,    -1,
      -1,    63,   206,   190,    62,   207,    99,   152,   100,    97,
      -1,   203,    99,   198,   198,   100,   190,    -1,   203,    99,
     198,   198,   152,   100,   190,    -1,   203,    99,   155,   198,
     100,   190,    -1,   203,    99,   155,   198,   152,   100,   190,
      -1,    65,     3,    97,    -1,    66,    97,    -1,    67,    97,
      -1,    68,    97,    -1,    -1,    68,   209,   152,    97,    -1,
     211,    -1,   210,   211,    -1,     1,   211,    -1,   212,    -1,
     155,    -1,   157,   175,   195,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    82,    86,    90,    94,   109,   112,
     115,   120,   124,   128,   133,   137,   143,   147,   146,   156,
     155,   166,   165,   174,   175,   176,   177,   181,   184,   184,
     189,   193,   192,   198,   197,   202,   205,   206,   210,   211,
     212,   213,   214,   215,   219,   220,   224,   228,   227,   233,
     232,   238,   238,   243,   245,   245,   248,   248,   253,   255,
     255,   258,   258,   263,   265,   265,   268,   268,   271,   271,
     274,   274,   279,   281,   281,   284,   284,   289,   291,   291,
     296,   298,   298,   302,   304,   304,   309,   311,   311,   316,
     318,   318,   323,   325,   326,   325,   331,   334,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   353,
     355,   355,   360,   364,   368,   367,   372,   373,   374,   375,
     376,   377,   378,   379,   383,   385,   385,   390,   394,   399,
     400,   401,   402,   403,   404,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   422,   423,   424,   428,
     429,   433,   434,   438,   439,   443,   448,   451,   454,   459,
     460,   464,   465,   466,   470,   471,   472,   473,   474,   478,
     479,   483,   484,   488,   489,   490,   494,   495,   499,   500,
     504,   525,   527,   527,   530,   530,   533,   537,   538,   539,
     540,   544,   545,   549,   550,   550,   555,   559,   565,   569,
     569,   574,   577,   579,   583,   585,   585,   590,   591,   592,
     593,   594,   595,   599,   602,   604,   601,   608,   607,   613,
     614,   618,   619,   620,   624,   632,   642,   643,   647,   652,
     651,   655,   658,   657,   663,   668,   667,   672,   674,   671,
     678,   679,   680,   681,   685,   686,   687,   688,   689,   689,
     694,   695,   696,   700,   701,   711
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN",
  "STATIC", "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM",
  "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO",
  "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF",
  "ATOMIC", "NORETURN", "THREAD_LOCAL", "'('", "')'", "'{'", "'}'", "'='",
  "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "left_parenthesis", "right_parenthesis", "left_curly", "right_curly",
  "assign_op", "primary_expression", "constant", "enumeration_constant",
  "string", "postfix_expression", "$@1", "$@2", "$@3",
  "argument_expression_list", "$@4", "unary_expression", "$@5", "$@6",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@7",
  "$@8", "$@9", "additive_expression", "$@10", "$@11", "shift_expression",
  "$@12", "$@13", "relational_expression", "$@14", "$@15", "$@16", "$@17",
  "equality_expression", "$@18", "$@19", "and_expression", "$@20",
  "exclusive_or_expression", "$@21", "inclusive_or_expression", "$@22",
  "logical_and_expression", "$@23", "logical_or_expression", "$@24",
  "conditional_expression", "$@25", "$@26", "assignment_expression",
  "assignment_operator", "expression", "$@27", "constant_expression",
  "declaration", "$@28", "declaration_specifiers", "init_declarator_list",
  "$@29", "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "$@30", "$@31", "pointer", "type_qualifier_list",
  "parameter_list", "$@32", "parameter_declaration", "type_name",
  "initializer", "$@33", "maybe_comma", "initializer_list", "$@34",
  "statement", "labeled_statement", "$@35", "$@36", "$@37",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "if", "selection_statement", "$@38", "$@39",
  "for", "iteration_statement", "$@40", "$@41", "$@42", "jump_statement",
  "$@43", "translation_unit", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    40,    41,   123,   125,    61,    91,
      93,    46,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   101,   102,   103,   104,   104,   104,
     104,   105,   105,   105,   106,   107,   108,   109,   108,   110,
     108,   111,   108,   108,   108,   108,   108,   112,   113,   112,
     114,   115,   114,   116,   114,   114,   114,   114,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   120,   119,   121,
     119,   122,   119,   123,   124,   123,   125,   123,   126,   127,
     126,   128,   126,   129,   130,   129,   131,   129,   132,   129,
     133,   129,   134,   135,   134,   136,   134,   137,   138,   137,
     139,   140,   139,   141,   142,   141,   143,   144,   143,   145,
     146,   145,   147,   148,   149,   147,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   152,
     153,   152,   154,   155,   156,   155,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   159,   158,   160,   160,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   168,
     168,   169,   169,   169,   170,   170,   170,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   176,   178,   176,   176,   179,   179,   179,
     179,   180,   180,   181,   182,   181,   183,   183,   184,   186,
     185,   185,   187,   187,   188,   189,   188,   190,   190,   190,
     190,   190,   190,   191,   192,   193,   191,   194,   191,   195,
     195,   196,   196,   196,   197,   197,   198,   198,   199,   201,
     200,   200,   202,   200,   203,   205,   204,   206,   207,   204,
     204,   204,   204,   204,   208,   208,   208,   208,   209,   208,
     210,   210,   210,   211,   211,   212
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     0,     5,     0,
       4,     0,     5,     3,     3,     2,     2,     1,     0,     4,
       1,     0,     3,     0,     3,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     0,     7,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     0,     4,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     0,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     2,     1,
       1,     1,     2,     2,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     4,     5,     5,     6,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     0,     5,     0,     5,     3,     3,     2,     2,
       1,     1,     2,     1,     0,     4,     2,     1,     1,     0,
       5,     1,     0,     1,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     3,     0,     0,     6,     0,     4,     2,
       3,     1,     2,     2,     1,     1,     1,     2,     1,     0,
       8,     5,     0,     6,     1,     0,     5,     0,     0,     9,
       6,     7,     6,     7,     3,     2,     2,     2,     0,     4,
       1,     2,     2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   129,   130,   131,   133,   134,   176,   173,   174,
     175,   136,   137,   138,   139,   142,   143,   140,   141,   135,
     149,   150,     0,   177,   132,   254,     0,   117,   119,   144,
       0,   145,   121,   123,     0,   250,   253,   252,   168,     0,
     180,   190,   113,     0,   124,   128,   179,     0,   116,   118,
     148,     0,   120,   122,     1,   251,     0,    14,   172,     0,
     169,   191,   189,   188,   125,   114,     4,     6,     0,     0,
     255,   184,   182,   178,     0,   156,     0,   151,     0,   158,
       0,     0,   164,     0,   192,   187,     0,   115,     0,     7,
      11,    12,    15,     0,    31,    33,    13,   214,     0,   228,
     232,   235,   237,   234,     0,     0,     0,   248,     0,     5,
      38,    39,    40,    41,    42,    43,   226,   219,    16,     8,
       9,    30,    44,     0,    46,    53,    58,    63,    72,    77,
      80,    83,    86,    89,    92,    96,   109,     0,   224,     0,
     225,   207,   208,     0,   221,   209,     0,   210,     0,   211,
     212,     7,   199,   201,   127,   186,     0,   181,     0,     0,
     155,   146,   152,     0,   153,     0,   159,   163,   157,   166,
       0,    44,   112,   171,   165,   170,   126,   128,   223,     0,
       0,    36,     0,     0,     0,   217,     0,     0,     0,     0,
     245,   246,   247,     0,     0,   198,     0,     0,    25,    26,
      21,    17,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    98,     0,    35,    47,    49,    51,    54,
      56,    59,    61,    68,    70,    64,    66,    73,    75,    78,
      81,    84,    87,    90,    93,   110,   227,   220,   222,     2,
       0,     0,     0,   197,     0,   193,     0,   147,   161,     0,
     154,     0,   167,   213,     0,     0,    32,    34,     0,     0,
       0,     0,     0,   244,     0,    10,     0,    24,     0,     0,
       0,    23,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,   202,   196,   185,
     194,   183,   160,   162,    37,   215,   218,     0,     0,   238,
     249,    45,    20,     0,    27,     0,    48,    50,    52,    55,
      57,    60,    62,    69,    71,    65,    67,    74,    76,    79,
      82,    85,    88,    91,     0,   111,     3,     0,     0,     0,
     205,     0,     0,     0,     0,   236,     0,    22,    28,    18,
      94,   231,     0,     0,     0,     0,     0,   200,   195,   216,
     233,     0,     0,     0,   229,   242,     0,   240,     0,   206,
       0,    29,    95,     0,   243,   241,     0,   230,   239
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   240,   337,    68,   117,    69,   118,   119,    58,   120,
     121,   270,   268,   269,   313,   362,   122,   182,   183,   123,
     124,   125,   273,   274,   275,   126,   276,   277,   127,   278,
     279,   128,   282,   283,   280,   281,   129,   284,   285,   130,
     286,   131,   287,   132,   288,   133,   289,   134,   290,   135,
     291,   363,   136,   214,   137,   292,   173,    25,    87,   139,
      43,    86,    44,    27,    28,    29,    30,    76,    77,    78,
     165,   166,    31,    59,    60,    32,    33,   167,    46,   158,
     156,    47,    63,   244,   342,   245,   196,   154,   242,   341,
     297,   356,   140,   141,   184,   343,   259,   142,   143,   144,
     145,   146,   147,   373,   186,   148,   149,   187,   188,   346,
     150,   193,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -236
static const yytype_int16 yypact[] =
{
     912,   954,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,    49,  -236,  -236,  -236,    10,   954,   954,  -236,
      52,  -236,   954,   954,   862,  -236,  -236,  -236,   -30,    68,
    -236,    48,  -236,   -41,  -236,     6,    72,    89,  -236,  -236,
      34,   587,  -236,  -236,  -236,  -236,    68,  -236,    45,   -28,
    -236,  -236,  -236,    48,  -236,  -236,  -236,  -236,   267,   714,
    -236,    55,    58,    72,   587,   587,   417,  -236,     5,   587,
      57,   758,  -236,    26,  -236,  -236,    11,  -236,   443,    44,
    -236,  -236,  -236,   773,  -236,  -236,  -236,  -236,    54,  -236,
    -236,  -236,  -236,  -236,   141,    62,    75,    77,   656,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,    50,   347,   758,  -236,    65,    91,   174,    24,   173,
      86,    85,   105,   162,     3,  -236,  -236,   -25,  -236,    10,
    -236,  -236,  -236,   355,  -236,  -236,   126,  -236,   126,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,   954,  -236,   758,   505,
    -236,  -236,  -236,   758,  -236,   -24,  -236,   128,  -236,  -236,
      42,  -236,  -236,  -236,  -236,  -236,  -236,   123,  -236,   589,
     656,  -236,   802,   802,   758,  -236,   126,   126,   589,   129,
    -236,  -236,  -236,   758,    22,  -236,   152,   225,  -236,  -236,
     156,  -236,   229,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,   758,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
     758,   531,   714,    11,    51,  -236,   153,  -236,  -236,    12,
    -236,   758,  -236,  -236,   164,   758,  -236,  -236,   145,   589,
     758,   758,   175,  -236,   -14,  -236,   758,  -236,   167,   758,
     758,  -236,  -236,   758,   758,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   758,   758,   758,   758,   758,   758,
     758,   758,   758,    60,   160,   160,  -236,   168,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,    60,    60,  -236,
    -236,  -236,  -236,    61,  -236,    29,  -236,  -236,  -236,    65,
      65,    91,    91,   174,   174,   174,   174,    24,    24,   173,
      86,    85,   105,   162,   -16,  -236,  -236,   589,   743,   743,
     172,   176,   954,   589,   589,  -236,   126,  -236,  -236,  -236,
    -236,   191,   589,    60,   589,    60,   714,  -236,  -236,  -236,
    -236,   758,   758,   758,  -236,  -236,   589,  -236,   589,  -236,
      60,  -236,  -236,   589,  -236,  -236,   158,  -236,  -236
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -124,   484,  -236,   113,   138,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,   -70,  -236,  -236,  -236,
    -113,   -84,  -236,  -236,  -236,   -81,  -236,  -236,   -98,  -236,
    -236,   -90,  -236,  -236,  -236,  -236,   -23,  -236,  -236,   -26,
    -236,   -21,  -236,   -27,  -236,   -11,  -236,  -236,  -236,   -78,
    -236,  -236,   -67,  -236,  -103,  -236,  -133,   -62,  -236,     0,
    -236,  -236,   178,  -236,   -39,  -236,  -236,   192,   -60,   -58,
    -236,    16,  -236,   213,   -65,   -32,  -236,   -22,   227,  -236,
    -236,     7,  -236,  -236,  -236,   -66,   100,  -235,  -236,  -236,
    -236,  -236,  -114,  -236,  -236,  -236,  -236,   236,  -236,   -68,
    -216,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,    66,  -236
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -204
static const yytype_int16 yytable[] =
{
      26,    26,   153,   172,    45,   194,   138,   296,    40,    61,
     215,   171,    75,    40,    40,    40,   162,   160,   175,    79,
     178,   168,   233,   181,   241,   295,   138,    48,    49,    57,
     248,    84,    52,    53,    26,    75,    75,    75,   223,   224,
      75,    64,    79,    79,    79,    57,    56,    79,    62,    82,
     195,   258,    38,   171,    83,    50,    65,   235,   249,   197,
     198,   199,   260,   261,   177,   253,   235,    37,   235,    75,
      85,    57,   236,   250,   262,   238,    79,   194,   338,   339,
     350,   138,    66,   310,    67,   172,     8,     9,    10,    41,
     264,   246,    40,   171,    41,    41,    41,   265,   234,   162,
      55,   163,   164,   174,   235,   175,   172,    42,   163,   349,
      74,   235,   256,   257,   171,   225,   226,   177,   303,   252,
      75,   369,   195,    81,   200,    39,   299,    79,    51,   201,
     155,   202,    41,   300,   169,   336,   347,   293,   157,   170,
     179,    75,   235,   348,   189,   306,    71,   272,    79,   216,
     185,    72,   194,   311,   217,   218,   243,   307,   308,   190,
     316,   317,   318,   151,    90,    91,    92,   315,    93,   229,
      94,    95,   191,   172,   192,   153,   219,   220,   230,   294,
     232,   171,   323,   324,   325,   326,   221,   222,   334,   227,
     228,    96,   319,   320,   327,   328,   171,   321,   322,   231,
     239,    67,   314,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   298,   361,   351,   251,   335,   263,   266,   267,   359,
     360,   -19,   271,   301,   108,   353,   355,   309,   365,   304,
     367,   305,   312,   110,   111,   112,   113,   114,   115,  -203,
     340,   364,   374,   357,   375,   378,   237,   116,   370,   377,
     213,   330,   332,   329,   176,   302,   159,   331,    88,    80,
      89,    90,    91,    92,    73,    93,   358,    94,    95,   333,
     254,    70,     0,     0,     0,   372,     0,     0,     0,   153,
       0,     0,     0,   171,     0,   371,     0,     0,    96,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,     0,    97,    98,    99,     0,   100,   101,
     102,   103,   104,   105,   106,   107,     0,     0,     0,    23,
      24,   108,   243,    66,   109,     0,     0,     0,     0,     0,
     110,   111,   112,   113,   114,   115,     0,     0,    89,    90,
      91,    92,     0,    93,   116,    94,    95,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,     0,    97,    98,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,     0,    67,     0,    23,    24,   108,
       0,    66,   109,     0,     0,     0,     0,     0,   110,   111,
     112,   113,   114,   115,     0,     0,    89,    90,    91,    92,
       0,    93,   116,    94,    95,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,     0,    96,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   161,     0,    20,    21,    22,     0,
      97,    98,    99,     0,   100,   101,   102,   103,   104,   105,
     106,   107,     0,     0,     0,    23,    24,   108,     0,    66,
       0,     0,     0,     0,     0,     0,   110,   111,   112,   113,
     114,   115,     0,     0,   151,    90,    91,    92,     0,    93,
     116,    94,    95,     8,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,     0,    96,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   247,     0,    20,    21,    22,     0,     0,     0,
       0,     0,    89,    90,    91,    92,     0,    93,     0,    94,
      95,     0,     0,    23,    24,   108,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,   112,   113,   114,   115,
      96,     0,     0,     0,     0,     8,     9,    10,   116,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,     0,     0,     0,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,     0,   151,
      90,    91,    92,   108,    93,    66,    94,    95,     0,     0,
       0,     0,   110,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   116,    96,     0,     0,
       0,     0,     0,     0,     8,     9,    10,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,    20,
      21,    22,     0,     0,     0,     0,     0,   151,    90,    91,
      92,     0,    93,     0,    94,    95,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   114,   115,    96,   151,    90,    91,    92,
       0,    93,     0,    94,    95,     0,     0,     0,     0,     0,
       0,   151,    90,    91,    92,     0,    93,     0,    94,    95,
       0,     0,     0,     0,    96,     0,   151,    90,    91,    92,
       0,    93,     0,    94,    95,     0,     0,     0,   108,    96,
     152,   344,   345,     0,     0,     0,     0,   110,   111,   112,
     113,   114,   115,     0,    96,   151,    90,    91,    92,     0,
      93,     0,    94,    95,     0,     0,     0,   108,   336,     0,
       0,     0,   352,   354,     0,     0,   110,   111,   112,   113,
     114,   115,   108,    96,     0,     0,     0,   366,     0,   368,
       0,   110,   111,   112,   113,   114,   115,   180,     0,     0,
       0,     0,     0,     0,   376,     0,   110,   111,   112,   113,
     114,   115,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   112,   113,   114,
     115,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     1,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-236))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     1,    69,    81,    26,   108,    68,   242,     3,    41,
     123,    81,    51,     3,     3,     3,    76,    75,    83,    51,
      88,    79,    19,    93,   148,   241,    88,    27,    28,     3,
     163,    63,    32,    33,    34,    74,    75,    76,    14,    15,
      79,    82,    74,    75,    76,     3,    76,    79,    41,    77,
     108,   184,     3,   123,    82,     3,    97,    82,    82,     9,
      10,    11,   186,   187,    86,   179,    82,     1,    82,   108,
      63,     3,    97,    97,   188,   143,   108,   180,   294,   295,
      96,   143,    76,    97,    78,   163,    38,    39,    40,    84,
     193,   158,     3,   163,    84,    84,    84,    75,    95,   159,
      34,    96,    97,    77,    82,   170,   184,    97,    96,    80,
      76,    82,   182,   183,   184,    91,    92,   139,   251,    77,
     159,   356,   180,    78,    74,    76,    75,   159,    76,    79,
      75,    81,    84,    82,    77,    75,    75,   240,    80,    82,
      96,   180,    82,    82,     3,   259,    74,   214,   180,    84,
      96,    79,   255,   266,    89,    90,   156,   260,   261,    97,
     273,   274,   275,     3,     4,     5,     6,   270,     8,    83,
      10,    11,    97,   251,    97,   242,    85,    86,    93,   241,
      18,   251,   280,   281,   282,   283,    12,    13,   291,    16,
      17,    31,   276,   277,   284,   285,   266,   278,   279,    94,
      74,    78,   269,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   243,   346,   337,    96,   292,    97,    75,     3,   343,
     344,    75,     3,    80,    74,   338,   339,    62,   352,    75,
     354,    96,    75,    83,    84,    85,    86,    87,    88,    77,
      82,    60,   366,    77,   368,    97,   143,    97,   361,   373,
     122,   287,   289,   286,    86,   249,    74,   288,     1,    56,
       3,     4,     5,     6,    47,     8,   342,    10,    11,   290,
     180,    45,    -1,    -1,    -1,   363,    -1,    -1,    -1,   356,
      -1,    -1,    -1,   363,    -1,   362,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,   342,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,     3,     4,
       5,     6,    -1,     8,    97,    10,    11,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    78,    -1,    72,    73,    74,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    97,    10,    11,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    77,    -1,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      97,    10,    11,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    77,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      31,    -1,    -1,    -1,    -1,    38,    39,    40,    97,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,     3,
       4,     5,     6,    74,     8,    76,    10,    11,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    31,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    31,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    74,    31,
      76,   307,   308,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    31,     3,     4,     5,     6,    -1,
       8,    -1,    10,    11,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,   338,   339,    -1,    -1,    83,    84,    85,    86,
      87,    88,    74,    31,    -1,    -1,    -1,   353,    -1,   355,
      -1,    83,    84,    85,    86,    87,    88,    74,    -1,    -1,
      -1,    -1,    -1,    -1,   370,    -1,    83,    84,    85,    86,
      87,    88,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      53,    54,    55,    72,    73,   155,   157,   161,   162,   163,
     164,   170,   173,   174,   210,   211,   212,   211,     3,    76,
       3,    84,    97,   158,   160,   175,   176,   179,   157,   157,
       3,    76,   157,   157,     0,   211,    76,     3,   106,   171,
     172,   173,   179,   180,    82,    97,    76,    78,   101,   103,
     195,    74,    79,   176,    76,   162,   165,   166,   167,   173,
     171,    78,    77,    82,   173,   179,   159,   156,     1,     3,
       4,     5,     6,     8,    10,    11,    31,    57,    58,    59,
      61,    62,    63,    64,    65,    66,    67,    68,    74,    77,
      83,    84,    85,    86,    87,    88,    97,   102,   104,   105,
     107,   108,   114,   117,   118,   119,   123,   126,   129,   134,
     137,   139,   141,   143,   145,   147,   150,   152,   155,   157,
     190,   191,   195,   196,   197,   198,   199,   200,   203,   204,
     208,     3,    76,   150,   185,    75,   178,    80,   177,   165,
     167,    77,   166,    96,    97,   168,   169,   175,   167,    77,
      82,   114,   147,   154,    77,   172,   160,   175,   197,    96,
      74,   114,   115,   116,   192,    96,   202,   205,   206,     3,
      97,    97,    97,   209,   152,   167,   184,     9,    10,    11,
      74,    79,    81,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   103,   151,   118,    84,    89,    90,    85,
      86,    12,    13,    14,    15,    91,    92,    16,    17,    83,
      93,    94,    18,    19,    95,    82,    97,   102,   197,    74,
      99,    99,   186,   157,   181,   183,   150,    77,   154,    82,
      97,    96,    77,   190,   184,    74,   114,   114,   154,   194,
      99,    99,   190,    97,   152,    75,    75,     3,   110,   111,
     109,     3,   150,   120,   121,   122,   124,   125,   127,   128,
     132,   133,   130,   131,   135,   136,   138,   140,   142,   144,
     146,   148,   153,   152,   155,   198,   185,   188,   175,    75,
      82,    80,   169,   154,    75,    96,   190,   152,   152,    62,
      97,   118,    75,   112,   150,   152,   118,   118,   118,   119,
     119,   123,   123,   126,   126,   126,   126,   129,   129,   134,
     137,   139,   141,   143,   152,   150,    75,   100,   198,   198,
      82,   187,   182,   193,   100,   100,   207,    75,    82,    80,
      96,   190,   100,   152,   100,   152,   189,    77,   183,   190,
     190,    99,   113,   149,    60,   190,   100,   190,   100,   185,
     152,   150,   147,   201,   190,   190,   100,   190,    97
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 74 "c-grammar.y"
    { PRINT("("); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 78 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 82 "c-grammar.y"
    { PRINT("{"); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 86 "c-grammar.y"
    { PRINT("}"); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 90 "c-grammar.y"
    { PRINT("="); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 95 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	            if (yychar != '('){ /* not a function call */
		        check_var_declared((yyvsp[(1) - (1)].attribute).value);
		        (yyval.attribute).type = get_var_type((yyvsp[(1) - (1)].attribute).value);
		        PRINT("$");         
	            }
	            else { /* function call */
		        check_function_declared((yyvsp[(1) - (1)].attribute).value);
		        (yyval.attribute).value = strdup((yyvsp[(1) - (1)].attribute).value);		
		        (yyval.attribute).type = get_function_type((yyvsp[(1) - (1)].attribute).value);
	            }
                    PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); 
	          }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 110 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 113 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 116 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (3)].attribute).type; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 121 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); /* includes character_constant */	
		(yyval.attribute).type = INTEGER; }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 125 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value);
	          (yyval.attribute).type = REAL; }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 129 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 138 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value);
	          (yyval.attribute).type = CHARACTER; }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 144 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 147 "c-grammar.y"
    { PRINT("["); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 149 "c-grammar.y"
    { PRINT("]"); 
	          if (IS_ARRAY((yyvsp[(1) - (5)].attribute).type)) ARRAY_BASIC_TYPE((yyvsp[(1) - (5)].attribute).type);
		  if ((yyvsp[(4) - (5)].attribute).type == INTEGER) (yyval.attribute).type=(yyvsp[(1) - (5)].attribute).type;
	          else (yyval.attribute).type = ERROR_TIPO; 
	        }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 156 "c-grammar.y"
    { PRINT("("); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 158 "c-grammar.y"
    { PRINT(")");
	          (yyvsp[(1) - (4)].attribute).buffer = init_buffer();
	          function_type_check((yyvsp[(1) - (4)].attribute).value, get_buffer_content((yyvsp[(1) - (4)].attribute).buffer));
              free((yyvsp[(1) - (4)].attribute).value);
              free_buffer((yyvsp[(1) - (4)].attribute).buffer); 
            }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 166 "c-grammar.y"
    { PRINT("("); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 168 "c-grammar.y"
    { PRINT(")");
              function_type_check((yyvsp[(1) - (5)].attribute).value, get_buffer_content((yyvsp[(4) - (5)].attribute).buffer));
              free((yyvsp[(1) - (5)].attribute).value);
              free_buffer((yyvsp[(4) - (5)].attribute).buffer); 
            }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 176 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 177 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 182 "c-grammar.y"
    { (yyval.attribute).buffer = init_buffer(); buffer_add(&((yyval.attribute).buffer), (yyvsp[(1) - (1)].attribute).type); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 184 "c-grammar.y"
    { PRINT(","); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 185 "c-grammar.y"
    { (yyval.attribute).buffer = (yyvsp[(1) - (4)].attribute).buffer; buffer_add(&((yyval.attribute).buffer), (yyvsp[(4) - (4)].attribute).type); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 190 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 193 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 195 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(3) - (3)].attribute).type; }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 198 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 200 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(3) - (3)].attribute).type; }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 203 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (2)].attribute).type; }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 210 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 211 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 212 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 213 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 214 "c-grammar.y"
    { PRINT("~"); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 215 "c-grammar.y"
    { PRINT("!"); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 219 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 220 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (4)].attribute).type; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 225 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 228 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 230 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, ARITHMETIC); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 233 "c-grammar.y"
    { PRINT("/"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 236 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, ARITHMETIC); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 238 "c-grammar.y"
    { PRINT("%"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 239 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, ARITHMETIC); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 243 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 245 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 246 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, ARITHMETIC); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 248 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 249 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, ARITHMETIC); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 253 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 255 "c-grammar.y"
    { PRINT("<<"); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 258 "c-grammar.y"
    { PRINT(">>"); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 263 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 265 "c-grammar.y"
    { PRINT("<"); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 268 "c-grammar.y"
    { PRINT(">"); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 271 "c-grammar.y"
    { PRINT("<="); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 274 "c-grammar.y"
    { PRINT(">="); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 279 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 281 "c-grammar.y"
    { PRINT("=="); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 284 "c-grammar.y"
    { PRINT("!="); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 289 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 291 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 296 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 298 "c-grammar.y"
    { PRINT("^"); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 302 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 304 "c-grammar.y"
    { PRINT("|"); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 309 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 311 "c-grammar.y"
    { PRINT("&&"); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 316 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 318 "c-grammar.y"
    { PRINT("||"); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 323 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 325 "c-grammar.y"
    { PRINT("?"); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 326 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 332 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 335 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (3)].attribute).type, (yyvsp[(3) - (3)].attribute).type, ASSIGNMENT); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 340 "c-grammar.y"
    { PRINT("*="); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 341 "c-grammar.y"
    { PRINT("/="); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 342 "c-grammar.y"
    { PRINT("%="); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 343 "c-grammar.y"
    { PRINT("+="); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 344 "c-grammar.y"
    { PRINT("-="); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 345 "c-grammar.y"
    { PRINT("<<="); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 346 "c-grammar.y"
    { PRINT(">>="); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 347 "c-grammar.y"
    { PRINT("&="); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 348 "c-grammar.y"
    { PRINT("^="); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 349 "c-grammar.y"
    { PRINT("|="); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 353 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 355 "c-grammar.y"
    { PRINT(","); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 356 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, EXPRESSION); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 365 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 368 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 368 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (4)].attribute).type; }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 383 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 385 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 386 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, EXPRESSION); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 391 "c-grammar.y"
    {   if (IS_ARRAY((yyvsp[(1) - (3)].attribute).type)) ARRAY_BASIC_TYPE((yyvsp[(1) - (3)].attribute).type);
			(yyval.attribute).type = type_check((yyvsp[(1) - (3)].attribute).type, (yyvsp[(3) - (3)].attribute).type, ASSIGNMENT); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 395 "c-grammar.y"
    {(yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type;}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 408 "c-grammar.y"
    { global_type_specifier = VOID;         (yyval.attribute).type = VOID; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 409 "c-grammar.y"
    { global_type_specifier = CHARACTER;    (yyval.attribute).type = CHARACTER; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 410 "c-grammar.y"
    { global_type_specifier = INTEGER;      (yyval.attribute).type = INTEGER; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 411 "c-grammar.y"
    { global_type_specifier = INTEGER;      (yyval.attribute).type = INTEGER; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 412 "c-grammar.y"
    { global_type_specifier = INTEGER;      (yyval.attribute).type = INTEGER; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 413 "c-grammar.y"
    { global_type_specifier = REAL;         (yyval.attribute).type = REAL; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 414 "c-grammar.y"
    { global_type_specifier = REAL;         (yyval.attribute).type = REAL; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 428 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 429 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 444 "c-grammar.y"
    { if ((yyvsp[(1) - (2)].attribute).type==(yyvsp[(2) - (2)].attribute).type ) (yyval.attribute).type = (yyvsp[(1) - (2)].attribute).type;
                  else  (yyval.attribute).type = ERROR_TIPO; 
                }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 449 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 452 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 455 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 470 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 471 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 472 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 473 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 474 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 499 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (2)].attribute).type; }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 500 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 505 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
                  if (yychar == '('){
                    if (!check_function_redefinition((yyvsp[(1) - (1)].attribute).value)) /* si no esta redefinida, insertar en symbol table */
                        last_inserted_function = table_insert((yyvsp[(1) - (1)].attribute).value, global_type_specifier, functions_symbol_table);
                    else
                        last_inserted_function.name = NULL;
                    PRINT("function "); /* function */
                    begin_local_scope();
                    (yyval.attribute).type = get_function_type((yyvsp[(1) - (1)].attribute).value); 
                  }
                  else {
                    if (!check_var_redefinition((yyvsp[(1) - (1)].attribute).value)) /* si no esta en symbol table, insertar  */
                        table_insert((yyvsp[(1) - (1)].attribute).value, TYPE(global_type_specifier), current_scope_symbol_table);
                    PRINT("$"); /* var */
                    (yyval.attribute).type = get_var_type((yyvsp[(1) - (1)].attribute).value);
                  }
                  //printf("ID: %s, TYPE: %d\n", $1.value, global_type_specifier);                       
                  PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); 
                }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 527 "c-grammar.y"
    { print_enabled = FALSE; }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 528 "c-grammar.y"
    { print_enabled = TRUE; }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 530 "c-grammar.y"
    { PRINT("("); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 531 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 533 "c-grammar.y"
    { PRINT("()"); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 550 "c-grammar.y"
    { PRINT(","); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 556 "c-grammar.y"
    { if (last_inserted_function.name != NULL) 
	          buffer_add(&last_inserted_function.formal_params, global_type_specifier); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 560 "c-grammar.y"
    { if (last_inserted_function.name != NULL) 
	          buffer_add(&last_inserted_function.formal_params, global_type_specifier); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 565 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 569 "c-grammar.y"
    { PRINT("array("); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 570 "c-grammar.y"
    { PRINT(")");
	                                          (yyval.attribute).type = (yyvsp[(3) - (5)].attribute).type; 
	                                        }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 574 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 579 "c-grammar.y"
    { PRINT(","); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 583 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 585 "c-grammar.y"
    { PRINT(","); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 586 "c-grammar.y"
    { (yyval.attribute).type = type_check((yyvsp[(1) - (4)].attribute).type, (yyvsp[(4) - (4)].attribute).type, INITIALIZER); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 590 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 591 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 592 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 593 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 594 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 595 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 602 "c-grammar.y"
    { PRINT("case"); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 604 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 608 "c-grammar.y"
    { PRINT("default:"); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 620 "c-grammar.y"
    {yyerrok;}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 625 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type;
	            if ((yyval.attribute).type==ERROR_TIPO){ 
		        error_type = TIPO;
		        yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 	  	
	            }
	          }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 633 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; 
	            if ((yyval.attribute).type==ERROR_TIPO){ 
		        error_type = TIPO;		
		        yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
	            }
	          }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 642 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 643 "c-grammar.y"
    { PRINT(";"); (yyval.attribute).type = (yyvsp[(1) - (2)].attribute).type; }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 647 "c-grammar.y"
    { PRINT("if"); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 652 "c-grammar.y"
    { PRINT("else"); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 658 "c-grammar.y"
    { PRINT("switch"); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 663 "c-grammar.y"
    { PRINT("for"); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 668 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 672 "c-grammar.y"
    { PRINT("do"); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 674 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 676 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 686 "c-grammar.y"
    { PRINT("continue;"); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 687 "c-grammar.y"
    { PRINT("break;"); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 688 "c-grammar.y"
    { PRINT("return;"); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 689 "c-grammar.y"
    { PRINT("return "); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 690 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 696 "c-grammar.y"
    { yyerrok; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 702 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; 
                        if ((yyval.attribute).type == ERROR_TIPO){ 
                                error_type = TIPO;		
                                yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
                        }
                }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 711 "c-grammar.y"
    { end_local_scope(); }
    break;



/* Line 1806 of yacc.c  */
#line 3308 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 714 "c-grammar.y"


void begin_local_scope(){
    /* scope = LOCAL;    */
    current_scope_symbol_table = create_table(); /* crear symbol table */     
}

void end_local_scope(){
    /* scope = GLOBAL;  */
    free_table(current_scope_symbol_table); /* liberar memoria */    
    current_scope_symbol_table = global_symbol_table; /* current scope = GLOBAL */     
}

int check_function_redefinition(char *name){
    if (lookup_string(name, functions_symbol_table)) {
	error_string = name;
	error_type = AMBITO;
	yyerror("intento de redefinir función");
	return 1;
    }
    return 0;
}

int check_var_redefinition(char *name){
    if (lookup_string(name, current_scope_symbol_table)) {
	error_string = name;
	error_type = AMBITO;
 	yyerror("intento de redefinir variable");
 	return 1;
    }
    return 0;
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

int main(int argc, char *argv[]){
    
    if (argc != 2) pFile = fopen (FILENAME , "w");
    else pFile = fopen (argv[1] , "w");
    
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
            puts( "El archivo contiene errores. No se generará traducción" );		
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


