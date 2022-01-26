/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc.y"

#include "rp4_ast.h"
#include "yacc.hpp"
#include <iostream>
#include <memory>

int yylex(YYSTYPE *yylval, YYLTYPE *yylloc);

void yyerror(YYLTYPE *locp, const char* s) {
    std::cerr << "Parser Error at line " << locp->first_line << " column " << locp->first_column << ": " << s << std::endl;
}


/* Line 371 of yacc.c  */
#line 82 "yacc.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.hpp".  */
#ifndef YY_YY_YACC_HPP_INCLUDED
# define YY_YY_YACC_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BIT = 258,
     STRUCT = 259,
     TRUE = 260,
     FALSE = 261,
     HEADER = 262,
     HEADERS = 263,
     PARSER = 264,
     STATE = 265,
     TRANSITION = 266,
     PACKET = 267,
     PACKET_IN = 268,
     DEFAULT = 269,
     ACCEPT = 270,
     EXTRACT = 271,
     SELECT = 272,
     DROP = 273,
     ACTIONS = 274,
     ACTION = 275,
     NOACTION = 276,
     TABLES = 277,
     TABLE = 278,
     KEY = 279,
     SIZE = 280,
     DEFAULT_ACTION = 281,
     ENTRIES = 282,
     EXACT = 283,
     TERNARY = 284,
     LPM = 285,
     STAGE = 286,
     CONTROL = 287,
     MATCHER = 288,
     EXECUTOR = 289,
     SWITCH = 290,
     HIT = 291,
     MISS = 292,
     NONE = 293,
     IS_VALID = 294,
     EQU = 295,
     NEQ = 296,
     LEQ = 297,
     GEQ = 298,
     T_EOF = 299,
     ANDANDAND = 300,
     DIVDIVDIV = 301,
     IDENTIFIER = 302,
     VALUE_STRING = 303,
     VALUE_INT = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


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

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 208 "yacc.cpp"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,     2,    65,     2,
      55,    56,    60,    62,    58,    63,    57,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    52,
      53,    61,    54,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,    66,    51,    68,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    12,    15,    21,    22,    26,    29,
      34,    36,    37,    40,    48,    56,    66,    67,    70,    77,
      85,    89,    98,   102,   103,   105,   109,   111,   113,   115,
     121,   129,   130,   133,   138,   143,   145,   147,   149,   153,
     157,   159,   161,   166,   167,   170,   179,   186,   187,   189,
     193,   194,   197,   202,   204,   206,   208,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   259,   260,
     263,   270,   276,   277,   280,   285,   287,   289,   291,   292,
     295,   300,   306,   311,   316,   317,   320,   325,   330,   334,
     335,   337,   341,   347,   348,   351,   359,   365,   366,   369,
     372,   384,   385,   387,   391,   392,   395,   400,   405,   410,
     415,   420,   426,   427,   430,   435,   437,   439,   441,   443,
     445
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    72,    77,    79,    91,   101,   114,   114,
      -1,    -1,    72,    73,    -1,     7,    47,    50,    74,    51,
      -1,    -1,    74,    75,    52,    -1,    76,    47,    -1,     3,
      53,    49,    54,    -1,    47,    -1,    -1,    77,    78,    -1,
       4,    47,    50,    74,    51,    47,    52,    -1,     4,     8,
      50,    74,    51,    47,    52,    -1,     9,    47,    55,    13,
      12,    56,    50,    80,    51,    -1,    -1,    80,    81,    -1,
      10,    47,    50,    82,    84,    51,    -1,    12,    57,    16,
      55,    83,    56,    52,    -1,    47,    57,    47,    -1,    11,
      17,    55,    85,    56,    50,    88,    51,    -1,    11,    86,
      52,    -1,    -1,    87,    -1,    85,    58,    87,    -1,    47,
      -1,    15,    -1,    18,    -1,    47,    57,    47,    57,    47,
      -1,    47,    57,    47,    57,    39,    55,    56,    -1,    -1,
      88,    89,    -1,    90,    59,    47,    52,    -1,    90,    59,
      15,    52,    -1,    49,    -1,     5,    -1,     6,    -1,    49,
      45,    49,    -1,    49,    46,    49,    -1,    14,    -1,    60,
      -1,    19,    50,    92,    51,    -1,    -1,    92,    93,    -1,
      20,    47,    55,    94,    56,    50,    95,    51,    -1,    20,
      21,    55,    56,    50,    51,    -1,    -1,    75,    -1,    94,
      58,    75,    -1,    -1,    95,    96,    -1,    97,    61,    98,
      52,    -1,    83,    -1,    87,    -1,   100,    -1,    55,    98,
      99,    98,    56,    -1,    62,    -1,    63,    -1,    60,    -1,
      64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    40,    -1,    41,    -1,    53,    -1,    54,    -1,
      42,    -1,    43,    -1,    97,    -1,    49,    -1,    47,    -1,
       5,    -1,     6,    -1,    22,    50,   102,    51,    -1,    -1,
     102,   103,    -1,    23,    47,    50,   104,   108,    51,    -1,
      24,    61,    50,   105,    51,    -1,    -1,   105,   106,    -1,
      97,    59,   107,    52,    -1,    28,    -1,    29,    -1,    30,
      -1,    -1,   108,   109,    -1,    25,    61,    49,    52,    -1,
      27,    61,    50,   110,    51,    -1,    26,    61,    47,    52,
      -1,    26,    61,    21,    52,    -1,    -1,   110,   111,    -1,
     112,    59,    47,    52,    -1,   112,    59,    21,    52,    -1,
      55,   113,    56,    -1,    -1,    90,    -1,   113,    58,    90,
      -1,    32,    47,    50,   115,    51,    -1,    -1,   115,   116,
      -1,    31,    47,    50,   117,   120,   125,    51,    -1,     9,
      50,   118,    51,    52,    -1,    -1,   118,   119,    -1,    47,
      52,    -1,    33,    50,    35,    55,   121,    56,    50,   122,
      51,    51,    52,    -1,    -1,    98,    -1,   121,    58,    98,
      -1,    -1,   122,   123,    -1,    90,    59,   124,    52,    -1,
      23,    55,    47,    56,    -1,    31,    55,    47,    56,    -1,
      20,    55,    47,    56,    -1,    20,    55,    21,    56,    -1,
      34,    50,   126,    51,    52,    -1,    -1,   126,   127,    -1,
     128,    59,   129,    52,    -1,    47,    -1,    36,    -1,    37,
      -1,    21,    -1,    47,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   110,   113,   120,   128,   131,   138,   145,
     149,   157,   160,   167,   171,   178,   186,   189,   196,   203,
     210,   217,   221,   229,   232,   236,   243,   247,   251,   258,
     262,   270,   273,   280,   284,   291,   295,   299,   303,   307,
     311,   315,   322,   330,   333,   340,   344,   352,   355,   359,
     367,   370,   377,   384,   388,   395,   399,   406,   410,   414,
     418,   422,   426,   430,   434,   438,   442,   446,   450,   454,
     458,   462,   469,   473,   477,   481,   485,   492,   500,   503,
     510,   517,   525,   528,   535,   542,   546,   550,   558,   561,
     568,   572,   576,   580,   588,   591,   598,   602,   609,   617,
     620,   624,   631,   639,   642,   649,   656,   664,   667,   674,
     681,   689,   692,   696,   704,   707,   714,   721,   725,   729,
     733,   740,   748,   751,   758,   765,   766,   770,   774,   781,
     782
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BIT", "STRUCT", "TRUE", "FALSE",
  "HEADER", "HEADERS", "PARSER", "STATE", "TRANSITION", "PACKET",
  "PACKET_IN", "DEFAULT", "ACCEPT", "EXTRACT", "SELECT", "DROP", "ACTIONS",
  "ACTION", "NOACTION", "TABLES", "TABLE", "KEY", "SIZE", "DEFAULT_ACTION",
  "ENTRIES", "EXACT", "TERNARY", "LPM", "STAGE", "CONTROL", "MATCHER",
  "EXECUTOR", "SWITCH", "HIT", "MISS", "NONE", "IS_VALID", "EQU", "NEQ",
  "LEQ", "GEQ", "T_EOF", "ANDANDAND", "DIVDIVDIV", "IDENTIFIER",
  "VALUE_STRING", "VALUE_INT", "'{'", "'}'", "';'", "'<'", "'>'", "'('",
  "')'", "'.'", "','", "':'", "'*'", "'='", "'+'", "'-'", "'/'", "'&'",
  "'|'", "'^'", "'~'", "'!'", "$accept", "start", "header_defs",
  "header_def", "field_defs", "field_def", "type_def", "struct_defs",
  "struct_def", "parser_def", "state_defs", "state_def", "extract_stmt",
  "member", "transition_stmt", "fields", "direct_entry", "field",
  "transition_entries", "transition_entry", "key_def", "actions_def",
  "action_defs", "action_def", "parameters", "expressions", "expression",
  "lvalue", "operation", "op", "operand", "tables_def", "table_defs",
  "table_def", "table_key_def", "key_entries", "key_entry", "match_type",
  "table_optional_stmts", "table_optional_stmt", "match_entries",
  "match_entry", "match_key", "key_defs", "pipeline", "stage_defs",
  "stage_def", "stage_parser", "stage_parser_headers",
  "stage_parser_header", "stage_matcher", "operations", "switch_entries",
  "switch_entry", "switch_value", "stage_executor",
  "stage_executor_entries", "stage_executor_entry",
  "stage_executor_entry_left", "stage_name", YY_NULL
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
     123,   125,    59,    60,    62,    40,    41,    46,    44,    58,
      42,    61,    43,    45,    47,    38,   124,    94,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    79,    80,    80,    81,    82,
      83,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      95,    95,    96,    97,    97,    98,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   101,   102,   102,
     103,   104,   105,   105,   106,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   113,
     113,   113,   114,   115,   115,   116,   117,   118,   118,   119,
     120,   121,   121,   121,   122,   122,   123,   124,   124,   124,
     124,   125,   126,   126,   127,   128,   128,   128,   128,   129,
     129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     2,     5,     0,     3,     2,     4,
       1,     0,     2,     7,     7,     9,     0,     2,     6,     7,
       3,     8,     3,     0,     1,     3,     1,     1,     1,     5,
       7,     0,     2,     4,     4,     1,     1,     1,     3,     3,
       1,     1,     4,     0,     2,     8,     6,     0,     1,     3,
       0,     2,     4,     1,     1,     1,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     0,     2,
       6,     5,     0,     2,     4,     1,     1,     1,     0,     2,
       4,     5,     4,     4,     0,     2,     4,     4,     3,     0,
       1,     3,     5,     0,     2,     7,     5,     0,     2,     2,
      11,     0,     1,     3,     0,     2,     4,     4,     4,     4,
       4,     5,     0,     2,     4,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    11,     1,     0,     4,     0,     0,     0,     0,
      12,     0,     6,     0,     0,     0,     0,     0,     0,     6,
       6,     0,    43,     0,     0,     0,    10,     5,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,     7,     8,
       0,     0,     0,     0,    42,    44,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,    77,    79,   103,     9,
      14,    13,    16,     0,    47,     0,     0,     0,     0,    48,
       0,     0,     0,   102,   104,     0,    15,    17,     0,     0,
       0,     0,    88,     0,     0,    46,    50,    49,     0,     0,
       0,     0,     0,    82,     0,     0,     0,    80,    89,     0,
       0,     0,     0,     0,    45,    53,    54,    51,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    83,     0,     0,     0,    94,     0,     0,
       0,     0,     0,    27,     0,    28,    26,     0,    18,    20,
      75,    76,    74,    73,     0,    72,     0,    55,     0,    90,
      93,    92,     0,     0,     0,   108,     0,   122,   105,     0,
      23,    22,     0,     0,    52,    85,    86,    87,     0,    91,
      99,    95,     0,   109,   106,   111,     0,     0,     0,     0,
       0,    24,     0,    29,    66,    67,    70,    71,    68,    69,
      59,    57,    58,    60,    61,    62,    63,    64,    65,     0,
      84,    36,    37,    40,    35,    41,   100,     0,     0,   112,
       0,   128,   126,   127,   125,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
       0,     0,     0,   121,     0,    20,    19,     0,    31,    25,
      30,    56,    38,    39,   101,    97,    96,   114,   113,   130,
     129,     0,     0,     0,   124,    21,    32,     0,     0,     0,
     115,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,    34,    33,     0,     0,     0,   116,     0,     0,     0,
       0,   120,   119,   117,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    18,    28,    29,     6,    10,    11,
      67,    77,   102,   105,   118,   180,   137,   106,   252,   256,
     206,    17,    33,    45,    70,    92,   107,   145,   146,   199,
     147,    24,    46,    57,    82,   109,   123,   168,    89,    98,
     152,   171,   172,   207,    36,    66,    74,   100,   128,   155,
     115,   210,   253,   260,   270,   131,   176,   216,   217,   251
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -160
static const yytype_int16 yypact[] =
{
    -160,    21,    67,  -160,    40,  -160,    34,    43,    11,    48,
    -160,   100,  -160,    75,    83,    79,    85,   114,    14,  -160,
    -160,   124,  -160,    88,   107,    87,  -160,  -160,    89,    96,
      19,    20,   130,    -4,  -160,    97,   107,    98,  -160,  -160,
      99,   101,    93,    60,  -160,  -160,    18,   102,  -160,    91,
     103,   104,   108,   105,   106,   110,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,   109,     5,   112,   -16,    -6,   113,  -160,
     -22,   126,   117,  -160,  -160,   119,  -160,  -160,   116,   118,
       5,    92,  -160,   120,   121,  -160,  -160,  -160,   122,    -1,
     142,   147,    25,  -160,   115,   123,   125,  -160,  -160,   127,
     136,   128,   143,   131,  -160,  -160,  -160,  -160,   129,    45,
     132,    61,   133,  -160,   137,   139,   158,    12,   138,   135,
       7,  -160,   134,  -160,   140,   144,   145,  -160,    69,   156,
     148,   149,   146,  -160,   150,  -160,  -160,   151,  -160,   152,
    -160,  -160,   131,  -160,     7,  -160,   154,  -160,    94,  -160,
    -160,  -160,    66,   155,   159,  -160,   153,  -160,  -160,   157,
     163,  -160,    -7,    37,  -160,  -160,  -160,  -160,   160,  -160,
       4,  -160,   161,  -160,  -160,     7,    47,   162,   165,   166,
      17,  -160,   167,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,     7,
    -160,  -160,  -160,  -160,    86,  -160,  -160,    71,    64,  -160,
      72,  -160,  -160,  -160,  -160,   164,  -160,   168,   170,   172,
     171,   175,   163,   173,   174,   177,   179,  -160,     4,   180,
     181,   184,     7,  -160,    -5,  -160,  -160,   152,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,   183,    -3,     0,  -160,  -160,  -160,   178,   185,   182,
    -160,    -8,   186,    95,   187,   188,  -160,   176,   189,   190,
     191,  -160,  -160,    65,   195,   199,  -160,   192,   193,   194,
     196,  -160,  -160,  -160,  -160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,  -160,    90,   -36,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,    16,  -160,  -160,  -160,  -159,  -160,  -160,
    -139,  -160,  -160,  -160,  -160,  -160,  -160,   -72,  -144,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,   211,  -160,  -160,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     163,   181,   201,   202,    75,   201,   202,   264,    25,   201,
     202,   203,   140,   141,   203,    72,    43,    25,   203,    13,
     108,     3,    25,    25,    94,    95,    96,   133,    69,   134,
     135,   209,   182,   249,    79,    73,    80,   122,     8,   265,
     183,    55,   250,     9,    87,    76,   204,    44,   255,   204,
      97,   258,    26,   204,   142,   224,   143,   205,    14,   136,
     205,    26,   144,   239,   205,    27,    26,    26,   211,    56,
      40,    41,   103,   221,     4,   222,   104,   184,   185,   186,
     187,    53,   125,   212,   213,   229,   277,     7,   248,   244,
     188,   189,   103,    12,   214,    15,   121,   190,   215,   191,
     192,   193,   194,   195,   196,   197,   198,    54,   126,    30,
      31,   230,   278,   257,   259,   267,   153,   169,   268,    16,
     154,   170,   165,   166,   167,    19,   269,   227,   231,   228,
     232,   225,   226,    20,    21,    22,    23,    32,    34,    35,
      37,    38,    42,    39,    47,    59,    50,    49,    51,    52,
      81,    99,    58,    88,   117,    60,    61,    65,    62,   101,
      63,    64,    71,    78,    83,    68,    84,    85,    86,   114,
      90,    91,    93,   130,   132,   178,   110,   113,     0,     0,
       0,   124,   139,   127,   111,   116,   112,   129,   119,   138,
     120,   156,   149,   148,     0,     0,   150,   151,   157,     0,
     158,   159,     0,   161,   177,   160,   164,   173,   175,   162,
     179,   174,   200,     0,     0,     0,   233,   235,   237,   218,
     208,   219,   223,   220,   236,   238,   242,   234,   243,   240,
     241,   273,   245,   246,   247,   254,   262,   261,   266,   271,
     272,   263,   279,   276,   274,   275,   280,    48,   281,   282,
     283,     0,   284
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     144,   160,     5,     6,    10,     5,     6,    15,     3,     5,
       6,    14,     5,     6,    14,    31,    20,     3,    14,     8,
      92,     0,     3,     3,    25,    26,    27,    15,    64,    17,
      18,   175,    39,    38,    56,    51,    58,   109,     4,    47,
      47,    23,    47,     9,    80,    51,    49,    51,    51,    49,
      51,    51,    47,    49,    47,   199,    49,    60,    47,    47,
      60,    47,    55,   222,    60,    51,    47,    47,    21,    51,
      51,    51,    47,    56,     7,    58,    51,    40,    41,    42,
      43,    21,    21,    36,    37,    21,    21,    47,   232,   228,
      53,    54,    47,    50,    47,    47,    51,    60,    51,    62,
      63,    64,    65,    66,    67,    68,    69,    47,    47,    19,
      20,    47,    47,   252,   253,    20,    47,    51,    23,    19,
      51,    55,    28,    29,    30,    50,    31,    56,    56,    58,
      58,    45,    46,    50,    55,    50,    22,    13,    50,    32,
      53,    52,    12,    47,    47,    54,    47,    49,    47,    56,
      24,     9,    50,    61,    11,    52,    52,    47,    50,    12,
      55,    55,    50,    50,    47,    56,    47,    51,    50,    33,
      50,    50,    50,    34,    16,   159,    61,    50,    -1,    -1,
      -1,    49,    47,    50,    61,    57,    61,    50,    57,    51,
      61,    35,    52,    59,    -1,    -1,    52,    52,    50,    -1,
      51,    55,    -1,    52,    47,    55,    52,    52,    55,    57,
      47,    52,    52,    -1,    -1,    -1,    52,    47,    47,    57,
      59,    56,    55,    57,    52,    50,    49,    59,    49,    56,
      56,    55,    52,    52,    50,    52,    51,    59,    52,    52,
      52,    59,    47,    52,    55,    55,    47,    36,    56,    56,
      56,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    72,     0,     7,    73,    77,    47,     4,     9,
      78,    79,    50,     8,    47,    47,    19,    91,    74,    50,
      50,    55,    50,    22,   101,     3,    47,    51,    75,    76,
      74,    74,    13,    92,    50,    32,   114,    53,    52,    47,
      51,    51,    12,    20,    51,    93,   102,    47,   114,    49,
      47,    47,    56,    21,    47,    23,    51,   103,    50,    54,
      52,    52,    50,    55,    55,    47,   115,    80,    56,    75,
      94,    50,    31,    51,   116,    10,    51,    81,    50,    56,
      58,    24,   104,    47,    47,    51,    50,    75,    61,   108,
      50,    50,    95,    50,    25,    26,    27,    51,   109,     9,
     117,    12,    82,    47,    51,    83,    87,    96,    97,   105,
      61,    61,    61,    50,    33,   120,    57,    11,    84,    57,
      61,    51,    97,   106,    49,    21,    47,    50,   118,    50,
      34,   125,    16,    15,    17,    18,    47,    86,    51,    47,
       5,     6,    47,    49,    55,    97,    98,   100,    59,    52,
      52,    52,   110,    47,    51,   119,    35,    50,    51,    55,
      55,    52,    57,    98,    52,    28,    29,    30,   107,    51,
      55,   111,   112,    52,    52,    55,   126,    47,    83,    47,
      85,    87,    39,    47,    40,    41,    42,    43,    53,    54,
      60,    62,    63,    64,    65,    66,    67,    68,    69,    99,
      52,     5,     6,    14,    49,    60,    90,   113,    59,    98,
     121,    21,    36,    37,    47,    51,   127,   128,    57,    56,
      57,    56,    58,    55,    98,    45,    46,    56,    58,    21,
      47,    56,    58,    52,    59,    47,    52,    47,    50,    87,
      56,    56,    49,    49,    90,    52,    52,    50,    98,    38,
      47,   129,    88,   122,    52,    51,    89,    90,    51,    90,
     123,    59,    51,    59,    15,    47,    52,    20,    23,    31,
     124,    52,    52,    55,    55,    55,    52,    21,    47,    47,
      47,    56,    56,    56,    56
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




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
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 101 "yacc.y"
    {
        tree = std::make_unique<Rp4Ast>((yyvsp[(1) - (7)].sv_header_defs), (yyvsp[(2) - (7)].sv_struct_defs), (yyvsp[(3) - (7)].sv_parser_def), (yyvsp[(4) - (7)].sv_actions_def), (yyvsp[(5) - (7)].sv_tables_def), (yyvsp[(6) - (7)].sv_pipeline), (yyvsp[(7) - (7)].sv_pipeline));
        YYACCEPT;
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 110 "yacc.y"
    {
        (yyval.sv_header_defs) = {};
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 114 "yacc.y"
    {
        (yyval.sv_header_defs).push_back((yyvsp[(2) - (2)].sv_header_def));
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 121 "yacc.y"
    {
        (yyval.sv_header_def) = Rp4HeaderDef((yyvsp[(2) - (5)].sv_str), (yyvsp[(4) - (5)].sv_field_defs));
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 128 "yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 132 "yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[(2) - (3)].sv_field_def));
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 139 "yacc.y"
    {
        (yyval.sv_field_def) = Rp4FieldDef((yyvsp[(1) - (2)].sv_type), (yyvsp[(2) - (2)].sv_str));
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 146 "yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4BitType>((yyvsp[(3) - (4)].sv_int));
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 150 "yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4NamedType>((yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 157 "yacc.y"
    {
        (yyval.sv_struct_defs) = {};
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 161 "yacc.y"
    {
        (yyval.sv_struct_defs).push_back((yyvsp[(2) - (2)].sv_struct_def));
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 168 "yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef((yyvsp[(2) - (7)].sv_str), (yyvsp[(4) - (7)].sv_field_defs), (yyvsp[(6) - (7)].sv_str));
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 172 "yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef("headers", (yyvsp[(4) - (7)].sv_field_defs), (yyvsp[(6) - (7)].sv_str), true);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 179 "yacc.y"
    {
        (yyval.sv_parser_def) = Rp4ParserDef((yyvsp[(2) - (9)].sv_str), (yyvsp[(8) - (9)].sv_state_defs));
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 186 "yacc.y"
    {
        (yyval.sv_state_defs) = {};
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 190 "yacc.y"
    {
        (yyval.sv_state_defs).push_back((yyvsp[(2) - (2)].sv_state_def));
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 197 "yacc.y"
    {
        (yyval.sv_state_def) = Rp4StateDef((yyvsp[(2) - (6)].sv_str), (yyvsp[(4) - (6)].sv_extract_stmt), (yyvsp[(5) - (6)].sv_transition_stmt));
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 204 "yacc.y"
    {
        (yyval.sv_extract_stmt) = Rp4Extract((yyvsp[(5) - (7)].sv_member));
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 211 "yacc.y"
    {
        (yyval.sv_member) = Rp4Member((yyvsp[(1) - (3)].sv_str), (yyvsp[(3) - (3)].sv_str));
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 218 "yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4SelectTransition>((yyvsp[(4) - (8)].sv_fields), (yyvsp[(7) - (8)].sv_transition_entries));
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 222 "yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4DirectTransition>((yyvsp[(2) - (3)].sv_transition_entry));
    }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 229 "yacc.y"
    {
        (yyval.sv_fields) = {};
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 233 "yacc.y"
    {
        (yyval.sv_fields) = { (yyvsp[(1) - (1)].sv_field) };
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 237 "yacc.y"
    {
        (yyval.sv_fields).push_back((yyvsp[(3) - (3)].sv_field));
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 244 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), (yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 248 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), "accept", 0);
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 252 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), "drop", 1);
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 259 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (5)].sv_str), (yyvsp[(3) - (5)].sv_str), (yyvsp[(5) - (5)].sv_str));
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 263 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (7)].sv_str), (yyvsp[(3) - (7)].sv_str), "isValid");
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 270 "yacc.y"
    {
        (yyval.sv_transition_entries) = {};
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 274 "yacc.y"
    {
        (yyval.sv_transition_entries).push_back((yyvsp[(2) - (2)].sv_transition_entry));
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 285 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), "accept", true);
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 292 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 296 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(1);
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 300 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(0);
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 304 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4TernaryKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 308 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4LpmKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 312 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 316 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 323 "yacc.y"
    {
        (yyval.sv_actions_def) = Rp4ActionsDef((yyvsp[(3) - (4)].sv_action_defs));
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 330 "yacc.y"
    {
        (yyval.sv_action_defs) = {};
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 334 "yacc.y"
    {
        (yyval.sv_action_defs).push_back((yyvsp[(2) - (2)].sv_action_def));
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 341 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef((yyvsp[(2) - (8)].sv_str), (yyvsp[(4) - (8)].sv_field_defs), (yyvsp[(7) - (8)].sv_expressions));
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 345 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef("NoAction", {}, {}, true);
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 352 "yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 356 "yacc.y"
    {
        (yyval.sv_field_defs) = { (yyvsp[(1) - (1)].sv_field_def) };
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 360 "yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[(3) - (3)].sv_field_def));
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 367 "yacc.y"
    {
        (yyval.sv_expressions) = {};
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 371 "yacc.y"
    {
        (yyval.sv_expressions).push_back((yyvsp[(2) - (2)].sv_expression));
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 378 "yacc.y"
    {
        (yyval.sv_expression) = Rp4Expression((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_operation));
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 385 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4MetaLValue>((yyvsp[(1) - (1)].sv_member));
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 389 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4HeaderLValue>((yyvsp[(1) - (1)].sv_field));
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 396 "yacc.y"
    {
        (yyval.sv_operation) = std::move((yyvsp[(1) - (1)].sv_operand));
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 400 "yacc.y"
    {
        (yyval.sv_operation) = std::make_shared<Rp4Binary>((yyvsp[(3) - (5)].sv_op), (yyvsp[(2) - (5)].sv_operation), (yyvsp[(4) - (5)].sv_operation));
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 407 "yacc.y"
    {
        (yyval.sv_op) = OP_PLUS;
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 411 "yacc.y"
    {
        (yyval.sv_op) = OP_MINUS;
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 415 "yacc.y"
    {
        (yyval.sv_op) = OP_MUL;
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 419 "yacc.y"
    {
        (yyval.sv_op) = OP_DIV;
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 423 "yacc.y"
    {
        (yyval.sv_op) = OP_AND;
    }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 427 "yacc.y"
    {
        (yyval.sv_op) = OP_OR;
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 431 "yacc.y"
    {
        (yyval.sv_op) = OP_XOR;
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 435 "yacc.y"
    {
        (yyval.sv_op) = OP_NOT;
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 439 "yacc.y"
    {
        (yyval.sv_op) = OP_NOTL;
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 443 "yacc.y"
    {
        (yyval.sv_op) = OP_EQ;
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 447 "yacc.y"
    {
        (yyval.sv_op) = OP_NE;
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 451 "yacc.y"
    {
        (yyval.sv_op) = OP_LT;
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 455 "yacc.y"
    {
        (yyval.sv_op) = OP_GT;
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 459 "yacc.y"
    {
        (yyval.sv_op) = OP_LE;
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 463 "yacc.y"
    {
        (yyval.sv_op) = OP_GE;
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 470 "yacc.y"
    {
        (yyval.sv_operand) = std::move((yyvsp[(1) - (1)].sv_lvalue));
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 474 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 478 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Parameter>((yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 482 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(1);
    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 486 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(0);
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 493 "yacc.y"
    {
        (yyval.sv_tables_def) = Rp4TablesDef((yyvsp[(3) - (4)].sv_table_defs));
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 500 "yacc.y"
    {
        (yyval.sv_table_defs) = {};
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 504 "yacc.y"
    {
        (yyval.sv_table_defs).push_back((yyvsp[(2) - (2)].sv_table_def));
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 511 "yacc.y"
    {
        (yyval.sv_table_def) = Rp4TableDef((yyvsp[(2) - (6)].sv_str), (yyvsp[(4) - (6)].sv_table_key_def), (yyvsp[(5) - (6)].sv_table_optional_stmts));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 518 "yacc.y"
    {
        (yyval.sv_table_key_def) = Rp4TableKeyDef((yyvsp[(4) - (5)].sv_key_entries));
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 525 "yacc.y"
    {
        (yyval.sv_key_entries) = {};
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 529 "yacc.y"
    {
        (yyval.sv_key_entries).push_back((yyvsp[(2) - (2)].sv_key_entry));
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 536 "yacc.y"
    {
        (yyval.sv_key_entry) = Rp4KeyEntry((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_match_type));
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 543 "yacc.y"
    {
        (yyval.sv_match_type) = MT_EXACT;
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 547 "yacc.y"
    {
        (yyval.sv_match_type) = MT_TERNARY;
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 551 "yacc.y"
    {
        (yyval.sv_match_type) = MT_LPM;
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 558 "yacc.y"
    {
        (yyval.sv_table_optional_stmts) = {};
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 562 "yacc.y"
    {
        (yyval.sv_table_optional_stmts).push_back((yyvsp[(2) - (2)].sv_table_optional_stmt));
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 569 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableSizeStmt>((yyvsp[(3) - (4)].sv_int));
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 573 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableEntriesStmt>((yyvsp[(4) - (5)].sv_match_entries));
    }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 577 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 581 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>("NoAction");
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 588 "yacc.y"
    {
        (yyval.sv_match_entries) = {};
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 592 "yacc.y"
    {
        (yyval.sv_match_entries).push_back((yyvsp[(2) - (2)].sv_match_entry));
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 599 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 603 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), "NoAction");
    }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 610 "yacc.y"
    {
        (yyval.sv_match_key) = Rp4MatchKey((yyvsp[(2) - (3)].sv_keys));
    }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 617 "yacc.y"
    {
        (yyval.sv_keys) = {};
    }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 621 "yacc.y"
    {
        (yyval.sv_keys) = { (yyvsp[(1) - (1)].sv_key) };
    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 625 "yacc.y"
    {
        (yyval.sv_keys).push_back((yyvsp[(3) - (3)].sv_key));
    }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 632 "yacc.y"
    {
        (yyval.sv_pipeline) = Rp4Pipeline((yyvsp[(2) - (5)].sv_str), (yyvsp[(4) - (5)].sv_stage_defs));
    }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 639 "yacc.y"
    {
        (yyval.sv_stage_defs) = {};
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 643 "yacc.y"
    {
        (yyval.sv_stage_defs).push_back((yyvsp[(2) - (2)].sv_stage_def));
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 650 "yacc.y"
    {
        (yyval.sv_stage_def) = Rp4StageDef((yyvsp[(2) - (7)].sv_str), (yyvsp[(4) - (7)].sv_stage_parser), (yyvsp[(5) - (7)].sv_stage_matcher), (yyvsp[(6) - (7)].sv_stage_executor));
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 657 "yacc.y"
    {
        (yyval.sv_stage_parser) = Rp4StageParser((yyvsp[(3) - (5)].sv_stage_parser_headers));
    }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 664 "yacc.y"
    {
        (yyval.sv_stage_parser_headers) = {};
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 668 "yacc.y"
    {
        (yyval.sv_stage_parser_headers).push_back((yyvsp[(2) - (2)].sv_stage_parser_header));
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 675 "yacc.y"
    {
        (yyval.sv_stage_parser_header) = Rp4StageParserHeader((yyvsp[(1) - (2)].sv_str));
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 682 "yacc.y"
    {
        (yyval.sv_stage_matcher) = Rp4StageMatcher((yyvsp[(5) - (11)].sv_operations), (yyvsp[(8) - (11)].sv_switch_entries));
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 689 "yacc.y"
    {
        (yyval.sv_operations) = {};
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 693 "yacc.y"
    {
        (yyval.sv_operations) = { (yyvsp[(1) - (1)].sv_operation) };
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 697 "yacc.y"
    {
        (yyval.sv_operations).push_back((yyvsp[(3) - (3)].sv_operation));
    }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 704 "yacc.y"
    {
        (yyval.sv_switch_entries) = {};
    }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 708 "yacc.y"
    {
        (yyval.sv_switch_entries).push_back((yyvsp[(2) - (2)].sv_switch_entry));
    }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 715 "yacc.y"
    {
        (yyval.sv_switch_entry) = Rp4SwitchEntry((yyvsp[(1) - (4)].sv_key), (yyvsp[(3) - (4)].sv_switch_value));
    }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 722 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchTableStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 726 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchStageStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 730 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 734 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>("NoAction");
    }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 741 "yacc.y"
    {
        (yyval.sv_stage_executor) = Rp4StageExecutor((yyvsp[(3) - (5)].sv_stage_executor_entries));
    }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 748 "yacc.y"
    {
        (yyval.sv_stage_executor_entries) = {};
    }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 752 "yacc.y"
    {
        (yyval.sv_stage_executor_entries).push_back((yyvsp[(2) - (2)].sv_stage_executor_entry));
    }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 759 "yacc.y"
    {
        (yyval.sv_stage_executor_entry) = Rp4StageExecutorEntry((yyvsp[(1) - (4)].sv_str), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 767 "yacc.y"
    {
        (yyval.sv_str) = "__HIT__";
    }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 771 "yacc.y"
    {
        (yyval.sv_str) = "__MISS__";
    }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 775 "yacc.y"
    {
        (yyval.sv_str) = "NoAction";
    }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 783 "yacc.y"
    {
        (yyval.sv_str) = "None";
    }
    break;


/* Line 1792 of yacc.c  */
#line 2804 "yacc.cpp"
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, YY_("syntax error"));
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
        yyerror (&yylloc, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


/* Line 2055 of yacc.c  */
#line 788 "yacc.y"
