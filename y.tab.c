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

	void yyerror (const char *);	
	void begin_local_scope();
	void end_local_scope();
	void check_function_redefinition(char *name);
	void check_function_declared(char *name);
	int check_var_declared(char *name);
	void check_var_redefinition(char *name);
	int get_type(char *name);
  	
    int print_enabled = TRUE;
  	short int errors = 0;	
	short int error_type = SINTAXIS;	
	extern yylineno;
	char *yytext;
	char *param_name = NULL;



/* Line 268 of yacc.c  */
#line 96 "y.tab.c"

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
#line 25 "c-grammar.y"

   attributes attribute;



/* Line 293 of yacc.c  */
#line 284 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 57 "c-grammar.y"

    /* typedef enum { LOCAL, GLOBAL } scope_type; */
    /* scope_type scope;                          */
  	int global_type_specifier = INTEGER;
  	hash_table_type global_symbol_table, current_scope_symbol_table, functions_symbol_table;
  	buffer parameter_list_buffer;
  	entry_data last_inserted_function;


/* Line 343 of yacc.c  */
#line 306 "y.tab.c"

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNRULES -- Number of states.  */
#define YYNSTATES  392

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
      91,    80,    92,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,    94,    79,    87,     2,     2,     2,
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
      19,    23,    24,    27,    28,    31,    33,    35,    36,    39,
      41,    42,    43,    50,    51,    56,    57,    63,    67,    71,
      74,    77,    79,    80,    85,    87,    88,    92,    93,    97,
     100,   103,   108,   110,   112,   114,   116,   118,   120,   122,
     127,   129,   130,   135,   136,   141,   142,   147,   149,   150,
     155,   156,   161,   163,   164,   169,   170,   175,   177,   178,
     183,   184,   189,   190,   195,   196,   201,   203,   204,   209,
     210,   215,   217,   218,   223,   225,   226,   231,   233,   234,
     239,   241,   242,   247,   249,   250,   255,   257,   258,   259,
     267,   269,   273,   275,   277,   279,   281,   283,   285,   287,
     289,   291,   293,   295,   297,   298,   303,   305,   308,   309,
     314,   317,   319,   322,   324,   327,   329,   332,   334,   336,
     337,   342,   346,   348,   350,   352,   354,   356,   358,   360,
     361,   364,   365,   368,   369,   372,   373,   376,   377,   380,
     381,   384,   385,   388,   390,   392,   394,   396,   401,   407,
     410,   412,   414,   416,   419,   422,   426,   429,   431,   434,
     436,   438,   442,   445,   449,   451,   456,   462,   468,   475,
     478,   480,   484,   488,   490,   492,   494,   496,   498,   500,
     503,   505,   507,   511,   512,   518,   519,   525,   529,   533,
     536,   539,   541,   543,   546,   548,   549,   554,   557,   559,
     561,   562,   563,   570,   572,   573,   575,   577,   578,   583,
     585,   587,   589,   591,   593,   595,   599,   600,   601,   608,
     609,   614,   617,   621,   623,   626,   629,   631,   633,   635,
     636,   640,   642,   643,   652,   658,   659,   666,   668,   669,
     675,   676,   677,   687,   694,   702,   709,   717,   721,   724,
     727,   730,   731,   736,   738,   741,   744,   746,   748
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     223,     0,    -1,    74,    -1,    75,    -1,    78,    -1,    79,
      -1,    80,    -1,     3,    -1,   105,    -1,   109,    -1,    74,
     156,    75,    -1,    -1,     4,   106,    -1,    -1,     5,   107,
      -1,    31,    -1,     3,    -1,    -1,     6,   110,    -1,   104,
      -1,    -1,    -1,   111,    76,   112,   156,    77,   113,    -1,
      -1,   111,    74,   114,    75,    -1,    -1,   111,    74,   115,
     116,    75,    -1,   111,    81,     3,    -1,   111,     9,     3,
      -1,   111,    10,    -1,   111,    11,    -1,   154,    -1,    -1,
     116,    82,   117,   154,    -1,   111,    -1,    -1,    10,   119,
     118,    -1,    -1,    11,   120,   118,    -1,   121,   122,    -1,
       8,   118,    -1,     8,    74,   195,    75,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
     118,    -1,    74,   195,    75,   122,    -1,   122,    -1,    -1,
     123,    84,   124,   122,    -1,    -1,   123,    89,   125,   122,
      -1,    -1,   123,    90,   126,   122,    -1,   123,    -1,    -1,
     127,    85,   128,   123,    -1,    -1,   127,    86,   129,   123,
      -1,   127,    -1,    -1,   130,    12,   131,   127,    -1,    -1,
     130,    13,   132,   127,    -1,   130,    -1,    -1,   133,    91,
     134,   130,    -1,    -1,   133,    92,   135,   130,    -1,    -1,
     133,    14,   136,   130,    -1,    -1,   133,    15,   137,   130,
      -1,   133,    -1,    -1,   138,    16,   139,   133,    -1,    -1,
     138,    17,   140,   133,    -1,   138,    -1,    -1,   141,    83,
     142,   138,    -1,   141,    -1,    -1,   143,    93,   144,   141,
      -1,   143,    -1,    -1,   145,    94,   146,   143,    -1,   145,
      -1,    -1,   147,    18,   148,   145,    -1,   147,    -1,    -1,
     149,    19,   150,   147,    -1,   149,    -1,    -1,    -1,   149,
      95,   152,   156,    96,   153,   151,    -1,   151,    -1,   118,
     155,   154,    -1,   103,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,   154,    -1,    -1,   156,    82,
     157,   154,    -1,   151,    -1,   161,    97,    -1,    -1,   161,
     162,    97,   160,    -1,   165,   161,    -1,   165,    -1,   166,
     161,    -1,   166,    -1,   184,   161,    -1,   184,    -1,   185,
     161,    -1,   185,    -1,   164,    -1,    -1,   162,    82,   163,
     164,    -1,   186,   103,   196,    -1,   186,    -1,    32,    -1,
      33,    -1,    34,    -1,    73,    -1,    35,    -1,    36,    -1,
      -1,    50,   167,    -1,    -1,    42,   168,    -1,    -1,    43,
     169,    -1,    -1,    44,   170,    -1,    -1,    45,   171,    -1,
      -1,    48,   172,    -1,    -1,    49,   173,    -1,    46,    -1,
      47,    -1,   174,    -1,   181,    -1,   175,    78,   176,    79,
      -1,   175,     3,    78,   176,    79,    -1,   175,     3,    -1,
      53,    -1,    54,    -1,   177,    -1,   176,   177,    -1,   178,
      97,    -1,   178,   179,    97,    -1,   166,   178,    -1,   166,
      -1,   184,   178,    -1,   184,    -1,   180,    -1,   179,    82,
     180,    -1,    96,   158,    -1,   186,    96,   158,    -1,   186,
      -1,    55,    78,   182,    79,    -1,    55,    78,   182,    82,
      79,    -1,    55,     3,    78,   182,    79,    -1,    55,     3,
      78,   182,    82,    79,    -1,    55,     3,    -1,   183,    -1,
     182,    82,   183,    -1,   108,    80,   158,    -1,   108,    -1,
      38,    -1,    39,    -1,    40,    -1,    37,    -1,    72,    -1,
     190,   187,    -1,   187,    -1,     3,    -1,   187,    76,    77,
      -1,    -1,   187,    76,   188,   154,    77,    -1,    -1,   187,
      74,   189,   192,    75,    -1,   187,    74,    75,    -1,    84,
     191,   190,    -1,    84,   191,    -1,    84,   190,    -1,    84,
      -1,   184,    -1,   191,   184,    -1,   194,    -1,    -1,   192,
      82,   193,   194,    -1,   161,   186,    -1,   161,    -1,   178,
      -1,    -1,    -1,    78,   197,   200,   199,    79,   198,    -1,
     154,    -1,    -1,    82,    -1,   196,    -1,    -1,   200,    82,
     201,   196,    -1,   203,    -1,   207,    -1,   210,    -1,   213,
      -1,   217,    -1,   221,    -1,     3,    96,   202,    -1,    -1,
      -1,    57,   204,   158,    96,   205,   202,    -1,    -1,    58,
      96,   206,   202,    -1,   101,   102,    -1,   101,   208,   102,
      -1,   209,    -1,   208,   209,    -1,     1,   209,    -1,   159,
      -1,   202,    -1,    97,    -1,    -1,   156,    97,   211,    -1,
      59,    -1,    -1,   212,    99,   156,   100,   202,    60,   214,
     202,    -1,   212,    99,   156,   100,   202,    -1,    -1,    61,
     215,    99,   156,   100,   202,    -1,    64,    -1,    -1,    62,
     218,    99,   156,   100,    -1,    -1,    -1,    63,   219,   202,
      62,   220,    99,   156,   100,    97,    -1,   216,    99,   210,
     210,   100,   202,    -1,   216,    99,   210,   210,   156,   100,
     202,    -1,   216,    99,   159,   210,   100,   202,    -1,   216,
      99,   159,   210,   156,   100,   202,    -1,    65,     3,    97,
      -1,    66,    97,    -1,    67,    97,    -1,    68,    97,    -1,
      -1,    68,   222,   156,    97,    -1,   224,    -1,   223,   224,
      -1,     1,   224,    -1,   225,    -1,   159,    -1,   161,   186,
     207,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    73,    85,    89,    93,    97,   108,   109,
     110,   114,   114,   116,   116,   118,   122,   126,   126,   131,
     132,   132,   132,   138,   138,   139,   139,   140,   141,   142,
     143,   147,   148,   148,   152,   153,   153,   154,   154,   155,
     156,   157,   161,   162,   163,   164,   165,   166,   170,   171,
     175,   176,   176,   182,   182,   188,   188,   197,   198,   198,
     204,   204,   213,   214,   214,   215,   215,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   227,   228,   228,   229,
     229,   233,   234,   234,   238,   239,   239,   243,   244,   244,
     248,   249,   249,   253,   254,   254,   258,   259,   259,   259,
     263,   264,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   287,   288,   288,   296,   300,   301,   301,
     305,   306,   307,   308,   309,   310,   311,   312,   316,   317,
     317,   326,   332,   336,   337,   338,   339,   340,   341,   345,
     345,   346,   346,   347,   347,   348,   348,   349,   349,   350,
     350,   351,   351,   352,   353,   354,   355,   359,   360,   361,
     365,   366,   370,   371,   375,   376,   380,   386,   387,   388,
     392,   393,   397,   398,   399,   403,   404,   405,   406,   407,
     411,   412,   416,   417,   421,   422,   423,   427,   428,   432,
     433,   437,   453,   454,   454,   456,   455,   461,   465,   466,
     467,   468,   472,   473,   477,   478,   478,   482,   483,   487,
     491,   491,   491,   493,   496,   498,   502,   503,   503,   512,
     513,   514,   515,   516,   517,   521,   522,   522,   522,   523,
     523,   527,   528,   532,   533,   534,   538,   545,   555,   556,
     556,   560,   564,   564,   565,   566,   566,   570,   574,   574,
     575,   575,   575,   577,   578,   579,   580,   584,   585,   586,
     587,   588,   588,   592,   593,   594,   598,   599,   609
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
  "ATOMIC", "NORETURN", "THREAD_LOCAL", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "'='", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "left_parenthesis", "right_parenthesis", "left_curly", "right_curly",
  "assign_op", "primary_expression", "constant", "$@1", "$@2",
  "enumeration_constant", "string", "$@3", "postfix_expression", "$@4",
  "$@5", "$@6", "$@7", "argument_expression_list", "$@8",
  "unary_expression", "$@9", "$@10", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@11", "$@12", "$@13",
  "additive_expression", "$@14", "$@15", "shift_expression", "$@16",
  "$@17", "relational_expression", "$@18", "$@19", "$@20", "$@21",
  "equality_expression", "$@22", "$@23", "and_expression", "$@24",
  "exclusive_or_expression", "$@25", "inclusive_or_expression", "$@26",
  "logical_and_expression", "$@27", "logical_or_expression", "$@28",
  "conditional_expression", "$@29", "$@30", "assignment_expression",
  "assignment_operator", "expression", "$@31", "constant_expression",
  "declaration", "$@32", "declaration_specifiers", "init_declarator_list",
  "$@33", "init_declarator", "storage_class_specifier", "type_specifier",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "$@41", "$@42", "pointer", "type_qualifier_list",
  "parameter_list", "$@43", "parameter_declaration", "type_name",
  "initializer", "$@44", "$@45", "maybe_comma", "initializer_list", "$@46",
  "statement", "labeled_statement", "$@47", "$@48", "$@49",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "$@50", "if", "selection_statement", "$@51",
  "$@52", "for", "iteration_statement", "$@53", "$@54", "$@55",
  "jump_statement", "$@56", "translation_unit", "external_declaration",
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
     325,   326,   327,   328,    40,    41,    91,    93,   123,   125,
      61,    46,    44,    38,    42,    43,    45,   126,    33,    47,
      37,    60,    62,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,   100,   101,   102,   103,   104,   104,   104,
     104,   106,   105,   107,   105,   105,   108,   110,   109,   111,
     112,   113,   111,   114,   111,   115,   111,   111,   111,   111,
     111,   116,   117,   116,   118,   119,   118,   120,   118,   118,
     118,   118,   121,   121,   121,   121,   121,   121,   122,   122,
     123,   124,   123,   125,   123,   126,   123,   127,   128,   127,
     129,   127,   130,   131,   130,   132,   130,   133,   134,   133,
     135,   133,   136,   133,   137,   133,   138,   139,   138,   140,
     138,   141,   142,   141,   143,   144,   143,   145,   146,   145,
     147,   148,   147,   149,   150,   149,   151,   152,   153,   151,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   157,   156,   158,   159,   160,   159,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   163,
     162,   164,   164,   165,   165,   165,   165,   165,   165,   167,
     166,   168,   166,   169,   166,   170,   166,   171,   166,   172,
     166,   173,   166,   166,   166,   166,   166,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   178,   178,
     179,   179,   180,   180,   180,   181,   181,   181,   181,   181,
     182,   182,   183,   183,   184,   184,   184,   185,   185,   186,
     186,   187,   187,   188,   187,   189,   187,   187,   190,   190,
     190,   190,   191,   191,   192,   193,   192,   194,   194,   195,
     197,   198,   196,   196,   199,   199,   200,   201,   200,   202,
     202,   202,   202,   202,   202,   203,   204,   205,   203,   206,
     203,   207,   207,   208,   208,   208,   209,   209,   210,   211,
     210,   212,   214,   213,   213,   215,   213,   216,   218,   217,
     219,   220,   217,   217,   217,   217,   217,   221,   221,   221,
     221,   222,   221,   223,   223,   223,   224,   224,   225
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     2,     0,     2,     1,     1,     0,     2,     1,
       0,     0,     6,     0,     4,     0,     5,     3,     3,     2,
       2,     1,     0,     4,     1,     0,     3,     0,     3,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     0,     7,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     0,     4,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     0,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     2,     3,     2,     1,     2,     1,
       1,     3,     2,     3,     1,     4,     5,     5,     6,     2,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     0,     5,     0,     5,     3,     3,     2,
       2,     1,     1,     2,     1,     0,     4,     2,     1,     1,
       0,     0,     6,     1,     0,     1,     1,     0,     4,     1,
       1,     1,     1,     1,     1,     3,     0,     0,     6,     0,
       4,     2,     3,     1,     2,     2,     1,     1,     1,     0,
       3,     1,     0,     8,     5,     0,     6,     1,     0,     5,
       0,     0,     9,     6,     7,     6,     7,     3,     2,     2,
       2,     0,     4,     1,     2,     2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   133,   134,   135,   137,   138,   187,   184,   185,
     186,   141,   143,   145,   147,   153,   154,   149,   151,   139,
     160,   161,     0,   188,   136,   267,     0,   121,   123,   155,
       0,   156,   125,   127,     0,   263,   266,   265,   142,   144,
     146,   148,   150,   152,   140,   179,     0,   191,   201,   117,
       0,   128,   132,   190,     0,   120,   122,   159,     0,   124,
     126,     1,   264,     0,    16,   183,     0,   180,   202,   200,
     199,   129,   118,     4,     6,     0,     0,   268,   195,   193,
     189,     0,   167,     0,   162,     0,   169,     0,     0,   175,
       0,   203,   198,     0,   119,     0,     7,    11,    13,    17,
       0,    35,    37,    15,   226,     0,   241,   245,   248,   250,
     247,     0,     0,     0,   261,     0,     5,    42,    43,    44,
      45,    46,    47,   238,   231,    19,     8,     9,    34,    48,
       0,    50,    57,    62,    67,    76,    81,    84,    87,    90,
      93,    96,   100,   113,     0,   236,     0,   237,   219,   220,
       0,   233,   221,     0,   222,     0,   223,   224,     7,   210,
     213,   131,   197,     0,   192,     0,     0,   166,   157,   163,
       0,   164,     0,   170,   174,   168,   177,     0,    48,   116,
     182,   176,   181,   130,   132,   235,     0,    12,    14,    18,
       0,    40,     0,     0,     0,   229,     0,     0,     0,     0,
     258,   259,   260,     0,     0,   209,     0,     0,    29,    30,
      25,    20,     0,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   102,     0,    39,    51,    53,    55,    58,
      60,    63,    65,    72,    74,    68,    70,    77,    79,    82,
      85,    88,    91,    94,    97,   114,   239,   232,   234,     2,
       0,     0,     0,   208,     0,   204,     0,   158,   172,     0,
     165,     0,   178,   225,     0,     0,    36,    38,     0,     0,
       0,     0,     0,   257,     0,    10,     0,    28,     0,     0,
       0,    27,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,     0,     0,     0,   216,   214,   207,
     196,   205,   194,   171,   173,    41,   227,   230,     0,     0,
     251,   262,    49,    24,     0,    31,     0,    52,    54,    56,
      59,    61,    64,    66,    73,    75,    69,    71,    78,    80,
      83,    86,    89,    92,    95,     0,   115,     3,     0,     0,
       0,   217,     0,     0,     0,     0,   249,     0,    26,    32,
      21,    98,   244,     0,     0,     0,     0,     0,   211,   206,
     228,   246,     0,     0,    22,     0,   242,   255,     0,   253,
       0,   218,   212,     0,    33,    99,     0,   256,   254,     0,
     243,   252
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   250,   348,    75,   124,    76,   125,   126,   187,   188,
      65,   127,   189,   128,   280,   374,   278,   279,   324,   373,
     129,   192,   193,   130,   131,   132,   283,   284,   285,   133,
     286,   287,   134,   288,   289,   135,   292,   293,   290,   291,
     136,   294,   295,   137,   296,   138,   297,   139,   298,   140,
     299,   141,   300,   142,   301,   375,   143,   224,   144,   302,
     180,    25,    94,   146,    50,    93,    51,    27,    28,    44,
      38,    39,    40,    41,    42,    43,    29,    30,    83,    84,
      85,   172,   173,    31,    66,    67,    32,    33,   174,    53,
     165,   163,    54,    70,   254,   353,   255,   206,   161,   252,
     382,   352,   308,   367,   147,   148,   194,   354,   269,   149,
     150,   151,   152,   303,   153,   154,   386,   196,   155,   156,
     197,   198,   357,   157,   203,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -246
