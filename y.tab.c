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
  	
  	short int errores = 0;		


/* Line 268 of yacc.c  */
#line 79 "y.tab.c"

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
#line 8 "c-grammar.y"

        char *idval;
        char *constval;
        char *strval;
        


/* Line 293 of yacc.c  */
#line 273 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 285 "y.tab.c"

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  122
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNRULES -- Number of states.  */
#define YYNSTATES  524

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
       2,     2,     2,    91,     2,     2,     2,    93,    86,     2,
      76,    77,    87,    88,    83,    89,    85,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    99,
      94,    82,    95,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    97,    81,    90,     2,     2,     2,
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
       0,     0,     3,     5,     7,     9,    11,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      46,    48,    52,    56,    60,    62,    67,    68,    73,    74,
      80,    84,    88,    91,    94,   101,   109,   111,   112,   117,
     119,   120,   124,   125,   129,   132,   135,   140,   145,   147,
     149,   151,   153,   155,   157,   159,   164,   166,   167,   172,
     173,   178,   179,   184,   186,   187,   192,   193,   198,   200,
     201,   206,   207,   212,   214,   215,   220,   221,   226,   227,
     232,   233,   238,   240,   241,   246,   247,   252,   254,   255,
     260,   262,   263,   268,   270,   271,   276,   278,   279,   284,
     286,   287,   292,   294,   295,   296,   304,   306,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   335,   340,   342,   345,   349,   351,   354,   356,   359,
     361,   364,   366,   369,   371,   374,   376,   378,   379,   384,
     388,   390,   392,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   434,   439,   445,   448,   450,   452,   454,
     457,   460,   464,   466,   469,   471,   474,   476,   478,   482,
     485,   489,   491,   496,   502,   508,   515,   518,   520,   524,
     528,   530,   535,   537,   539,   541,   543,   545,   547,   552,
     557,   560,   562,   564,   568,   572,   577,   584,   590,   596,
     603,   609,   614,   619,   620,   626,   630,   635,   639,   642,
     645,   647,   649,   652,   653,   658,   660,   662,   663,   668,
     671,   674,   676,   678,   682,   685,   687,   690,   692,   694,
     698,   701,   705,   711,   716,   722,   727,   731,   735,   739,
     744,   751,   757,   763,   770,   775,   780,   783,   787,   791,
     796,   800,   805,   807,   810,   812,   817,   821,   824,   826,
     829,   833,   836,   844,   846,   848,   850,   852,   854,   856,
     860,   861,   862,   869,   870,   875,   878,   882,   884,   887,
     889,   891,   893,   896,   898,   899,   908,   914,   915,   922,
     923,   930,   938,   945,   953,   960,   968,   972,   975,   978,
     981,   982,   987,   989,   992,   994,   996,  1001,  1005,  1007
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     218,     0,    -1,     3,    -1,     3,    -1,   103,    -1,   110,
      -1,    76,   157,    77,    -1,   111,    -1,     4,    -1,     5,
      -1,    31,    -1,     3,    -1,    76,    -1,    77,    -1,    80,
      -1,    81,    -1,    82,    -1,     6,    -1,     7,    -1,    72,
      76,   155,    83,   112,    77,    -1,   113,    -1,   112,    83,
     113,    -1,   192,    84,   155,    -1,    58,    84,   155,    -1,
     102,    -1,   114,    78,   157,    79,    -1,    -1,   114,    76,
     115,    77,    -1,    -1,   114,    76,   116,   117,    77,    -1,
     114,    85,     3,    -1,   114,     9,     3,    -1,   114,    10,
      -1,   114,    11,    -1,    76,   192,    77,    80,   196,    81,
      -1,    76,   192,    77,    80,   196,    83,    81,    -1,   155,
      -1,    -1,   117,    83,   118,   155,    -1,   114,    -1,    -1,
      10,   120,   119,    -1,    -1,    11,   121,   119,    -1,   122,
     123,    -1,     8,   119,    -1,     8,    76,   192,    77,    -1,
      70,    76,   192,    77,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,   119,    -1,    76,
     192,    77,   123,    -1,   123,    -1,    -1,   124,    87,   125,
     123,    -1,    -1,   124,    92,   126,   123,    -1,    -1,   124,
      93,   127,   123,    -1,   124,    -1,    -1,   128,    88,   129,
     124,    -1,    -1,   128,    89,   130,   124,    -1,   128,    -1,
      -1,   131,    12,   132,   128,    -1,    -1,   131,    13,   133,
     128,    -1,   131,    -1,    -1,   134,    94,   135,   131,    -1,
      -1,   134,    95,   136,   131,    -1,    -1,   134,    14,   137,
     131,    -1,    -1,   134,    15,   138,   131,    -1,   134,    -1,
      -1,   139,    16,   140,   134,    -1,    -1,   139,    17,   141,
     134,    -1,   139,    -1,    -1,   142,    86,   143,   139,    -1,
     142,    -1,    -1,   144,    96,   145,   142,    -1,   144,    -1,
      -1,   146,    97,   147,   144,    -1,   146,    -1,    -1,   148,
      18,   149,   146,    -1,   148,    -1,    -1,   150,    19,   151,
     148,    -1,   150,    -1,    -1,    -1,   150,    98,   153,   157,
      84,   154,   152,    -1,   152,    -1,   119,   156,   155,    -1,
     109,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,   155,    -1,    -1,   157,    83,   158,   155,    -1,
     152,    -1,   161,    99,    -1,   161,   162,    99,    -1,   200,
      -1,   165,   161,    -1,   165,    -1,   166,   161,    -1,   166,
      -1,   178,   161,    -1,   178,    -1,   179,   161,    -1,   179,
      -1,   180,   161,    -1,   180,    -1,   164,    -1,    -1,   162,
      83,   163,   164,    -1,   181,   109,   195,    -1,   181,    -1,
      32,    -1,    33,    -1,    34,    -1,    75,    -1,    35,    -1,
      36,    -1,    50,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    48,    -1,    49,    -1,    46,    -1,    47,    -1,
      41,    -1,    51,    -1,    52,    -1,   177,    -1,   167,    -1,
     174,    -1,    30,    -1,   168,    80,   169,    81,    -1,   168,
       3,    80,   169,    81,    -1,   168,     3,    -1,    53,    -1,
      54,    -1,   170,    -1,   169,   170,    -1,   171,    99,    -1,
     171,   172,    99,    -1,   200,    -1,   166,   171,    -1,   166,
      -1,   178,   171,    -1,   178,    -1,   173,    -1,   172,    83,
     173,    -1,    84,   159,    -1,   181,    84,   159,    -1,   181,
      -1,    55,    80,   175,    81,    -1,    55,    80,   175,    83,
      81,    -1,    55,     3,    80,   175,    81,    -1,    55,     3,
      80,   175,    83,    81,    -1,    55,     3,    -1,   176,    -1,
     175,    83,   176,    -1,   104,    82,   159,    -1,   104,    -1,
      71,    76,   192,    77,    -1,    38,    -1,    39,    -1,    40,
      -1,    71,    -1,    37,    -1,    73,    -1,    69,    76,   192,
      77,    -1,    69,    76,   159,    77,    -1,   184,   182,    -1,
     182,    -1,   101,    -1,    76,   181,    77,    -1,   182,    78,
      79,    -1,   182,    78,    87,    79,    -1,   182,    78,    34,
     185,   155,    79,    -1,   182,    78,    34,   155,    79,    -1,
     182,    78,   185,    87,    79,    -1,   182,    78,   185,    34,
     155,    79,    -1,   182,    78,   185,   155,    79,    -1,   182,
      78,   185,    79,    -1,   182,    78,   155,    79,    -1,    -1,
     182,    76,   183,   186,    77,    -1,   182,    76,    77,    -1,
     182,    76,   191,    77,    -1,    87,   185,   184,    -1,    87,
     185,    -1,    87,   184,    -1,    87,    -1,   178,    -1,   185,
     178,    -1,    -1,   188,    83,   187,    56,    -1,   188,    -1,
     190,    -1,    -1,   188,    83,   189,   190,    -1,   161,   181,
      -1,   161,   193,    -1,   161,    -1,     3,    -1,   191,    83,
       3,    -1,   171,   193,    -1,   171,    -1,   184,   194,    -1,
     184,    -1,   194,    -1,    76,   193,    77,    -1,    78,    79,
      -1,    78,    87,    79,    -1,    78,    34,   185,   155,    79,
      -1,    78,    34,   155,    79,    -1,    78,   185,    34,   155,
      79,    -1,    78,   185,   155,    79,    -1,    78,   185,    79,
      -1,    78,   155,    79,    -1,   194,    78,    79,    -1,   194,
      78,    87,    79,    -1,   194,    78,    34,   185,   155,    79,
      -1,   194,    78,    34,   155,    79,    -1,   194,    78,   185,
     155,    79,    -1,   194,    78,   185,    34,   155,    79,    -1,
     194,    78,   185,    79,    -1,   194,    78,   155,    79,    -1,
      76,    77,    -1,    76,   186,    77,    -1,   194,    76,    77,
      -1,   194,    76,   186,    77,    -1,    80,   196,    81,    -1,
      80,   196,    83,    81,    -1,   155,    -1,   197,   195,    -1,
     195,    -1,   196,    83,   197,   195,    -1,   196,    83,   195,
      -1,   198,    82,    -1,   199,    -1,   198,   199,    -1,    78,
     159,    79,    -1,    85,     3,    -1,    74,    76,   159,    83,
       6,    77,    99,    -1,   202,    -1,   206,    -1,   209,    -1,
     211,    -1,   214,    -1,   216,    -1,     3,    84,   201,    -1,
      -1,    -1,    57,   203,   159,    84,   204,   201,    -1,    -1,
      58,    84,   205,   201,    -1,   107,   108,    -1,   107,   207,
     108,    -1,   208,    -1,   207,   208,    -1,   160,    -1,   201,
      -1,    99,    -1,   157,    99,    -1,    59,    -1,    -1,   210,
     105,   157,   106,   201,    60,   212,   201,    -1,   210,   105,
     157,   106,   201,    -1,    -1,    61,   213,   105,   157,   106,
     201,    -1,    -1,    62,   215,   105,   157,   106,   201,    -1,
      63,   201,    62,    76,   157,    77,    99,    -1,    64,    76,
     209,   209,    77,   201,    -1,    64,    76,   209,   209,   157,
      77,   201,    -1,    64,    76,   160,   209,    77,   201,    -1,
      64,    76,   160,   209,   157,    77,   201,    -1,    65,     3,
      99,    -1,    66,    99,    -1,    67,    99,    -1,    68,    99,
      -1,    -1,    68,   217,   157,    99,    -1,   219,    -1,   218,
     219,    -1,   220,    -1,   160,    -1,   161,   181,   221,   206,
      -1,   161,   181,   206,    -1,   160,    -1,   221,   160,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    43,    46,    47,    48,    49,    53,    54,
      55,    59,    63,    67,    79,    83,    87,    91,    92,    96,
     100,   101,   105,   106,   110,   111,   112,   112,   113,   113,
     114,   115,   116,   117,   118,   119,   123,   124,   124,   128,
     129,   129,   130,   130,   131,   132,   133,   134,   138,   139,
     140,   141,   142,   143,   147,   148,   152,   153,   153,   154,
     154,   155,   155,   159,   160,   160,   161,   161,   165,   166,
     166,   167,   167,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   179,   180,   180,   181,   181,   185,   186,   186,
     190,   191,   191,   195,   196,   196,   200,   201,   201,   205,
     206,   206,   210,   211,   211,   211,   215,   216,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   234,
     235,   235,   239,   243,   244,   245,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   262,   263,   263,   267,
     268,   272,   273,   274,   275,   276,   277,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   300,   301,   302,   306,   307,   311,   312,
     316,   317,   318,   322,   323,   324,   325,   329,   330,   334,
     335,   336,   340,   341,   342,   343,   344,   348,   349,   353,
     354,   358,   362,   363,   364,   365,   369,   370,   374,   375,
     379,   380,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   395,   396,   397,   401,   402,   403,
     404,   408,   409,   414,   414,   415,   419,   420,   420,   424,
     425,   426,   430,   431,   435,   436,   440,   441,   442,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     470,   471,   472,   476,   477,   478,   479,   483,   487,   488,
     492,   493,   497,   501,   502,   503,   504,   505,   506,   510,
     511,   511,   511,   512,   512,   516,   517,   521,   522,   526,
     527,   531,   532,   536,   540,   540,   541,   542,   542,   546,
     546,   547,   548,   549,   550,   551,   555,   556,   557,   558,
     559,   559,   563,   564,   568,   569,   573,   574,   577,   578
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
  "')'", "'['", "']'", "'{'", "'}'", "'='", "','", "':'", "'.'", "'&'",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "';'", "$accept", "identifier", "primary_expression",
  "constant", "enumeration_constant", "left_parenthesis",
  "right_parenthesis", "left_curly", "right_curly", "assign_op", "string",
  "generic_selection", "generic_assoc_list", "generic_association",
  "postfix_expression", "$@1", "$@2", "argument_expression_list", "$@3",
  "unary_expression", "$@4", "$@5", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@6", "$@7", "$@8", "additive_expression",
  "$@9", "$@10", "shift_expression", "$@11", "$@12",
  "relational_expression", "$@13", "$@14", "$@15", "$@16",
  "equality_expression", "$@17", "$@18", "and_expression", "$@19",
  "exclusive_or_expression", "$@20", "inclusive_or_expression", "$@21",
  "logical_and_expression", "$@22", "logical_or_expression", "$@23",
  "conditional_expression", "$@24", "$@25", "assignment_expression",
  "assignment_operator", "expression", "$@26", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list", "$@27",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "$@28",
  "pointer", "type_qualifier_list", "parameter_type_list", "$@29",
  "parameter_list", "$@30", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "statement",
  "labeled_statement", "$@31", "$@32", "$@33", "compound_statement",
  "block_item_list", "block_item", "expression_statement", "if",
  "selection_statement", "$@34", "$@35", "iteration_statement", "$@36",
  "jump_statement", "$@37", "translation_unit", "external_declaration",
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
     123,   125,    61,    44,    58,    46,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   105,   106,   107,   108,   109,   110,   110,   111,
     112,   112,   113,   113,   114,   114,   115,   114,   116,   114,
     114,   114,   114,   114,   114,   114,   117,   118,   117,   119,
     120,   119,   121,   119,   119,   119,   119,   119,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   125,   124,   126,
     124,   127,   124,   128,   129,   128,   130,   128,   131,   132,
     131,   133,   131,   134,   135,   134,   136,   134,   137,   134,
     138,   134,   139,   140,   139,   141,   139,   142,   143,   142,
     144,   145,   144,   146,   147,   146,   148,   149,   148,   150,
     151,   150,   152,   153,   154,   152,   155,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   157,
     158,   157,   159,   160,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   163,   162,   164,
     164,   165,   165,   165,   165,   165,   165,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   170,   171,   171,   171,   171,   172,   172,   173,
     173,   173,   174,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   178,   178,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   182,   182,   182,   184,   184,   184,
     184,   185,   185,   187,   186,   186,   188,   189,   188,   190,
     190,   190,   191,   191,   192,   192,   193,   193,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     195,   195,   195,   196,   196,   196,   196,   197,   198,   198,
     199,   199,   200,   201,   201,   201,   201,   201,   201,   202,
     203,   204,   202,   205,   202,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   212,   211,   211,   213,   211,   215,
     214,   214,   214,   214,   214,   214,   216,   216,   216,   216,
     217,   216,   218,   218,   219,   219,   220,   220,   221,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       1,     3,     3,     3,     1,     4,     0,     4,     0,     5,
       3,     3,     2,     2,     6,     7,     1,     0,     4,     1,
       0,     3,     0,     3,     2,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     0,     7,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     0,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     2,     1,     1,     1,     2,
       2,     3,     1,     2,     1,     2,     1,     1,     3,     2,
       3,     1,     4,     5,     5,     6,     2,     1,     3,     3,
       1,     4,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     1,     1,     3,     3,     4,     6,     5,     5,     6,
       5,     4,     4,     0,     5,     3,     4,     3,     2,     2,
       1,     1,     2,     0,     4,     1,     1,     0,     4,     2,
       2,     1,     1,     3,     2,     1,     2,     1,     1,     3,
       2,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     7,     1,     1,     1,     1,     1,     1,     3,
       0,     0,     6,     0,     4,     2,     3,     1,     2,     1,
       1,     1,     2,     1,     0,     8,     5,     0,     6,     0,
       6,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       0,     4,     1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   162,   141,   142,   143,   145,   146,   196,   192,   193,
     194,   156,   148,   149,   150,   151,   154,   155,   152,   153,
     147,   157,   158,   166,   167,     0,     0,   195,   197,     0,
     144,   315,     0,   127,   129,   160,     0,   161,   159,   131,
     133,   135,   125,     0,   312,   314,   186,     0,     0,     0,
       0,     2,     0,   220,   123,   202,     0,   136,   140,   201,
       0,   126,   128,   165,     0,   130,   132,   134,     1,   313,
       0,    11,   190,     0,   187,     3,     8,     9,    17,    18,
       0,    40,    42,    10,     0,     0,     0,    48,    49,    50,
      51,    52,    53,    24,     4,     5,     7,    39,    54,     0,
      56,    63,    68,    73,    82,    87,    90,    93,    96,    99,
     102,   122,     0,   174,   235,   176,     0,     0,     0,     0,
     195,   221,   219,   218,   137,   124,    14,    16,     0,     0,
     318,     0,   317,     0,   213,     0,   200,     0,     0,   168,
       0,   172,     0,     0,   182,     0,     0,    45,     0,     0,
       0,     0,    54,   106,   119,     0,     0,     0,    32,    33,
      28,     0,     0,    44,    57,    59,    61,    64,    66,    69,
      71,    78,    80,    74,    76,    83,    85,    88,    91,    94,
      97,   100,   103,   199,   173,     0,     0,   237,   234,   238,
     175,   198,   191,     0,   203,   222,   217,     0,     3,   280,
       0,   293,   297,   299,     0,     0,     0,     0,     0,   310,
      15,   291,   285,     0,   289,   290,   273,   274,     0,   287,
     275,     0,   276,   277,   278,     0,   262,   139,   140,   319,
     316,   232,   215,     0,     0,     0,   204,    49,     0,     0,
       0,   163,   169,     0,   170,     0,   177,   181,   184,     0,
     189,   183,   188,     0,     0,    41,    43,     0,     0,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   108,
       0,     6,   120,     0,    31,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   231,
       0,   225,   226,     0,     0,   240,    49,     0,     0,   236,
       0,     0,     0,   138,     0,     0,   283,     0,     0,     0,
       0,     0,   307,   308,   309,     0,   292,   286,   288,    12,
       0,     0,     0,   264,     0,     0,     0,   268,     0,   216,
       0,     0,     0,   205,   212,     0,   211,    49,     0,   164,
     179,     0,   171,     0,   185,    46,     0,    47,     0,   107,
       0,     0,    55,    27,     0,    36,    25,    58,    60,    62,
      65,    67,    70,    72,    79,    81,    75,    77,    84,    86,
      89,    92,    95,    98,   101,     0,     0,   229,   237,   230,
     257,   227,   239,     0,     0,   241,   247,     0,   246,     0,
     258,     0,     0,   248,    49,     0,     0,     0,   279,     0,
       0,     0,     0,     0,     0,     0,   306,     0,     0,     0,
     271,   260,     0,   263,   267,   269,   214,   233,   207,     0,
       0,   208,   210,   178,   180,     0,     0,     0,    20,     0,
     121,     0,    29,    37,   104,     0,     0,   243,     0,     0,
     245,   259,     0,     0,   249,   255,     0,   254,     0,   272,
     281,   284,     0,     0,     0,     0,     0,   311,    13,     0,
     270,   261,   266,     0,   206,   209,     0,    19,     0,     0,
      34,     0,     0,     0,   224,   228,   242,   244,   251,     0,
       0,   252,     0,     0,     0,     0,     0,     0,     0,     0,
     296,   265,    23,    21,    22,    35,    38,   105,   250,   253,
     282,   298,   300,     0,   304,     0,   302,     0,   294,   301,
     305,   303,     0,   295
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    55,    93,    94,    72,   330,   469,   128,   212,   129,
      95,    96,   437,   438,    97,   275,   276,   364,   482,   152,
     148,   149,    99,   100,   101,   279,   280,   281,   102,   282,
     283,   103,   284,   285,   104,   288,   289,   286,   287,   105,
     290,   291,   106,   292,   107,   293,   108,   294,   109,   295,
     110,   296,   153,   297,   483,   154,   270,   213,   360,   112,
      31,   131,    56,   197,    57,    33,    34,    35,    36,   138,
     139,   114,   245,   246,    37,    73,    74,    38,    39,    40,
      41,   119,    59,   233,    60,   123,   300,   445,   301,   446,
     302,   234,   439,   303,   189,   333,   334,   335,   336,   337,
      42,   215,   216,   315,   492,   410,   217,   218,   219,   220,
     221,   222,   522,   317,   223,   318,   224,   325,    43,    44,
      45,   133
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -397
static const yytype_int16 yypact[] =
{
    1898,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,    28,   -44,   -39,  -397,   -31,
    -397,  -397,    44,  1944,  1944,  -397,    33,  -397,  -397,  1944,
    1944,  1944,  -397,  1560,  -397,  -397,   -38,    53,   766,  2053,
    1411,  -397,    20,   135,  -397,  -397,   -30,  -397,  1662,   -49,
      70,  -397,  -397,   -15,  1982,  -397,  -397,  -397,  -397,  -397,
      53,  -397,   -10,   140,  -397,  -397,  -397,  -397,  -397,  -397,
    1433,  -397,  -397,  -397,    36,    64,   766,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,   206,  -397,  1411,
    -397,   -41,   178,   275,    67,   273,     9,    62,    52,   145,
      -4,  -397,    89,  2053,    77,  2053,    94,   102,    93,   111,
    -397,  -397,  -397,   135,  -397,  -397,  -397,  -397,   533,  1269,
    -397,    44,  -397,  1803,    58,   840,   -49,  1982,  1708,  -397,
      46,  -397,   143,  1411,  -397,    35,   766,  -397,  1442,  1442,
    2053,  1411,   375,  -397,  -397,   -13,   155,   249,  -397,  -397,
     194,  1411,   280,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  1606,   862,   -21,  -397,   153,
    -397,  -397,  -397,   270,  -397,  -397,  -397,    20,   221,  -397,
     225,  -397,  -397,  -397,   676,   237,   312,   217,   218,   222,
    -397,  -397,  -397,    -8,  -397,  -397,  -397,  -397,   533,  -397,
    -397,   244,  -397,  -397,  -397,  1180,  -397,  -397,   130,  -397,
    -397,  -397,  -397,  1944,     7,  1106,  -397,   245,   246,   884,
    1753,  -397,  -397,  1411,  -397,    -7,  -397,   243,  -397,    45,
    -397,  -397,  -397,   251,   766,  -397,  -397,   252,   247,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    1411,  -397,  -397,  1291,  -397,   254,  1411,   112,  -397,  1411,
    1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,
    1411,  1411,  1411,  1411,  1411,  1411,  1411,  1411,  -397,    60,
     255,   250,  -397,   258,  1106,  -397,   257,   259,   973,   153,
    1852,   995,   260,  -397,   676,  1411,  -397,   244,   244,   279,
     623,   261,  -397,  -397,  -397,  1411,  -397,  -397,  -397,  -397,
    1411,  1411,   339,  -397,   174,  1269,    99,  -397,   267,  -397,
     348,   277,  1106,  -397,  -397,  1411,  -397,   278,   282,  -397,
    -397,    83,  -397,  1411,  -397,   274,   285,  -397,  2019,  -397,
    1411,  1180,  -397,  -397,    71,  -397,  -397,  -397,  -397,  -397,
     -41,   -41,   178,   178,   275,   275,   275,   275,    67,    67,
     273,     9,    62,    52,   145,   209,  1504,  -397,    63,  -397,
    -397,   303,  -397,   284,  1106,  -397,  -397,  1411,  -397,   286,
    -397,   287,  1106,  -397,   288,   289,  1017,   276,  -397,   290,
     676,  1411,  1411,   296,   422,   422,  -397,    61,   106,   294,
    -397,  -397,  1128,  -397,  -397,  -397,  -397,  -397,  -397,   299,
     300,  -397,  -397,  -397,  -397,   274,   297,   109,  -397,   298,
    -397,   196,  -397,  -397,  -397,   324,  1944,  -397,   305,   306,
    -397,  -397,   309,  1106,  -397,  -397,  1411,  -397,   310,  -397,
    -397,  -397,   106,   106,  1411,  1313,  1402,  -397,  -397,   676,
    -397,  -397,  -397,  1269,  -397,  -397,  1411,  -397,  2019,  1411,
    -397,  1150,  1411,  1411,  -397,  -397,  -397,  -397,  -397,   326,
     327,  -397,   676,   676,   676,   113,   676,   128,   676,   136,
     331,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,  -397,  -397,   308,  -397,   676,  -397,   676,  -397,  -397,
    -397,  -397,   676,  -397
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -397,  -397,  -397,  -397,  -397,   -22,  -164,  -397,   190,   263,
    -397,  -397,  -397,   -69,  -397,  -397,  -397,  -397,  -397,   -45,
    -397,  -397,  -397,   -79,    18,  -397,  -397,  -397,    27,  -397,
    -397,   -26,  -397,  -397,    12,  -397,  -397,  -397,  -397,   118,
    -397,  -397,   119,  -397,   117,  -397,   121,  -397,   122,  -397,
    -397,  -397,   -46,  -397,  -397,    79,  -397,   -72,  -397,   -34,
     -40,     0,  -397,  -397,   216,  -397,    19,  -397,  -397,   283,
    -119,    14,  -397,    68,  -397,   352,  -121,  -397,   -36,  -397,
    -397,   -25,   -54,  -397,   -43,  -124,  -173,  -397,  -397,  -397,
     -23,  -397,   -27,  -106,  -178,  -128,    73,  -396,  -397,    95,
     -20,  -146,  -397,  -397,  -397,  -397,   -33,  -397,   223,  -290,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,   392,
    -397,  -397
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -224
static const yytype_int16 yytable[] =
{
      32,   227,   111,    98,   111,    98,   136,    58,   188,   309,
     122,   239,   115,   115,   155,   181,   118,   121,   130,   242,
     163,   116,   117,    51,   252,   132,   473,   134,   115,   135,
     415,    46,    48,    61,    62,   147,    63,    49,    71,    65,
      66,    67,    70,    32,   141,    50,   164,    51,    71,    51,
     115,   165,   166,   124,    98,   185,    71,   186,   319,   156,
     338,   231,   308,    51,   271,   137,    51,   113,   113,   125,
     272,   187,   143,    51,   155,   272,   351,   115,   140,   115,
     196,   171,   172,   113,   339,   473,    51,   195,   214,   277,
     340,   326,   352,   229,   182,   177,    52,   111,    98,   121,
     230,   115,   115,   255,   256,   113,   228,    53,    47,   250,
     115,   342,   150,    64,   115,   247,   251,   141,   141,   253,
      52,   242,    52,   257,   465,   466,   354,   184,   252,   190,
     243,    53,   113,    53,   113,   232,   386,   401,   186,   386,
     151,   186,   187,    54,   272,   244,    52,    53,   442,   179,
     121,   140,   140,   185,   443,   186,   113,   113,   178,    52,
     467,   173,   174,   180,    53,   113,   183,   243,   408,   113,
      53,   191,   228,     8,     9,    10,   193,   331,   214,   192,
     394,   424,   155,   468,   332,   299,   477,   406,   194,   272,
     513,   366,   478,   389,   362,   272,   272,   111,    98,   121,
     367,   368,   369,   195,   115,   515,   120,   423,   226,   350,
     309,   272,   127,   517,   238,   157,   158,   159,   115,   272,
     141,   144,    53,   145,   248,   385,   249,   356,    98,   310,
     258,   311,   273,   299,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,   274,   417,   140,   421,   388,   422,   418,   113,
     374,   375,   376,   377,   461,   307,   167,   168,   121,   111,
      98,   -26,   195,   113,   387,   121,   312,   480,   453,   481,
     414,   409,   160,   278,   161,   111,    98,   169,   170,   175,
     176,   162,   272,   444,   472,   411,   412,   419,   493,   494,
     370,   371,   378,   379,   226,   314,   195,   111,    98,   316,
     299,   372,   373,   320,   341,   321,   322,   323,   348,   434,
     329,   324,   115,   500,   343,   344,   247,   353,   355,   357,
     358,   363,   390,   391,   136,   392,   395,   407,   396,   462,
     463,   413,   420,   388,   426,   501,   510,   511,   512,   359,
     514,   427,   516,   472,   361,   365,   428,   431,   195,  -223,
     416,   432,   435,   447,   451,   450,   121,   454,   455,   520,
     195,   521,   464,   470,   460,   459,   523,   113,   474,   475,
     484,   476,   479,   393,   486,   487,   299,   399,   488,   491,
     405,   518,   495,   497,   499,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   508,   509,   519,   327,   503,
     380,   382,   381,   313,   226,   269,   383,   195,   384,   433,
     240,   429,   142,   485,   430,    75,    76,    77,    78,    79,
      80,   425,    81,    82,   441,    69,     0,   507,    98,   440,
     226,   328,   115,     0,     0,     0,   299,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   448,     0,     0,   449,     0,     0,     0,
       0,   452,     0,     0,     0,   458,     0,     0,     0,     0,
       0,     0,    84,     0,    85,     0,     0,   113,    86,     0,
       0,   226,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   489,     0,     0,   490,   198,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,   226,     0,     0,   502,     0,     0,   504,     0,
     226,   506,     0,     1,    83,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     199,   200,   201,     0,   202,   203,   204,   205,   206,   207,
     208,   209,    26,    84,    27,    85,    28,    29,    30,    86,
       0,     0,     0,   126,   210,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,     0,    75,    76,    77,    78,
      79,    80,   211,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    83,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   198,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,    26,    84,    27,    85,    28,    29,    30,    86,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   199,   200,   201,     0,   202,   203,   204,
     205,   206,   207,   208,   209,     0,    84,     0,    85,     0,
       0,     0,    86,     0,     0,     0,   126,     0,     0,     0,
       0,     0,    87,    88,    89,    90,    91,    92,     0,    75,
      76,    77,    78,    79,    80,   211,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    83,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    27,    85,     0,
       0,     0,    86,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    87,    88,    89,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    83,    81,    82,   235,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    83,    81,    82,   304,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
      84,   120,    85,     0,     0,    83,    86,     0,   345,   236,
       0,     0,     8,     9,    10,     0,    87,   237,    89,    90,
      91,    92,    84,   120,    85,     0,     0,     0,    86,     0,
       0,   305,     0,     0,     0,     0,     0,     0,    87,   306,
      89,    90,    91,    92,    84,   120,    85,     0,     0,     0,
      86,     0,     0,   346,     0,     0,     0,     0,     0,     0,
      87,   347,    89,    90,    91,    92,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    83,    81,    82,   397,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    83,    81,    82,   402,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    84,   120,    85,     0,     0,    83,    86,
       0,   456,   398,     0,     0,     8,     9,    10,     0,    87,
      88,    89,    90,    91,    92,    84,   120,    85,     0,     0,
       0,    86,     0,     0,   403,     0,     0,     0,     0,     0,
       0,    87,   404,    89,    90,    91,    92,    84,   120,    85,
       0,     0,     0,    86,     0,     0,   457,     0,     0,     0,
       0,     0,     0,    87,    88,    89,    90,    91,    92,    75,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    83,    81,    82,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    83,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,   120,    85,     0,
       0,    83,    86,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    87,    88,    89,    90,    91,    92,    84,     0,
      85,     0,     0,     0,    86,     0,   331,     0,   225,   471,
       0,    83,     0,   332,    87,    88,    89,    90,    91,    92,
      84,     0,    85,     0,     0,     0,    86,     0,   331,     0,
     225,   505,     0,     0,     0,   332,    87,    88,    89,    90,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,    85,     0,     0,     0,    86,     0,   331,     0,
     225,     0,     0,     0,     0,   332,    87,    88,    89,    90,
      91,    92,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      83,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,     0,     0,    83,    86,     0,     0,     0,   225,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    84,     0,    85,     0,     0,     0,    86,     0,     0,
       0,   361,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    84,     0,    85,     0,     0,     0,    86,
     496,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,    89,    90,    91,    92,    75,    76,    77,    78,    79,
      80,     0,    81,    82,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,    75,    76,    77,    78,
      79,    80,    83,    81,    82,    75,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,    83,    85,     0,     0,     0,    86,   498,
       0,    84,     0,    85,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    84,     0,    85,     0,    51,     0,   146,
       0,     0,    84,     0,    85,     0,     0,     0,   254,    87,
      88,    89,    90,    91,    92,     0,     0,     0,    87,    88,
      89,    90,    91,    92,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,     0,    30,
     386,   298,   186,     0,     0,     0,     0,     0,     0,     0,
       1,    53,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,    29,    30,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,   185,   298,   186,     0,     0,     0,     0,     0,
       0,     0,     1,    53,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,    29,    30,     1,     0,
       0,     0,   126,     0,   127,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    29,     1,     0,     0,     0,     0,     0,   241,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,    29,     0,     0,
       0,     0,     0,     1,   349,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,     1,   126,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,     1,   400,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,    26,     0,    27,     0,    28,     0,    30,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,    27,     0,     0,    29,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,   436,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
      27,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-397))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,   129,    48,    48,    50,    50,    60,    32,   114,   187,
      53,   135,    48,    49,    86,    19,    50,    53,    58,   138,
      99,    48,    49,     3,   145,    58,   422,    76,    64,    78,
     320,     3,    76,    33,    34,    80,     3,    76,     3,    39,
      40,    41,    80,    43,    64,    76,    87,     3,     3,     3,
      86,    92,    93,    83,    99,    76,     3,    78,   204,    86,
     233,     3,   186,     3,    77,    80,     3,    48,    49,    99,
      83,   114,    82,     3,   146,    83,    83,   113,    64,   115,
     123,    14,    15,    64,    77,   481,     3,   123,   128,   161,
      83,    99,    99,   133,    98,    86,    76,   143,   143,   135,
     133,   137,   138,   148,   149,    86,   131,    87,    80,   143,
     146,   235,    76,    80,   150,   140,    81,   137,   138,   146,
      76,   240,    76,   150,   414,   415,    81,   113,   249,   115,
      84,    87,   113,    87,   115,    77,    76,   310,    78,    76,
      76,    78,   185,    99,    83,    99,    76,    87,    77,    97,
     186,   137,   138,    76,    83,    78,   137,   138,    96,    76,
      99,    94,    95,    18,    87,   146,    77,    84,   314,   150,
      87,    77,   197,    38,    39,    40,    83,    78,   218,    77,
     304,    82,   254,    77,    85,   185,    77,   311,    77,    83,
      77,    79,    83,   299,   273,    83,    83,   243,   243,   235,
     279,   280,   281,   239,   240,    77,    71,   335,   129,   243,
     388,    83,    82,    77,   135,     9,    10,    11,   254,    83,
     240,    81,    87,    83,    81,   297,    83,   254,   273,    76,
     151,    78,    77,   233,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,     3,   325,   240,    81,   299,    83,   330,   240,
     286,   287,   288,   289,   410,   186,    88,    89,   304,   315,
     315,    77,   308,   254,   299,   311,     6,    81,   402,    83,
     320,   315,    76,     3,    78,   331,   331,    12,    13,    16,
      17,    85,    83,    84,   422,   317,   318,   331,   462,   463,
     282,   283,   290,   291,   225,    84,   342,   353,   353,    84,
     310,   284,   285,    76,   235,     3,    99,    99,   239,   353,
      76,    99,   358,   469,    79,    79,   351,    84,    77,    77,
      83,    77,    77,    83,   388,    77,    79,    77,    79,   411,
     412,    62,     3,   386,    77,   473,   492,   493,   494,   270,
     496,     3,   498,   481,    80,   276,    79,    79,   394,    56,
      99,    79,    77,    79,    77,    79,   402,    79,    79,   515,
     406,   517,    76,    79,    84,    99,   522,   358,    79,    79,
      56,    84,    84,   304,    79,    79,   386,   308,    79,    79,
     311,    60,   464,   465,   466,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    79,    79,    99,   218,   478,
     292,   294,   293,   197,   335,   152,   295,   453,   296,   351,
     137,   342,    70,   446,   345,     3,     4,     5,     6,     7,
       8,   336,    10,    11,   361,    43,    -1,   483,   483,   360,
     361,   218,   478,    -1,    -1,    -1,   446,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,    -1,    -1,   397,    -1,    -1,    -1,
      -1,   402,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,   478,    76,    -1,
      -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   453,    -1,    -1,   456,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,   476,    -1,    -1,   479,    -1,
     481,   482,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,     3,
       4,     5,     6,     7,     8,    99,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    -1,    76,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    31,    10,    11,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    34,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    31,    76,    -1,    34,    79,
      -1,    -1,    38,    39,    40,    -1,    86,    87,    88,    89,
      90,    91,    70,    71,    72,    -1,    -1,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    71,    72,    -1,    -1,    -1,
      76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    31,    10,    11,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,    76,
      -1,    34,    79,    -1,    -1,    38,    39,    40,    -1,    86,
      87,    88,    89,    90,    91,    70,    71,    72,    -1,    -1,
      -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      -1,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    86,    87,    88,    89,    90,    91,    70,    -1,
      72,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    81,
      -1,    31,    -1,    85,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    31,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    31,    72,    -1,    -1,    -1,    76,    77,
      -1,    70,    -1,    72,    -1,    -1,    -1,    76,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,     3,    -1,    76,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    87,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    87,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    30,    -1,
      -1,    -1,    80,    -1,    82,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    30,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    30,    81,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    30,    80,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    -1,    75,    30,    77,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    74,    75,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    69,    -1,    71,    -1,    73,    -1,    75,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    71,    -1,    -1,    74,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   160,   161,   165,   166,   167,   168,   174,   177,   178,
     179,   180,   200,   218,   219,   220,     3,    80,    76,    76,
      76,     3,    76,    87,    99,   101,   162,   164,   181,   182,
     184,   161,   161,     3,    80,   161,   161,   161,     0,   219,
      80,     3,   104,   175,   176,     3,     4,     5,     6,     7,
       8,    10,    11,    31,    70,    72,    76,    86,    87,    88,
      89,    90,    91,   102,   103,   110,   111,   114,   119,   122,
     123,   124,   128,   131,   134,   139,   142,   144,   146,   148,
     150,   152,   159,   166,   171,   178,   192,   192,   159,   181,
      71,   178,   184,   185,    83,    99,    80,    82,   107,   109,
     160,   161,   206,   221,    76,    78,   182,    80,   169,   170,
     171,   200,   175,    82,    81,    83,    76,   119,   120,   121,
      76,    76,   119,   152,   155,   157,   192,     9,    10,    11,
      76,    78,    85,   123,    87,    92,    93,    88,    89,    12,
      13,    14,    15,    94,    95,    16,    17,    86,    96,    97,
      18,    19,    98,    77,   171,    76,    78,   184,   193,   194,
     171,    77,    77,    83,    77,   178,   184,   163,     3,    57,
      58,    59,    61,    62,    63,    64,    65,    66,    67,    68,
      81,    99,   108,   157,   160,   201,   202,   206,   207,   208,
     209,   210,   211,   214,   216,    80,   155,   195,   181,   160,
     206,     3,    77,   183,   191,    34,    79,    87,   155,   185,
     169,    81,   170,    84,    99,   172,   173,   181,    81,    83,
     159,    81,   176,   192,    76,   119,   119,   192,   155,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   109,
     156,    77,    83,    77,     3,   115,   116,   157,     3,   125,
     126,   127,   129,   130,   132,   133,   137,   138,   135,   136,
     140,   141,   143,   145,   147,   149,   151,   153,    77,   161,
     186,   188,   190,   193,    34,    79,    87,   155,   185,   194,
      76,    78,     6,   164,    84,   203,    84,   213,   215,   201,
      76,     3,    99,    99,    99,   217,    99,   108,   208,    76,
     105,    78,    85,   195,   196,   197,   198,   199,   186,    77,
      83,   155,   185,    79,    79,    34,    79,    87,   155,    81,
     159,    83,    99,    84,    81,    77,   192,    77,    83,   155,
     158,    80,   123,    77,   117,   155,    79,   123,   123,   123,
     124,   124,   128,   128,   131,   131,   131,   131,   134,   134,
     139,   142,   144,   146,   148,   157,    76,   181,   184,   193,
      77,    83,    77,   155,   185,    79,    79,    34,    79,   155,
      77,   186,    34,    79,    87,   155,   185,    77,   201,   159,
     205,   105,   105,    62,   160,   209,    99,   157,   157,   159,
       3,    81,    83,   195,    82,   199,    77,     3,    79,   155,
     155,    79,    79,   173,   159,    77,    58,   112,   113,   192,
     155,   196,    77,    83,    84,   187,   189,    79,   155,   155,
      79,    77,   155,   185,    79,    79,    34,    79,   155,    99,
      84,   201,   157,   157,    76,   209,   209,    99,    77,   106,
      79,    81,   195,   197,    79,    79,    84,    77,    83,    84,
      81,    83,   118,   154,    56,   190,    79,    79,    79,   155,
     155,    79,   204,   106,   106,   157,    77,   157,    77,   157,
     201,   195,   155,   113,   155,    81,   155,   152,    79,    79,
     201,   201,   201,    77,   201,    77,   201,    77,    60,    99,
     201,   201,   212,   201
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
#line 36 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar == '(') PRINT("function "); /* function */
	                          else PRINT("$");                       /* var */
	                          PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 43 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar != '(')  PRINT("$");        /* not a function call */
	                          PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 53 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 54 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 63 "c-grammar.y"
    { PRINT("("); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 67 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 79 "c-grammar.y"
    { PRINT("{"); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 83 "c-grammar.y"
    { PRINT("}"); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 87 "c-grammar.y"
    { PRINT("="); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 91 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 112 "c-grammar.y"
    { PRINT("("); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 112 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 113 "c-grammar.y"
    { PRINT("("); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 113 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 116 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 117 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 124 "c-grammar.y"
    { PRINT(","); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 129 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 130 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 138 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 139 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 140 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 141 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 142 "c-grammar.y"
    { PRINT("~"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 143 "c-grammar.y"
    { PRINT("!"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 153 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 154 "c-grammar.y"
    { PRINT("/"); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 155 "c-grammar.y"
    { PRINT("%"); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 160 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 161 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 166 "c-grammar.y"
    { PRINT("<<"); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 167 "c-grammar.y"
    { PRINT(">>"); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 172 "c-grammar.y"
    { PRINT("<"); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 173 "c-grammar.y"
    { PRINT(">"); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 174 "c-grammar.y"
    { PRINT("<="); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 175 "c-grammar.y"
    { PRINT(">="); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 180 "c-grammar.y"
    { PRINT("=="); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 181 "c-grammar.y"
    { PRINT("!="); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 186 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 191 "c-grammar.y"
    { PRINT("^"); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 196 "c-grammar.y"
    { PRINT("|"); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 201 "c-grammar.y"
    { PRINT("&&"); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 206 "c-grammar.y"
    { PRINT("||"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 211 "c-grammar.y"
    { PRINT("?"); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 211 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 221 "c-grammar.y"
    { PRINT("*="); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 222 "c-grammar.y"
    { PRINT("/="); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 223 "c-grammar.y"
    { PRINT("%="); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 224 "c-grammar.y"
    { PRINT("+="); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 225 "c-grammar.y"
    { PRINT("-="); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 226 "c-grammar.y"
    { PRINT("<<="); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 227 "c-grammar.y"
    { PRINT(">>="); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 228 "c-grammar.y"
    { PRINT("&="); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 229 "c-grammar.y"
    { PRINT("^="); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 230 "c-grammar.y"
    { PRINT("|="); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 235 "c-grammar.y"
    { PRINT(","); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 243 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 244 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 263 "c-grammar.y"
    { PRINT(","); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 395 "c-grammar.y"
    { PRINT("("); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 395 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 396 "c-grammar.y"
    { PRINT("()"); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 414 "c-grammar.y"
    { PRINT(","); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 420 "c-grammar.y"
    { PRINT(","); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 511 "c-grammar.y"
    { PRINT("case"); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 511 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 512 "c-grammar.y"
    { PRINT("default:"); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 531 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 532 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 536 "c-grammar.y"
    { PRINT("if"); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 540 "c-grammar.y"
    { PRINT("else"); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 542 "c-grammar.y"
    { PRINT("switch"); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 546 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 556 "c-grammar.y"
    { PRINT("continue;"); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 557 "c-grammar.y"
    { PRINT("break;"); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 558 "c-grammar.y"
    { PRINT("return;"); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 559 "c-grammar.y"
    { PRINT("return "); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 559 "c-grammar.y"
    { PRINT(";"); }
    break;



/* Line 1806 of yacc.c  */
#line 2934 "y.tab.c"
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
#line 581 "c-grammar.y"


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
  		    printf("%d errores detectados\n", errores);
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

