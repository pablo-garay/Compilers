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
    #define PRINT(X) fputs (X, pFile);	 	
    #define FILENAME "myfile.txt"
  
	FILE *pFile;
  	short int errores = 0;		


/* Line 268 of yacc.c  */
#line 81 "y.tab.c"

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
     GENERIC = 327,
     NORETURN = 328,
     STATIC_ASSERT = 329,
     THREAD_LOCAL = 330
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
#define GENERIC 327
#define NORETURN 328
#define STATIC_ASSERT 329
#define THREAD_LOCAL 330




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 10 "c-grammar.y"
char *id;


/* Line 293 of yacc.c  */
#line 271 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 283 "y.tab.c"

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNRULES -- Number of states.  */
#define YYNSTATES  483

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    92,    85,     2,
      76,    77,    86,    87,    82,    88,    84,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    99,
      93,    98,    94,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    95,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    96,    81,    89,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    38,    40,    44,    48,
      52,    54,    59,    63,    68,    72,    76,    79,    82,    89,
      97,    99,   103,   105,   108,   111,   114,   117,   122,   127,
     129,   131,   133,   135,   137,   139,   141,   146,   148,   152,
     156,   160,   162,   166,   170,   172,   176,   180,   182,   186,
     190,   194,   198,   200,   204,   208,   210,   214,   216,   220,
     222,   226,   228,   232,   234,   238,   240,   246,   248,   252,
     254,   256,   258,   260,   262,   264,   266,   268,   270,   272,
     274,   276,   280,   282,   285,   289,   291,   294,   296,   299,
     301,   304,   306,   309,   311,   314,   316,   318,   322,   326,
     328,   330,   332,   334,   336,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   377,   383,   386,   388,   390,   392,   395,
     398,   402,   404,   407,   409,   412,   414,   416,   420,   423,
     427,   429,   434,   440,   446,   453,   456,   458,   462,   466,
     468,   473,   475,   477,   479,   481,   483,   485,   490,   495,
     498,   500,   502,   506,   510,   515,   522,   528,   534,   541,
     547,   552,   557,   562,   566,   571,   575,   578,   581,   583,
     585,   588,   592,   594,   596,   600,   603,   606,   608,   610,
     614,   617,   619,   622,   624,   626,   630,   633,   637,   643,
     648,   654,   659,   663,   667,   671,   676,   683,   689,   695,
     702,   707,   712,   715,   719,   723,   728,   732,   737,   739,
     742,   744,   749,   753,   756,   758,   761,   765,   768,   776,
     778,   780,   782,   784,   786,   788,   792,   797,   801,   804,
     808,   810,   813,   815,   817,   819,   822,   830,   836,   842,
     843,   850,   858,   865,   873,   880,   888,   892,   895,   898,
     901,   905,   907,   910,   912,   914,   919,   923,   925
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     177,     0,    -1,     3,    -1,   102,    -1,   106,    -1,    76,
     128,    77,    -1,   107,    -1,     4,    -1,     5,    -1,    31,
      -1,     3,    -1,    76,    -1,    77,    -1,     6,    -1,     7,
      -1,    72,    76,   126,    82,   108,    77,    -1,   109,    -1,
     108,    82,   109,    -1,   158,    83,   126,    -1,    58,    83,
     126,    -1,   101,    -1,   110,    78,   128,    79,    -1,   110,
      76,    77,    -1,   110,    76,   111,    77,    -1,   110,    84,
       3,    -1,   110,     9,     3,    -1,   110,    10,    -1,   110,
      11,    -1,    76,   158,    77,    80,   162,    81,    -1,    76,
     158,    77,    80,   162,    82,    81,    -1,   126,    -1,   111,
      82,   126,    -1,   110,    -1,    10,   112,    -1,    11,   112,
      -1,   113,   114,    -1,     8,   112,    -1,     8,    76,   158,
      77,    -1,    70,    76,   158,    77,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,   112,
      -1,    76,   158,    77,   114,    -1,   114,    -1,   115,    86,
     114,    -1,   115,    91,   114,    -1,   115,    92,   114,    -1,
     115,    -1,   116,    87,   115,    -1,   116,    88,   115,    -1,
     116,    -1,   117,    12,   116,    -1,   117,    13,   116,    -1,
     117,    -1,   118,    93,   117,    -1,   118,    94,   117,    -1,
     118,    14,   117,    -1,   118,    15,   117,    -1,   118,    -1,
     119,    16,   118,    -1,   119,    17,   118,    -1,   119,    -1,
     120,    85,   119,    -1,   120,    -1,   121,    95,   120,    -1,
     121,    -1,   122,    96,   121,    -1,   122,    -1,   123,    18,
     122,    -1,   123,    -1,   124,    19,   123,    -1,   124,    -1,
     124,    97,   128,    83,   125,    -1,   125,    -1,   112,   127,
     126,    -1,    98,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,   126,    -1,   128,    82,   126,    -1,
     125,    -1,   131,    99,    -1,   131,   132,    99,    -1,   166,
      -1,   134,   131,    -1,   134,    -1,   135,   131,    -1,   135,
      -1,   147,   131,    -1,   147,    -1,   148,   131,    -1,   148,
      -1,   149,   131,    -1,   149,    -1,   133,    -1,   132,    82,
     133,    -1,   150,    98,   161,    -1,   150,    -1,    32,    -1,
      33,    -1,    34,    -1,    75,    -1,    35,    -1,    36,    -1,
      50,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      48,    -1,    49,    -1,    46,    -1,    47,    -1,    41,    -1,
      51,    -1,    52,    -1,   146,    -1,   136,    -1,   143,    -1,
      30,    -1,   137,    80,   138,    81,    -1,   137,     3,    80,
     138,    81,    -1,   137,     3,    -1,    53,    -1,    54,    -1,
     139,    -1,   138,   139,    -1,   140,    99,    -1,   140,   141,
      99,    -1,   166,    -1,   135,   140,    -1,   135,    -1,   147,
     140,    -1,   147,    -1,   142,    -1,   141,    82,   142,    -1,
      83,   129,    -1,   150,    83,   129,    -1,   150,    -1,    55,
      80,   144,    81,    -1,    55,    80,   144,    82,    81,    -1,
      55,     3,    80,   144,    81,    -1,    55,     3,    80,   144,
      82,    81,    -1,    55,     3,    -1,   145,    -1,   144,    82,
     145,    -1,   103,    98,   129,    -1,   103,    -1,    71,    76,
     158,    77,    -1,    38,    -1,    39,    -1,    40,    -1,    71,
      -1,    37,    -1,    73,    -1,    69,    76,   158,    77,    -1,
      69,    76,   129,    77,    -1,   152,   151,    -1,   151,    -1,
       3,    -1,    76,   150,    77,    -1,   151,    78,    79,    -1,
     151,    78,    86,    79,    -1,   151,    78,    34,   153,   126,
      79,    -1,   151,    78,    34,   126,    79,    -1,   151,    78,
     153,    86,    79,    -1,   151,    78,   153,    34,   126,    79,
      -1,   151,    78,   153,   126,    79,    -1,   151,    78,   153,
      79,    -1,   151,    78,   126,    79,    -1,   151,    76,   154,
      77,    -1,   151,    76,    77,    -1,   151,    76,   157,    77,
      -1,    86,   153,   152,    -1,    86,   153,    -1,    86,   152,
      -1,    86,    -1,   147,    -1,   153,   147,    -1,   155,    82,
      56,    -1,   155,    -1,   156,    -1,   155,    82,   156,    -1,
     131,   150,    -1,   131,   159,    -1,   131,    -1,     3,    -1,
     157,    82,     3,    -1,   140,   159,    -1,   140,    -1,   152,
     160,    -1,   152,    -1,   160,    -1,    76,   159,    77,    -1,
      78,    79,    -1,    78,    86,    79,    -1,    78,    34,   153,
     126,    79,    -1,    78,    34,   126,    79,    -1,    78,   153,
      34,   126,    79,    -1,    78,   153,   126,    79,    -1,    78,
     153,    79,    -1,    78,   126,    79,    -1,   160,    78,    79,
      -1,   160,    78,    86,    79,    -1,   160,    78,    34,   153,
     126,    79,    -1,   160,    78,    34,   126,    79,    -1,   160,
      78,   153,   126,    79,    -1,   160,    78,   153,    34,   126,
      79,    -1,   160,    78,   153,    79,    -1,   160,    78,   126,
      79,    -1,    76,    77,    -1,    76,   154,    77,    -1,   160,
      76,    77,    -1,   160,    76,   154,    77,    -1,    80,   162,
      81,    -1,    80,   162,    82,    81,    -1,   126,    -1,   163,
     161,    -1,   161,    -1,   162,    82,   163,   161,    -1,   162,
      82,   161,    -1,   164,    98,    -1,   165,    -1,   164,   165,
      -1,    78,   129,    79,    -1,    84,     3,    -1,    74,    76,
     129,    82,     6,    77,    99,    -1,   168,    -1,   169,    -1,
     172,    -1,   173,    -1,   174,    -1,   176,    -1,     3,    83,
     167,    -1,    57,   129,    83,   167,    -1,    58,    83,   167,
      -1,    80,    81,    -1,    80,   170,    81,    -1,   171,    -1,
     170,   171,    -1,   130,    -1,   167,    -1,    99,    -1,   128,
      99,    -1,    59,    76,   128,    77,   167,    60,   167,    -1,
      59,    76,   128,    77,   167,    -1,    61,    76,   128,    77,
     167,    -1,    -1,    62,   175,   104,   128,   105,   167,    -1,
      63,   167,    62,    76,   128,    77,    99,    -1,    64,    76,
     172,   172,    77,   167,    -1,    64,    76,   172,   172,   128,
      77,   167,    -1,    64,    76,   130,   172,    77,   167,    -1,
      64,    76,   130,   172,   128,    77,   167,    -1,    65,     3,
      99,    -1,    66,    99,    -1,    67,    99,    -1,    68,    99,
      -1,    68,   128,    99,    -1,   178,    -1,   177,   178,    -1,
     179,    -1,   130,    -1,   131,   150,   180,   169,    -1,   131,
     150,   169,    -1,   130,    -1,   180,   130,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    35,    36,    37,    38,    42,    43,    44,
      48,    52,    56,    76,    77,    81,    85,    86,    90,    91,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     108,   109,   113,   114,   115,   116,   117,   118,   119,   123,
     124,   125,   126,   127,   128,   132,   133,   137,   138,   139,
     140,   144,   145,   146,   150,   151,   152,   156,   157,   158,
     159,   160,   164,   165,   166,   170,   171,   175,   176,   180,
     181,   185,   186,   190,   191,   195,   196,   200,   201,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     219,   220,   224,   228,   229,   230,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   247,   248,   252,   253,
     257,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   285,   286,   287,   291,   292,   296,   297,   301,
     302,   303,   307,   308,   309,   310,   314,   315,   319,   320,
     321,   325,   326,   327,   328,   329,   333,   334,   338,   339,
     343,   347,   348,   349,   350,   354,   355,   359,   360,   364,
     365,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   386,   387,   388,   389,   393,
     394,   399,   400,   404,   405,   409,   410,   411,   415,   416,
     420,   421,   425,   426,   427,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   455,   456,   457,   461,
     462,   463,   464,   468,   472,   473,   477,   478,   482,   486,
     487,   488,   489,   490,   491,   495,   496,   497,   501,   502,
     506,   507,   511,   512,   516,   517,   521,   522,   523,   527,
     527,   528,   529,   530,   531,   532,   536,   537,   538,   539,
     540,   544,   545,   549,   550,   554,   555,   558,   559
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
  "ATOMIC", "GENERIC", "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "','", "':'", "'.'", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "'='", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "left_parenthesis", "right_parenthesis",
  "string", "generic_selection", "generic_assoc_list",
  "generic_association", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "$@1", "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", 0
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
     325,   326,   327,   328,   329,   330,    40,    41,    91,    93,
     123,   125,    44,    58,    46,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   105,   106,   106,   107,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   118,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   129,   130,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   143,   144,   144,   145,   145,
     146,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   157,   157,
     158,   158,   159,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   164,   164,   165,   165,   166,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   175,
     174,   174,   174,   174,   174,   174,   176,   176,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     1,     3,     3,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     1,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     4,     3,     4,     3,     2,     2,     1,     1,
       2,     3,     1,     1,     3,     2,     2,     1,     1,     3,
       2,     1,     2,     1,     1,     3,     2,     3,     5,     4,
       5,     4,     3,     3,     3,     4,     6,     5,     5,     6,
       4,     4,     2,     3,     3,     4,     3,     4,     1,     2,
       1,     4,     3,     2,     1,     2,     3,     2,     7,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     7,     5,     5,     0,
       6,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   131,   110,   111,   112,   114,   115,   165,   161,   162,
     163,   125,   117,   118,   119,   120,   123,   124,   121,   122,
     116,   126,   127,   135,   136,     0,     0,   164,   166,     0,
     113,   274,     0,    97,    99,   129,     0,   130,   128,   101,
     103,   105,    95,     0,   271,   273,   155,     0,     0,     0,
       0,   171,     0,   188,    93,     0,   106,   109,   170,     0,
      96,    98,   134,     0,   100,   102,   104,     1,   272,     0,
      10,   159,     0,   156,     2,     7,     8,    13,    14,     0,
       0,     0,     9,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    20,     3,     4,     6,    32,    45,     0,    47,
      51,    54,    57,    62,    65,    67,    69,    71,    73,    75,
      92,     0,   143,   201,   145,     0,     0,     0,     0,   164,
     189,   187,   186,     0,    94,     0,     0,   277,     0,   276,
       0,     0,     0,   169,     0,     0,   137,     0,   141,     0,
       0,   151,     0,     0,    36,     0,    33,    34,     0,     0,
      45,    77,    90,     0,     0,     0,    26,    27,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   142,     0,     0,   203,   200,   204,   144,   167,
     160,     0,   172,   190,   185,   107,   109,     2,     0,     0,
       0,     0,   259,     0,     0,     0,     0,     0,     0,   248,
     254,     0,   252,   253,   239,   240,     0,   250,   241,   242,
     243,   244,     0,   228,   108,   278,   275,   198,   183,   197,
       0,   192,   193,     0,     0,   173,    40,     0,     0,     0,
     132,   138,     0,   139,     0,   146,   150,   153,     0,   158,
     152,   157,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    79,     0,     5,     0,
       0,    25,    22,     0,    30,     0,    24,    48,    49,    50,
      52,    53,    55,    56,    60,    61,    58,    59,    63,    64,
      66,    68,    70,    72,    74,     0,   222,     0,     0,     0,
     206,    40,     0,     0,   202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,   268,   269,
       0,   255,   249,   251,     0,     0,   230,     0,     0,     0,
     234,     0,   195,   203,   196,   182,     0,   184,     0,     0,
       0,   174,   181,     0,   180,    40,     0,   133,   148,     0,
     140,     0,   154,    37,     0,    38,     0,    78,    91,     0,
      46,    23,     0,    21,     0,   223,   205,     0,     0,   207,
     213,     0,   212,     0,   224,     0,     0,   214,    40,     0,
       0,     0,   245,     0,   247,     0,     0,    11,     0,     0,
       0,     0,   266,   270,     0,   237,   226,     0,   229,   233,
     235,   191,   194,   199,   176,     0,     0,   177,   179,   147,
     149,     0,     0,    16,     0,     0,    31,    76,   209,     0,
       0,   211,   225,     0,     0,   215,   221,     0,   220,     0,
     238,   246,     0,     0,     0,     0,     0,     0,   236,   227,
     232,     0,   175,   178,     0,    15,     0,     0,    28,     0,
     208,   210,   217,     0,     0,   218,   257,   258,    12,     0,
       0,     0,     0,     0,     0,   231,    19,    17,    18,    29,
     216,   219,     0,   260,     0,   264,     0,   262,     0,   256,
     261,   265,   263
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,   388,   459,    94,    95,   412,   413,
      96,   273,   150,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   151,   152,   267,   211,   111,
      31,   128,    55,    56,    33,    34,    35,    36,   135,   136,
     113,   244,   245,    37,    72,    73,    38,    39,    40,    41,
     118,    58,    59,   122,   297,   231,   232,   233,   414,   298,
     187,   326,   327,   328,   329,   330,    42,   213,   214,   215,
     216,   217,   218,   219,   220,   313,   221,    43,    44,    45,
     130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -382