static const yytype_int16 yypact[] =
{
     947,   989,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,    42,  -246,  -246,  -246,    11,   989,   989,  -246,
      45,  -246,   989,   989,   897,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,   -48,    75,  -246,    35,  -246,
     -36,  -246,     4,   -17,    83,  -246,  -246,    18,   421,  -246,
    -246,  -246,  -246,    75,  -246,    27,    61,  -246,  -246,  -246,
      35,  -246,  -246,  -246,  -246,   271,   749,  -246,    39,    13,
     -17,   421,   421,  1010,  -246,     5,   421,    67,   793,  -246,
      21,  -246,  -246,    15,  -246,   447,    30,  -246,  -246,  -246,
     808,  -246,  -246,  -246,  -246,    40,  -246,  -246,  -246,  -246,
    -246,   141,    71,    80,    84,   691,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,    57,   354,
     793,  -246,    63,    70,   149,    37,   158,    74,    90,    93,
     146,    10,  -246,  -246,   -28,  -246,    11,  -246,  -246,  -246,
     359,  -246,  -246,   117,  -246,   117,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,   989,  -246,   793,  1028,  -246,  -246,  -246,
     793,  -246,   -26,  -246,    96,  -246,  -246,    32,  -246,  -246,
    -246,  -246,  -246,  -246,   113,  -246,   593,  -246,  -246,  -246,
     691,  -246,   837,   837,   793,  -246,   117,   117,   593,    97,
    -246,  -246,  -246,   793,    12,  -246,   120,   193,  -246,  -246,
     122,  -246,   195,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,   793,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     793,   535,   749,    15,    55,  -246,   123,  -246,  -246,    14,
    -246,   793,  -246,  -246,   126,   793,  -246,  -246,   106,   593,
     793,   793,   142,  -246,     6,  -246,   793,  -246,   128,   793,
     793,  -246,  -246,   793,   793,   793,   793,   793,   793,   793,
     793,   793,   793,   793,   793,   793,   793,   793,   793,   793,
     793,   793,   793,  -246,    59,   631,   631,  -246,   143,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,    59,    59,
    -246,  -246,  -246,  -246,    60,  -246,   -22,  -246,  -246,  -246,
      63,    63,    70,    70,   149,   149,   149,   149,    37,    37,
     158,    74,    90,    93,   146,    36,  -246,  -246,   593,   778,
     778,   147,   150,   989,   593,   593,  -246,   117,  -246,  -246,
    -246,  -246,   170,   593,    59,   593,    59,   749,  -246,  -246,
    -246,  -246,   793,   793,  -246,   793,  -246,  -246,   593,  -246,
     593,  -246,  -246,    59,  -246,  -246,   593,  -246,  -246,   134,
    -246,  -246
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -133,   325,  -246,    85,   107,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
     -77,  -246,  -246,  -246,  -118,  -107,  -246,  -246,  -246,  -103,
    -246,  -246,  -120,  -246,  -246,  -106,  -246,  -246,  -246,  -246,
     -59,  -246,  -246,   -57,  -246,   -55,  -246,   -58,  -246,   -54,
    -246,  -246,  -246,   -85,  -246,  -246,   -74,  -246,  -111,  -246,
    -155,   -69,  -246,     0,  -246,  -246,   152,  -246,   -45,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   166,   -62,
     -66,  -246,   -11,  -246,   186,   -80,   -39,  -246,   -21,   196,
    -246,  -246,    -8,  -246,  -246,  -246,  -102,    62,  -245,  -246,
    -246,  -246,  -246,  -246,  -121,  -246,  -246,  -246,  -246,   201,
    -246,   -70,  -193,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,    49,  -246
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -216
static const yytype_int16 yytable[] =
{
      26,    26,   160,   179,   204,    52,   145,   307,    47,    68,
     182,   178,   225,    82,    47,   258,   167,    47,    47,    86,
     175,   169,   251,   191,    64,   185,   145,    55,    56,   243,
      63,    91,    59,    60,    26,    64,    82,    82,    82,   268,
      69,    82,    86,    86,    86,    45,    71,    86,    57,   205,
      37,   233,   234,   178,   245,   360,   259,    78,   306,    79,
     245,    72,    92,   270,   271,   263,   207,   208,   209,   246,
      82,   260,   184,     8,     9,    10,    86,   272,    64,   204,
     248,   145,    73,    62,    74,   179,    47,   275,   245,    48,
     164,   256,   274,   178,   245,    48,    81,   182,    48,    48,
     181,   170,   171,   321,   169,   244,   314,    88,    49,   179,
     170,   262,   349,   350,   162,   266,   267,   178,   245,    48,
      46,    82,   381,    58,   205,   184,   186,    86,   235,   236,
     310,   210,   361,   211,   347,   358,   195,   311,   212,   304,
      89,   245,   359,    90,   199,    82,   176,   226,   317,   177,
     282,    86,   227,   228,   204,   229,   230,   239,   322,   318,
     319,   231,   232,   253,   242,   327,   328,   329,   200,   326,
     334,   335,   336,   337,   237,   238,   179,   201,   160,   330,
     331,   202,   305,   240,   178,   332,   333,   241,   338,   339,
     345,   249,   261,    74,   273,   276,   277,   -23,   281,   178,
     312,   315,   316,   323,   320,   325,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   372,   351,  -215,   362,   346,   368,
     376,   391,   309,   370,   371,   247,   223,   340,   364,   366,
     341,   343,   377,   342,   379,   183,   344,   166,   313,    87,
      80,   369,   264,    77,     0,     0,     0,   387,     0,   388,
       0,   383,     0,     0,     0,   390,     0,     0,     0,     0,
       0,     0,    95,     0,    96,    97,    98,    99,     0,   100,
       0,   101,   102,     0,     0,     0,     0,     0,     0,     0,
     385,     0,     0,   160,     0,     0,     0,     0,   178,   384,
       0,     0,   103,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,    22,     0,   104,   105,
     106,     0,   107,   108,   109,   110,   111,   112,   113,   114,
       0,     0,     0,    23,    24,   115,     0,     0,     0,    73,
     116,     0,     0,   253,   117,   118,   119,   120,   121,   122,
       0,     0,    96,    97,    98,    99,     0,   100,   123,   101,
     102,     0,     0,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
     103,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,    20,    21,    22,     0,   104,   105,   106,     0,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,    23,    24,   115,    74,     0,     0,    73,   116,     0,
       0,     0,   117,   118,   119,   120,   121,   122,     0,     0,
      96,    97,    98,    99,     0,   100,   123,   101,   102,     8,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,    22,     0,   103,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,     0,   104,   105,   106,     0,   107,   108,
     109,   110,   111,   112,   113,   114,     0,     0,     0,    23,
      24,   115,     0,     0,     0,    73,     0,     0,     0,     0,
     117,   118,   119,   120,   121,   122,     0,     0,   158,    97,
      98,    99,     0,   100,   123,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,     0,     0,     0,     0,     0,    96,    97,    98,    99,
       0,   100,     0,   101,   102,     0,     0,    23,    24,   115,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   118,
     119,   120,   121,   122,   103,     0,     0,     0,     0,     0,
       0,     0,   123,     0,   158,    97,    98,    99,     0,   100,
       0,   101,   102,   355,   356,     0,     0,     0,     0,     0,
     104,   105,   106,     0,   107,   108,   109,   110,   111,   112,
     113,   114,   103,     0,     0,     0,     0,   115,     0,     0,
       0,    73,     0,     0,   363,   365,   117,   118,   119,   120,
     121,   122,     0,     0,     0,     0,     0,     0,     0,   378,
     123,   380,     0,     0,   158,    97,    98,    99,     0,   100,
       0,   101,   102,     0,     0,   115,     0,     0,   389,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
       0,     0,   103,     0,     0,     0,     0,     0,   123,     8,
       9,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    20,    21,    22,     0,     0,     0,
       0,     0,   158,    97,    98,    99,     0,   100,     0,   101,
     102,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     103,   158,    97,    98,    99,     0,   100,     0,   101,   102,
       0,     0,     0,     0,     0,     0,   158,    97,    98,    99,
       0,   100,     0,   101,   102,     0,     0,     0,     0,   103,
       0,   158,    97,    98,    99,     0,   100,     0,   101,   102,
       0,     0,     0,   115,   103,     0,     0,   159,     0,     0,
       0,     0,   117,   118,   119,   120,   121,   122,     0,   103,
     158,    97,    98,    99,     0,   100,     0,   101,   102,     0,
       0,     0,   115,   347,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   115,   103,     0,
       0,     0,     0,     0,     0,     0,   117,   118,   119,   120,
     121,   122,   190,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   121,   122,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     1,     0,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,    20,    21,    22,     0,     0,     0,     8,     9,
      10,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    23,    24,    20,    21,    22,     8,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,    20,    21,    22,     0,     0,     0,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   257
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-246))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     1,    76,    88,   115,    26,    75,   252,     3,    48,
      90,    88,   130,    58,     3,   170,    82,     3,     3,    58,
      86,    83,   155,   100,     3,    95,    95,    27,    28,    19,
      78,    70,    32,    33,    34,     3,    81,    82,    83,   194,
      48,    86,    81,    82,    83,     3,    82,    86,     3,   115,
       1,    14,    15,   130,    82,    77,    82,    74,   251,    76,
      82,    97,    70,   196,   197,   186,     9,    10,    11,    97,
     115,    97,    93,    38,    39,    40,   115,   198,     3,   190,
     150,   150,    78,    34,    80,   170,     3,    75,    82,    84,
      77,   165,   203,   170,    82,    84,    78,   177,    84,    84,
      79,    96,    97,    97,   166,    95,   261,    80,    97,   194,
      96,    79,   305,   306,    75,   192,   193,   194,    82,    84,
      78,   166,   367,    78,   190,   146,    96,   166,    91,    92,
      75,    74,    96,    76,    75,    75,    96,    82,    81,   250,
      79,    82,    82,    82,     3,   190,    79,    84,   269,    82,
     224,   190,    89,    90,   265,    85,    86,    83,   276,   270,
     271,    12,    13,   163,    18,   283,   284,   285,    97,   280,
     290,   291,   292,   293,    16,    17,   261,    97,   252,   286,
     287,    97,   251,    93,   261,   288,   289,    94,   294,   295,
     301,    74,    96,    80,    97,    75,     3,    75,     3,   276,
      77,    75,    96,    75,    62,   279,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   357,    82,    79,   348,   302,    79,
      60,    97,   253,   354,   355,   150,   129,   296,   349,   350,
     297,   299,   363,   298,   365,    93,   300,    81,   259,    63,
      54,   353,   190,    52,    -1,    -1,    -1,   378,    -1,   380,
      -1,   372,    -1,    -1,    -1,   386,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,    -1,    -1,   367,    -1,    -1,    -1,    -1,   375,   373,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,   353,    83,    84,    85,    86,    87,    88,
      -1,    -1,     3,     4,     5,     6,    -1,     8,    97,    10,
      11,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    -1,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    73,    74,    80,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
       3,     4,     5,     6,    -1,     8,    97,    10,    11,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    -1,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,     3,     4,
       5,     6,    -1,     8,    97,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    -1,    -1,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,   318,   319,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    31,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,   349,   350,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,
      97,   366,    -1,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    11,    -1,    -1,    74,    -1,    -1,   383,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    97,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      31,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    31,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    11,
      -1,    -1,    -1,    74,    31,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    -1,    31,
       3,     4,     5,     6,    -1,     8,    -1,    10,    11,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    74,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    72,    73,    53,    54,    55,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      53,    54,    55,    72,    73,   159,   161,   165,   166,   174,
     175,   181,   184,   185,   223,   224,   225,   224,   168,   169,
     170,   171,   172,   173,   167,     3,    78,     3,    84,    97,
     162,   164,   186,   187,   190,   161,   161,     3,    78,   161,
     161,     0,   224,    78,     3,   108,   182,   183,   184,   190,
     191,    82,    97,    78,    80,   101,   103,   207,    74,    76,
     187,    78,   166,   176,   177,   178,   184,   182,    80,    79,
      82,   184,   190,   163,   160,     1,     3,     4,     5,     6,
       8,    10,    11,    31,    57,    58,    59,    61,    62,    63,
      64,    65,    66,    67,    68,    74,    79,    83,    84,    85,
      86,    87,    88,    97,   102,   104,   105,   109,   111,   118,
     121,   122,   123,   127,   130,   133,   138,   141,   143,   145,
     147,   149,   151,   154,   156,   159,   161,   202,   203,   207,
     208,   209,   210,   212,   213,   216,   217,   221,     3,    78,
     154,   196,    75,   189,    77,   188,   176,   178,    79,   177,
      96,    97,   179,   180,   186,   178,    79,    82,   118,   151,
     158,    79,   183,   164,   186,   209,    96,   106,   107,   110,
      74,   118,   119,   120,   204,    96,   215,   218,   219,     3,
      97,    97,    97,   222,   156,   178,   195,     9,    10,    11,
      74,    76,    81,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   103,   155,   122,    84,    89,    90,    85,
      86,    12,    13,    14,    15,    91,    92,    16,    17,    83,
      93,    94,    18,    19,    95,    82,    97,   102,   209,    74,
      99,    99,   197,   161,   192,   194,   154,    79,   158,    82,
      97,    96,    79,   202,   195,    74,   118,   118,   158,   206,
      99,    99,   202,    97,   156,    75,    75,     3,   114,   115,
     112,     3,   154,   124,   125,   126,   128,   129,   131,   132,
     136,   137,   134,   135,   139,   140,   142,   144,   146,   148,
     150,   152,   157,   211,   156,   159,   210,   196,   200,   186,
      75,    82,    77,   180,   158,    75,    96,   202,   156,   156,
      62,    97,   122,    75,   116,   154,   156,   122,   122,   122,
     123,   123,   127,   127,   130,   130,   130,   130,   133,   133,
     138,   141,   143,   145,   147,   156,   154,    75,   100,   210,
     210,    82,   199,   193,   205,   100,   100,   220,    75,    82,
      77,    96,   202,   100,   156,   100,   156,   201,    79,   194,
     202,   202,    99,   117,   113,   153,    60,   202,   100,   202,
     100,   196,   198,   156,   154,   151,   214,   202,   202,   100,
     202,    97
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
#line 69 "c-grammar.y"
    { PRINT("("); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 73 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 85 "c-grammar.y"
    { PRINT("{"); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 89 "c-grammar.y"
    { PRINT("}"); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 93 "c-grammar.y"
    { PRINT("="); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 98 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	    if (yychar != '('){ /* not a function call */
		if (!check_var_declared((yyvsp[(1) - (1)].attribute).value)) YYERROR;
		PRINT("$");        
	    }
	    else /* function call */
		check_function_declared((yyvsp[(1) - (1)].attribute).value);
	    (yyval.attribute).type = get_type((yyvsp[(1) - (1)].attribute).value); 
            PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); 
	  }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 108 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 109 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 110 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (3)].attribute).type; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 114 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 115 "c-grammar.y"
    { (yyval.attribute).type = INTEGER; }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 116 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 117 "c-grammar.y"
    { (yyval.attribute).type = REAL; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 118 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 126 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 127 "c-grammar.y"
    { (yyval.attribute).type = CHARACTER; }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 131 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 132 "c-grammar.y"
    { PRINT("["); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 132 "c-grammar.y"
    { PRINT("]"); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 133 "c-grammar.y"
    {	if ((yyvsp[(4) - (6)].attribute).type==INTEGER) 
			(yyval.attribute).type=(yyvsp[(1) - (6)].attribute).type;
	   	 else 
			(yyval.attribute).type=ERROR_TIPO; 
	  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 138 "c-grammar.y"
    { PRINT("("); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 138 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 139 "c-grammar.y"
    { PRINT("("); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 139 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 142 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 143 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 148 "c-grammar.y"
    { PRINT(","); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 152 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 153 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 153 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(3) - (3)].attribute).type; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 154 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 154 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(3) - (3)].attribute).type; }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 155 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (2)].attribute).type; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 161 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 162 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 163 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 164 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 165 "c-grammar.y"
    { PRINT("~"); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 166 "c-grammar.y"
    { PRINT("!"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 170 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 171 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (4)].attribute).type; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 175 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 176 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 177 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type && ((yyvsp[(1) - (4)].attribute).type==INTEGER || (yyvsp[(1) - (4)].attribute).type==REAL)) 
		(yyval.attribute).type = (yyvsp[(1) - (4)].attribute).type;
	    else (yyval.attribute).type = 
		ERROR_TIPO; 
	   }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 182 "c-grammar.y"
    { PRINT("/"); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 183 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type && ((yyvsp[(1) - (4)].attribute).type==INTEGER || (yyvsp[(1) - (4)].attribute).type==REAL)) 
		(yyval.attribute).type = (yyvsp[(1) - (4)].attribute).type;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 188 "c-grammar.y"
    { PRINT("%"); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 189 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type && ((yyvsp[(1) - (4)].attribute).type==INTEGER || (yyvsp[(1) - (4)].attribute).type==REAL)) 
		(yyval.attribute).type = (yyvsp[(1) - (4)].attribute).type;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 197 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 198 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 199 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type && ((yyvsp[(1) - (4)].attribute).type==INTEGER || (yyvsp[(1) - (4)].attribute).type==REAL)) 
		(yyval.attribute).type = (yyvsp[(1) - (4)].attribute).type;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 204 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 205 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type && ((yyvsp[(1) - (4)].attribute).type==INTEGER || (yyvsp[(1) - (4)].attribute).type==REAL)) 
		(yyval.attribute).type = (yyvsp[(1) - (4)].attribute).type;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 213 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 214 "c-grammar.y"
    { PRINT("<<"); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 215 "c-grammar.y"
    { PRINT(">>"); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 219 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 220 "c-grammar.y"
    { PRINT("<"); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 221 "c-grammar.y"
    { PRINT(">"); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 222 "c-grammar.y"
    { PRINT("<="); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 223 "c-grammar.y"
    { PRINT(">="); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 227 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 228 "c-grammar.y"
    { PRINT("=="); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 229 "c-grammar.y"
    { PRINT("!="); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 233 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 234 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 238 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 239 "c-grammar.y"
    { PRINT("^"); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 243 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 244 "c-grammar.y"
    { PRINT("|"); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 248 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 249 "c-grammar.y"
    { PRINT("&&"); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 253 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 254 "c-grammar.y"
    { PRINT("||"); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 258 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 259 "c-grammar.y"
    { PRINT("?"); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 259 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 263 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 265 "c-grammar.y"
    { if ((yyvsp[(1) - (3)].attribute).type == (yyvsp[(3) - (3)].attribute).type) 
		(yyval.attribute).type = VACIO;
	   else 
		(yyval.attribute).type = ERROR_TIPO; 
	 }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 274 "c-grammar.y"
    { PRINT("*="); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 275 "c-grammar.y"
    { PRINT("/="); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 276 "c-grammar.y"
    { PRINT("%="); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 277 "c-grammar.y"
    { PRINT("+="); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 278 "c-grammar.y"
    { PRINT("-="); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 279 "c-grammar.y"
    { PRINT("<<="); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 280 "c-grammar.y"
    { PRINT(">>="); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 281 "c-grammar.y"
    { PRINT("&="); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 282 "c-grammar.y"
    { PRINT("^="); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 283 "c-grammar.y"
    { PRINT("|="); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 287 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 288 "c-grammar.y"
    { PRINT(","); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 289 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type != ERROR_TIPO && (yyvsp[(4) - (4)].attribute).type != ERROR_TIPO ) 
		(yyval.attribute).type = VACIO;
	    else (yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 300 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 301 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 301 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (4)].attribute).type; }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 316 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 317 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 318 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type != ERROR_TIPO && (yyvsp[(4) - (4)].attribute).type != ERROR_TIPO ) 
		(yyval.attribute).type = VACIO;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 327 "c-grammar.y"
    { if ((yyvsp[(1) - (3)].attribute).type == (yyvsp[(3) - (3)].attribute).type) 
		(yyval.attribute).type = VACIO;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 345 "c-grammar.y"
    { global_type_specifier = VOID; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 345 "c-grammar.y"
    { (yyval.attribute).type = VOID; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 346 "c-grammar.y"
    { global_type_specifier = CHARACTER; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 346 "c-grammar.y"
    { (yyval.attribute).type = CHARACTER; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 347 "c-grammar.y"
    { global_type_specifier = INTEGER; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 347 "c-grammar.y"
    { (yyval.attribute).type = INTEGER; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 348 "c-grammar.y"
    { global_type_specifier = INTEGER; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 348 "c-grammar.y"
    { (yyval.attribute).type = INTEGER; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 349 "c-grammar.y"
    { global_type_specifier = INTEGER; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 349 "c-grammar.y"
    { (yyval.attribute).type = INTEGER; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 350 "c-grammar.y"
    { global_type_specifier = REAL; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 350 "c-grammar.y"
    { (yyval.attribute).type = REAL; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 351 "c-grammar.y"
    { global_type_specifier = REAL; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 351 "c-grammar.y"
    { (yyval.attribute).type = REAL; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 365 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 366 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 381 "c-grammar.y"
    { if ((yyvsp[(1) - (2)].attribute).type==(yyvsp[(2) - (2)].attribute).type ) 
		(yyval.attribute).type = (yyvsp[(1) - (2)].attribute).type;
	    else 
		(yyval.attribute).type = ERROR_TIPO; 
	  }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 386 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 387 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 388 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 403 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 404 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 405 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 406 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 407 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 432 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(2) - (2)].attribute).type; }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 433 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 437 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar == '('){
	                            check_function_redefinition((yyvsp[(1) - (1)].attribute).value);	                            
	                            PRINT("function "); /* function */
	                            last_inserted_function = table_insert((yyvsp[(1) - (1)].attribute).value, global_type_specifier, functions_symbol_table);
	                            begin_local_scope();
	                          }
	                          else {
	                            check_var_redefinition((yyvsp[(1) - (1)].attribute).value);
	                            PRINT("$");                       /* var */
	                            table_insert((yyvsp[(1) - (1)].attribute).value, global_type_specifier, current_scope_symbol_table);
	                          }
	                          //printf("ID: %s, TYPE: %d\n", $1.value, global_type_specifier);
				  (yyval.attribute).type = get_type((yyvsp[(1) - (1)].attribute).value);                         
	                          PRINT((yyvsp[(1) - (1)].attribute).value); free((yyvsp[(1) - (1)].attribute).value); 
	                        }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 454 "c-grammar.y"
    { print_enabled = FALSE; }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 454 "c-grammar.y"
    { print_enabled = TRUE; }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 456 "c-grammar.y"
    { PRINT("("); 
	      parameter_list_buffer = init_buffer(); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 459 "c-grammar.y"
    { PRINT(")"); 
	    last_inserted_function.input_type = parameter_list_buffer.data; }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 461 "c-grammar.y"
    { PRINT("()"); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 478 "c-grammar.y"
    { PRINT(","); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 482 "c-grammar.y"
    { buffer_add(&parameter_list_buffer, global_type_specifier); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 483 "c-grammar.y"
    { buffer_add(&parameter_list_buffer, global_type_specifier); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 487 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 491 "c-grammar.y"
    { PRINT("array("); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 491 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 492 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(3) - (6)].attribute).type; }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 493 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 498 "c-grammar.y"
    { PRINT(","); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 502 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 503 "c-grammar.y"
    { PRINT(","); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 504 "c-grammar.y"
    { if ((yyvsp[(1) - (4)].attribute).type==(yyvsp[(4) - (4)].attribute).type) 
		(yyval.attribute).type=(yyvsp[(1) - (4)].attribute).type; 
	    else 
		(yyval.attribute).type=ERROR_TIPO; 
	  }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 512 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 513 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 514 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 515 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 516 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 517 "c-grammar.y"
    { (yyval.attribute).type = VACIO; }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 522 "c-grammar.y"
    { PRINT("case"); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 522 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 523 "c-grammar.y"
    { PRINT("default:"); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 534 "c-grammar.y"
    {yyerrok;}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 539 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type;
	    if ((yyval.attribute).type==ERROR_TIPO){ 
		error_type = TIPO;
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 	  	
	    }
	  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 546 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; 
	    if ((yyval.attribute).type==ERROR_TIPO){ 
		error_type = TIPO;		
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
	    }
	  }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 555 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 556 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 556 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (3)].attribute).type; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 560 "c-grammar.y"
    { PRINT("if"); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 564 "c-grammar.y"
    { PRINT("else"); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 566 "c-grammar.y"
    { PRINT("switch"); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 570 "c-grammar.y"
    { PRINT("for"); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 574 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 575 "c-grammar.y"
    { PRINT("do"); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 575 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 576 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 585 "c-grammar.y"
    { PRINT("continue;"); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 586 "c-grammar.y"
    { PRINT("break;"); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 587 "c-grammar.y"
    { PRINT("return;"); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 588 "c-grammar.y"
    { PRINT("return "); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 588 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 594 "c-grammar.y"
    { yyerrok; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 600 "c-grammar.y"
    { (yyval.attribute).type = (yyvsp[(1) - (1)].attribute).type; 
	    if ((yyval.attribute).type==ERROR_TIPO){ 
		error_type = TIPO;		
		yyerror("Comprobacion de Tipos: Tipos incompatibles en la expresion"); 
	    }
	  }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 609 "c-grammar.y"
    { end_local_scope(); }
    break;



/* Line 1806 of yacc.c  */
#line 3426 "y.tab.c"
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
#line 612 "c-grammar.y"


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
	param_name = name;
	error_type = AMBITO;
	yyerror("intento de redefinir función");
    }
}

void check_var_redefinition(char *name){
    if (lookup_string(name, current_scope_symbol_table)) {
	param_name = name;
	error_type = AMBITO;
 	yyerror("intento de redefinir variable");
    }
}

void check_function_declared(char *name){
    if (!lookup_string(name, functions_symbol_table)) 
        fprintf(stderr, "Cerca de la línea %d: warning: declaración implícita de la función '%s'\n", yylineno, name);
}

int check_var_declared(char *name){
    if ( (!lookup_string(name, current_scope_symbol_table) && current_scope_symbol_table != global_symbol_table)
     &&   !lookup_string(name, global_symbol_table) ) {
	param_name = name;
	error_type = AMBITO;
	yyerror ("variable no declarada");
	return 0;
    }
    return 1; 	
}

int get_type(char *name){
    list_pointer type;
    if ( (type = lookup_string(name, current_scope_symbol_table)) && current_scope_symbol_table != global_symbol_table)
     	return type->entry.type;
    else if ( (type = lookup_string(name, global_symbol_table)) )
	return type->entry.type;
    else 
	return ERROR_TIPO; 	
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
			fprintf(stderr, "Línea %d: error: %s '%s'\n", yylineno, message, param_name);
			break;
		case TIPO:
			fprintf(stderr, "Línea %d: error: %s\n", yylineno, message);
			break;
		default:
			fprintf(stderr, "Cerca de la línea %d: error: %s cerca de '%s'\n", yylineno, message, yytext);
			break;	
	}
	error_type = SINTAXIS;       	
	errors++;  
}


