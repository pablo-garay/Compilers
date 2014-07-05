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
	
	void yyerror (const char *);
	char *yytext;
	
	void begin_local_scope();
	void end_local_scope();
	void check_function_redefinition(char *name);
	void check_function_declared(char *name);
	void check_var_declared(char *name);
	void check_var_redefinition(char *name);
  	
    int print_enabled = TRUE;
  	short int errores = 0;		


/* Line 268 of yacc.c  */
#line 91 "y.tab.c"

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
#line 20 "c-grammar.y"

        char *idval;
        char *constval;
        char *strval;
        


/* Line 293 of yacc.c  */
#line 285 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 46 "c-grammar.y"

    /* typedef enum { LOCAL, GLOBAL } scope_type; */
    /* scope_type scope;                          */
  	int global_type_specifier = INT;
  	hash_table_type global_symbol_table, current_scope_symbol_table, functions_symbol_table;	


/* Line 343 of yacc.c  */
#line 305 "y.tab.c"

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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNRULES -- Number of states.  */
#define YYNSTATES  531

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
      46,    50,    54,    58,    60,    61,    67,    68,    73,    74,
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
     603,   609,   614,   615,   621,   622,   628,   632,   637,   641,
     644,   647,   649,   651,   654,   655,   660,   662,   664,   665,
     670,   673,   676,   678,   680,   684,   687,   689,   692,   694,
     696,   700,   703,   707,   713,   718,   724,   729,   733,   737,
     741,   746,   753,   759,   765,   772,   777,   782,   785,   789,
     793,   798,   799,   805,   807,   808,   810,   813,   815,   820,
     821,   826,   829,   831,   834,   838,   841,   849,   851,   853,
     855,   857,   859,   861,   865,   866,   867,   874,   875,   880,
     883,   887,   889,   892,   895,   897,   899,   901,   904,   906,
     907,   916,   922,   923,   930,   931,   938,   946,   953,   961,
     968,   976,   980,   983,   986,   989,   990,   995,   997,  1000,
    1003,  1005,  1007,  1012,  1016,  1018
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     222,     0,    -1,     3,    -1,   102,    -1,   109,    -1,    76,
     157,    77,    -1,   110,    -1,     4,    -1,     5,    -1,    31,
      -1,     3,    -1,    76,    -1,    77,    -1,    80,    -1,    81,
      -1,    82,    -1,     6,    -1,     7,    -1,    72,    76,   155,
      83,   111,    77,    -1,   112,    -1,   111,    83,   112,    -1,
     193,    84,   155,    -1,    58,    84,   155,    -1,   101,    -1,
      -1,   113,    78,   114,   157,    79,    -1,    -1,   113,    76,
     115,    77,    -1,    -1,   113,    76,   116,   117,    77,    -1,
     113,    85,     3,    -1,   113,     9,     3,    -1,   113,    10,
      -1,   113,    11,    -1,    76,   193,    77,    80,   199,    81,
      -1,    76,   193,    77,    80,   199,    83,    81,    -1,   155,
      -1,    -1,   117,    83,   118,   155,    -1,   113,    -1,    -1,
      10,   120,   119,    -1,    -1,    11,   121,   119,    -1,   122,
     123,    -1,     8,   119,    -1,     8,    76,   193,    77,    -1,
      70,    76,   193,    77,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,   119,    -1,    76,
     193,    77,   123,    -1,   123,    -1,    -1,   124,    87,   125,
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
     108,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,   155,    -1,    -1,   157,    83,   158,   155,    -1,
     152,    -1,   161,    99,    -1,   161,   162,    99,    -1,   204,
      -1,   165,   161,    -1,   165,    -1,   166,   161,    -1,   166,
      -1,   178,   161,    -1,   178,    -1,   179,   161,    -1,   179,
      -1,   180,   161,    -1,   180,    -1,   164,    -1,    -1,   162,
      83,   163,   164,    -1,   181,   108,   196,    -1,   181,    -1,
      32,    -1,    33,    -1,    34,    -1,    75,    -1,    35,    -1,
      36,    -1,    50,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    48,    -1,    49,    -1,    46,    -1,    47,    -1,
      41,    -1,    51,    -1,    52,    -1,   177,    -1,   167,    -1,
     174,    -1,    30,    -1,   168,    80,   169,    81,    -1,   168,
       3,    80,   169,    81,    -1,   168,     3,    -1,    53,    -1,
      54,    -1,   170,    -1,   169,   170,    -1,   171,    99,    -1,
     171,   172,    99,    -1,   204,    -1,   166,   171,    -1,   166,
      -1,   178,   171,    -1,   178,    -1,   173,    -1,   172,    83,
     173,    -1,    84,   159,    -1,   181,    84,   159,    -1,   181,
      -1,    55,    80,   175,    81,    -1,    55,    80,   175,    83,
      81,    -1,    55,     3,    80,   175,    81,    -1,    55,     3,
      80,   175,    83,    81,    -1,    55,     3,    -1,   176,    -1,
     175,    83,   176,    -1,   103,    82,   159,    -1,   103,    -1,
      71,    76,   193,    77,    -1,    38,    -1,    39,    -1,    40,
      -1,    71,    -1,    37,    -1,    73,    -1,    69,    76,   193,
      77,    -1,    69,    76,   159,    77,    -1,   185,   182,    -1,
     182,    -1,     3,    -1,    76,   181,    77,    -1,   182,    78,
      79,    -1,   182,    78,    87,    79,    -1,   182,    78,    34,
     186,   155,    79,    -1,   182,    78,    34,   155,    79,    -1,
     182,    78,   186,    87,    79,    -1,   182,    78,   186,    34,
     155,    79,    -1,   182,    78,   186,   155,    79,    -1,   182,
      78,   186,    79,    -1,    -1,   182,    78,   183,   155,    79,
      -1,    -1,   182,    76,   184,   187,    77,    -1,   182,    76,
      77,    -1,   182,    76,   192,    77,    -1,    87,   186,   185,
      -1,    87,   186,    -1,    87,   185,    -1,    87,    -1,   178,
      -1,   186,   178,    -1,    -1,   189,    83,   188,    56,    -1,
     189,    -1,   191,    -1,    -1,   189,    83,   190,   191,    -1,
     161,   181,    -1,   161,   194,    -1,   161,    -1,     3,    -1,
     192,    83,     3,    -1,   171,   194,    -1,   171,    -1,   185,
     195,    -1,   185,    -1,   195,    -1,    76,   194,    77,    -1,
      78,    79,    -1,    78,    87,    79,    -1,    78,    34,   186,
     155,    79,    -1,    78,    34,   155,    79,    -1,    78,   186,
      34,   155,    79,    -1,    78,   186,   155,    79,    -1,    78,
     186,    79,    -1,    78,   155,    79,    -1,   195,    78,    79,
      -1,   195,    78,    87,    79,    -1,   195,    78,    34,   186,
     155,    79,    -1,   195,    78,    34,   155,    79,    -1,   195,
      78,   186,   155,    79,    -1,   195,    78,   186,    34,   155,
      79,    -1,   195,    78,   186,    79,    -1,   195,    78,   155,
      79,    -1,    76,    77,    -1,    76,   187,    77,    -1,   195,
      76,    77,    -1,   195,    76,   187,    77,    -1,    -1,    80,
     197,   199,   198,    81,    -1,   155,    -1,    -1,    83,    -1,
     201,   196,    -1,   196,    -1,   199,    83,   201,   196,    -1,
      -1,   199,    83,   200,   196,    -1,   202,    82,    -1,   203,
      -1,   202,   203,    -1,    78,   159,    79,    -1,    85,     3,
      -1,    74,    76,   159,    83,     6,    77,    99,    -1,   206,
      -1,   210,    -1,   213,    -1,   215,    -1,   218,    -1,   220,
      -1,     3,    84,   205,    -1,    -1,    -1,    57,   207,   159,
      84,   208,   205,    -1,    -1,    58,    84,   209,   205,    -1,
     106,   107,    -1,   106,   211,   107,    -1,   212,    -1,   211,
     212,    -1,     1,   212,    -1,   160,    -1,   205,    -1,    99,
      -1,   157,    99,    -1,    59,    -1,    -1,   214,   104,   157,
     105,   205,    60,   216,   205,    -1,   214,   104,   157,   105,
     205,    -1,    -1,    61,   217,   104,   157,   105,   205,    -1,
      -1,    62,   219,   104,   157,   105,   205,    -1,    63,   205,
      62,    76,   157,    77,    99,    -1,    64,    76,   213,   213,
      77,   205,    -1,    64,    76,   213,   213,   157,    77,   205,
      -1,    64,    76,   160,   213,    77,   205,    -1,    64,    76,
     160,   213,   157,    77,   205,    -1,    65,     3,    99,    -1,
      66,    99,    -1,    67,    99,    -1,    68,    99,    -1,    -1,
      68,   221,   157,    99,    -1,   223,    -1,   222,   223,    -1,
       1,   223,    -1,   224,    -1,   160,    -1,   161,   181,   225,
     210,    -1,   161,   181,   210,    -1,   160,    -1,   225,   160,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    65,    66,    67,    68,    72,    73,    74,
      78,    82,    86,    98,   102,   106,   110,   111,   115,   119,
     120,   124,   125,   129,   130,   130,   131,   131,   132,   132,
     133,   134,   135,   136,   137,   138,   142,   143,   143,   147,
     148,   148,   149,   149,   150,   151,   152,   153,   157,   158,
     159,   160,   161,   162,   166,   167,   171,   172,   172,   173,
     173,   174,   174,   178,   179,   179,   180,   180,   184,   185,
     185,   186,   186,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   198,   199,   199,   200,   200,   204,   205,   205,
     209,   210,   210,   214,   215,   215,   219,   220,   220,   224,
     225,   225,   229,   230,   230,   230,   234,   235,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   253,
     254,   254,   258,   262,   263,   264,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   281,   282,   282,   286,
     287,   291,   292,   293,   294,   295,   296,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   319,   320,   321,   325,   326,   330,   331,
     335,   336,   337,   341,   342,   343,   344,   348,   349,   353,
     354,   355,   359,   360,   361,   362,   363,   367,   368,   372,
     373,   377,   381,   382,   383,   384,   388,   389,   393,   394,
     398,   399,   403,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   427,   428,   428,   429,   430,   434,   435,
     436,   437,   441,   442,   447,   447,   448,   452,   453,   453,
     457,   458,   459,   463,   464,   468,   469,   473,   474,   475,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   503,   503,   504,   507,   509,   513,   514,   515,   516,
     516,   520,   524,   525,   529,   530,   534,   538,   539,   540,
     541,   542,   543,   547,   548,   548,   548,   549,   549,   553,
     554,   558,   559,   560,   564,   565,   569,   570,   574,   578,
     578,   579,   580,   580,   584,   584,   585,   586,   587,   588,
     589,   593,   594,   595,   596,   597,   597,   601,   602,   603,
     607,   608,   612,   613,   616,   617
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
  "$@2", "$@3", "argument_expression_list", "$@4", "unary_expression",
  "$@5", "$@6", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@7", "$@8", "$@9", "additive_expression",
  "$@10", "$@11", "shift_expression", "$@12", "$@13",
  "relational_expression", "$@14", "$@15", "$@16", "$@17",
  "equality_expression", "$@18", "$@19", "and_expression", "$@20",
  "exclusive_or_expression", "$@21", "inclusive_or_expression", "$@22",
  "logical_and_expression", "$@23", "logical_or_expression", "$@24",
  "conditional_expression", "$@25", "$@26", "assignment_expression",
  "assignment_operator", "expression", "$@27", "constant_expression",
  "declaration", "declaration_specifiers", "init_declarator_list", "$@28",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "$@29", "$@30",
  "pointer", "type_qualifier_list", "parameter_type_list", "$@31",
  "parameter_list", "$@32", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "$@33", "maybe_comma", "initializer_list", "$@34",
  "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement", "$@35",
  "$@36", "$@37", "compound_statement", "block_item_list", "block_item",
  "expression_statement", "if", "selection_statement", "$@38", "$@39",
  "iteration_statement", "$@40", "jump_statement", "$@41",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
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
     111,   112,   112,   113,   114,   113,   115,   113,   116,   113,
     113,   113,   113,   113,   113,   113,   117,   118,   117,   119,
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
     182,   182,   183,   182,   184,   182,   182,   182,   185,   185,
     185,   185,   186,   186,   188,   187,   187,   189,   190,   189,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   197,   196,   196,   198,   198,   199,   199,   199,   200,
     199,   201,   202,   202,   203,   203,   204,   205,   205,   205,
     205,   205,   205,   206,   207,   208,   206,   209,   206,   210,
     210,   211,   211,   211,   212,   212,   213,   213,   214,   216,
     215,   215,   217,   215,   219,   218,   218,   218,   218,   218,
     218,   220,   220,   220,   220,   221,   220,   222,   222,   222,
     223,   223,   224,   224,   225,   225
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     1,
       3,     3,     3,     1,     0,     5,     0,     4,     0,     5,
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
       5,     4,     0,     5,     0,     5,     3,     4,     3,     2,
       2,     1,     1,     2,     0,     4,     1,     1,     0,     4,
       2,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     5,     4,     5,     4,     3,     3,     3,
       4,     6,     5,     5,     6,     4,     4,     2,     3,     3,
       4,     0,     5,     1,     0,     1,     2,     1,     4,     0,
       4,     2,     1,     2,     3,     2,     7,     1,     1,     1,
       1,     1,     1,     3,     0,     0,     6,     0,     4,     2,
       3,     1,     2,     2,     1,     1,     1,     2,     1,     0,
       8,     5,     0,     6,     0,     6,     7,     6,     7,     6,
       7,     3,     2,     2,     2,     0,     4,     1,     2,     2,
       1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   162,   141,   142,   143,   145,   146,   196,   192,
     193,   194,   156,   148,   149,   150,   151,   154,   155,   152,
     153,   147,   157,   158,   166,   167,     0,     0,   195,   197,
       0,   144,   321,     0,   127,   129,   160,     0,   161,   159,
     131,   133,   135,   125,     0,   317,   320,   319,   186,     0,
       0,     0,     0,   202,     0,   221,   123,     0,   136,   140,
     201,     0,   126,   128,   165,     0,   130,   132,   134,     1,
     318,     0,    10,   190,     0,   187,     2,     7,     8,    16,
      17,     0,    40,    42,     9,     0,     0,     0,    48,    49,
      50,    51,    52,    53,    23,     3,     4,     6,    39,    54,
       0,    56,    63,    68,    73,    82,    87,    90,    93,    96,
      99,   102,   122,     0,   174,   236,   176,     0,     0,     0,
       0,   195,   222,   220,   219,   137,   124,    13,    15,     0,
       0,   324,     0,   323,     0,   214,   212,   200,     0,     0,
     168,     0,   172,     0,     0,   182,     0,     0,    45,     0,
       0,     0,     0,    54,   106,   119,     0,     0,     0,    32,
      33,    28,    24,     0,    44,    57,    59,    61,    64,    66,
      69,    71,    78,    80,    74,    76,    83,    85,    88,    91,
      94,    97,   100,   103,   199,   173,     0,     0,   238,   235,
     239,   175,   198,   191,     0,   203,   223,   218,     0,     0,
       2,   284,     0,   298,   302,   304,     0,     0,     0,     0,
       0,   315,    14,   296,   289,     0,   294,   295,   277,   278,
       0,   291,   279,     0,   280,   281,   282,   261,   263,   139,
     140,   325,   322,   233,   216,     0,     0,     0,   204,     0,
       0,     0,     0,   163,   169,     0,   170,     0,   177,   181,
     184,     0,   189,   183,   188,     0,     0,    41,    43,     0,
       0,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   108,     0,     5,   120,     0,    31,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   232,     0,   226,   227,     0,     0,   241,    49,     0,
       0,   237,     0,     0,     0,   138,   293,     0,     0,   287,
       0,     0,     0,     0,     0,   312,   313,   314,     0,   297,
     290,   292,    11,     0,     0,     0,   217,     0,     0,     0,
     205,     0,     0,   211,    49,     0,   164,   179,     0,   171,
       0,   185,    46,     0,    47,     0,   107,     0,     0,    55,
      27,     0,    36,     0,    58,    60,    62,    65,    67,    70,
      72,    79,    81,    75,    77,    84,    86,    89,    92,    95,
      98,   101,     0,     0,   230,   238,   231,   258,   228,   240,
       0,     0,   242,   248,     0,   247,     0,   259,     0,     0,
     249,    49,     0,     0,     0,   283,     0,     0,     0,     0,
       0,     0,     0,   311,     0,     0,     0,     0,   267,   264,
       0,     0,   272,   215,   234,   207,     0,   213,     0,   208,
     210,   178,   180,     0,     0,     0,    19,     0,   121,     0,
      29,    37,    25,   104,     0,     0,   244,     0,     0,   246,
     260,     0,     0,   250,   256,     0,   255,     0,   276,   285,
     288,     0,     0,     0,     0,     0,   316,    12,     0,     0,
     275,   269,     0,   266,   271,   273,   206,   209,     0,    18,
       0,     0,    34,   269,     0,     0,   225,   229,   243,   245,
     252,     0,     0,   253,     0,     0,     0,     0,     0,     0,
       0,     0,   301,   274,     0,     0,   262,    22,    20,    21,
      35,    38,   105,   251,   254,   286,   303,   305,     0,   309,
       0,   307,     0,   299,   270,   268,   306,   310,   308,     0,
     300
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,    95,    73,   333,   468,   129,   214,   130,    96,
      97,   435,   436,    98,   279,   277,   278,   361,   484,   153,
     149,   150,   100,   101,   102,   281,   282,   283,   103,   284,
     285,   104,   286,   287,   105,   290,   291,   288,   289,   106,
     292,   293,   107,   294,   108,   295,   109,   296,   110,   297,
     111,   298,   154,   299,   485,   155,   272,   215,   357,   113,
      32,   132,    57,   198,    58,    34,    35,    36,    37,   139,
     140,   115,   247,   248,    38,    74,    75,    39,    40,    41,
      42,   120,    60,   240,   235,    61,   124,   302,   444,   303,
     445,   304,   236,   437,   305,   190,   418,   334,   472,   419,
     504,   420,   421,   422,    43,   217,   218,   318,   494,   407,
     219,   220,   221,   222,   223,   224,   529,   320,   225,   321,
     226,   328,    44,    45,    46,   134
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -441
static const yytype_int16 yypact[] =
{
    1602,  1940,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,    22,   -25,   -12,  -441,
      12,  -441,  -441,    16,  1986,  1986,  -441,    34,  -441,  -441,
    1986,  1986,  1986,  -441,  1547,  -441,  -441,  -441,    -5,   143,
     900,   838,  1389,  -441,    67,   138,  -441,   -51,  -441,  1704,
     104,    62,  -441,  -441,    87,  2024,  -441,  -441,  -441,  -441,
    -441,   143,  -441,   109,   183,  -441,  -441,  -441,  -441,  -441,
    -441,  1411,  -441,  -441,  -441,   122,   126,   900,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,    84,  -441,
    1389,  -441,   141,   -60,   146,    76,   207,   119,   116,   135,
     198,    31,  -441,   179,   838,    79,   838,   190,   194,   191,
     206,  -441,  -441,  -441,   138,  -441,  -441,  -441,  -441,   503,
    1247,  -441,    16,  -441,  1845,    42,   242,   104,  2024,  1750,
    -441,    49,  -441,   211,  1389,  -441,    56,   900,  -441,  1485,
    1485,   838,  1389,   588,  -441,  -441,   -15,   209,   288,  -441,
    -441,   226,  -441,   306,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  1648,   974,   219,  -441,
     222,  -441,  -441,  -441,   308,  -441,  -441,  -441,    67,   683,
     246,  -441,   249,  -441,  -441,  -441,   398,   264,   341,   247,
     250,   251,  -441,  -441,  -441,   -16,  -441,  -441,  -441,  -441,
     593,  -441,  -441,   272,  -441,  -441,  -441,  -441,  -441,  -441,
     269,  -441,  -441,  -441,  -441,  1986,     2,  1151,  -441,   273,
    1389,   996,  1795,  -441,  -441,  1389,  -441,    -2,  -441,   270,
    -441,    58,  -441,  -441,  -441,   279,   900,  -441,  -441,   280,
     275,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  1389,  -441,  -441,  1269,  -441,   282,  1389,  1389,
    -441,  1389,  1389,  1389,  1389,  1389,  1389,  1389,  1389,  1389,
    1389,  1389,  1389,  1389,  1389,  1389,  1389,  1389,  1389,  1389,
    -441,    54,   285,   281,  -441,   289,  1151,  -441,   291,   293,
    1018,   222,  1894,  1107,   296,  -441,  -441,   398,  1389,  -441,
     272,   272,   312,   773,   276,  -441,  -441,  -441,  1389,  -441,
    -441,  -441,  -441,  1389,  1225,   300,  -441,   381,   307,  1151,
    -441,   309,  1389,  -441,   310,   314,  -441,  -441,    69,  -441,
    1389,  -441,   305,   317,  -441,  2061,  -441,  1389,  1225,  -441,
    -441,   110,  -441,   111,  -441,  -441,  -441,   141,   141,   -60,
     -60,   146,   146,   146,   146,    76,    76,   207,   119,   116,
     135,   198,   224,  1491,  -441,    74,  -441,  -441,   331,  -441,
     316,  1151,  -441,  -441,  1389,  -441,   318,  -441,   319,  1151,
    -441,   320,   321,  1129,   299,  -441,   323,   398,  1389,  1389,
     334,   826,   826,  -441,    64,   118,  1389,   408,  -441,   330,
    1247,    83,  -441,  -441,  -441,  -441,   337,  -441,   338,  -441,
    -441,  -441,  -441,   305,   335,   136,  -441,   339,  -441,   223,
    -441,  -441,  -441,  -441,   362,  1986,  -441,   342,   343,  -441,
    -441,   346,  1151,  -441,  -441,  1389,  -441,   347,  -441,  -441,
    -441,   118,   118,  1389,  1358,  1380,  -441,  -441,   398,   348,
    -441,    94,   349,  -441,  -441,  -441,  -441,  -441,  1389,  -441,
    2061,  1389,  -441,   103,  1389,  1389,  -441,  -441,  -441,  -441,
    -441,   352,   353,  -441,   398,   398,   398,   182,   398,   186,
     398,   202,   368,  -441,  1247,  1247,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,   336,  -441,
     398,  -441,   398,  -441,  -441,  -441,  -441,  -441,  -441,   398,
    -441
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -441,  -441,  -441,  -441,   -10,  -143,  -441,   213,   283,  -441,
    -441,  -441,   -46,  -441,  -441,  -441,  -441,  -441,  -441,   -45,
    -441,  -441,  -441,   -61,    38,  -441,  -441,  -441,    39,  -441,
    -441,    -1,  -441,  -441,    45,  -441,  -441,  -441,  -441,   144,
    -441,  -441,   148,  -441,   150,  -441,   142,  -441,   149,  -441,
    -441,  -441,   -48,  -441,  -441,    21,  -441,   -73,  -441,   -34,
      -3,     0,  -441,  -441,   252,  -441,   -27,  -441,  -441,   311,
    -119,   -32,  -441,    96,  -441,   377,  -130,  -441,   -38,  -441,
    -441,   -24,   -53,  -441,  -441,   -44,  -121,  -172,  -441,  -441,
    -441,     6,  -441,   -29,  -112,  -178,  -124,  -441,  -441,   100,
    -441,  -440,  -441,    33,   -11,  -153,  -441,  -441,  -441,  -441,
      10,  -441,  -173,  -277,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,    29,  -441,  -441
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -266
static const yytype_int16 yytable[] =
{
      33,    33,   112,   189,   112,    99,   229,    99,   137,    59,
     311,   123,   116,   116,   156,   241,   254,   122,   119,    53,
     244,   117,   118,   114,   114,    48,   316,   116,   168,   169,
      47,   505,   125,   141,    62,    63,   148,    64,   114,   164,
      66,    67,    68,   505,    33,   233,   412,   331,   126,   116,
     182,    50,    53,   322,   142,    99,   131,    53,   157,    72,
     114,    72,   273,   335,    51,    53,   310,   274,   274,   133,
      53,   188,    53,    70,   156,    71,   116,    53,   116,   336,
     197,   348,   185,   329,   191,   337,   196,   114,    52,   114,
     172,   173,    54,   158,   159,   160,   112,   349,   122,    99,
     116,   116,    49,    55,   257,   258,   141,   141,   230,   116,
     252,   114,   114,   116,    65,    56,   339,   249,   255,   234,
     114,   254,   259,   244,   114,    54,   216,   142,   142,   183,
     383,   231,   187,   245,   464,   465,    55,   253,    54,   351,
     398,    55,   188,    54,   232,    54,    72,   274,   246,   122,
     383,   228,   187,   245,    55,   186,    55,   187,   170,   171,
     161,   416,   162,   466,   405,   474,    55,   138,   417,   163,
     174,   175,   416,   260,   230,  -265,     9,    10,    11,   417,
     135,   416,   136,   156,   510,   391,   301,   440,   417,   386,
     442,   144,   403,   441,   274,   467,   216,   112,   151,   122,
      99,   274,   152,   196,   116,   178,   363,   311,   309,   121,
     141,   347,   179,   479,   359,   114,   181,   216,   116,   480,
     364,   365,   366,   176,   177,    55,   382,   353,   165,   114,
      99,   142,   180,   166,   167,   301,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   460,   414,   184,   385,   338,   518,
     415,   341,   345,   520,   145,   274,   146,   192,   122,   274,
     112,   193,   196,    99,   194,   122,   237,   384,   452,   522,
       9,    10,    11,   195,   406,   274,   275,   371,   372,   373,
     374,   276,   250,   356,   251,   186,   473,   187,   312,   362,
     313,   196,   112,   -26,   482,    99,   483,   274,   443,   280,
     408,   409,   301,   121,   314,   502,   432,   116,   495,   496,
     411,   238,   367,   368,   249,   369,   370,   390,   114,   239,
     317,   396,   137,   319,   402,   461,   462,   375,   376,   385,
     323,   515,   516,   517,   324,   519,   325,   521,   332,   326,
     327,   128,   340,   196,   350,   228,   352,   354,   355,   360,
     426,   122,   387,   428,   388,   196,   389,   527,   112,   528,
     392,    99,   393,   404,   410,   413,   530,   423,   438,   228,
     524,   525,   469,   301,   424,   358,   425,  -224,   427,   429,
     497,   499,   501,   430,   433,   446,   450,   449,   458,   453,
     454,   200,    77,    78,    79,    80,    81,   459,    82,    83,
     463,   470,   447,   471,   196,   448,   476,   477,   486,   478,
     451,   488,   489,   481,   457,   490,   493,   503,   523,    84,
     506,   513,   514,   330,   508,   526,   271,   512,   377,   380,
      99,   228,   116,   378,   431,   301,   379,   381,   143,   242,
     315,   487,     0,   114,   475,   201,   202,   203,   439,   204,
     205,   206,   207,   208,   209,   210,   211,     0,    85,     0,
      86,     0,     0,   491,    87,     0,   492,     0,   127,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,   213,     0,   507,
       0,     0,   509,     0,   199,   511,   200,    77,    78,    79,
      80,    81,     0,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   228,     0,     0,     0,
       0,     0,     0,     2,    84,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     201,   202,   203,     0,   204,   205,   206,   207,   208,   209,
     210,   211,    27,    85,    28,    86,    29,    30,    31,    87,
       0,     0,     0,   127,   212,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,     0,   200,    77,    78,    79,
      80,    81,   213,    82,    83,     0,     0,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,     0,     0,
       0,     0,     0,     2,    84,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     201,   202,   203,     0,   204,   205,   206,   207,   208,   209,
     210,   211,    27,    85,    28,    86,    29,    30,    31,    87,
     128,     0,     0,   127,   212,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,     0,   200,    77,    78,    79,
      80,    81,   213,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    84,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
     201,   202,   203,     0,   204,   205,   206,   207,   208,   209,
     210,   211,    27,    85,    28,    86,    29,    30,    31,    87,
       0,     0,     0,   127,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,     0,    76,    77,    78,    79,
      80,    81,   213,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,    84,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    76,
      77,    78,    79,    80,    81,     0,    82,    83,     0,     0,
       0,     0,    27,    85,    28,    86,    29,    30,    31,    87,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     2,     0,
       0,     0,   213,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    85,     0,    86,     0,
       0,     0,    87,    76,    77,    78,    79,    80,    81,    28,
      82,    83,    88,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       2,    84,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    28,    86,     0,     0,     0,    87,    76,    77,    78,
      79,    80,    81,     0,    82,    83,    88,    89,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    84,    82,    83,   306,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    84,    82,    83,
     342,     0,     0,     0,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,    85,   121,    86,     0,     0,    84,
      87,     0,   394,   307,     0,     0,     9,    10,    11,     0,
      88,   308,    90,    91,    92,    93,    85,   121,    86,     0,
       0,     0,    87,     0,     0,   343,     0,     0,     0,     0,
       0,     0,    88,   344,    90,    91,    92,    93,    85,   121,
      86,     0,     0,     0,    87,     0,     0,   395,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      76,    77,    78,    79,    80,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    84,    82,
      83,   399,     0,     0,     0,     9,    10,    11,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      84,    82,    83,   455,     0,     0,     0,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,    85,   121,    86,
       0,     0,    84,    87,     0,     0,   400,     0,     0,     9,
      10,    11,     0,    88,   401,    90,    91,    92,    93,    85,
     121,    86,     0,     0,     0,    87,     0,     0,   456,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    85,   121,    86,     0,     0,     0,    87,    76,    77,
      78,    79,    80,    81,     0,    82,    83,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    84,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    84,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,     0,     0,
      84,    87,     0,   416,     0,   227,     0,     0,     0,     0,
     417,    88,    89,    90,    91,    92,    93,    85,     0,    86,
       0,     0,     0,    87,     0,     0,     0,   227,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,    93,    85,
       0,    86,     0,     0,     0,    87,     0,     0,     0,   358,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    76,    77,    78,    79,    80,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    84,
      82,    83,    76,    77,    78,    79,    80,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,    76,    77,    78,    79,    80,    81,
      84,    82,    83,     0,     0,     0,     0,     0,    85,     0,
      86,     0,     0,     0,    87,   498,     0,     0,     0,     0,
       0,     0,    84,     0,    88,    89,    90,    91,    92,    93,
      85,     0,    86,     0,     0,     0,    87,   500,     0,    85,
       0,    86,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    85,     0,    86,     0,     0,     0,   147,    76,    77,
      78,    79,    80,    81,    53,    82,    83,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     2,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    69,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,     0,     0,
      27,   256,    28,     0,    29,     0,    31,   383,   300,   187,
       0,    88,    89,    90,    91,    92,    93,     2,    55,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    28,     0,
      29,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,    31,     2,     0,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,     0,    31,   186,   300,   187,     0,     0,     0,
       0,     0,     0,     0,     2,    55,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,    31,
       2,     0,     0,     0,   127,     0,   128,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    30,     2,     0,     0,     0,     0,
       0,   243,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,    30,
       0,     0,     0,     0,     0,     2,   346,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    29,    30,
      31,     0,     0,     0,     2,   127,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,     0,    31,
       2,   397,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    28,     0,    29,    30,    31,     2,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    27,     0,    28,     0,    29,
       0,    31,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     0,    28,     0,     0,    30,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,   434,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-441))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     1,    50,   115,    52,    50,   130,    52,    61,    33,
     188,    55,    50,    51,    87,   136,   146,    55,    52,     3,
     139,    50,    51,    50,    51,     3,   199,    65,    88,    89,
       1,   471,    83,    65,    34,    35,    81,     3,    65,   100,
      40,    41,    42,   483,    44,     3,   323,   220,    99,    87,
      19,    76,     3,   206,    65,   100,    59,     3,    87,     3,
      87,     3,    77,   235,    76,     3,   187,    83,    83,    59,
       3,   115,     3,    44,   147,    80,   114,     3,   116,    77,
     124,    83,   114,    99,   116,    83,   124,   114,    76,   116,
      14,    15,    76,     9,    10,    11,   144,    99,   136,   144,
     138,   139,    80,    87,   149,   150,   138,   139,   132,   147,
     144,   138,   139,   151,    80,    99,   237,   141,   147,    77,
     147,   251,   151,   242,   151,    76,   129,   138,   139,    98,
      76,   134,    78,    84,   411,   412,    87,    81,    76,    81,
     312,    87,   186,    76,   134,    76,     3,    83,    99,   187,
      76,   130,    78,    84,    87,    76,    87,    78,    12,    13,
      76,    78,    78,    99,   317,    82,    87,    80,    85,    85,
      94,    95,    78,   152,   198,    81,    38,    39,    40,    85,
      76,    78,    78,   256,    81,   306,   186,    77,    85,   301,
      79,    82,   313,    83,    83,    77,   199,   245,    76,   237,
     245,    83,    76,   241,   242,    86,   279,   385,   187,    71,
     242,   245,    96,    77,   275,   242,    18,   220,   256,    83,
     281,   282,   283,    16,    17,    87,   299,   256,    87,   256,
     275,   242,    97,    92,    93,   235,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   407,   328,    77,   301,   237,    77,
     333,   240,   241,    77,    81,    83,    83,    77,   306,    83,
     318,    77,   310,   318,    83,   313,    34,   301,   399,    77,
      38,    39,    40,    77,   318,    83,    77,   288,   289,   290,
     291,     3,    81,   272,    83,    76,   420,    78,    76,   278,
      78,   339,   350,    77,    81,   350,    83,    83,    84,     3,
     320,   321,   312,    71,     6,   468,   350,   355,   461,   462,
     323,    79,   284,   285,   348,   286,   287,   306,   355,    87,
      84,   310,   385,    84,   313,   408,   409,   292,   293,   383,
      76,   494,   495,   496,     3,   498,    99,   500,    76,    99,
      99,    82,    79,   391,    84,   334,    77,    77,    83,    77,
     339,   399,    77,   342,    83,   403,    77,   520,   416,   522,
      79,   416,    79,    77,    62,    99,   529,    77,   357,   358,
     504,   505,   416,   383,     3,    80,    79,    56,    79,    79,
     463,   464,   465,    79,    77,    79,    77,    79,    99,    79,
      79,     3,     4,     5,     6,     7,     8,    84,    10,    11,
      76,     3,   391,    83,   452,   394,    79,    79,    56,    84,
     399,    79,    79,    84,   403,    79,    79,    79,    60,    31,
      81,    79,    79,   220,   480,    99,   153,   485,   294,   297,
     485,   420,   480,   295,   348,   445,   296,   298,    71,   138,
     198,   445,    -1,   480,   421,    57,    58,    59,   358,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    -1,    -1,   452,    76,    -1,   455,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,   478,
      -1,    -1,   481,    -1,     1,   484,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   504,   505,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      82,    -1,    -1,    80,    81,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,     3,     4,     5,     6,
       7,     8,    99,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    76,     3,     4,     5,     6,     7,     8,    71,
      10,    11,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,    76,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    31,    10,    11,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    31,
      76,    -1,    34,    79,    -1,    -1,    38,    39,    40,    -1,
      86,    87,    88,    89,    90,    91,    70,    71,    72,    -1,
      -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    70,    71,
      72,    -1,    -1,    -1,    76,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,    31,    76,    -1,    -1,    79,    -1,    -1,    38,
      39,    40,    -1,    86,    87,    88,    89,    90,    91,    70,
      71,    72,    -1,    -1,    -1,    76,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    71,    72,    -1,    -1,    -1,    76,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    31,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    31,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      31,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    70,
      -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    31,
      10,    11,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,     3,     4,     5,     6,     7,     8,
      31,    10,    11,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    86,    87,    88,    89,    90,    91,
      70,    -1,    72,    -1,    -1,    -1,    76,    77,    -1,    70,
      -1,    72,    -1,    -1,    -1,    76,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    70,    -1,    72,    -1,    -1,    -1,    76,     3,     4,
       5,     6,     7,     8,     3,    10,    11,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    -1,
      69,    76,    71,    -1,    73,    -1,    75,    76,    77,    78,
      -1,    86,    87,    88,    89,    90,    91,    30,    87,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    71,    -1,    73,    74,    75,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    87,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,    75,
      30,    -1,    -1,    -1,    80,    -1,    82,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    74,    30,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    30,    81,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    30,    80,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      30,    77,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    71,    -1,    73,    74,    75,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    69,    -1,    71,    -1,    73,
      -1,    75,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    71,    -1,    -1,    74,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    30,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    69,    71,    73,
      74,    75,   160,   161,   165,   166,   167,   168,   174,   177,
     178,   179,   180,   204,   222,   223,   224,   223,     3,    80,
      76,    76,    76,     3,    76,    87,    99,   162,   164,   181,
     182,   185,   161,   161,     3,    80,   161,   161,   161,     0,
     223,    80,     3,   103,   175,   176,     3,     4,     5,     6,
       7,     8,    10,    11,    31,    70,    72,    76,    86,    87,
      88,    89,    90,    91,   101,   102,   109,   110,   113,   119,
     122,   123,   124,   128,   131,   134,   139,   142,   144,   146,
     148,   150,   152,   159,   166,   171,   178,   193,   193,   159,
     181,    71,   178,   185,   186,    83,    99,    80,    82,   106,
     108,   160,   161,   210,   225,    76,    78,   182,    80,   169,
     170,   171,   204,   175,    82,    81,    83,    76,   119,   120,
     121,    76,    76,   119,   152,   155,   157,   193,     9,    10,
      11,    76,    78,    85,   123,    87,    92,    93,    88,    89,
      12,    13,    14,    15,    94,    95,    16,    17,    86,    96,
      97,    18,    19,    98,    77,   171,    76,    78,   185,   194,
     195,   171,    77,    77,    83,    77,   178,   185,   163,     1,
       3,    57,    58,    59,    61,    62,    63,    64,    65,    66,
      67,    68,    81,    99,   107,   157,   160,   205,   206,   210,
     211,   212,   213,   214,   215,   218,   220,    80,   155,   196,
     181,   160,   210,     3,    77,   184,   192,    34,    79,    87,
     183,   186,   169,    81,   170,    84,    99,   172,   173,   181,
      81,    83,   159,    81,   176,   193,    76,   119,   119,   193,
     155,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   108,   156,    77,    83,    77,     3,   115,   116,   114,
       3,   125,   126,   127,   129,   130,   132,   133,   137,   138,
     135,   136,   140,   141,   143,   145,   147,   149,   151,   153,
      77,   161,   187,   189,   191,   194,    34,    79,    87,   155,
     186,   195,    76,    78,     6,   164,   212,    84,   207,    84,
     217,   219,   205,    76,     3,    99,    99,    99,   221,    99,
     107,   212,    76,   104,   197,   187,    77,    83,   155,   186,
      79,   155,    34,    79,    87,   155,    81,   159,    83,    99,
      84,    81,    77,   193,    77,    83,   155,   158,    80,   123,
      77,   117,   155,   157,   123,   123,   123,   124,   124,   128,
     128,   131,   131,   131,   131,   134,   134,   139,   142,   144,
     146,   148,   157,    76,   181,   185,   194,    77,    83,    77,
     155,   186,    79,    79,    34,    79,   155,    77,   187,    34,
      79,    87,   155,   186,    77,   205,   159,   209,   104,   104,
      62,   160,   213,    99,   157,   157,    78,    85,   196,   199,
     201,   202,   203,    77,     3,    79,   155,    79,   155,    79,
      79,   173,   159,    77,    58,   111,   112,   193,   155,   199,
      77,    83,    79,    84,   188,   190,    79,   155,   155,    79,
      77,   155,   186,    79,    79,    34,    79,   155,    99,    84,
     205,   157,   157,    76,   213,   213,    99,    77,   105,   159,
       3,    83,   198,   196,    82,   203,    79,    79,    84,    77,
      83,    84,    81,    83,   118,   154,    56,   191,    79,    79,
      79,   155,   155,    79,   208,   105,   105,   157,    77,   157,
      77,   157,   205,    79,   200,   201,    81,   155,   112,   155,
      81,   155,   152,    79,    79,   205,   205,   205,    77,   205,
      77,   205,    77,    60,   196,   196,    99,   205,   205,   216,
     205
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
#line 55 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar != '('){ /* not a function call */
	                            check_var_declared((yyvsp[(1) - (1)].idval));
	                            PRINT("$");        
	                          }
	                          else /* function call */
	                            check_function_declared((yyvsp[(1) - (1)].idval));
	                            
	                          PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); 
	                        }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 72 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 73 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].constval)); free((yyvsp[(1) - (1)].constval)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 82 "c-grammar.y"
    { PRINT("("); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 86 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 98 "c-grammar.y"
    { PRINT("{"); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 102 "c-grammar.y"
    { PRINT("}"); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 106 "c-grammar.y"
    { PRINT("="); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 110 "c-grammar.y"
    { PRINT((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 130 "c-grammar.y"
    { PRINT("["); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 130 "c-grammar.y"
    { PRINT("]"); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 131 "c-grammar.y"
    { PRINT("("); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 131 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 132 "c-grammar.y"
    { PRINT("("); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 132 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 135 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 136 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 143 "c-grammar.y"
    { PRINT(","); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 148 "c-grammar.y"
    { PRINT("++"); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 149 "c-grammar.y"
    { PRINT("--"); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 157 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 158 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 159 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 160 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 161 "c-grammar.y"
    { PRINT("~"); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 162 "c-grammar.y"
    { PRINT("!"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 172 "c-grammar.y"
    { PRINT("*"); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 173 "c-grammar.y"
    { PRINT("/"); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 174 "c-grammar.y"
    { PRINT("%"); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 179 "c-grammar.y"
    { PRINT("+"); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 180 "c-grammar.y"
    { PRINT("-"); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 185 "c-grammar.y"
    { PRINT("<<"); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 186 "c-grammar.y"
    { PRINT(">>"); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 191 "c-grammar.y"
    { PRINT("<"); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 192 "c-grammar.y"
    { PRINT(">"); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 193 "c-grammar.y"
    { PRINT("<="); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 194 "c-grammar.y"
    { PRINT(">="); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 199 "c-grammar.y"
    { PRINT("=="); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 200 "c-grammar.y"
    { PRINT("!="); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 205 "c-grammar.y"
    { PRINT("&"); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 210 "c-grammar.y"
    { PRINT("^"); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 215 "c-grammar.y"
    { PRINT("|"); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 220 "c-grammar.y"
    { PRINT("&&"); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 225 "c-grammar.y"
    { PRINT("||"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 230 "c-grammar.y"
    { PRINT("?"); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 230 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 240 "c-grammar.y"
    { PRINT("*="); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 241 "c-grammar.y"
    { PRINT("/="); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 242 "c-grammar.y"
    { PRINT("%="); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 243 "c-grammar.y"
    { PRINT("+="); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 244 "c-grammar.y"
    { PRINT("-="); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 245 "c-grammar.y"
    { PRINT("<<="); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 246 "c-grammar.y"
    { PRINT(">>="); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 247 "c-grammar.y"
    { PRINT("&="); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 248 "c-grammar.y"
    { PRINT("^="); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 249 "c-grammar.y"
    { PRINT("|="); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 254 "c-grammar.y"
    { PRINT(","); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 262 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 263 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 282 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 300 "c-grammar.y"
    { global_type_specifier = VOID; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 301 "c-grammar.y"
    { global_type_specifier = CHAR; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 302 "c-grammar.y"
    { global_type_specifier = SHORT; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 303 "c-grammar.y"
    { global_type_specifier = INT; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 304 "c-grammar.y"
    { global_type_specifier = LONG; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 305 "c-grammar.y"
    { global_type_specifier = FLOAT; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 306 "c-grammar.y"
    { global_type_specifier = DOUBLE; }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 403 "c-grammar.y"
    { if (yychar == YYEMPTY) yychar = YYLEX; /* yychar = lookahead token */
	                          if (yychar == '('){
	                            check_function_redefinition((yyvsp[(1) - (1)].idval));	                            
	                            PRINT("function "); /* function */
	                            table_insert((yyvsp[(1) - (1)].idval), global_type_specifier, functions_symbol_table);
	                            begin_local_scope();
	                          }
	                          else {
	                            check_var_redefinition((yyvsp[(1) - (1)].idval));
	                            PRINT("$");                       /* var */
	                            table_insert((yyvsp[(1) - (1)].idval), global_type_specifier, current_scope_symbol_table);
	                          }
	                          printf("ID: %s, TYPE: %d\n", (yyvsp[(1) - (1)].idval), global_type_specifier);                          
	                          PRINT((yyvsp[(1) - (1)].idval)); free((yyvsp[(1) - (1)].idval)); 
	                        }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 427 "c-grammar.y"
    { print_enabled = FALSE; }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 427 "c-grammar.y"
    { print_enabled = TRUE; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 428 "c-grammar.y"
    { PRINT("("); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 428 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 429 "c-grammar.y"
    { PRINT("()"); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 447 "c-grammar.y"
    { PRINT(","); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 453 "c-grammar.y"
    { PRINT(","); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 503 "c-grammar.y"
    { PRINT("array("); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 503 "c-grammar.y"
    { PRINT(")"); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 509 "c-grammar.y"
    { PRINT(","); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 516 "c-grammar.y"
    { PRINT(","); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 548 "c-grammar.y"
    { PRINT("case"); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 548 "c-grammar.y"
    { PRINT(":"); }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 549 "c-grammar.y"
    { PRINT("default:"); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 560 "c-grammar.y"
    {yyerrok;}
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 569 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 570 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 574 "c-grammar.y"
    { PRINT("if"); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 578 "c-grammar.y"
    { PRINT("else"); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 580 "c-grammar.y"
    { PRINT("switch"); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 584 "c-grammar.y"
    { PRINT("while"); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 594 "c-grammar.y"
    { PRINT("continue;"); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 595 "c-grammar.y"
    { PRINT("break;"); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 596 "c-grammar.y"
    { PRINT("return;"); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 597 "c-grammar.y"
    { PRINT("return "); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 597 "c-grammar.y"
    { PRINT(";"); }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 603 "c-grammar.y"
    { yyerrok; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 612 "c-grammar.y"
    { end_local_scope(); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 613 "c-grammar.y"
    { end_local_scope(); }
    break;



/* Line 1806 of yacc.c  */
#line 3117 "y.tab.c"
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
#line 620 "c-grammar.y"


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
    if (lookup_string(name, functions_symbol_table)) yyerror("Error: Intento de redefinir función: NAME");
}

void check_var_redefinition(char *name){
    if (lookup_string(name, current_scope_symbol_table)) yyerror("ATENCION          Error: Intento de redefinir variable: NAME");
}

void check_function_declared(char *name){
    if (!lookup_string(name, functions_symbol_table)) 
        fprintf(stderr, "Warning: Declaración implícita de la función '%s'\n", name);
}

void check_var_declared(char *name){
    if ( (!lookup_string(name, current_scope_symbol_table) && current_scope_symbol_table == global_symbol_table)
     ||   !lookup_string(name, global_symbol_table) )
	    yyerror ("Variable no declarada: NAME");
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
    
    if (errores > 0){
	    if( remove( FILENAME ) != 0 )
		  	perror( "Error al intentar eliminar el archivo" );
  		else
  		    printf("%d errores detectados\n", errores);
            puts( "No se generará traducción. Archivo eliminado exitosamente" );		
	}
	
	free_table(global_symbol_table); /* liberar memoria */
	free_table(functions_symbol_table); /* liberar memoria */
    
    return 0;
}

void yyerror (const char *message) {

    extern yylineno;   
    fprintf(stderr, "Near line %d: %s at '%s'\n", yylineno, message, yytext);
    errores++;  
}

