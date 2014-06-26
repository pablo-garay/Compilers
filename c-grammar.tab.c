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
#line 79 "c-grammar.tab.c"

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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 8 "c-grammar.y"

        char *idval;
        char *constval;
        char *strval;
        


/* Line 293 of yacc.c  */
#line 198 "c-grammar.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 210 "c-grammar.tab.c"

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
#define YYLAST   2087

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNRULES -- Number of states.  */
#define YYNSTATES  523

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
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    44,
      46,    50,    54,    58,    60,    65,    66,    71,    72,    78,
      82,    86,    89,    92,    99,   107,   109,   110,   115,   117,
     118,   122,   123,   127,   130,   133,   138,   143,   145,   147,
     149,   151,   153,   155,   157,   162,   164,   165,   170,   171,
     176,   177,   182,   184,   185,   190,   191,   196,   198,   199,
     204,   205,   210,   212,   213,   218,   219,   224,   225,   230,
     231,   236,   238,   239,   244,   245,   250,   252,   253,   258,
     260,   261,   266,   268,   269,   274,   276,   277,   282,   284,
     285,   290,   292,   293,   294,   302,   304,   308,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     333,   338,   340,   343,   347,   349,   352,   354,   357,   359,
     362,   364,   367,   369,   372,   374,   376,   377,   382,   386,
     388,   390,   392,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   437,   443,   446,   448,   450,   452,   455,
     458,   462,   464,   467,   469,   472,   474,   476,   480,   483,
     487,   489,   494,   500,   506,   513,   516,   518,   522,   526,
     528,   533,   535,   537,   539,   541,   543,   545,   550,   555,
     558,   560,   562,   566,   570,   575,   582,   588,   594,   601,
     607,   612,   617,   618,   624,   628,   633,   637,   640,   643,
     645,   647,   650,   651,   656,   658,   660,   661,   666,   669,
     672,   674,   676,   680,   683,   685,   688,   690,   692,   696,
     699,   703,   709,   714,   720,   725,   729,   733,   737,   742,
     749,   755,   761,   768,   773,   778,   781,   785,   789,   794,
     798,   803,   805,   808,   810,   815,   819,   822,   824,   827,
     831,   834,   842,   844,   846,   848,   850,   852,   854,   858,
     859,   860,   867,   868,   873,   876,   880,   882,   885,   887,
     889,   891,   894,   896,   897,   906,   912,   913,   920,   921,
     928,   936,   943,   951,   958,   966,   970,   973,   976,   979,
     980,   985,   987,   990,   992,   994,   999,  1003,  1005
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     217,     0,    -1,     3,    -1,   102,    -1,   109,    -1,    76,
     156,    77,    -1,   110,    -1,     4,    -1,     5,    -1,    31,
      -1,     3,    -1,    76,    -1,    77,    -1,    80,    -1,    81,
      -1,    82,    -1,     6,    -1,     7,    -1,    72,    76,   154,
      83,   111,    77,    -1,   112,    -1,   111,    83,   112,    -1,
     191,    84,   154,    -1,    58,    84,   154,    -1,   101,    -1,
     113,    78,   156,    79,    -1,    -1,   113,    76,   114,    77,
      -1,    -1,   113,    76,   115,   116,    77,    -1,   113,    85,
       3,    -1,   113,     9,     3,    -1,   113,    10,    -1,   113,
      11,    -1,    76,   191,    77,    80,   195,    81,    -1,    76,
     191,    77,    80,   195,    83,    81,    -1,   154,    -1,    -1,
     116,    83,   117,   154,    -1,   113,    -1,    -1,    10,   119,
     118,    -1,    -1,    11,   120,   118,    -1,   121,   122,    -1,
       8,   118,    -1,     8,    76,   191,    77,    -1,    70,    76,
     191,    77,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,   118,    -1,    76,   191,    77,
     122,    -1,   122,    -1,    -1,   123,    87,   124,   122,    -1,
      -1,   123,    92,   125,   122,    -1,    -1,   123,    93,   126,
     122,    -1,   123,    -1,    -1,   127,    88,   128,   123,    -1,
      -1,   127,    89,   129,   123,    -1,   127,    -1,    -1,   130,
      12,   131,   127,    -1,    -1,   130,    13,   132,   127,    -1,
     130,    -1,    -1,   133,    94,   134,   130,    -1,    -1,   133,
      95,   135,   130,    -1,    -1,   133,    14,   136,   130,    -1,
      -1,   133,    15,   137,   130,    -1,   133,    -1,    -1,   138,
      16,   139,   133,    -1,    -1,   138,    17,   140,   133,    -1,
     138,    -1,    -1,   141,    86,   142,   138,    -1,   141,    -1,
      -1,   143,    96,   144,   141,    -1,   143,    -1,    -1,   145,
      97,   146,   143,    -1,   145,    -1,    -1,   147,    18,   148,
     145,    -1,   147,    -1,    -1,   149,    19,   150,   147,    -1,
     149,    -1,    -1,    -1,   149,    98,   152,   156,    84,   153,
     151,    -1,   151,    -1,   118,   155,   154,    -1,   108,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
     154,    -1,    -1,   156,    83,   157,   154,    -1,   151,    -1,
     160,    99,    -1,   160,   161,    99,    -1,   199,    -1,   164,
     160,    -1,   164,    -1,   165,   160,    -1,   165,    -1,   177,
     160,    -1,   177,    -1,   178,   160,    -1,   178,    -1,   179,
     160,    -1,   179,    -1,   163,    -1,    -1,   161,    83,   162,
     163,    -1,   180,   108,   194,    -1,   180,    -1,    32,    -1,
      33,    -1,    34,    -1,    75,    -1,    35,    -1,    36,    -1,
      50,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      48,    -1,    49,    -1,    46,    -1,    47,    -1,    41,    -1,
      51,    -1,    52,    -1,   176,    -1,   166,    -1,   173,    -1,
      30,    -1,   167,    80,   168,    81,    -1,   167,     3,    80,
     168,    81,    -1,   167,     3,    -1,    53,    -1,    54,    -1,
     169,    -1,   168,   169,    -1,   170,    99,    -1,   170,   171,
      99,    -1,   199,    -1,   165,   170,    -1,   165,    -1,   177,
     170,    -1,   177,    -1,   172,    -1,   171,    83,   172,    -1,
      84,   158,    -1,   180,    84,   158,    -1,   180,    -1,    55,
      80,   174,    81,    -1,    55,    80,   174,    83,    81,    -1,
      55,     3,    80,   174,    81,    -1,    55,     3,    80,   174,
      83,    81,    -1,    55,     3,    -1,   175,    -1,   174,    83,
     175,    -1,   103,    82,   158,    -1,   103,    -1,    71,    76,
     191,    77,    -1,    38,    -1,    39,    -1,    40,    -1,    71,
      -1,    37,    -1,    73,    -1,    69,    76,   191,    77,    -1,
      69,    76,   158,    77,    -1,   183,   181,    -1,   181,    -1,
       3,    -1,    76,   180,    77,    -1,   181,    78,    79,    -1,
     181,    78,    87,    79,    -1,   181,    78,    34,   184,   154,
      79,    -1,   181,    78,    34,   154,    79,    -1,   181,    78,
     184,    87,    79,    -1,   181,    78,   184,    34,   154,    79,
      -1,   181,    78,   184,   154,    79,    -1,   181,    78,   184,
      79,    -1,   181,    78,   154,    79,    -1,    -1,   181,    76,
     182,   185,    77,    -1,   181,    76,    77,    -1,   181,    76,
     190,    77,    -1,    87,   184,   183,    -1,    87,   184,    -1,
      87,   183,    -1,    87,    -1,   177,    -1,   184,   177,    -1,
      -1,   187,    83,   186,    56,    -1,   187,    -1,   189,    -1,
      -1,   187,    83,   188,   189,    -1,   160,   180,    -1,   160,
     192,    -1,   160,    -1,     3,    -1,   190,    83,     3,    -1,
     170,   192,    -1,   170,    -1,   183,   193,    -1,   183,    -1,
     193,    -1,    76,   192,    77,    -1,    78,    79,    -1,    78,
      87,    79,    -1,    78,    34,   184,   154,    79,    -1,    78,
      34,   154,    79,    -1,    78,   184,    34,   154,    79,    -1,
      78,   184,   154,    79,    -1,    78,   184,    79,    -1,    78,
     154,    79,    -1,   193,    78,    79,    -1,   193,    78,    87,
      79,    -1,   193,    78,    34,   184,   154,    79,    -1,   193,
      78,    34,   154,    79,    -1,   193,    78,   184,   154,    79,
      -1,   193,    78,   184,    34,   154,    79,    -1,   193,    78,
     184,    79,    -1,   193,    78,   154,    79,    -1,    76,    77,
      -1,    76,   185,    77,    -1,   193,    76,    77,    -1,   193,
      76,   185,    77,    -1,    80,   195,    81,    -1,    80,   195,
      83,    81,    -1,   154,    -1,   196,   194,    -1,   194,    -1,
     195,    83,   196,   194,    -1,   195,    83,   194,    -1,   197,
      82,    -1,   198,    -1,   197,   198,    -1,    78,   158,    79,
      -1,    85,     3,    -1,    74,    76,   158,    83,     6,    77,
      99,    -1,   201,    -1,   205,    -1,   208,    -1,   210,    -1,
     213,    -1,   215,    -1,     3,    84,   200,    -1,    -1,    -1,
      57,   202,   158,    84,   203,   200,    -1,    -1,    58,    84,
     204,   200,    -1,   106,   107,    -1,   106,   206,   107,    -1,
     207,    -1,   206,   207,    -1,   159,    -1,   200,    -1,    99,
      -1,   156,    99,    -1,    59,    -1,    -1,   209,   104,   156,
     105,   200,    60,   211,   200,    -1,   209,   104,   156,   105,
     200,    -1,    -1,    61,   212,   104,   156,   105,   200,    -1,
      -1,    62,   214,   104,   156,   105,   200,    -1,    63,   200,
      62,    76,   156,    77,    99,    -1,    64,    76,   208,   208,
      77,   200,    -1,    64,    76,   208,   208,   156,    77,   200,
      -1,    64,    76,   159,   208,    77,   200,    -1,    64,    76,
     159,   208,   156,    77,   200,    -1,    65,     3,    99,    -1,
      66,    99,    -1,    67,    99,    -1,    68,    99,    -1,    -1,
      68,   216,   156,    99,    -1,   218,    -1,   217,   218,    -1,
     219,    -1,   159,    -1,   160,   180,   220,   205,    -1,   160,
     180,   205,    -1,   159,    -1,   220,   159,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    37,    38,    39,    40,    44,    45,    46,
      50,    54,    58,    70,    74,    78,    82,    83,    87,    91,
      92,    96,    97,   101,   102,   103,   103,   104,   104,   105,
     106,   107,   108,   109,   110,   114,   115,   115,   119,   120,
     120,   121,   121,   122,   123,   124,   125,   129,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   144,   145,   145,
     146,   146,   150,   151,   151,   152,   152,   156,   157,   157,
     158,   158,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   170,   171,   171,   172,   172,   176,   177,   177,   181,
     182,   182,   186,   187,   187,   191,   192,   192,   196,   197,
     197,   201,   202,   202,   202,   206,   207,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   225,   226,
     226,   230,   234,   235,   236,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   253,   254,   254,   258,   259,
     263,   264,   265,   266,   267,   268,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   291,   292,   293,   297,   298,   302,   303,   307,
     308,   309,   313,   314,   315,   316,   320,   321,   325,   326,
     327,   331,   332,   333,   334,   335,   339,   340,   344,   345,
     349,   353,   354,   355,   356,   360,   361,   365,   366,   370,
     371,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   386,   387,   388,   392,   393,   394,   395,
     399,   400,   405,   405,   406,   410,   411,   411,   415,   416,
     417,   421,   422,   426,   427,   431,   432,   433,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   461,
     462,   463,   467,   468,   469,   470,   474,   478,   479,   483,
     484,   488,   492,   493,   494,   495,   496,   497,   501,   502,
     502,   502,   503,   503,   507,   508,   512,   513,   517,   518,
     522,   523,   527,   531,   531,   532,   533,   533,   537,   537,
     538,   539,   540,   541,   542,   546,   547,   548,   549,   550,
     550,   554,   555,   559,   560,   564,   565,   568,   569
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
  "'|'", "'?'", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "left_parenthesis", "right_parenthesis",
  "left_curly", "right_curly", "assign_op", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression", "$@1",
  "$@2", "argument_expression_list", "$@3", "unary_expression", "$@4",
  "$@5", "unary_operator", "cast_expression", "multiplicative_expression",
  "$@6", "$@7", "$@8", "additive_expression", "$@9", "$@10",
  "shift_expression", "$@11", "$@12", "relational_expression", "$@13",
  "$@14", "$@15", "$@16", "equality_expression", "$@17", "$@18",
  "and_expression", "$@19", "exclusive_or_expression", "$@20",
  "inclusive_or_expression", "$@21", "logical_and_expression", "$@22",
  "logical_or_expression", "$@23", "conditional_expression", "$@24",
  "$@25", "assignment_expression", "assignment_operator", "expression",
  "$@26", "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "$@27", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
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
  "block_item_list", "block_item", "expression_statement", "if_token",
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
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   105,   106,   107,   108,   109,   109,   110,   111,
     111,   112,   112,   113,   113,   114,   113,   115,   113,   113,
     113,   113,   113,   113,   113,   116,   117,   116,   118,   119,
     118,   120,   118,   118,   118,   118,   118,   121,   121,   121,
     121,   121,   121,   122,   122,   123,   124,   123,   125,   123,
     126,   123,   127,   128,   127,   129,   127,   130,   131,   130,
     132,   130,   133,   134,   133,   135,   133,   136,   133,   137,
     133,   138,   139,   138,   140,   138,   141,   142,   141,   143,
     144,   143,   145,   146,   145,   147,   148,   147,   149,   150,
     149,   151,   152,   153,   151,   154,   154,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   156,   157,
     156,   158,   159,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   161,   162,   161,   163,   163,
     164,   164,   164,   164,   164,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   169,   170,   170,   170,   170,   171,   171,   172,   172,
     172,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   177,   177,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   181,   181,   181,   183,   183,   183,   183,
     184,   184,   186,   185,   185,   187,   188,   187,   189,   189,
     189,   190,   190,   191,   191,   192,   192,   192,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   194,
     194,   194,   195,   195,   195,   195,   196,   197,   197,   198,
     198,   199,   200,   200,   200,   200,   200,   200,   201,   202,
     203,   201,   204,   201,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   211,   210,   210,   212,   210,   214,   213,
     213,   213,   213,   213,   213,   215,   215,   215,   215,   216,
     215,   217,   217,   218,   218,   219,   219,   220,   220
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     1,
       3,     3,     3,     1,     4,     0,     4,     0,     5,     3,
       3,     2,     2,     6,     7,     1,     0,     4,     1,     0,
       3,     0,     3,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     0,     0,     7,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     0,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     1,     1,     3,     2,     3,
       1,     4,     5,     5,     6,     2,     1,     3,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     3,     3,     4,     6,     5,     5,     6,     5,
       4,     4,     0,     5,     3,     4,     3,     2,     2,     1,
       1,     2,     0,     4,     1,     1,     0,     4,     2,     2,
       1,     1,     3,     2,     1,     2,     1,     1,     3,     2,
       3,     5,     4,     5,     4,     3,     3,     3,     4,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     3,
       4,     1,     2,     1,     4,     3,     2,     1,     2,     3,
       2,     7,     1,     1,     1,     1,     1,     1,     3,     0,
       0,     6,     0,     4,     2,     3,     1,     2,     1,     1,
       1,     2,     1,     0,     8,     5,     0,     6,     0,     6,
       7,     6,     7,     6,     7,     3,     2,     2,     2,     0,
       4,     1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   161,   140,   141,   142,   144,   145,   195,   191,   192,
     193,   155,   147,   148,   149,   150,   153,   154,   151,   152,
     146,   156,   157,   165,   166,     0,     0,   194,   196,     0,
     143,   314,     0,   126,   128,   159,     0,   160,   158,   130,
     132,   134,   124,     0,   311,   313,   185,     0,     0,     0,
       0,   201,     0,   219,   122,     0,   135,   139,   200,     0,
     125,   127,   164,     0,   129,   131,   133,     1,   312,     0,
      10,   189,     0,   186,     2,     7,     8,    16,    17,     0,
      39,    41,     9,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    23,     3,     4,     6,    38,    53,     0,    55,
      62,    67,    72,    81,    86,    89,    92,    95,    98,   101,
     121,     0,   173,   234,   175,     0,     0,     0,     0,   194,
     220,   218,   217,   136,   123,    13,    15,     0,     0,   317,
       0,   316,     0,   212,     0,   199,     0,     0,   167,     0,
     171,     0,     0,   181,     0,     0,    44,     0,     0,     0,
       0,    53,   105,   118,     0,     0,     0,    31,    32,    27,
       0,     0,    43,    56,    58,    60,    63,    65,    68,    70,
      77,    79,    73,    75,    82,    84,    87,    90,    93,    96,
      99,   102,   198,   172,     0,     0,   236,   233,   237,   174,
     197,   190,     0,   202,   221,   216,     0,     2,   279,     0,
     292,   296,   298,     0,     0,     0,     0,     0,   309,    14,
     290,   284,     0,   288,   289,   272,   273,     0,   286,   274,
       0,   275,   276,   277,     0,   261,   138,   139,   318,   315,
     231,   214,     0,     0,     0,   203,    48,     0,     0,     0,
     162,   168,     0,   169,     0,   176,   180,   183,     0,   188,
     182,   187,     0,     0,    40,    42,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   107,     0,
       5,   119,     0,    30,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   230,     0,
     224,   225,     0,     0,   239,    48,     0,     0,   235,     0,
       0,     0,   137,     0,     0,   282,     0,     0,     0,     0,
       0,   306,   307,   308,     0,   291,   285,   287,    11,     0,
       0,     0,   263,     0,     0,     0,   267,     0,   215,     0,
       0,     0,   204,   211,     0,   210,    48,     0,   163,   178,
       0,   170,     0,   184,    45,     0,    46,     0,   106,     0,
       0,    54,    26,     0,    35,    24,    57,    59,    61,    64,
      66,    69,    71,    78,    80,    74,    76,    83,    85,    88,
      91,    94,    97,   100,     0,     0,   228,   236,   229,   256,
     226,   238,     0,     0,   240,   246,     0,   245,     0,   257,
       0,     0,   247,    48,     0,     0,     0,   278,     0,     0,
       0,     0,     0,     0,     0,   305,     0,     0,     0,   270,
     259,     0,   262,   266,   268,   213,   232,   206,     0,     0,
     207,   209,   177,   179,     0,     0,     0,    19,     0,   120,
       0,    28,    36,   103,     0,     0,   242,     0,     0,   244,
     258,     0,     0,   248,   254,     0,   253,     0,   271,   280,
     283,     0,     0,     0,     0,     0,   310,    12,     0,   269,
     260,   265,     0,   205,   208,     0,    18,     0,     0,    33,
       0,     0,     0,   223,   227,   241,   243,   250,     0,     0,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     264,    22,    20,    21,    34,    37,   104,   249,   252,   281,
     297,   299,     0,   303,     0,   301,     0,   293,   300,   304,
     302,     0,   294
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,   329,   468,   127,   211,   128,    94,
      95,   436,   437,    96,   274,   275,   363,   481,   151,   147,
     148,    98,    99,   100,   278,   279,   280,   101,   281,   282,
     102,   283,   284,   103,   287,   288,   285,   286,   104,   289,
     290,   105,   291,   106,   292,   107,   293,   108,   294,   109,
     295,   152,   296,   482,   153,   269,   212,   359,   111,    31,
     130,    55,   196,    56,    33,    34,    35,    36,   137,   138,
     113,   244,   245,    37,    72,    73,    38,    39,    40,    41,
     118,    58,   232,    59,   122,   299,   444,   300,   445,   301,
     233,   438,   302,   188,   332,   333,   334,   335,   336,    42,
     214,   215,   314,   491,   409,   216,   217,   218,   219,   220,
     221,   521,   316,   222,   317,   223,   324,    43,    44,    45,
     132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -401
