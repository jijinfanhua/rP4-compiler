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
     CONTROL = 285,
     MATCHER = 286,
     EXECUTOR = 287,
     SWITCH = 288,
     HIT = 289,
     MISS = 290,
     IS_VALID = 291,
     EQU = 292,
     NEQ = 293,
     LEQ = 294,
     GEQ = 295,
     T_EOF = 296,
     ANDANDAND = 297,
     DIVDIVDIV = 298,
     IDENTIFIER = 299,
     VALUE_STRING = 300,
     VALUE_INT = 301
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
#line 205 "yacc.cpp"

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
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,     2,    62,     2,
      52,    53,    56,    59,    57,    60,    54,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    49,
      50,    58,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    63,    48,    65,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    19,    20,    24,    27,
      32,    34,    35,    38,    46,    54,    64,    65,    68,    75,
      83,    87,    96,   100,   102,   104,   110,   118,   119,   122,
     127,   132,   134,   136,   138,   142,   146,   148,   150,   155,
     156,   159,   168,   175,   176,   178,   182,   183,   186,   191,
     193,   195,   197,   203,   205,   207,   209,   211,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   248,   249,   252,   259,   265,   266,
     269,   274,   276,   278,   280,   281,   284,   289,   295,   300,
     305,   306,   309,   314,   319,   323,   324,   326
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    69,    74,    76,    87,    97,    -1,    -1,
      69,    70,    -1,     7,    44,    47,    71,    48,    -1,    -1,
      71,    72,    49,    -1,    73,    44,    -1,     3,    50,    46,
      51,    -1,    44,    -1,    -1,    74,    75,    -1,     4,    44,
      47,    71,    48,    44,    49,    -1,     4,     8,    47,    71,
      48,    44,    49,    -1,     9,    44,    52,    13,    12,    53,
      47,    77,    48,    -1,    -1,    77,    78,    -1,    10,    44,
      47,    79,    81,    48,    -1,    12,    54,    16,    52,    80,
      53,    49,    -1,    44,    54,    44,    -1,    11,    17,    52,
      83,    53,    47,    84,    48,    -1,    11,    82,    49,    -1,
      44,    -1,    15,    -1,    44,    54,    44,    54,    44,    -1,
      44,    54,    44,    54,    36,    52,    53,    -1,    -1,    84,
      85,    -1,    86,    55,    44,    49,    -1,    86,    55,    15,
      49,    -1,    46,    -1,     5,    -1,     6,    -1,    46,    42,
      46,    -1,    46,    43,    46,    -1,    14,    -1,    56,    -1,
      18,    47,    88,    48,    -1,    -1,    88,    89,    -1,    19,
      44,    52,    90,    53,    47,    91,    48,    -1,    19,    20,
      52,    53,    47,    48,    -1,    -1,    72,    -1,    90,    57,
      72,    -1,    -1,    91,    92,    -1,    93,    58,    94,    49,
      -1,    80,    -1,    83,    -1,    96,    -1,    52,    94,    95,
      94,    53,    -1,    59,    -1,    60,    -1,    56,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    37,    -1,    38,    -1,    50,    -1,    51,    -1,    39,
      -1,    40,    -1,    93,    -1,    46,    -1,    44,    -1,     5,
      -1,     6,    -1,    21,    47,    98,    48,    -1,    -1,    98,
      99,    -1,    22,    44,    47,   100,   104,    48,    -1,    23,
      58,    47,   101,    48,    -1,    -1,   101,   102,    -1,    93,
      55,   103,    49,    -1,    27,    -1,    28,    -1,    29,    -1,
      -1,   104,   105,    -1,    24,    58,    46,    49,    -1,    26,
      58,    47,   106,    48,    -1,    25,    58,    44,    49,    -1,
      25,    58,    20,    49,    -1,    -1,   106,   107,    -1,   108,
      55,    44,    49,    -1,   108,    55,    20,    49,    -1,    52,
     109,    53,    -1,    -1,    86,    -1,   109,    57,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    94,    97,   104,   112,   115,   122,   129,
     133,   141,   144,   151,   155,   162,   170,   173,   180,   187,
     194,   201,   205,   212,   216,   223,   227,   235,   238,   245,
     249,   256,   260,   264,   268,   272,   276,   280,   287,   295,
     298,   305,   309,   317,   320,   324,   332,   335,   342,   349,
     353,   360,   364,   371,   375,   379,   383,   387,   391,   395,
     399,   403,   407,   411,   415,   419,   423,   427,   434,   438,
     442,   446,   450,   457,   465,   468,   475,   482,   490,   493,
     500,   507,   511,   515,   523,   526,   533,   537,   541,   545,
     553,   556,   563,   567,   574,   582,   585,   589
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
  "ENTRIES", "EXACT", "TERNARY", "LPM", "CONTROL", "MATCHER", "EXECUTOR",
  "SWITCH", "HIT", "MISS", "IS_VALID", "EQU", "NEQ", "LEQ", "GEQ", "T_EOF",
  "ANDANDAND", "DIVDIVDIV", "IDENTIFIER", "VALUE_STRING", "VALUE_INT",
  "'{'", "'}'", "';'", "'<'", "'>'", "'('", "')'", "'.'", "':'", "'*'",
  "','", "'='", "'+'", "'-'", "'/'", "'&'", "'|'", "'^'", "'~'", "'!'",
  "$accept", "start", "header_defs", "header_def", "field_defs",
  "field_def", "type_def", "struct_defs", "struct_def", "parser_def",
  "state_defs", "state_def", "extract_stmt", "member", "transition_stmt",
  "direct_entry", "field", "transition_entries", "transition_entry",
  "key_def", "actions_def", "action_defs", "action_def", "parameters",
  "expressions", "expression", "lvalue", "operation", "op", "operand",
  "tables_def", "table_defs", "table_def", "table_key_def", "key_entries",
  "key_entry", "match_type", "table_optional_stmts", "table_optional_stmt",
  "match_entries", "match_entry", "match_key", "key_defs", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   123,   125,    59,
      60,    62,    40,    41,    46,    58,    42,    44,    61,    43,
      45,    47,    38,   124,    94,   126,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    78,    79,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    97,    98,    98,    99,   100,   101,   101,
     102,   103,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   107,   108,   109,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     5,     0,     3,     2,     4,
       1,     0,     2,     7,     7,     9,     0,     2,     6,     7,
       3,     8,     3,     1,     1,     5,     7,     0,     2,     4,
       4,     1,     1,     1,     3,     3,     1,     1,     4,     0,
       2,     8,     6,     0,     1,     3,     0,     2,     4,     1,
       1,     1,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     2,     6,     5,     0,     2,
       4,     1,     1,     1,     0,     2,     4,     5,     4,     4,
       0,     2,     4,     4,     3,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    11,     1,     0,     4,     0,     0,     0,     0,
      12,     0,     6,     0,     0,     0,     0,     0,     0,     6,
       6,     0,    39,     0,     2,     0,    10,     5,     0,     0,
       0,     0,     0,     0,    74,     0,     7,     8,     0,     0,
       0,     0,    38,    40,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    75,     9,    14,    13,    16,     0,    43,
       0,     0,     0,    44,     0,     0,     0,    15,    17,     0,
       0,     0,     0,    84,     0,    42,    46,    45,     0,     0,
       0,     0,    78,     0,     0,     0,    76,    85,     0,     0,
       0,    41,    49,    50,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,    79,     0,     0,
       0,    90,     0,    24,     0,    23,     0,    18,    20,    71,
      72,    70,    69,     0,    68,     0,    51,     0,    86,    89,
      88,     0,     0,     0,    22,     0,     0,    48,    81,    82,
      83,     0,    87,    95,    91,     0,     0,     0,     0,     0,
       0,    25,    62,    63,    66,    67,    64,    65,    55,    53,
      54,    56,    57,    58,    59,    60,    61,     0,    80,    32,
      33,    36,    31,    37,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,    20,
      19,     0,    27,    26,    52,    34,    35,    97,    93,    92,
       0,    21,    28,     0,     0,     0,     0,    30,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    18,    28,    29,     6,    10,    11,
      61,    68,    89,    92,   102,   116,    93,   200,   202,   174,
      17,    33,    43,    64,    81,    94,   124,   125,   167,   126,
      24,    44,    53,    73,    96,   107,   141,    79,    87,   131,
     144,   145,   175
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
    -170,    27,    17,  -170,    21,  -170,    19,    28,    14,    47,
    -170,    18,  -170,    53,    54,    52,    55,    82,     2,  -170,
    -170,    92,  -170,    59,  -170,    57,  -170,  -170,    60,    64,
       8,    11,    98,    -9,  -170,    65,  -170,  -170,    68,    69,
      62,    49,  -170,  -170,    -6,    63,    67,    71,    72,    66,
      73,    77,  -170,  -170,  -170,  -170,  -170,  -170,    74,     5,
      75,    -8,    76,  -170,   -28,    94,    80,  -170,  -170,    78,
      81,     5,    79,  -170,    83,  -170,  -170,  -170,    84,    42,
     117,   -11,  -170,    85,    86,    87,  -170,  -170,    88,   121,
      93,  -170,  -170,  -170,  -170,    90,   -10,    89,    50,    91,
     118,     4,   101,    95,     1,  -170,    96,  -170,    97,   103,
     104,  -170,   102,  -170,   105,  -170,   106,  -170,   107,  -170,
    -170,    93,  -170,     1,  -170,   109,  -170,    70,  -170,  -170,
    -170,    24,   112,   115,  -170,   -18,    23,  -170,  -170,  -170,
    -170,   111,  -170,    -2,  -170,   108,   110,   113,   114,   116,
     119,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,     1,  -170,  -170,
    -170,  -170,    35,  -170,  -170,    39,    51,   123,   124,   126,
     125,   122,   127,   128,   130,  -170,    -2,   129,   132,  -170,
    -170,   107,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
      -5,  -170,  -170,   131,    20,   133,   134,  -170,  -170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,  -170,    61,   -39,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,     9,  -170,  -170,     0,  -170,  -170,  -169,
    -170,  -170,  -170,  -170,  -170,  -170,   -66,  -110,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     169,   170,    66,   169,   170,    25,   119,   120,    25,   171,
      41,    25,   171,   136,    25,    95,    51,   197,   150,   113,
      63,   114,    13,     8,     4,    70,   151,     3,     9,    71,
     106,   203,    77,    90,    90,   205,    16,    91,   105,    42,
      67,   172,    52,   201,   172,   121,    26,   122,   115,    26,
      27,   173,    26,   123,   173,    26,    38,   182,    14,    39,
     152,   153,   154,   155,   206,     7,    83,    84,    85,    49,
     109,   187,   142,   156,   157,    12,   143,   183,   184,   158,
      30,    31,   159,   160,   161,   162,   163,   164,   165,   166,
      86,    15,   185,    50,   110,   188,   186,   138,   139,   140,
      19,    20,    22,    23,    21,    32,    34,    35,    37,    36,
      40,    45,    46,    47,    54,    48,    55,    72,    58,    57,
      56,    60,    65,    69,    74,    59,    75,    62,    76,    88,
      80,    82,   101,   149,   112,   108,     0,    78,   111,   118,
       0,   147,   100,    97,    98,    99,   128,   103,   104,   117,
       0,   127,   129,   130,   132,   134,   146,   133,   137,   148,
     168,   135,     0,   176,   177,     0,   178,   189,   179,   180,
     191,   181,   192,   190,   195,   193,   196,     0,   198,     0,
     194,   199,   207,   208,     0,     0,   204
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    10,     5,     6,     3,     5,     6,     3,    14,
      19,     3,    14,   123,     3,    81,    22,   186,    36,    15,
      59,    17,     8,     4,     7,    53,    44,     0,     9,    57,
      96,   200,    71,    44,    44,    15,    18,    48,    48,    48,
      48,    46,    48,    48,    46,    44,    44,    46,    44,    44,
      48,    56,    44,    52,    56,    44,    48,   167,    44,    48,
      37,    38,    39,    40,    44,    44,    24,    25,    26,    20,
      20,    20,    48,    50,    51,    47,    52,    42,    43,    56,
      19,    20,    59,    60,    61,    62,    63,    64,    65,    66,
      48,    44,    53,    44,    44,    44,    57,    27,    28,    29,
      47,    47,    47,    21,    52,    13,    47,    50,    44,    49,
      12,    46,    44,    44,    51,    53,    49,    23,    52,    47,
      49,    44,    47,    47,    44,    52,    48,    53,    47,    12,
      47,    47,    11,   133,    16,    46,    -1,    58,    47,    44,
      -1,   132,    54,    58,    58,    58,    49,    54,    58,    48,
      -1,    55,    49,    49,    52,    49,    44,    52,    49,    44,
      49,    54,    -1,    55,    54,    -1,    53,    44,    54,    53,
      44,    52,    47,    49,    46,    53,    46,    -1,    49,    -1,
      53,    49,    49,    49,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    69,     0,     7,    70,    74,    44,     4,     9,
      75,    76,    47,     8,    44,    44,    18,    87,    71,    47,
      47,    52,    47,    21,    97,     3,    44,    48,    72,    73,
      71,    71,    13,    88,    47,    50,    49,    44,    48,    48,
      12,    19,    48,    89,    98,    46,    44,    44,    53,    20,
      44,    22,    48,    99,    51,    49,    49,    47,    52,    52,
      44,    77,    53,    72,    90,    47,    10,    48,    78,    47,
      53,    57,    23,   100,    44,    48,    47,    72,    58,   104,
      47,    91,    47,    24,    25,    26,    48,   105,    12,    79,
      44,    48,    80,    83,    92,    93,   101,    58,    58,    58,
      54,    11,    81,    54,    58,    48,    93,   102,    46,    20,
      44,    47,    16,    15,    17,    44,    82,    48,    44,     5,
       6,    44,    46,    52,    93,    94,    96,    55,    49,    49,
      49,   106,    52,    52,    49,    54,    94,    49,    27,    28,
      29,   103,    48,    52,   107,   108,    44,    80,    44,    83,
      36,    44,    37,    38,    39,    40,    50,    51,    56,    59,
      60,    61,    62,    63,    64,    65,    66,    95,    49,     5,
       6,    14,    46,    56,    86,   109,    55,    54,    53,    54,
      53,    52,    94,    42,    43,    53,    57,    20,    44,    44,
      49,    44,    47,    53,    53,    46,    46,    86,    49,    49,
      84,    48,    85,    86,    55,    15,    44,    49,    49
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
#line 85 "yacc.y"
    {
        tree = std::make_unique<Rp4Ast>((yyvsp[(1) - (5)].sv_header_defs), (yyvsp[(2) - (5)].sv_struct_defs), (yyvsp[(3) - (5)].sv_parser_def), (yyvsp[(4) - (5)].sv_actions_def), (yyvsp[(5) - (5)].sv_tables_def));
        YYACCEPT;
    }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 94 "yacc.y"
    {
        (yyval.sv_header_defs) = {};
    }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 98 "yacc.y"
    {
        (yyval.sv_header_defs).push_back((yyvsp[(2) - (2)].sv_header_def));
    }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 105 "yacc.y"
    {
        (yyval.sv_header_def) = Rp4HeaderDef((yyvsp[(2) - (5)].sv_str), (yyvsp[(4) - (5)].sv_field_defs));
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 112 "yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 116 "yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[(2) - (3)].sv_field_def));
    }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 123 "yacc.y"
    {
        (yyval.sv_field_def) = Rp4FieldDef((yyvsp[(1) - (2)].sv_type), (yyvsp[(2) - (2)].sv_str));
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 130 "yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4BitType>((yyvsp[(3) - (4)].sv_int));
    }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 134 "yacc.y"
    {
        (yyval.sv_type) = std::make_shared<Rp4NamedType>((yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 141 "yacc.y"
    {
        (yyval.sv_struct_defs) = {};
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 145 "yacc.y"
    {
        (yyval.sv_struct_defs).push_back((yyvsp[(2) - (2)].sv_struct_def));
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 152 "yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef((yyvsp[(2) - (7)].sv_str), (yyvsp[(4) - (7)].sv_field_defs), (yyvsp[(6) - (7)].sv_str));
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 156 "yacc.y"
    {
        (yyval.sv_struct_def) = Rp4StructDef("headers", (yyvsp[(4) - (7)].sv_field_defs), (yyvsp[(6) - (7)].sv_str), true);
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 163 "yacc.y"
    {
        (yyval.sv_parser_def) = Rp4ParserDef((yyvsp[(2) - (9)].sv_str), (yyvsp[(8) - (9)].sv_state_defs));
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 170 "yacc.y"
    {
        (yyval.sv_state_defs) = {};
    }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 174 "yacc.y"
    {
        (yyval.sv_state_defs).push_back((yyvsp[(2) - (2)].sv_state_def));
    }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 181 "yacc.y"
    {
        (yyval.sv_state_def) = Rp4StateDef((yyvsp[(2) - (6)].sv_str), (yyvsp[(4) - (6)].sv_extract_stmt), (yyvsp[(5) - (6)].sv_transition_stmt));
    }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 188 "yacc.y"
    {
        (yyval.sv_extract_stmt) = Rp4Extract((yyvsp[(5) - (7)].sv_member));
    }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 195 "yacc.y"
    {
        (yyval.sv_member) = Rp4Member((yyvsp[(1) - (3)].sv_str), (yyvsp[(3) - (3)].sv_str));
    }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 202 "yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4SelectTransition>((yyvsp[(4) - (8)].sv_field), (yyvsp[(7) - (8)].sv_transition_entries));
    }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 206 "yacc.y"
    {
        (yyval.sv_transition_stmt) = std::make_shared<Rp4DirectTransition>((yyvsp[(2) - (3)].sv_transition_entry));
    }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 213 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), (yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 217 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), "accept", true);
    }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 224 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (5)].sv_str), (yyvsp[(3) - (5)].sv_str), (yyvsp[(5) - (5)].sv_str));
    }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 228 "yacc.y"
    {
        (yyval.sv_field) = Rp4Field((yyvsp[(1) - (7)].sv_str), (yyvsp[(3) - (7)].sv_str), "isValid");
    }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 235 "yacc.y"
    {
        (yyval.sv_transition_entries) = {};
    }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 239 "yacc.y"
    {
        (yyval.sv_transition_entries).push_back((yyvsp[(2) - (2)].sv_transition_entry));
    }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 246 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 250 "yacc.y"
    {
        (yyval.sv_transition_entry) = Rp4TransitionEntry((yyvsp[(1) - (4)].sv_key), "accept", true);
    }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 257 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 261 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(1);
    }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 265 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4ExactKey>(0);
    }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 269 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4TernaryKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 273 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4LpmKey>((yyvsp[(1) - (3)].sv_int), (yyvsp[(3) - (3)].sv_int));
    }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 277 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 281 "yacc.y"
    {
        (yyval.sv_key) = std::make_shared<Rp4DefaultKey>();
    }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 288 "yacc.y"
    {
        (yyval.sv_actions_def) = Rp4ActionsDef((yyvsp[(3) - (4)].sv_action_defs));
    }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 295 "yacc.y"
    {
        (yyval.sv_action_defs) = {};
    }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 299 "yacc.y"
    {
        (yyval.sv_action_defs).push_back((yyvsp[(2) - (2)].sv_action_def));
    }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 306 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef((yyvsp[(2) - (8)].sv_str), (yyvsp[(4) - (8)].sv_field_defs), (yyvsp[(7) - (8)].sv_expressions));
    }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 310 "yacc.y"
    {
        (yyval.sv_action_def) = Rp4ActionDef("NoAction", {}, {}, true);
    }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 317 "yacc.y"
    {
        (yyval.sv_field_defs) = {};
    }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 321 "yacc.y"
    {
        (yyval.sv_field_defs) = { (yyvsp[(1) - (1)].sv_field_def) };
    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 325 "yacc.y"
    {
        (yyval.sv_field_defs).push_back((yyvsp[(3) - (3)].sv_field_def));
    }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 332 "yacc.y"
    {
        (yyval.sv_expressions) = {};
    }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 336 "yacc.y"
    {
        (yyval.sv_expressions).push_back((yyvsp[(2) - (2)].sv_expression));
    }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 343 "yacc.y"
    {
        (yyval.sv_expression) = Rp4Expression((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_operation));
    }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 350 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4MetaLValue>((yyvsp[(1) - (1)].sv_member));
    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 354 "yacc.y"
    {
        (yyval.sv_lvalue) = std::make_shared<Rp4HeaderLValue>((yyvsp[(1) - (1)].sv_field));
    }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 361 "yacc.y"
    {
        (yyval.sv_operation) = std::move((yyvsp[(1) - (1)].sv_operand));
    }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 365 "yacc.y"
    {
        (yyval.sv_operation) = std::make_shared<Rp4Binary>((yyvsp[(3) - (5)].sv_op), (yyvsp[(2) - (5)].sv_operation), (yyvsp[(4) - (5)].sv_operation));
    }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 372 "yacc.y"
    {
        (yyval.sv_op) = OP_PLUS;
    }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 376 "yacc.y"
    {
        (yyval.sv_op) = OP_MINUS;
    }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 380 "yacc.y"
    {
        (yyval.sv_op) = OP_MUL;
    }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 384 "yacc.y"
    {
        (yyval.sv_op) = OP_DIV;
    }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 388 "yacc.y"
    {
        (yyval.sv_op) = OP_AND;
    }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 392 "yacc.y"
    {
        (yyval.sv_op) = OP_OR;
    }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 396 "yacc.y"
    {
        (yyval.sv_op) = OP_XOR;
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 400 "yacc.y"
    {
        (yyval.sv_op) = OP_NOT;
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 404 "yacc.y"
    {
        (yyval.sv_op) = OP_NOTL;
    }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 408 "yacc.y"
    {
        (yyval.sv_op) = OP_EQ;
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 412 "yacc.y"
    {
        (yyval.sv_op) = OP_NE;
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 416 "yacc.y"
    {
        (yyval.sv_op) = OP_LT;
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 420 "yacc.y"
    {
        (yyval.sv_op) = OP_GT;
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 424 "yacc.y"
    {
        (yyval.sv_op) = OP_LE;
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 428 "yacc.y"
    {
        (yyval.sv_op) = OP_GE;
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 435 "yacc.y"
    {
        (yyval.sv_operand) = std::move((yyvsp[(1) - (1)].sv_lvalue));
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 439 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>((yyvsp[(1) - (1)].sv_int));
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 443 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Parameter>((yyvsp[(1) - (1)].sv_str));
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 447 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(1);
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 451 "yacc.y"
    {
        (yyval.sv_operand) = std::make_shared<Rp4Literal>(0);
    }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 458 "yacc.y"
    {
        (yyval.sv_tables_def) = Rp4TablesDef((yyvsp[(3) - (4)].sv_table_defs));
    }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 465 "yacc.y"
    {
        (yyval.sv_table_defs) = {};
    }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 469 "yacc.y"
    {
        (yyval.sv_table_defs).push_back((yyvsp[(2) - (2)].sv_table_def));
    }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 476 "yacc.y"
    {
        (yyval.sv_table_def) = Rp4TableDef((yyvsp[(2) - (6)].sv_str), (yyvsp[(4) - (6)].sv_table_key_def), (yyvsp[(5) - (6)].sv_table_optional_stmts));
    }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 483 "yacc.y"
    {
        (yyval.sv_table_key_def) = Rp4TableKeyDef((yyvsp[(4) - (5)].sv_key_entries));
    }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 490 "yacc.y"
    {
        (yyval.sv_key_entries) = {};
    }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 494 "yacc.y"
    {
        (yyval.sv_key_entries).push_back((yyvsp[(2) - (2)].sv_key_entry));
    }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 501 "yacc.y"
    {
        (yyval.sv_key_entry) = Rp4KeyEntry((yyvsp[(1) - (4)].sv_lvalue), (yyvsp[(3) - (4)].sv_match_type));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 508 "yacc.y"
    {
        (yyval.sv_match_type) = MT_EXACT;
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 512 "yacc.y"
    {
        (yyval.sv_match_type) = MT_TERNARY;
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 516 "yacc.y"
    {
        (yyval.sv_match_type) = MT_LPM;
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 523 "yacc.y"
    {
        (yyval.sv_table_optional_stmts) = {};
    }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 527 "yacc.y"
    {
        (yyval.sv_table_optional_stmts).push_back((yyvsp[(2) - (2)].sv_table_optional_stmt));
    }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 534 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableSizeStmt>((yyvsp[(3) - (4)].sv_int));
    }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 538 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4TableEntriesStmt>((yyvsp[(4) - (5)].sv_match_entries));
    }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 542 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>((yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 546 "yacc.y"
    {
        (yyval.sv_table_optional_stmt) = std::make_shared<Rp4DefaultActionStmt>("NoAction");
    }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 553 "yacc.y"
    {
        (yyval.sv_match_entries) = {};
    }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 557 "yacc.y"
    {
        (yyval.sv_match_entries).push_back((yyvsp[(2) - (2)].sv_match_entry));
    }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 564 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), (yyvsp[(3) - (4)].sv_str));
    }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 568 "yacc.y"
    {
        (yyval.sv_match_entry) = Rp4MatchEntry((yyvsp[(1) - (4)].sv_match_key), "NoAction");
    }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 575 "yacc.y"
    {
        (yyval.sv_match_key) = Rp4MatchKey((yyvsp[(2) - (3)].sv_keys));
    }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 582 "yacc.y"
    {
        (yyval.sv_keys) = {};
    }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 586 "yacc.y"
    {
        (yyval.sv_keys) = { (yyvsp[(1) - (1)].sv_key) };
    }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 590 "yacc.y"
    {
        (yyval.sv_keys).push_back((yyvsp[(3) - (3)].sv_key));
    }
    break;


/* Line 1792 of yacc.c  */
#line 2479 "yacc.cpp"
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
#line 596 "yacc.y"