static const yytype_int16 yypact[] =
{
    2175,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,    36,   -56,   -45,  -382,   -16,
    -382,  -382,    64,  2265,  2265,  -382,    53,  -382,  -382,  2265,
    2265,  2265,  -382,  1823,  -382,  -382,   -54,    50,   908,  2374,
    1656,  -382,    32,   203,  -382,   -58,  -382,  1869,   117,    45,
    -382,  -382,     2,  2303,  -382,  -382,  -382,  -382,  -382,    50,
    -382,    39,   154,  -382,  -382,  -382,  -382,  -382,  -382,  1678,
    1700,  1700,  -382,    14,    65,   908,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,   212,  -382,  1656,  -382,
     147,    95,   251,   124,   262,   116,    60,    96,   197,    17,
    -382,   177,  2374,   -44,  2374,   183,   185,   142,   190,  -382,
    -382,  -382,   203,    32,  -382,   436,  1414,  -382,    64,  -382,
    2080,   510,   996,   117,  2303,  1985,  -382,    44,  -382,   200,
    1656,  -382,    66,   908,  -382,   908,  -382,  -382,  2374,  1656,
     148,  -382,  -382,   -49,   199,   224,  -382,  -382,  1436,  1656,
     281,  -382,  1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,
    1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,  1656,
    1656,  -382,  -382,  1936,  1018,   135,  -382,   150,  -382,  -382,
    -382,   287,  -382,  -382,  -382,  -382,   189,   214,  1656,   216,
     229,   239,  -382,   728,   241,   292,   234,   240,   772,  -382,
    -382,    -3,  -382,  -382,  -382,  -382,   585,  -382,  -382,  -382,
    -382,  -382,  1392,  -382,  -382,  -382,  -382,  -382,  -382,    70,
     263,   261,  -382,     3,  1260,  -382,   266,   270,  1040,  2030,
    -382,  -382,  1656,  -382,    63,  -382,   267,  -382,    72,  -382,
    -382,  -382,   274,   275,   279,   276,  -382,  -382,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  1656,  -382,  1656,
    1524,  -382,  -382,     6,  -382,   -52,  -382,  -382,  -382,  -382,
     147,   147,    95,    95,   251,   251,   251,   251,   124,   124,
     262,   116,    60,    96,   197,   219,  -382,   280,   282,  1260,
    -382,   283,   285,  1128,   150,  2129,  1150,   289,   728,   277,
     728,  1656,  1656,   291,   306,   675,   271,  -382,  -382,  -382,
      99,  -382,  -382,  -382,  1656,   366,  -382,   222,  1414,   101,
    -382,  1766,  -382,   156,  -382,  -382,  2221,  -382,   368,   293,
    1260,  -382,  -382,  1656,  -382,   294,   296,  -382,  -382,    75,
    -382,  1656,  -382,   297,   297,  -382,  2340,  -382,  -382,  1392,
    -382,  -382,  1656,  -382,  1656,  -382,  -382,   300,  1260,  -382,
    -382,  1656,  -382,   302,  -382,   305,  1260,  -382,   304,   307,
    1172,   286,  -382,   728,  -382,   107,   125,  -382,  1656,   308,
     818,   818,  -382,  -382,   309,  -382,  -382,  1282,  -382,  -382,
    -382,  -382,  -382,  -382,  -382,   310,   312,  -382,  -382,  -382,
    -382,   311,   167,  -382,   313,   228,  -382,  -382,  -382,   314,
     316,  -382,  -382,   318,  1260,  -382,  -382,  1656,  -382,   320,
    -382,  -382,   728,   728,   168,  1656,  1546,  1568,  -382,  -382,
    -382,  1414,  -382,  -382,  1656,  -382,  2340,  1656,  -382,  1304,
    -382,  -382,  -382,   321,   322,  -382,   327,  -382,  -382,   728,
     170,   728,   171,   728,   184,  -382,  -382,  -382,  -382,  -382,
    -382,  -382,   728,  -382,   303,  -382,   728,  -382,   728,  -382,
    -382,  -382,  -382
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,  -382,   -43,
    -382,  -382,   250,  -382,   -39,   146,   155,   100,   163,   217,
     230,   231,   227,   232,  -382,   -38,  -103,  -382,   -82,   -33,
      -8,    11,  -382,   284,  -382,   -42,  -382,  -382,   298,  -110,
     -23,  -382,    61,  -382,   340,  -120,  -382,   -48,  -382,  -382,
     -24,   -50,   -51,  -119,  -117,  -382,    94,  -382,     9,   -95,
    -166,  -122,    74,  -381,  -382,   102,   -25,   -98,  -382,    19,
    -382,   218,  -171,  -382,  -382,  -382,  -382,  -382,   392,  -382,
    -382
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     114,   114,   121,   153,   224,   120,   112,   112,    57,   133,
     110,    32,   110,   238,   230,   114,   441,   117,   186,   304,
      48,   112,   251,   223,   123,   241,    69,   363,   268,   237,
     269,    49,   183,   269,   184,    51,   179,   114,   138,    46,
     137,   124,    53,   112,    60,    61,   255,    51,    51,   127,
      64,    65,    66,    70,    32,   274,    62,   115,   116,   161,
      50,   153,   185,   153,   114,   303,   114,    51,   441,    70,
     112,   194,   112,    51,   193,    70,   129,   275,    51,   269,
     337,   302,   134,   361,   120,   338,   114,   114,   362,   182,
     148,   188,   112,   112,   154,   114,   321,   114,   295,   196,
     114,   112,   110,   112,   196,   314,   112,   249,    52,   138,
     138,   137,   137,   246,   180,   340,    47,   212,    53,   223,
      52,    52,   225,   277,   278,   279,   320,   242,   251,   241,
      53,   339,   185,    63,   334,   346,   120,   140,   169,   170,
      52,   149,   229,   243,   391,   349,   331,   250,   184,   226,
      53,    52,   252,   352,   253,   176,    53,   254,   242,    51,
     110,    53,   350,    54,   357,   309,   358,   304,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   333,   324,
     368,   269,   165,   166,   432,   325,   120,   380,   375,   269,
     193,   114,   177,   131,   229,   132,   367,   112,   393,   399,
     373,   175,   433,   379,   110,   332,   398,   269,   212,   348,
     382,   183,   384,   184,   138,   178,   137,   171,   172,   436,
     437,   155,   156,   157,   191,   223,   305,   271,   306,   385,
     386,   360,   331,   162,   184,   141,   142,   405,   163,   164,
     406,     8,     9,    10,   445,   458,   266,   474,   476,   446,
     269,   120,   269,   269,   181,   193,   223,   424,   120,   416,
     189,   478,   190,   167,   168,   419,   269,   192,   420,   284,
     285,   286,   287,   423,   119,   440,   270,   429,   173,   174,
     333,   247,   248,   133,   276,   431,   110,   126,   158,    53,
     159,   394,   193,   307,   223,   316,   160,   308,    97,   310,
      97,   269,   364,   396,   397,   311,   434,   390,   114,   448,
     449,   280,   281,   110,   112,   312,   229,   315,   410,   465,
     193,   453,   282,   283,   454,   246,   417,   440,   120,   144,
     146,   147,   193,   317,   456,   457,   288,   289,   223,   318,
     335,   466,   229,   336,   468,   341,   223,   229,    97,   342,
     351,   353,   354,   460,   462,   464,   355,   365,   356,   366,
     383,   473,   369,   475,   370,   477,   381,   387,   389,   395,
     392,   403,   404,   407,   479,   408,   193,   359,   481,   418,
     482,   421,   422,   425,   435,   430,   426,   472,   438,   442,
      97,   443,   290,   450,   444,   451,   447,   452,   114,   455,
     470,   471,   480,   467,   112,   293,   291,   195,   292,   139,
     409,   294,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
     402,   400,   239,   415,   323,    68,     0,     0,     0,   197,
      75,    76,    77,    78,    79,     0,    80,    81,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    82,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    97,   198,   199,   200,     0,   201,   202,   203,
     204,   205,   206,   207,   208,    26,    83,    27,    84,    28,
      29,    30,    85,   227,     0,     0,   125,   209,     0,     0,
      97,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,    26,
       0,    27,     0,    28,     0,    30,     0,   228,   197,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     1,    82,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,   198,   199,   200,     0,   201,   202,   203,   204,
     205,   206,   207,   208,    26,    83,    27,    84,    28,    29,
      30,    85,     0,     0,     0,   125,   322,     0,     0,     0,
      86,    87,    88,    89,    90,    91,     0,     0,    74,    75,
      76,    77,    78,    79,   210,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    82,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,    26,    83,    27,    84,    28,    29,
      30,    85,     0,     0,     0,     0,     0,     0,     0,    82,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,   210,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,   198,   199,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   208,     0,    83,     0,
      84,     0,     0,    82,    85,     0,     0,     0,   125,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,     0,    85,    82,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
       0,   319,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    27,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
     234,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,   299,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,    83,   119,    84,     0,
       0,    82,    85,     0,   343,   235,     0,     0,     8,     9,
      10,    86,   236,    88,    89,    90,    91,     0,    83,   119,
      84,     0,     0,     0,    85,     0,     0,   300,     0,     0,
       0,     0,     0,    86,   301,    88,    89,    90,    91,     0,
      83,   119,    84,     0,     0,     0,    85,     0,     0,   344,
       0,     0,     0,     0,     0,    86,   345,    88,    89,    90,
      91,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,   371,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,   376,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,    83,   119,
      84,     0,     0,    82,    85,     0,   427,   372,     0,     0,
       8,     9,    10,    86,    87,    88,    89,    90,    91,     0,
      83,   119,    84,     0,     0,     0,    85,     0,     0,   377,
       0,     0,     0,     0,     0,    86,   378,    88,    89,    90,
      91,     0,    83,   119,    84,     0,     0,     0,    85,     0,
       0,   428,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    82,    80,    81,     0,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,   119,    84,     0,     0,    82,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,    83,     0,    84,     0,     0,     0,    85,     0,
     324,     0,   222,   439,     0,     0,   325,    86,    87,    88,
      89,    90,    91,     0,    83,     0,    84,     0,     0,     0,
      85,     0,   324,     0,   222,   469,     0,     0,   325,    86,
      87,    88,    89,    90,    91,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,    82,    85,     0,
     324,     0,   222,     0,     0,     0,   325,    86,    87,    88,
      89,    90,    91,     0,    83,     0,    84,     0,     0,     0,
      85,     0,     0,     0,   222,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,    83,     0,    84,     0,
       0,     0,    85,   272,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,    84,     0,     0,    82,
      85,     0,     0,     0,   359,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,    83,     0,    84,     0,
       0,     0,    85,   461,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     0,    83,     0,
      84,     0,     0,     0,    85,   463,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,    84,     0,
       0,    82,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     0,    83,     0,
      84,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,    51,
      83,     0,    84,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,   331,   296,   184,     0,     0,     0,     0,     0,
       0,     0,    53,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,    29,    30,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   126,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,   183,   296,   184,     1,     0,     0,     0,     0,
       0,     0,    53,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    29,
       1,     0,     0,     0,     0,     0,   240,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,     0,     0,     0,     0,
       1,   347,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,    29,    30,     0,     0,     0,     1,
     125,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,     1,   374,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,     1,    30,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    26,     0,    27,     0,    28,     0,
      30,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,    27,     0,     0,    29,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,   411,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-382))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      48,    49,    53,    85,   126,    53,    48,    49,    32,    59,
      48,     0,    50,   132,   131,    63,   397,    50,   113,   185,
      76,    63,   142,   126,    82,   135,    80,    79,    77,   132,
      82,    76,    76,    82,    78,     3,    19,    85,    63,     3,
      63,    99,    86,    85,    33,    34,   149,     3,     3,    57,
      39,    40,    41,     3,    43,   158,     3,    48,    49,    98,
      76,   143,   113,   145,   112,   184,   114,     3,   449,     3,
     112,   122,   114,     3,   122,     3,    57,   159,     3,    82,
      77,   184,    80,    77,   132,    82,   134,   135,    82,   112,
      76,   114,   134,   135,    85,   143,    99,   145,   180,   123,
     148,   143,   140,   145,   128,   203,   148,   140,    76,   134,
     135,   134,   135,   137,    97,   234,    80,   125,    86,   222,
      76,    76,   130,   162,   163,   164,   208,    83,   248,   239,
      86,   234,   183,    80,   229,   238,   184,    98,    14,    15,
      76,    76,   131,    99,   315,    82,    76,    81,    78,   130,
      86,    76,   143,    81,   145,    95,    86,   148,    83,     3,
     198,    86,    99,    99,   267,   198,   269,   333,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   229,    78,
     299,    82,    87,    88,    77,    84,   234,   306,   305,    82,
     238,   239,    96,    76,   183,    78,   299,   239,    99,    98,
     303,    85,    77,   306,   242,   229,   328,    82,   216,   242,
     308,    76,   310,    78,   239,    18,   239,    93,    94,   390,
     391,     9,    10,    11,    82,   328,    76,     3,    78,   311,
     312,   270,    76,    86,    78,    81,    82,   340,    91,    92,
     343,    38,    39,    40,    77,    77,    98,    77,    77,    82,
      82,   299,    82,    82,    77,   303,   359,   376,   306,   362,
      77,    77,    77,    12,    13,   368,    82,    77,   371,   169,
     170,   171,   172,   376,    71,   397,    77,   380,    16,    17,
     331,    81,    82,   333,     3,   383,   324,    98,    76,    86,
      78,   324,   340,     6,   397,     3,    84,    83,    48,    83,
      50,    82,    83,    81,    82,    76,   388,   315,   356,    81,
      82,   165,   166,   351,   356,    76,   305,    76,   351,   441,
     368,   424,   167,   168,   427,   349,   364,   449,   376,    79,
      80,    81,   380,    99,   432,   433,   173,   174,   441,    99,
      77,   444,   331,    82,   447,    79,   449,   336,    98,    79,
      83,    77,    77,   435,   436,   437,    77,    77,    82,    77,
      83,   459,    79,   461,    79,   463,    77,    76,    62,     3,
      99,     3,    79,    79,   472,    79,   424,    80,   476,    79,
     478,    79,    77,    79,    76,    99,    79,    60,    79,    79,
     140,    79,   175,    79,    83,    79,    83,    79,   446,    79,
      79,    79,    99,   446,   446,   178,   176,   123,   177,    69,
     349,   179,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     336,   329,   134,   359,   216,    43,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,   242,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     3,    -1,    -1,    80,    81,    -1,    -1,
     270,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    -1,    75,    -1,    77,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   364,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,     3,     4,
       5,     6,     7,     8,    99,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    34,    79,    -1,    -1,    38,    39,
      40,    85,    86,    87,    88,    89,    90,    -1,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    31,    76,    -1,    34,    79,    -1,    -1,
      38,    39,    40,    85,    86,    87,    88,    89,    90,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    81,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    81,    -1,    -1,    84,    85,
      86,    87,    88,    89,    90,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    31,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      -1,    31,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,     3,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    98,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      30,    -1,    -1,    -1,    -1,    -1,    81,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      30,    81,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    30,
      80,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    30,    77,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    30,    75,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    69,    -1,    71,    -1,    73,    -1,
      75,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    71,    -1,    -1,    74,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   130,   131,   134,   135,   136,   137,   143,   146,   147,
     148,   149,   166,   177,   178,   179,     3,    80,    76,    76,
      76,     3,    76,    86,    99,   132,   133,   150,   151,   152,
     131,   131,     3,    80,   131,   131,   131,     0,   178,    80,
       3,   103,   144,   145,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    85,    86,    87,    88,
      89,    90,   101,   102,   106,   107,   110,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   129,   135,   140,   147,   158,   158,   129,   150,    71,
     147,   152,   153,    82,    99,    80,    98,   130,   131,   169,
     180,    76,    78,   151,    80,   138,   139,   140,   166,   144,
      98,    81,    82,    76,   112,    76,   112,   112,    76,    76,
     112,   125,   126,   128,   158,     9,    10,    11,    76,    78,
      84,   114,    86,    91,    92,    87,    88,    12,    13,    14,
      15,    93,    94,    16,    17,    85,    95,    96,    18,    19,
      97,    77,   140,    76,    78,   152,   159,   160,   140,    77,
      77,    82,    77,   147,   152,   133,   150,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    81,
      99,   128,   130,   167,   168,   169,   170,   171,   172,   173,
     174,   176,    80,   126,   161,   130,   169,     3,    77,   131,
     154,   155,   156,   157,    34,    79,    86,   126,   153,   138,
      81,   139,    83,    99,   141,   142,   150,    81,    82,   129,
      81,   145,   158,   158,   158,   126,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    98,   127,    77,    82,
      77,     3,    77,   111,   126,   128,     3,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     119,   120,   121,   122,   123,   128,    77,   154,   159,    34,
      79,    86,   126,   153,   160,    76,    78,     6,    83,   129,
      83,    76,    76,   175,   167,    76,     3,    99,    99,    99,
     128,    99,    81,   171,    78,    84,   161,   162,   163,   164,
     165,    76,   150,   152,   159,    77,    82,    77,    82,   126,
     153,    79,    79,    34,    79,    86,   126,    81,   129,    82,
      99,    83,    81,    77,    77,    77,    82,   126,   126,    80,
     114,    77,    82,    79,    83,    77,    77,   126,   153,    79,
      79,    34,    79,   126,    77,   154,    34,    79,    86,   126,
     153,    77,   167,    83,   167,   128,   128,    76,   104,    62,
     130,   172,    99,    99,   129,     3,    81,    82,   161,    98,
     165,    56,   156,     3,    79,   126,   126,    79,    79,   142,
     129,    58,   108,   109,   158,   162,   126,   125,    79,   126,
     126,    79,    77,   126,   153,    79,    79,    34,    79,   126,
      99,   167,    77,    77,   128,    76,   172,   172,    79,    81,
     161,   163,    79,    79,    83,    77,    82,    83,    81,    82,
      79,    79,    79,   126,   126,    79,   167,   167,    77,   105,
     128,    77,   128,    77,   128,   161,   126,   109,   126,    81,
      79,    79,    60,   167,    77,   167,    77,   167,    77,   167,
      99,   167,   167
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
        case 11:

/* Line 1806 of yacc.c  */
#line 52 "c-grammar.y"
    { PRINT("(") }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 56 "c-grammar.y"
    { PRINT(")") }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 77 "c-grammar.y"
    { PRINT("function") }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 527 "c-grammar.y"
    { PRINT("\nwhile") }
    break;



/* Line 1806 of yacc.c  */
#line 2424 "y.tab.c"
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
#line 562 "c-grammar.y"


int main(){
    
    pFile = fopen (FILENAME , "w");
    if (pFile == NULL) perror ("Error al abrir el archivo");
    fputs ("<?php\n\n", pFile);
    
    yyparse();
    
    fputs ("\n\n?>", pFile);
    fclose (pFile);
    
    if (errores > 0){
	    if( remove( FILENAME ) != 0 )
		  	perror( "Error al intentar eliminar el archivo" );
  		else
  		    printf("%d errores detectados", errores);
            puts( "No se generará traducción. Archivo eliminado exitosamente" );		
	}
    
    return 0;
}

int yyerror (char const *message) {
  fputs(message, stderr);
  fputc('\n', stderr);
  errores++;
  return 0;
}

