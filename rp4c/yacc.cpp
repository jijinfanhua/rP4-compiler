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
     ACTIONS = 273,
     ACTION = 274,
     NOACTION = 275,
     TABLES = 276,
     TABLE = 277,
     KEY = 278,
     SIZE = 279,
     DEFAULT_ACTION = 280,
     ENTRIES = 281,
     EXACT = 282,
     TERNARY = 283,
     LPM = 284,
     STAGE = 285,
     CONTROL = 286,
     MATCHER = 287,
     EXECUTOR = 288,
     SWITCH = 289,
     HIT = 290,
     MISS = 291,
     NONE = 292,
     IS_VALID = 293,
     EQU = 294,
     NEQ = 295,
     LEQ = 296,
     GEQ = 297,
     T_EOF = 298,
     ANDANDAND = 299,
     DIVDIVDIV = 300,
     IDENTIFIER = 301,
     VALUE_STRING = 302,
     VALUE_INT = 303
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
#line 207 "yacc.cpp"

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
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,     2,    64,     2,
      54,    55,    59,    61,    57,    62,    56,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    51,
      52,    60,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    65,    50,    67,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    12,    15,    21,    22,    26,    29,
      34,    36,    37,    40,    48,    56,    66,    67,    70,    77,
      85,    89,    98,   102,   103,   105,   109,   111,   113,   119,
     127,   128,   131,   136,   141,   143,   145,   147,   151,   155,
     157,   159,   164,   165,   168,   177,   184,   185,   187,   191,
     192,   195,   200,   202,   204,   206,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   257,   258,   261,
     268,   274,   275,   278,   283,   285,   287,   289,   290,   293,
     298,   304,   309,   314,   315,   318,   323,   328,   332,   333,
     335,   339,   345,   346,   349,   357,   363,   364,   367,   370,
     382,   383,   385,   389,   390,   393,   398,   403,   408,   413,
     418,   420,   426,   427,   430,   435,   437,   439,   441,   443,
     445
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    71,    76,    78,    90,   100,   113,   113,
      -1,    -1,    71,    72,    -1,     7,    46,    49,    73,    50,
      -1,    -1,    73,    74,    51,    -1,    75,    46,    -1,     3,
      52,    48,    53,    -1,    46,    -1,    -1,    76,    77,    -1,
       4,    46,    49,    73,    50,    46,    51,    -1,     4,     8,
      49,    73,    50,    46,    51,    -1,     9,    46,    54,    13,
      12,    55,    49,    79,    50,    -1,    -1,    79,    80,    -1,
      10,    46,    49,    81,    83,    50,    -1,    12,    56,    16,
      54,    82,    55,    51,    -1,    46,    56,    46,    -1,    11,
      17,    54,    84,    55,    49,    87,    50,    -1,    11,    85,
      51,    -1,    -1,    86,    -1,    84,    57,    86,    -1,    46,
      -1,    15,    -1,    46,    56,    46,    56,    46,    -1,    46,
      56,    46,    56,    38,    54,    55,    -1,    -1,    87,    88,
      -1,    89,    58,    46,    51,    -1,    89,    58,    15,    51,
      -1,    48,    -1,     5,    -1,     6,    -1,    48,    44,    48,
      -1,    48,    45,    48,    -1,    14,    -1,    59,    -1,    18,
      49,    91,    50,    -1,    -1,    91,    92,    -1,    19,    46,
      54,    93,    55,    49,    94,    50,    -1,    19,    20,    54,
      55,    49,    50,    -1,    -1,    74,    -1,    93,    57,    74,
      -1,    -1,    94,    95,    -1,    96,    60,    97,    51,    -1,
      82,    -1,    86,    -1,    99,    -1,    54,    97,    98,    97,
      55,    -1,    61,    -1,    62,    -1,    59,    -1,    63,    -1,
      64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      39,    -1,    40,    -1,    52,    -1,    53,    -1,    41,    -1,
      42,    -1,    96,    -1,    48,    -1,    46,    -1,     5,    -1,
       6,    -1,    21,    49,   101,    50,    -1,    -1,   101,   102,
      -1,    22,    46,    49,   103,   107,    50,    -1,    23,    60,
      49,   104,    50,    -1,    -1,   104,   105,    -1,    96,    58,
     106,    51,    -1,    27,    -1,    28,    -1,    29,    -1,    -1,
     107,   108,    -1,    24,    60,    48,    51,    -1,    26,    60,
      49,   109,    50,    -1,    25,    60,    46,    51,    -1,    25,
      60,    20,    51,    -1,    -1,   109,   110,    -1,   111,    58,
      46,    51,    -1,   111,    58,    20,    51,    -1,    54,   112,
      55,    -1,    -1,    89,    -1,   112,    57,    89,    -1,    31,
      46,    49,   114,    50,    -1,    -1,   114,   115,    -1,    30,
      46,    49,   116,   119,   124,    50,    -1,     9,    49,   117,
      50,    51,    -1,    -1,   117,   118,    -1,    46,    51,    -1,
      32,    49,    34,    54,   120,    55,    49,   121,    50,    50,
      51,    -1,    -1,    97,    -1,   120,    57,    97,    -1,    -1,
     121,   122,    -1,    89,    58,   123,    51,    -1,    22,    54,
      46,    55,    -1,    30,    54,    46,    55,    -1,    19,    54,
      46,    55,    -1,    19,    54,    20,    55,    -1,    37,    -1,
      33,    49,   125,    50,    51,    -1,    -1,   125,   126,    -1,
     127,    58,   128,    51,    -1,    46,    -1,    35,    -1,    36,
      -1,    20,    -1,    46,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   110,   113,   120,   128,   131,   138,   145,
     149,   157,   160,   167,   171,   178,   186,   189,   196,   203,
     210,   217,   221,   229,   232,   236,   243,   247,   254,   258,
     266,   269,   276,   280,   287,   291,   295,   299,   303,   307,
     311,   318,   326,   329,   336,   340,   348,   351,   355,   363,
     366,   373,   380,   384,   391,   395,   402,   406,   410,   414,
     418,   422,   426,   430,   434,   438,   442,   446,   450,   454,
     458,   465,   469,   473,   477,   481,   488,   496,   499,   506,
     513,   521,   524,   531,   538,   542,   546,   554,   557,   564,
     568,   572,   576,   584,   587,   594,   598,   605,   613,   616,
     620,   627,   635,   638,   645,   652,   660,   663,   670,   677,
     685,   688,   692,   700,   703,   710,   717,   721,   725,   729,
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
  "PACKET_IN", "DEFAULT", "ACCEPT", "EXTRACT", "SELECT", "ACTIONS",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    60,    62,    40,    41,    46,    44,    58,    42,
      61,    43,    45,    47,    38,   124,    94,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    79,    79,    80,    81,
      82,    83,    83,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    90,    91,    91,    92,    92,    93,    93,    93,    94,
      94,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,   100,   101,   101,   102,
     103,   104,   104,   105,   106,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   112,   112,
     112,   113,   114,   114,   115,   116,   117,   117,   118,   119,
     120,   120,   120,   121,   121,   122,   123,   123,   123,   123,
     123,   124,   125,   125,   126,   127,   127,   127,   127,   128,
     128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     2,     5,     0,     3,     2,     4,
       1,     0,     2,     7,     7,     9,     0,     2,     6,     7,
       3,     8,     3,     0,     1,     3,     1,     1,     5,     7,
       0,     2,     4,     4,     1,     1,     1,     3,     3,     1,
       1,     4,     0,     2,     8,     6,     0,     1,     3,     0,
       2,     4,     1,     1,     1,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     0,     2,     6,
       5,     0,     2,     4,     1,     1,     1,     0,     2,     4,
       5,     4,     4,     0,     2,     4,     4,     3,     0,     1,
       3,     5,     0,     2,     7,     5,     0,     2,     2,    11,
       0,     1,     3,     0,     2,     4,     4,     4,     4,     4,
       1,     5,     0,     2,     4,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    11,     1,     0,     4,     0,     0,     0,     0,
      12,     0,     6,     0,     0,     0,     0,     0,     0,     6,
       6,     0,    42,     0,     0,     0,    10,     5,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     7,     8,
       0,     0,     0,     0,    41,    43,     0,     0,     2,     0,
       0,     0,     0,     0,     0,     0,    76,    78,   102,     9,
      14,    13,    16,     0,    46,     0,     0,     0,     0,    47,
       0,     0,     0,   101,   103,     0,    15,    17,     0,     0,
       0,     0,    87,     0,     0,    45,    49,    48,     0,     0,
       0,     0,     0,    81,     0,     0,     0,    79,    88,     0,
       0,     0,     0,     0,    44,    52,    53,    50,     0,     0,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,    80,     0,    82,     0,     0,     0,    93,     0,     0,
       0,     0,     0,    27,     0,    26,     0,    18,    20,    74,
      75,    73,    72,     0,    71,     0,    54,     0,    89,    92,
      91,     0,     0,     0,   107,     0,   122,   104,     0,    23,
      22,     0,     0,    51,    84,    85,    86,     0,    90,    98,
      94,     0,   108,   105,   110,     0,     0,     0,     0,     0,
      24,     0,    28,    65,    66,    69,    70,    67,    68,    58,
      56,    57,    59,    60,    61,    62,    63,    64,     0,    83,
      35,    36,    39,    34,    40,    99,     0,     0,   111,     0,
     128,   126,   127,   125,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,   121,     0,    20,    19,     0,    30,    25,    29,
      55,    37,    38,   100,    96,    95,   113,   112,   130,   129,
       0,     0,     0,   124,    21,    31,     0,     0,     0,   114,
       0,     0,     0,     0,     0,   109,     0,     0,     0,   120,
       0,    33,    32,     0,     0,     0,   115,     0,     0,     0,
       0,   119,   118,   116,   117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    18,    28,    29,     6,    10,    11,
      67,    77,   102,   105,   118,   179,   136,   106,   251,   255,
     205,    17,    33,    45,    70,    92,   107,   144,   145,   198,
     146,    24,    46,    57,    82,   109,   123,   167,    89,    98,
     151,   170,   171,   206,    36,    66,    74,   100,   128,   154,
     115,   209,   252,   259,   270,   131,   175,   215,   216,   250
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -159
static const yytype_int16 yypact[] =
{
    -159,    27,    42,  -159,   -14,  -159,    25,    28,     8,    41,
    -159,    56,  -159,    44,    45,    -8,    61,    95,     7,  -159,
    -159,   113,  -159,    89,   108,    88,  -159,  -159,    91,    97,
      15,    23,   129,    -7,  -159,    98,   108,    99,  -159,  -159,
     100,   102,    94,    22,  -159,  -159,   -15,   101,  -159,    92,
     103,   104,   107,   105,   106,   111,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,   109,    12,   112,   -17,    -6,   114,  -159,
      73,   128,   116,  -159,  -159,   119,  -159,  -159,   118,   120,
      12,    93,  -159,   121,   122,  -159,  -159,  -159,   123,    58,
     143,   146,    49,  -159,   115,   124,   125,  -159,  -159,   127,
     134,   126,   156,   130,  -159,  -159,  -159,  -159,   131,    69,
     132,    50,   138,  -159,   139,   140,   158,    21,   133,   135,
      18,  -159,   136,  -159,   141,   142,   144,  -159,    71,   145,
     147,   148,   149,  -159,   150,  -159,   151,  -159,   152,  -159,
    -159,   130,  -159,    18,  -159,   154,  -159,    96,  -159,  -159,
    -159,    68,   155,   159,  -159,   153,  -159,  -159,   163,   165,
    -159,   -16,    39,  -159,  -159,  -159,  -159,   161,  -159,     3,
    -159,   157,  -159,  -159,    18,    40,   160,   162,   164,    74,
    -159,   167,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,    18,  -159,
    -159,  -159,  -159,    -5,  -159,  -159,    77,    51,  -159,    78,
    -159,  -159,  -159,  -159,   168,  -159,   166,   172,   171,   177,
     176,   165,   173,   174,   178,   179,  -159,     3,   180,   181,
     184,    18,  -159,   -18,  -159,  -159,   152,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
     183,    -3,     0,  -159,  -159,  -159,   182,   185,   186,  -159,
       6,   187,    90,   188,   190,  -159,   189,   191,   192,  -159,
     196,  -159,  -159,    65,   202,   203,  -159,   175,   195,   197,
     198,  -159,  -159,  -159,  -159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,   117,   -39,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,    19,  -159,  -159,  -159,  -158,  -159,  -159,
    -138,  -159,  -159,  -159,  -159,  -159,  -159,   -72,  -143,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,   200,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     162,   180,   200,   201,    75,   200,   201,    55,   200,   201,
      25,   202,    43,    72,   202,    25,    13,   202,    25,   248,
     108,   263,   181,   139,   140,    69,    25,     3,   249,     8,
     182,   208,     7,    73,     9,    56,   133,   122,   134,   224,
     225,    87,    53,    44,    76,   203,    21,   254,   203,     4,
     257,   203,   264,    26,    14,   223,   204,    27,    26,   204,
     210,    26,   204,   238,   141,    40,   142,   135,    54,    26,
     125,   228,   143,    41,    16,   211,   212,    12,   183,   184,
     185,   186,    94,    95,    96,   277,   213,    15,   247,   243,
     214,   187,   188,    19,    20,   103,   126,   229,   189,   104,
     190,   191,   192,   193,   194,   195,   196,   197,    97,   266,
      22,   278,   267,   256,   258,   103,    23,   152,   168,   121,
     268,   153,   169,   164,   165,   166,    32,   269,    79,   220,
      80,   221,   226,   230,   227,   231,    30,    31,    34,    35,
      37,    42,    38,    39,    47,    59,    50,    49,    51,    52,
      58,    81,    99,    88,    60,    61,    62,    65,   101,    63,
      64,    71,    83,    78,    68,    84,   114,   117,    85,    86,
      90,    91,    93,   130,   132,   110,   113,   177,     0,   155,
     124,   138,   116,   137,   111,   112,   119,   127,   129,     0,
       0,   120,   148,   149,   147,   150,   156,     0,   157,     0,
       0,     0,   160,   158,   159,   163,   172,   174,   161,   176,
     173,   178,   199,     0,     0,   207,   217,   218,   234,   232,
     219,   222,   235,   236,   233,   237,   241,   242,   239,   240,
     281,   244,   245,   246,   253,   261,    48,     0,   265,   271,
     260,   272,     0,   273,   262,   274,   275,   276,   279,   280,
     282,     0,   283,   284
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-159)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     143,   159,     5,     6,    10,     5,     6,    22,     5,     6,
       3,    14,    19,    30,    14,     3,     8,    14,     3,    37,
      92,    15,    38,     5,     6,    64,     3,     0,    46,     4,
      46,   174,    46,    50,     9,    50,    15,   109,    17,    44,
      45,    80,    20,    50,    50,    48,    54,    50,    48,     7,
      50,    48,    46,    46,    46,   198,    59,    50,    46,    59,
      20,    46,    59,   221,    46,    50,    48,    46,    46,    46,
      20,    20,    54,    50,    18,    35,    36,    49,    39,    40,
      41,    42,    24,    25,    26,    20,    46,    46,   231,   227,
      50,    52,    53,    49,    49,    46,    46,    46,    59,    50,
      61,    62,    63,    64,    65,    66,    67,    68,    50,    19,
      49,    46,    22,   251,   252,    46,    21,    46,    50,    50,
      30,    50,    54,    27,    28,    29,    13,    37,    55,    55,
      57,    57,    55,    55,    57,    57,    19,    20,    49,    31,
      52,    12,    51,    46,    46,    53,    46,    48,    46,    55,
      49,    23,     9,    60,    51,    51,    49,    46,    12,    54,
      54,    49,    46,    49,    55,    46,    32,    11,    50,    49,
      49,    49,    49,    33,    16,    60,    49,   158,    -1,    34,
      48,    46,    56,    50,    60,    60,    56,    49,    49,    -1,
      -1,    60,    51,    51,    58,    51,    49,    -1,    50,    -1,
      -1,    -1,    51,    54,    54,    51,    51,    54,    56,    46,
      51,    46,    51,    -1,    -1,    58,    56,    55,    46,    51,
      56,    54,    51,    46,    58,    49,    48,    48,    55,    55,
      55,    51,    51,    49,    51,    50,    36,    -1,    51,    51,
      58,    51,    -1,    54,    58,    54,    54,    51,    46,    46,
      55,    -1,    55,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,    71,     0,     7,    72,    76,    46,     4,     9,
      77,    78,    49,     8,    46,    46,    18,    90,    73,    49,
      49,    54,    49,    21,   100,     3,    46,    50,    74,    75,
      73,    73,    13,    91,    49,    31,   113,    52,    51,    46,
      50,    50,    12,    19,    50,    92,   101,    46,   113,    48,
      46,    46,    55,    20,    46,    22,    50,   102,    49,    53,
      51,    51,    49,    54,    54,    46,   114,    79,    55,    74,
      93,    49,    30,    50,   115,    10,    50,    80,    49,    55,
      57,    23,   103,    46,    46,    50,    49,    74,    60,   107,
      49,    49,    94,    49,    24,    25,    26,    50,   108,     9,
     116,    12,    81,    46,    50,    82,    86,    95,    96,   104,
      60,    60,    60,    49,    32,   119,    56,    11,    83,    56,
      60,    50,    96,   105,    48,    20,    46,    49,   117,    49,
      33,   124,    16,    15,    17,    46,    85,    50,    46,     5,
       6,    46,    48,    54,    96,    97,    99,    58,    51,    51,
      51,   109,    46,    50,   118,    34,    49,    50,    54,    54,
      51,    56,    97,    51,    27,    28,    29,   106,    50,    54,
     110,   111,    51,    51,    54,   125,    46,    82,    46,    84,
      86,    38,    46,    39,    40,    41,    42,    52,    53,    59,
      61,    62,    63,    64,    65,    66,    67,    68,    98,    51,
       5,     6,    14,    48,    59,    89,   112,    58,    97,   120,
      20,    35,    36,    46,    50,   126,   127,    56,    55,    56,
      55,    57,    54,    97,    44,    45,    55,    57,    20,    46,
      55,    57,    51,    58,    46,    51,    46,    49,    86,    55,
      55,    48,    48,    89,    51,    51,    49,    97,    37,    46,
     128,    87,   121,    51,    50,    88,    89,    50,    89,   122,
      58,    50,    58,    15,    46,    51,    19,    22,    30,    37,
     123,    51,    51,    54,    54,    54,    51,    20,    46,    46,
      46,    55,    55,    55,    55
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
#line 255 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (5)].sv_str), (yyvsp[(3) - (5)].sv_str), (yyvsp[(5) - (5)].sv_str));
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 259 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (7)].sv_str), (yyvsp[(3) - (7)].sv_str), "isValid");
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 266 "yacc.y"
    {
        (yyval.sv_transition_entries) = {};
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 270 "yacc.y"
    {
        (yyval.sv_transition_entries).push_back((yyvsp[(2) - (2)].sv_transition_entry));
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 277 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), "accept", true);
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 288 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 292 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(1);
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 296 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(0);
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 300 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4TernaryKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 304 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4LpmKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 308 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
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
#line 319 "yacc.y"
    {
        (yyval.sv_actions_def) = Rp4ActionsDef((yyvsp[(3) - (4)].sv_action_defs));
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 326 "yacc.y"
    {
        (yyval.sv_action_defs) = {};
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 330 "yacc.y"
    {
        (yyval.sv_action_defs).push_back((yyvsp[(2) - (2)].sv_action_def));
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 337 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef((yyvsp[(2) - (8)].sv_str), (yyvsp[(4) - (8)].sv_field_defs), (yyvsp[(7) - (8)].sv_expressions));
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 341 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef("NoAction", {}, {}, true);
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 348 "yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 352 "yacc.y"
    {
        (yyval.sv_field_defs) = { (yyvsp[(1) - (1)].sv_field_def) };
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 356 "yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[(3) - (3)].sv_field_def));
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 363 "yacc.y"
    {
        (yyval.sv_expressions) = {};
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 367 "yacc.y"
    {
        (yyval.sv_expressions).push_back((yyvsp[(2) - (2)].sv_expression));
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 374 "yacc.y"
    {
        (yyval.sv_expression) = Rp4Expression((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_operation));
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 381 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4MetaLValue>((yyvsp[(1) - (1)].sv_member));
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 385 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4HeaderLValue>((yyvsp[(1) - (1)].sv_field));
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 392 "yacc.y"
    {
        (yyval.sv_operation) = std::move((yyvsp[(1) - (1)].sv_operand));
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 396 "yacc.y"
    {
        (yyval.sv_operation) = std::make_shared<Rp4Binary>((yyvsp[(3) - (5)].sv_op), (yyvsp[(2) - (5)].sv_operation), (yyvsp[(4) - (5)].sv_operation));
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 403 "yacc.y"
    {
        (yyval.sv_op) = OP_PLUS;
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 407 "yacc.y"
    {
        (yyval.sv_op) = OP_MINUS;
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 411 "yacc.y"
    {
        (yyval.sv_op) = OP_MUL;
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 415 "yacc.y"
    {
        (yyval.sv_op) = OP_DIV;
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 419 "yacc.y"
    {
        (yyval.sv_op) = OP_AND;
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 423 "yacc.y"
    {
        (yyval.sv_op) = OP_OR;
    }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 427 "yacc.y"
    {
        (yyval.sv_op) = OP_XOR;
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 431 "yacc.y"
    {
        (yyval.sv_op) = OP_NOT;
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 435 "yacc.y"
    {
        (yyval.sv_op) = OP_NOTL;
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 439 "yacc.y"
    {
        (yyval.sv_op) = OP_EQ;
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 443 "yacc.y"
    {
        (yyval.sv_op) = OP_NE;
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 447 "yacc.y"
    {
        (yyval.sv_op) = OP_LT;
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 451 "yacc.y"
    {
        (yyval.sv_op) = OP_GT;
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 455 "yacc.y"
    {
        (yyval.sv_op) = OP_LE;
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 459 "yacc.y"
    {
        (yyval.sv_op) = OP_GE;
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 466 "yacc.y"
    {
        (yyval.sv_operand) = std::move((yyvsp[(1) - (1)].sv_lvalue));
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 470 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 474 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Parameter>((yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 478 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(1);
    }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 482 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(0);
    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 489 "yacc.y"
    {
        (yyval.sv_tables_def) = Rp4TablesDef((yyvsp[(3) - (4)].sv_table_defs));
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 496 "yacc.y"
    {
        (yyval.sv_table_defs) = {};
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 500 "yacc.y"
    {
        (yyval.sv_table_defs).push_back((yyvsp[(2) - (2)].sv_table_def));
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 507 "yacc.y"
    {
        (yyval.sv_table_def) = Rp4TableDef((yyvsp[(2) - (6)].sv_str), (yyvsp[(4) - (6)].sv_table_key_def), (yyvsp[(5) - (6)].sv_table_optional_stmts));
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 514 "yacc.y"
    {
        (yyval.sv_table_key_def) = Rp4TableKeyDef((yyvsp[(4) - (5)].sv_key_entries));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 521 "yacc.y"
    {
        (yyval.sv_key_entries) = {};
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 525 "yacc.y"
    {
        (yyval.sv_key_entries).push_back((yyvsp[(2) - (2)].sv_key_entry));
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 532 "yacc.y"
    {
        (yyval.sv_key_entry) = Rp4KeyEntry((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_match_type));
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 539 "yacc.y"
    {
        (yyval.sv_match_type) = MT_EXACT;
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 543 "yacc.y"
    {
        (yyval.sv_match_type) = MT_TERNARY;
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 547 "yacc.y"
    {
        (yyval.sv_match_type) = MT_LPM;
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 554 "yacc.y"
    {
        (yyval.sv_table_optional_stmts) = {};
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 558 "yacc.y"
    {
        (yyval.sv_table_optional_stmts).push_back((yyvsp[(2) - (2)].sv_table_optional_stmt));
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 565 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableSizeStmt>((yyvsp[(3) - (4)].sv_int));
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 569 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableEntriesStmt>((yyvsp[(4) - (5)].sv_match_entries));
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 573 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 577 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>("NoAction");
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 584 "yacc.y"
    {
        (yyval.sv_match_entries) = {};
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 588 "yacc.y"
    {
        (yyval.sv_match_entries).push_back((yyvsp[(2) - (2)].sv_match_entry));
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 595 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 599 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), "NoAction");
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 606 "yacc.y"
    {
        (yyval.sv_match_key) = Rp4MatchKey((yyvsp[(2) - (3)].sv_keys));
    }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 613 "yacc.y"
    {
        (yyval.sv_keys) = {};
    }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 617 "yacc.y"
    {
        (yyval.sv_keys) = { (yyvsp[(1) - (1)].sv_key) };
    }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 621 "yacc.y"
    {
        (yyval.sv_keys).push_back((yyvsp[(3) - (3)].sv_key));
    }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 628 "yacc.y"
    {
        (yyval.sv_pipeline) = Rp4Pipeline((yyvsp[(2) - (5)].sv_str), (yyvsp[(4) - (5)].sv_stage_defs));
    }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 635 "yacc.y"
    {
        (yyval.sv_stage_defs) = {};
    }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 639 "yacc.y"
    {
        (yyval.sv_stage_defs).push_back((yyvsp[(2) - (2)].sv_stage_def));
    }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 646 "yacc.y"
    {
        (yyval.sv_stage_def) = Rp4StageDef((yyvsp[(2) - (7)].sv_str), (yyvsp[(4) - (7)].sv_stage_parser), (yyvsp[(5) - (7)].sv_stage_matcher), (yyvsp[(6) - (7)].sv_stage_executor));
    }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 653 "yacc.y"
    {
        (yyval.sv_stage_parser) = Rp4StageParser((yyvsp[(3) - (5)].sv_stage_parser_headers));
    }
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 660 "yacc.y"
    {
        (yyval.sv_stage_parser_headers) = {};
    }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 664 "yacc.y"
    {
        (yyval.sv_stage_parser_headers).push_back((yyvsp[(2) - (2)].sv_stage_parser_header));
    }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 671 "yacc.y"
    {
        (yyval.sv_stage_parser_header) = Rp4StageParserHeader((yyvsp[(1) - (2)].sv_str));
    }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 678 "yacc.y"
    {
        (yyval.sv_stage_matcher) = Rp4StageMatcher((yyvsp[(5) - (11)].sv_operations), (yyvsp[(8) - (11)].sv_switch_entries));
    }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 685 "yacc.y"
    {
        (yyval.sv_operations) = {};
    }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 689 "yacc.y"
    {
        (yyval.sv_operations) = { (yyvsp[(1) - (1)].sv_operation) };
    }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 693 "yacc.y"
    {
        (yyval.sv_operations).push_back((yyvsp[(3) - (3)].sv_operation));
    }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 700 "yacc.y"
    {
        (yyval.sv_switch_entries) = {};
    }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 704 "yacc.y"
    {
        (yyval.sv_switch_entries).push_back((yyvsp[(2) - (2)].sv_switch_entry));
    }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 711 "yacc.y"
    {
        (yyval.sv_switch_entry) = Rp4SwitchEntry((yyvsp[(1) - (4)].sv_key), (yyvsp[(3) - (4)].sv_switch_value));
    }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 718 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchTableStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 722 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchStageStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 726 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 730 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchActionStmt>("NoAction");
    }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 734 "yacc.y"
    {
        (yyval.sv_switch_value) = std::make_shared<Rp4SwitchStageStmt>("None", true);
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
#line 2803 "yacc.cpp"
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