static const yytype_int16 yypact[] =
{
    1861,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,    41,   -50,   -39,  -401,   -34,
    -401,  -401,    49,  1907,  1907,  -401,    57,  -401,  -401,  1907,
    1907,  1907,  -401,  1523,  -401,  -401,   -51,    45,   729,  2016,
    1374,  -401,    24,   182,  -401,   -53,  -401,  1625,    88,    82,
    -401,  -401,   -19,  1945,  -401,  -401,  -401,  -401,  -401,    45,
    -401,    60,   106,  -401,  -401,  -401,  -401,  -401,  -401,  1396,
    -401,  -401,  -401,    69,    87,   729,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,    83,  -401,  1374,  -401,
      80,   128,   272,    58,   273,   116,   101,   108,   190,    -2,
    -401,   154,  2016,   -40,  2016,   188,   194,   180,   197,  -401,
    -401,  -401,   182,  -401,  -401,  -401,  -401,   468,  1232,  -401,
      49,  -401,  1766,    78,   803,    88,  1945,  1671,  -401,    42,
    -401,   111,  1374,  -401,    28,   729,  -401,  1405,  1405,  2016,
    1374,   387,  -401,  -401,   -26,   227,   304,  -401,  -401,   237,
    1374,   312,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  1569,   825,   151,  -401,   186,  -401,
    -401,  -401,   310,  -401,  -401,  -401,    24,   233,  -401,   234,
    -401,  -401,  -401,   611,   244,   318,   224,   225,   228,  -401,
    -401,  -401,   -21,  -401,  -401,  -401,  -401,   468,  -401,  -401,
     255,  -401,  -401,  -401,  1143,  -401,  -401,   250,  -401,  -401,
    -401,  -401,  1907,   -18,  1069,  -401,   254,   256,   847,  1716,
    -401,  -401,  1374,  -401,    61,  -401,   253,  -401,    50,  -401,
    -401,  -401,   257,   729,  -401,  -401,   261,   258,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  1374,
    -401,  -401,  1254,  -401,   263,  1374,   147,  -401,  1374,  1374,
    1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,
    1374,  1374,  1374,  1374,  1374,  1374,  1374,  -401,    52,   265,
     260,  -401,   269,  1069,  -401,   271,   274,   936,   186,  1815,
     958,   275,  -401,   611,  1374,  -401,   255,   255,   289,   558,
     268,  -401,  -401,  -401,  1374,  -401,  -401,  -401,  -401,  1374,
    1374,   351,  -401,   198,  1232,    93,  -401,   278,  -401,   353,
     283,  1069,  -401,  -401,  1374,  -401,   285,   290,  -401,  -401,
      67,  -401,  1374,  -401,   288,   294,  -401,  1982,  -401,  1374,
    1143,  -401,  -401,     7,  -401,  -401,  -401,  -401,  -401,    80,
      80,   128,   128,   272,   272,   272,   272,    58,    58,   273,
     116,   101,   108,   190,   210,  1467,  -401,    71,  -401,  -401,
     316,  -401,   295,  1069,  -401,  -401,  1374,  -401,   296,  -401,
     299,  1069,  -401,   300,   301,   980,   284,  -401,   303,   611,
    1374,  1374,   297,   655,   655,  -401,    63,   100,   309,  -401,
    -401,  1091,  -401,  -401,  -401,  -401,  -401,  -401,   313,   314,
    -401,  -401,  -401,  -401,   288,   307,   102,  -401,   311,  -401,
     199,  -401,  -401,  -401,   338,  1907,  -401,   317,   319,  -401,
    -401,   320,  1069,  -401,  -401,  1374,  -401,   324,  -401,  -401,
    -401,   100,   100,  1374,  1276,  1365,  -401,  -401,   611,  -401,
    -401,  -401,  1232,  -401,  -401,  1374,  -401,  1982,  1374,  -401,
    1113,  1374,  1374,  -401,  -401,  -401,  -401,  -401,   325,   326,
    -401,   611,   611,   611,   103,   611,   105,   611,   124,   337,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,   321,  -401,   611,  -401,   611,  -401,  -401,  -401,
    -401,   611,  -401
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -401,  -401,  -401,  -401,   -20,  -162,  -401,   201,   270,  -401,
    -401,  -401,   -58,  -401,  -401,  -401,  -401,  -401,   -44,  -401,
    -401,  -401,   -66,    29,  -401,  -401,  -401,    18,  -401,  -401,
     -30,  -401,  -401,    23,  -401,  -401,  -401,  -401,   131,  -401,
    -401,   132,  -401,   130,  -401,   133,  -401,   134,  -401,  -401,
    -401,   -47,  -401,  -401,   -15,  -401,   -63,  -401,   -27,   -41,
       0,  -401,  -401,   229,  -401,    20,  -401,  -401,   292,  -112,
     -48,  -401,    76,  -401,   361,  -136,  -401,   -35,  -401,  -401,
     -22,   -57,  -401,   -46,  -110,  -169,  -401,  -401,  -401,   -13,
    -401,   -29,  -102,  -177,  -123,    73,  -400,  -401,    96,   -14,
    -132,  -401,  -401,  -401,  -401,     1,  -401,   217,  -307,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   393,  -401,
    -401
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -223
static const yytype_int16 yytable[] =
{
      32,   110,   135,   110,    97,   226,    97,   121,   251,   308,
      57,   187,   414,   114,   114,   139,   129,   180,   120,   115,
     116,   472,   154,   117,   238,   241,    48,    51,   114,    69,
     123,    70,   162,    60,    61,   146,   184,    49,   185,    64,
      65,    66,    50,    32,    46,    51,   124,    53,    70,   140,
     114,   270,    51,    70,    97,    51,   155,   271,   131,   338,
      62,   136,   271,   337,   183,   339,   189,   186,   112,   112,
      51,   318,   170,   171,    51,   307,   195,   114,   325,   114,
     472,   230,   154,   112,   441,    51,   213,   194,   139,   139,
     442,   228,   156,   157,   158,   110,   181,   276,    97,   120,
      52,   114,   114,   254,   255,   112,   464,   465,   227,   250,
     114,    53,   251,   225,   114,   249,   252,   246,    52,   237,
     256,    47,   140,   140,   341,    52,   242,   241,   385,    53,
     185,   353,   112,   229,   112,   257,    53,    63,   186,    53,
     400,   243,   142,    52,   350,   149,   271,   385,    54,   185,
     120,   242,   172,   173,    53,   231,   112,   112,    52,   159,
     351,   160,   466,   150,   133,   112,   134,   163,   161,   112,
     306,   330,   164,   165,   227,   423,   213,   467,   331,   476,
     512,   407,   514,   271,   298,   477,   271,   143,   271,   144,
     154,   139,   247,   393,   248,   110,   388,   177,    97,   120,
     405,   516,   176,   194,   114,   178,   361,   271,   179,   225,
     308,   422,   366,   367,   368,   349,   166,   167,   114,   340,
       8,     9,    10,   347,   355,   140,   365,   184,    97,   185,
     271,   182,   298,   384,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,   387,   119,   358,   373,   374,   375,   376,   112,
     364,   416,   309,   192,   310,   190,   417,   110,   120,    53,
      97,   191,   194,   112,   193,   120,   386,   460,   413,   420,
     479,   421,   480,   110,   168,   169,    97,   408,   392,   174,
     175,   452,   398,   271,   443,   404,   410,   411,   471,   492,
     493,   371,   372,   418,   272,   110,   194,   273,    97,   298,
     369,   370,   377,   378,   -25,   277,   311,   313,   315,   225,
     319,   320,   114,   321,   322,   433,   428,   323,   246,   429,
     135,   328,   126,   342,   354,   343,   499,   352,   356,   387,
     362,   357,   389,   390,   439,   225,   391,   461,   462,   500,
     394,   412,   406,   395,   419,   425,   426,   471,   194,   509,
     510,   511,   427,   513,   430,   515,   120,   415,   360,   431,
     194,   434,  -222,   463,   446,   449,   450,   112,   447,   453,
     454,   448,   519,   458,   520,   298,   451,   459,   469,   522,
     457,   475,   473,   474,   483,   478,   485,   517,   486,   487,
     494,   496,   498,   490,   507,   508,   225,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   194,   326,   502,
     518,   268,   379,   381,   380,   312,   432,   382,   239,   383,
     141,   424,   484,   440,   327,   506,    68,   488,    97,     0,
     489,     0,   114,     0,     0,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,     0,
     501,     0,     0,   503,     0,   225,   505,     0,     0,   126,
       0,   197,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   198,   199,   200,     0,   201,
     202,   203,   204,   205,   206,   207,   208,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,   125,   209,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    74,    75,    76,    77,    78,    79,   210,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,    82,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   197,    75,    76,    77,    78,    79,
       0,    80,    81,     0,     0,     0,     0,    26,    83,    27,
      84,    28,    29,    30,    85,     0,     0,     0,     0,     0,
       0,     0,    82,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,   210,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,   198,   199,
     200,     0,   201,   202,   203,   204,   205,   206,   207,   208,
       0,    83,     0,    84,     0,     0,    82,    85,     0,     0,
       0,   125,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,    84,     0,     0,
       0,    85,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     1,
      82,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
      27,    84,     0,     0,     0,    85,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    82,    80,    81,   234,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,    78,    79,    82,    80,    81,   303,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    83,   119,    84,     0,     0,    82,    85,
       0,   344,   235,     0,     0,     8,     9,    10,     0,    86,
     236,    88,    89,    90,    91,    83,   119,    84,     0,     0,
       0,    85,     0,     0,   304,     0,     0,     0,     0,     0,
       0,    86,   305,    88,    89,    90,    91,    83,   119,    84,
       0,     0,     0,    85,     0,     0,   345,     0,     0,     0,
       0,     0,     0,    86,   346,    88,    89,    90,    91,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,    78,    79,    82,    80,    81,
     396,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    82,
      80,    81,   401,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,    83,   119,    84,     0,
       0,    82,    85,     0,   455,   397,     0,     0,     8,     9,
      10,     0,    86,    87,    88,    89,    90,    91,    83,   119,
      84,     0,     0,     0,    85,     0,     0,   402,     0,     0,
       0,     0,     0,     0,    86,   403,    88,    89,    90,    91,
      83,   119,    84,     0,     0,     0,    85,     0,     0,   456,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
      82,    80,    81,     0,     0,     0,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    82,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
     119,    84,     0,     0,    82,    85,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    86,    87,    88,    89,    90,
      91,    83,     0,    84,     0,     0,     0,    85,     0,   330,
       0,   224,   470,     0,    82,     0,   331,    86,    87,    88,
      89,    90,    91,    83,     0,    84,     0,     0,     0,    85,
       0,   330,     0,   224,   504,     0,     0,     0,   331,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,    84,     0,     0,     0,    85,
       0,   330,     0,   224,     0,     0,     0,     0,   331,    86,
      87,    88,    89,    90,    91,    74,    75,    76,    77,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,    75,    76,
      77,    78,    79,    82,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    84,     0,     0,    82,    85,     0,
       0,     0,   224,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,    83,     0,    84,     0,     0,     0,
      85,     0,     0,     0,   360,     0,     0,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    83,     0,    84,     0,
       0,     0,    85,   495,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,    74,    75,
      76,    77,    78,    79,     0,    80,    81,    74,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    74,
      75,    76,    77,    78,    79,    82,    80,    81,    74,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,    83,    82,    84,     0,     0,
       0,    85,   497,     0,    83,     0,    84,     0,     0,     0,
      85,    86,    87,    88,    89,    90,    91,     0,     0,     0,
      86,    87,    88,    89,    90,    91,    83,     0,    84,     0,
      51,     0,   145,     0,     0,    83,     0,    84,     0,     0,
       0,   253,    86,    87,    88,    89,    90,    91,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,   385,   297,   185,     0,     0,     0,     0,
       0,     0,     0,     1,    53,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   184,   297,   185,     0,     0,
       0,     0,     0,     0,     0,     1,    53,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     1,     0,     0,     0,   125,     0,   126,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,    29,     1,     0,     0,     0,
       0,     0,   240,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
      29,     0,     0,     0,     0,     0,     1,   348,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,    30,     0,     0,     0,     1,   125,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,     1,   399,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    26,     0,    27,     0,
      28,     0,    30,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,    27,     0,     0,    29,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     435,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,    27,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-401))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    48,    59,    50,    48,   128,    50,    53,   144,   186,
      32,   113,   319,    48,    49,    63,    57,    19,    53,    48,
      49,   421,    85,    50,   134,   137,    76,     3,    63,    80,
      83,     3,    98,    33,    34,    79,    76,    76,    78,    39,
      40,    41,    76,    43,     3,     3,    99,    87,     3,    63,
      85,    77,     3,     3,    98,     3,    85,    83,    57,    77,
       3,    80,    83,   232,   112,    83,   114,   113,    48,    49,
       3,   203,    14,    15,     3,   185,   122,   112,    99,   114,
     480,     3,   145,    63,    77,     3,   127,   122,   136,   137,
      83,   132,     9,    10,    11,   142,    98,   160,   142,   134,
      76,   136,   137,   147,   148,    85,   413,   414,   130,    81,
     145,    87,   248,   128,   149,   142,   145,   139,    76,   134,
     149,    80,   136,   137,   234,    76,    84,   239,    76,    87,
      78,    81,   112,   132,   114,   150,    87,    80,   184,    87,
     309,    99,    82,    76,    83,    76,    83,    76,    99,    78,
     185,    84,    94,    95,    87,    77,   136,   137,    76,    76,
      99,    78,    99,    76,    76,   145,    78,    87,    85,   149,
     185,    78,    92,    93,   196,    82,   217,    77,    85,    77,
      77,   313,    77,    83,   184,    83,    83,    81,    83,    83,
     253,   239,    81,   303,    83,   242,   298,    96,   242,   234,
     310,    77,    86,   238,   239,    97,   272,    83,    18,   224,
     387,   334,   278,   279,   280,   242,    88,    89,   253,   234,
      38,    39,    40,   238,   253,   239,    79,    76,   272,    78,
      83,    77,   232,   296,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   298,    71,   269,   285,   286,   287,   288,   239,
     275,   324,    76,    83,    78,    77,   329,   314,   303,    87,
     314,    77,   307,   253,    77,   310,   298,   409,   319,    81,
      81,    83,    83,   330,    12,    13,   330,   314,   303,    16,
      17,   401,   307,    83,    84,   310,   316,   317,   421,   461,
     462,   283,   284,   330,    77,   352,   341,     3,   352,   309,
     281,   282,   289,   290,    77,     3,     6,    84,    84,   334,
      76,     3,   357,    99,    99,   352,   341,    99,   350,   344,
     387,    76,    82,    79,    77,    79,   468,    84,    77,   385,
      77,    83,    77,    83,   359,   360,    77,   410,   411,   472,
      79,    62,    77,    79,     3,    77,     3,   480,   393,   491,
     492,   493,    79,   495,    79,   497,   401,    99,    80,    79,
     405,    77,    56,    76,    79,    79,    77,   357,   393,    79,
      79,   396,   514,    99,   516,   385,   401,    84,    79,   521,
     405,    84,    79,    79,    56,    84,    79,    60,    79,    79,
     463,   464,   465,    79,    79,    79,   421,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   452,   217,   477,
      99,   151,   291,   293,   292,   196,   350,   294,   136,   295,
      69,   335,   445,   360,   217,   482,    43,   452,   482,    -1,
     455,    -1,   477,    -1,    -1,   445,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
     475,    -1,    -1,   478,    -1,   480,   481,    -1,    -1,    82,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,     3,     4,     5,     6,     7,     8,    99,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    76,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
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
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    -1,
      -1,    31,    76,    -1,    34,    79,    -1,    -1,    38,    39,
      40,    -1,    86,    87,    88,    89,    90,    91,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    31,    76,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    81,    -1,    31,    -1,    85,    86,    87,    88,
      89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    31,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    -1,    31,    76,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    70,    -1,    72,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    31,    72,    -1,    -1,
      -1,    76,    77,    -1,    70,    -1,    72,    -1,    -1,    -1,
      76,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    70,    -1,    72,    -1,
       3,    -1,    76,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    76,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    -1,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    87,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    87,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    30,    -1,    -1,    -1,    80,    -1,    82,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    74,    30,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    30,    81,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    30,    80,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,
      75,    30,    77,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    73,    74,    75,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    69,    -1,    71,    -1,
      73,    -1,    75,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    71,    -1,    -1,    74,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    69,    71,    73,    74,
      75,   159,   160,   164,   165,   166,   167,   173,   176,   177,
     178,   179,   199,   217,   218,   219,     3,    80,    76,    76,
      76,     3,    76,    87,    99,   161,   163,   180,   181,   183,
     160,   160,     3,    80,   160,   160,   160,     0,   218,    80,
       3,   103,   174,   175,     3,     4,     5,     6,     7,     8,
      10,    11,    31,    70,    72,    76,    86,    87,    88,    89,
      90,    91,   101,   102,   109,   110,   113,   118,   121,   122,
     123,   127,   130,   133,   138,   141,   143,   145,   147,   149,
     151,   158,   165,   170,   177,   191,   191,   158,   180,    71,
     177,   183,   184,    83,    99,    80,    82,   106,   108,   159,
     160,   205,   220,    76,    78,   181,    80,   168,   169,   170,
     199,   174,    82,    81,    83,    76,   118,   119,   120,    76,
      76,   118,   151,   154,   156,   191,     9,    10,    11,    76,
      78,    85,   122,    87,    92,    93,    88,    89,    12,    13,
      14,    15,    94,    95,    16,    17,    86,    96,    97,    18,
      19,    98,    77,   170,    76,    78,   183,   192,   193,   170,
      77,    77,    83,    77,   177,   183,   162,     3,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    81,
      99,   107,   156,   159,   200,   201,   205,   206,   207,   208,
     209,   210,   213,   215,    80,   154,   194,   180,   159,   205,
       3,    77,   182,   190,    34,    79,    87,   154,   184,   168,
      81,   169,    84,    99,   171,   172,   180,    81,    83,   158,
      81,   175,   191,    76,   118,   118,   191,   154,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   108,   155,
      77,    83,    77,     3,   114,   115,   156,     3,   124,   125,
     126,   128,   129,   131,   132,   136,   137,   134,   135,   139,
     140,   142,   144,   146,   148,   150,   152,    77,   160,   185,
     187,   189,   192,    34,    79,    87,   154,   184,   193,    76,
      78,     6,   163,    84,   202,    84,   212,   214,   200,    76,
       3,    99,    99,    99,   216,    99,   107,   207,    76,   104,
      78,    85,   194,   195,   196,   197,   198,   185,    77,    83,
     154,   184,    79,    79,    34,    79,    87,   154,    81,   158,
      83,    99,    84,    81,    77,   191,    77,    83,   154,   157,
      80,   122,    77,   116,   154,    79,   122,   122,   122,   123,
     123,   127,   127,   130,   130,   130,   130,   133,   133,   138,
     141,   143,   145,   147,   156,    76,   180,   183,   192,    77,
      83,    77,   154,   184,    79,    79,    34,    79,   154,    77,
     185,    34,    79,    87,   154,   184,    77,   200,   158,   204,
     104,   104,    62,   159,   208,    99,   156,   156,   158,     3,
      81,    83,   194,    82,   198,    77,     3,    79,   154,   154,
      79,    79,   172,   158,    77,    58,   111,   112,   191,   154,
     195,    77,    83,    84,   186,   188,    79,   154,   154,    79,
      77,   154,   184,    79,    79,    34,    79,   154,    99,    84,
     200,   156,   156,    76,   208,   208,    99,    77,   105,    79,
      81,   194,   196,    79,    79,    84,    77,    83,    84,    81,
      83,   117,   153,    56,   189,    79,    79,    79,   154,   154,
      79,   203,   105,   105,   156,    77,   156,    77,   156,   200,
     194,   154,   112,   154,    81,   154,   151,    79,    79,   200,
     200,   200,    77,   200,    77,   200,    77,    60,    99,   200,
     200,   211,   200
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
    { PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 44 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 45 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 54 "c-grammar.y"
    { PRINT("("); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 58 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 70 "c-grammar.y"
    { PRINT("{"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 74 "c-grammar.y"
    { PRINT("}"); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 78 "c-grammar.y"
    { PRINT("="); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 82 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 103 "c-grammar.y"
    { PRINT("("); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 103 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 104 "c-grammar.y"
    { PRINT("("); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 104 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 107 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 108 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 115 "c-grammar.y"
    { PRINT(","); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 120 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 121 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 129 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 130 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 131 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 132 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 133 "c-grammar.y"
    { PRINT("~"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 134 "c-grammar.y"
    { PRINT("!"); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 144 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 145 "c-grammar.y"
    { PRINT("/"); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 146 "c-grammar.y"
    { PRINT("%"); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 151 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 152 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 157 "c-grammar.y"
    { PRINT("<<"); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 158 "c-grammar.y"
    { PRINT(">>"); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 163 "c-grammar.y"
    { PRINT("<"); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 164 "c-grammar.y"
    { PRINT(">"); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 165 "c-grammar.y"
    { PRINT("<="); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 166 "c-grammar.y"
    { PRINT(">="); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 171 "c-grammar.y"
    { PRINT("=="); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 172 "c-grammar.y"
    { PRINT("!="); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 177 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 182 "c-grammar.y"
    { PRINT("^"); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 187 "c-grammar.y"
    { PRINT("|"); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 192 "c-grammar.y"
    { PRINT("&&"); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 197 "c-grammar.y"
    { PRINT("||"); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 202 "c-grammar.y"
    { PRINT("?"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 202 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 212 "c-grammar.y"
    { PRINT("*="); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 213 "c-grammar.y"
    { PRINT("/="); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 214 "c-grammar.y"
    { PRINT("%="); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 215 "c-grammar.y"
    { PRINT("+="); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 216 "c-grammar.y"
    { PRINT("-="); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 217 "c-grammar.y"
    { PRINT("<<="); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 218 "c-grammar.y"
    { PRINT(">>="); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 219 "c-grammar.y"
    { PRINT("&="); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 220 "c-grammar.y"
    { PRINT("^="); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 221 "c-grammar.y"
    { PRINT("|="); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 226 "c-grammar.y"
    { PRINT(","); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 234 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 235 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 254 "c-grammar.y"
    { PRINT(","); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 375 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 386 "c-grammar.y"
    { PRINT("function ("); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 386 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 387 "c-grammar.y"
    { PRINT("function ()"); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 405 "c-grammar.y"
    { PRINT(","); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 411 "c-grammar.y"
    { PRINT(","); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 502 "c-grammar.y"
    { PRINT("case"); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 502 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 503 "c-grammar.y"
    { PRINT("default:"); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 522 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 523 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 527 "c-grammar.y"
    { PRINT("if"); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 531 "c-grammar.y"
    { PRINT("else"); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 533 "c-grammar.y"
    { PRINT("switch"); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 537 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 547 "c-grammar.y"
    { PRINT("continue;"); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 548 "c-grammar.y"
    { PRINT("break;"); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 549 "c-grammar.y"
    { PRINT("return;"); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 550 "c-grammar.y"
    { PRINT("return "); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 550 "c-grammar.y"
    { PRINT(";"); }
    break;



/* Line 1806 of yacc.c  */
#line 2845 "c-grammar.tab.c"
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
#line 572 "c-grammar.y"


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

