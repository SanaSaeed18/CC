
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "icg_quad.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  int top=-1;
  void yyerror(char *);
  extern FILE *yyin;
  #define YYSTYPE char*
  typedef struct quadruples
  {
    char *op;
    char *arg1;
    char *arg2;
    char *res;
  }quad;
  int quadlen = 0;
  quad q[100];


/* Line 189 of yacc.c  */
#line 94 "y.tab.c"

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
     ID = 258,
     NUM = 259,
     T_lt = 260,
     T_gt = 261,
     T_lteq = 262,
     T_gteq = 263,
     T_neq = 264,
     T_noteq = 265,
     T_eqeq = 266,
     T_and = 267,
     T_or = 268,
     T_incr = 269,
     T_decr = 270,
     T_not = 271,
     T_eq = 272,
     WHILE = 273,
     INT = 274,
     CHAR = 275,
     FLOAT = 276,
     VOID = 277,
     H = 278,
     MAINTOK = 279,
     INCLUDE = 280,
     BREAK = 281,
     CONTINUE = 282,
     IF = 283,
     ELSE = 284,
     COUT = 285,
     STRING = 286,
     FOR = 287,
     ENDL = 288,
     T_ques = 289,
     T_colon = 290,
     T_pl = 291,
     T_min = 292,
     T_mul = 293,
     T_div = 294
   };
#endif
/* Tokens.  */
#define ID 258
#define NUM 259
#define T_lt 260
#define T_gt 261
#define T_lteq 262
#define T_gteq 263
#define T_neq 264
#define T_noteq 265
#define T_eqeq 266
#define T_and 267
#define T_or 268
#define T_incr 269
#define T_decr 270
#define T_not 271
#define T_eq 272
#define WHILE 273
#define INT 274
#define CHAR 275
#define FLOAT 276
#define VOID 277
#define H 278
#define MAINTOK 279
#define INCLUDE 280
#define BREAK 281
#define CONTINUE 282
#define IF 283
#define ELSE 284
#define COUT 285
#define STRING 286
#define FOR 287
#define ENDL 288
#define T_ques 289
#define T_colon 290
#define T_pl 291
#define T_min 292
#define T_mul 293
#define T_div 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "y.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    11,    17,    21,    25,    29,    33,
      36,    39,    41,    42,    43,    51,    52,    53,    54,    67,
      68,    69,    79,    80,    81,    91,    95,    97,   100,   104,
     107,   110,   112,   114,   116,   118,   120,   122,   123,   128,
     129,   134,   137,   138,   139,   146,   147,   152,   153,   158,
     159,   160,   167,   171,   173,   174,   178,   180,   182,   183,
     188,   189,   194,   197,   198,   199,   206,   207,   212,   213,
     218,   219,   220,   227,   231,   233,   234,   238,   240,   242,
     244,   245,   246,   252,   253,   254,   261,   263,   264,   269,
     270,   275,   277,   278,   283,   284,   289,   291,   292,   297,
     298,   303,   305,   309,   314,   322,   324,   326,   328,   330
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    25,     5,    23,     6,    49,
      -1,    25,    40,    23,    40,    49,    -1,    22,    24,    50,
      -1,    19,    24,    50,    -1,    41,    51,    42,    -1,    51,
      65,    43,    -1,    51,    52,    -1,    65,    43,    -1,    52,
      -1,    -1,    -1,    18,    53,    44,    78,    45,    54,    63,
      -1,    -1,    -1,    -1,    32,    44,    92,    55,    43,    78,
      56,    43,    65,    57,    45,    63,    -1,    -1,    -1,    28,
      44,    78,    45,    58,    63,    59,    29,    63,    -1,    -1,
      -1,    44,    66,    45,    61,    34,    65,    62,    35,    65,
      -1,    41,    64,    42,    -1,    43,    -1,    65,    43,    -1,
      64,    65,    43,    -1,    64,    52,    -1,    65,    43,    -1,
      52,    -1,    92,    -1,    97,    -1,    60,    -1,   107,    -1,
      69,    -1,    -1,    69,    12,    67,    66,    -1,    -1,    69,
      68,    13,    66,    -1,    16,    69,    -1,    -1,    -1,    91,
      17,    70,    17,    71,   108,    -1,    -1,    91,     6,    72,
      76,    -1,    -1,    91,     5,    73,    76,    -1,    -1,    -1,
      91,    16,    74,    17,    75,   108,    -1,    44,    69,    45,
      -1,    91,    -1,    -1,    17,    77,   108,    -1,   108,    -1,
      81,    -1,    -1,    81,    12,    79,    78,    -1,    -1,    81,
      80,    13,    78,    -1,    16,    81,    -1,    -1,    -1,    90,
      17,    82,    17,    83,   108,    -1,    -1,    90,     6,    84,
      88,    -1,    -1,    90,     5,    85,    88,    -1,    -1,    -1,
      90,    16,    86,    17,    87,   108,    -1,    44,    81,    45,
      -1,    90,    -1,    -1,    17,    89,   108,    -1,   108,    -1,
       3,    -1,     3,    -1,    -1,    -1,   108,    93,    17,    94,
      97,    -1,    -1,    -1,   109,   108,    95,    17,    96,    97,
      -1,   100,    -1,    -1,    97,     5,    98,   100,    -1,    -1,
      97,     6,    99,   100,    -1,   103,    -1,    -1,    97,    36,
     101,   103,    -1,    -1,    97,    37,   102,   103,    -1,   106,
      -1,    -1,   103,    38,   104,   106,    -1,    -1,   103,    39,
     105,   106,    -1,   108,    -1,    44,    97,    45,    -1,    30,
       5,     5,    31,    -1,    30,     5,     5,    31,     5,     5,
      33,    -1,     3,    -1,     4,    -1,    19,    -1,    20,    -1,
      21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    35,    36,    40,    41,    45,    49,    50,
      51,    52,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    58,    61,    61,    61,    65,    66,    67,    71,    72,
      73,    74,    78,    79,    80,    81,    84,    85,    85,    86,
      86,    87,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    94,    95,    98,    98,    99,   102,   103,   103,
     104,   104,   105,   108,   108,   108,   109,   109,   110,   110,
     111,   111,   111,   112,   113,   116,   116,   117,   120,   122,
     125,   125,   125,   126,   126,   126,   130,   131,   131,   132,
     132,   136,   137,   137,   138,   138,   142,   143,   143,   144,
     144,   148,   149,   153,   154,   157,   158,   161,   162,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "T_lt", "T_gt", "T_lteq",
  "T_gteq", "T_neq", "T_noteq", "T_eqeq", "T_and", "T_or", "T_incr",
  "T_decr", "T_not", "T_eq", "WHILE", "INT", "CHAR", "FLOAT", "VOID", "H",
  "MAINTOK", "INCLUDE", "BREAK", "CONTINUE", "IF", "ELSE", "COUT",
  "STRING", "FOR", "ENDL", "T_ques", "T_colon", "T_pl", "T_min", "T_mul",
  "T_div", "\"\\\"\"", "'{'", "'}'", "';'", "'('", "')'", "$accept", "S",
  "START", "MAIN", "BODY", "C", "LOOPS", "$@1", "$@2", "$@3", "$@4", "$@5",
  "$@6", "$@7", "TERNARY_EXPR", "$@8", "$@9", "LOOPBODY", "LOOPC",
  "statement", "TERNARY_COND", "$@10", "$@11", "T_B", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "T_F", "$@18", "COND", "$@19", "$@20",
  "B", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "F", "$@27", "V",
  "T_V", "ASSIGN_EXPR", "$@28", "$@29", "$@30", "$@31", "EXP", "$@32",
  "$@33", "ADDSUB", "$@34", "$@35", "TERM", "$@36", "$@37", "FACTOR",
  "PRINT", "LIT", "TYPE", 0
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
     295,   123,   125,    59,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    51,    51,
      51,    51,    53,    54,    52,    55,    56,    57,    52,    58,
      59,    52,    61,    62,    60,    63,    63,    63,    64,    64,
      64,    64,    65,    65,    65,    65,    66,    67,    66,    68,
      66,    66,    70,    71,    69,    72,    69,    73,    69,    74,
      75,    69,    69,    69,    77,    76,    76,    78,    79,    78,
      80,    78,    78,    82,    83,    81,    84,    81,    85,    81,
      86,    87,    81,    81,    81,    89,    88,    88,    90,    91,
      93,    94,    92,    95,    96,    92,    97,    98,    97,    99,
      97,   100,   101,   100,   102,   100,   103,   104,   103,   105,
     103,   106,   106,   107,   107,   108,   108,   109,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     5,     3,     3,     3,     3,     2,
       2,     1,     0,     0,     7,     0,     0,     0,    12,     0,
       0,     9,     0,     0,     9,     3,     1,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     4,     0,
       4,     2,     0,     0,     6,     0,     4,     0,     4,     0,
       0,     6,     3,     1,     0,     3,     1,     1,     0,     4,
       0,     4,     2,     0,     0,     6,     0,     4,     0,     4,
       0,     0,     6,     3,     1,     0,     3,     1,     1,     1,
       0,     0,     5,     0,     0,     6,     1,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     3,     4,     7,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     3,     4,     0,     0,     0,     6,     5,
     105,   106,    12,   107,   108,   109,     0,     0,     0,     0,
       0,    11,    34,     0,    32,    33,    86,    91,    96,    35,
     101,     0,     0,     0,     0,     0,    79,     0,     0,     0,
      36,    53,     0,   101,     7,     9,     0,    10,    87,    89,
      92,    94,    97,    99,     0,    83,     0,    78,     0,     0,
       0,    57,    74,     0,    15,    80,    79,     0,    41,     0,
      22,    37,     0,    47,    45,    49,    42,   102,     8,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    62,     0,
      19,    58,     0,    68,    66,    70,    63,   103,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      86,    93,    95,    98,   100,     0,    84,    13,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      40,    54,    48,    56,    46,    50,    43,    82,     0,     0,
       0,    26,    20,     0,    59,    61,    75,    69,    77,    67,
      71,    64,     0,    16,    23,     0,     0,     0,    85,    14,
      31,     0,     0,     0,    27,     0,     0,     0,   104,     0,
       0,    55,    51,    44,    25,    29,     0,    30,     0,    76,
      72,    65,     0,     0,    28,    21,    17,    24,     0,     0,
      18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    18,    30,    31,    42,   149,   108,
     179,   198,   129,   173,    32,   110,   180,   152,   171,   153,
      49,   111,    82,    50,   116,   167,   114,   113,   115,   166,
     142,   165,    70,   130,   102,    71,   135,   177,   133,   132,
     134,   176,   157,   175,    72,    51,    34,    64,   125,    96,
     148,    35,    89,    90,    36,    91,    92,    37,    93,    94,
      38,    39,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const yytype_int16 yypact[] =
{
       2,    16,    32,  -148,    11,    27,  -148,    30,    20,    73,
      73,    52,    56,  -148,  -148,    44,    44,    98,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,    34,    88,    71,    35,
       5,  -148,  -148,    57,  -148,   131,  -148,   109,  -148,  -148,
      96,     7,    79,    15,   100,   152,   154,     4,    39,    82,
     145,   147,   129,  -148,  -148,  -148,    86,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,   115,  -148,    15,  -148,    37,    37,
     117,   167,   172,   114,  -148,  -148,  -148,     4,  -148,   124,
    -148,  -148,   169,  -148,  -148,  -148,  -148,  -148,  -148,    50,
      50,    50,    50,    50,    50,  -148,   170,   151,  -148,   158,
    -148,  -148,   191,  -148,  -148,  -148,  -148,   200,   163,  -148,
     173,    87,    87,    13,    13,   192,   193,    50,   131,   -31,
      69,   109,   109,  -148,  -148,    50,  -148,  -148,  -148,   140,
      15,    15,   107,   107,   194,   195,   203,    15,    25,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   131,    50,   140,
      98,  -148,  -148,   171,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   180,  -148,  -148,     7,     7,     7,   131,  -148,
    -148,    54,   174,   186,  -148,     7,     7,     7,  -148,   175,
     181,  -148,  -148,  -148,  -148,  -148,   176,  -148,   140,  -148,
    -148,  -148,    25,    25,  -148,  -148,  -148,  -148,   177,   140,
    -148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   210,   205,  -148,   -25,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -147,  -148,   -17,
      74,  -148,  -148,    61,  -148,  -148,  -148,  -148,  -148,  -148,
     111,  -148,   -60,  -148,  -148,   126,  -148,  -148,  -148,  -148,
    -148,  -148,    90,  -148,  -148,  -148,   179,  -148,  -148,  -148,
    -148,   -28,  -148,  -148,   108,  -148,  -148,   110,  -148,  -148,
     106,  -148,   -26,  -148
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
      33,    52,   169,    53,   -88,    55,    97,    76,    20,    21,
      20,    21,   -88,    56,   -88,    65,    20,    21,    67,    75,
      52,     4,    53,    22,    23,    24,    25,     1,    20,    21,
     141,    68,     6,    26,     7,    27,     9,    28,    46,    21,
      67,   195,    46,    21,    23,    24,    25,    54,    77,    29,
       8,    47,   200,    20,    21,    27,     5,    20,    21,    69,
      10,   118,   118,    53,    53,    53,    53,    53,    53,    29,
     154,   155,    22,    23,    24,    25,    15,   163,    43,    48,
      16,    69,    26,    48,    27,    17,    28,   143,   143,    52,
      76,    53,    11,    44,   117,    12,   184,   147,    29,    53,
      57,    20,    21,    47,   -90,    73,   158,   158,    78,    79,
      20,    21,   -90,   -80,   -90,    45,    22,    23,    24,    25,
     168,   164,    53,    66,   156,   170,    26,    80,    27,    88,
      28,    77,    95,   172,    58,    59,    58,    59,    79,   181,
     182,   183,    29,    20,    21,   107,   185,    62,    63,   189,
     190,   191,    83,    84,   186,    20,    21,    81,   -39,    23,
      24,    25,   100,    85,    86,    60,    61,    60,    61,   109,
      27,    23,    24,    25,    87,   196,   197,   103,   104,   101,
     -60,   150,   112,   151,    29,   139,   140,   126,   105,   106,
    -105,  -105,  -105,  -105,    98,    99,   127,   119,   120,   123,
     124,   121,   122,   128,   131,   136,   137,   138,   162,   145,
     146,   160,   161,   178,   174,   188,   193,   187,   192,   194,
      14,    19,   199,   159,    74,   144
};

static const yytype_uint8 yycheck[] =
{
      17,    29,   149,    29,    35,    30,    66,     3,     3,     4,
       3,     4,    43,    30,    45,    41,     3,     4,     3,    45,
      48,     5,    48,    18,    19,    20,    21,    25,     3,     4,
      17,    16,     0,    28,    23,    30,     6,    32,     3,     4,
       3,   188,     3,     4,    19,    20,    21,    42,    44,    44,
      23,    16,   199,     3,     4,    30,    40,     3,     4,    44,
      40,    89,    90,    89,    90,    91,    92,    93,    94,    44,
     130,   131,    18,    19,    20,    21,    24,   137,    44,    44,
      24,    44,    28,    44,    30,    41,    32,   113,   114,   117,
       3,   117,    19,     5,    44,    22,    42,   125,    44,   125,
      43,     3,     4,    16,    35,     5,   132,   133,    47,    48,
       3,     4,    43,    17,    45,    44,    18,    19,    20,    21,
     148,   138,   148,    44,    17,   150,    28,    45,    30,    43,
      32,    44,    17,   150,     5,     6,     5,     6,    77,   165,
     166,   167,    44,     3,     4,    31,   171,    38,    39,   175,
     176,   177,     5,     6,   171,     3,     4,    12,    13,    19,
      20,    21,    45,    16,    17,    36,    37,    36,    37,    45,
      30,    19,    20,    21,    45,   192,   193,     5,     6,    12,
      13,    41,    13,    43,    44,   111,   112,    17,    16,    17,
      36,    37,    38,    39,    68,    69,    45,    89,    90,    93,
      94,    91,    92,    45,    13,     5,    43,    34,     5,    17,
      17,    17,    17,    33,    43,    29,    35,    43,    43,    43,
      10,    16,    45,   133,    45,   114
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    47,    48,     5,    40,     0,    23,    23,     6,
      40,    19,    22,    49,    49,    24,    24,    41,    50,    50,
       3,     4,    18,    19,    20,    21,    28,    30,    32,    44,
      51,    52,    60,    65,    92,    97,   100,   103,   106,   107,
     108,   109,    53,    44,     5,    44,     3,    16,    44,    66,
      69,    91,    97,   108,    42,    52,    65,    43,     5,     6,
      36,    37,    38,    39,    93,   108,    44,     3,    16,    44,
      78,    81,    90,     5,    92,   108,     3,    44,    69,    69,
      45,    12,    68,     5,     6,    16,    17,    45,    43,    98,
      99,   101,   102,   104,   105,    17,    95,    78,    81,    81,
      45,    12,    80,     5,     6,    16,    17,    31,    55,    45,
      61,    67,    13,    73,    72,    74,    70,    44,    97,   100,
     100,   103,   103,   106,   106,    94,    17,    45,    45,    58,
      79,    13,    85,    84,    86,    82,     5,    43,    34,    66,
      66,    17,    76,   108,    76,    17,    17,    97,    96,    54,
      41,    43,    63,    65,    78,    78,    17,    88,   108,    88,
      17,    17,     5,    78,    65,    77,    75,    71,    97,    63,
      52,    64,    65,    59,    43,    89,    87,    83,    33,    56,
      62,   108,   108,   108,    42,    52,    65,    43,    29,   108,
     108,   108,    43,    35,    43,    63,    65,    65,    57,    45,
      63
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 31 "icg_quad.y"
    {printf("Input accepted.\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 56 "icg_quad.y"
    {while1();}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 56 "icg_quad.y"
    {while2();}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 56 "icg_quad.y"
    {while3();}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 57 "icg_quad.y"
    {for1();}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 57 "icg_quad.y"
    {for2();}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 57 "icg_quad.y"
    {for3();}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 57 "icg_quad.y"
    {for4();}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 58 "icg_quad.y"
    {ifelse1();}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 58 "icg_quad.y"
    {ifelse2();}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 58 "icg_quad.y"
    {ifelse3();}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 61 "icg_quad.y"
    {ternary1();}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 61 "icg_quad.y"
    {ternary2();}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 61 "icg_quad.y"
    {ternary3();}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 84 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 85 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 86 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 87 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 90 "icg_quad.y"
    {push();}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 90 "icg_quad.y"
    {push();}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 91 "icg_quad.y"
    {push();}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 92 "icg_quad.y"
    {push();}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 93 "icg_quad.y"
    {push();}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 93 "icg_quad.y"
    {push();}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 95 "icg_quad.y"
    {pushab();}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 98 "icg_quad.y"
    {push();}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 99 "icg_quad.y"
    {pusha();}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 102 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 103 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 104 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 105 "icg_quad.y"
    {codegen_assigna();}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 108 "icg_quad.y"
    {push();}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 108 "icg_quad.y"
    {push();}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 109 "icg_quad.y"
    {push();}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 110 "icg_quad.y"
    {push();}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 111 "icg_quad.y"
    {push();}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 111 "icg_quad.y"
    {push();}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 113 "icg_quad.y"
    {pushab();}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 116 "icg_quad.y"
    {push();}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 117 "icg_quad.y"
    {pusha();}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 120 "icg_quad.y"
    {push();}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 122 "icg_quad.y"
    {pushx();}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 125 "icg_quad.y"
    {push();}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 125 "icg_quad.y"
    {push();}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 125 "icg_quad.y"
    {codegen_assign();}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 126 "icg_quad.y"
    {push();}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 126 "icg_quad.y"
    {push();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 126 "icg_quad.y"
    {codegen_assign();}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 131 "icg_quad.y"
    {push();}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 131 "icg_quad.y"
    {codegen();}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 132 "icg_quad.y"
    {push();}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 132 "icg_quad.y"
    {codegen();}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 137 "icg_quad.y"
    {push();}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 137 "icg_quad.y"
    {codegen();}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 138 "icg_quad.y"
    {push();}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 138 "icg_quad.y"
    {codegen();}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 143 "icg_quad.y"
    {push();}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 143 "icg_quad.y"
    {codegen();}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 144 "icg_quad.y"
    {push();}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 144 "icg_quad.y"
    {codegen();}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 157 "icg_quad.y"
    {push();}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 158 "icg_quad.y"
    {push();}
    break;



/* Line 1455 of yacc.c  */
#line 2034 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 166 "icg_quad.y"


#include "lex.yy.c"
#include<ctype.h>
char st[100][100];

char i_[2]="0";
int temp_i=0;
char tmp_i[3];
char temp[2]="t";
int label[20];
int lnum=0;
int ltop=0;
int abcd=0;
int l_while=0;
int l_for=0;
int flag_set = 1;

int main(int argc,char *argv[])
{

  yyin = fopen("input.c","r");
  if(!yyparse())  //yyparse-> 0 if success
  {
    printf("Parsing Complete\n");
    printf("---------------------Quadruples-------------------------\n\n");
    printf("Operator \t Arg1 \t\t Arg2 \t\t Result \n");
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t %-8s \t %-8s \t %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    }
  }
  else
  {
    printf("Parsing failed\n");
  }

  fclose(yyin);
  return 0;
}

void yyerror(char *s)
{
  printf("Error :%s at %d \n",yytext,yylineno);
}

push()
{
strcpy(st[++top],yytext);
}
pusha()
{
strcpy(st[++top],"  ");
}
pushx()
{
strcpy(st[++top],"x ");
}
pushab()
{
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
strcpy(st[++top],"  ");
}
codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;
}
codegen_assigna()
{
strcpy(temp,"T");
sprintf(tmp_i, "%d", temp_i);
strcat(temp,tmp_i);
//printf("%s = %s %s %s %s\n",temp,st[top-3],st[top-2],st[top-1],st[top]);
////printf("%d\n",strlen(st[top]));
if(strlen(st[top])==1)
{
	////printf("hello");
	
    char t[20];
	////printf("hello");
	strcpy(t,st[top-2]);
	strcat(t,st[top-1]);
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(t));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,t);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    
}
else
{
	q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,st[top-2]);
    strcpy(q[quadlen].arg1,st[top-3]);
    strcpy(q[quadlen].arg2,st[top-1]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
}
top-=4;

temp_i++;
strcpy(st[++top],temp);
}

codegen_umin()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = -%s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"-");
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    top--;
    strcpy(st[top],temp);
    temp_i++;
}
codegen_assign()
{
    //printf("%s = %s\n",st[top-3],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-3]);
    quadlen++;
    top-=2;
}

if1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 //printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 //printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,st[top-2]);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

if3()
{
    int y;
    y=label[ltop--];
    //printf("L%d: \n",y);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

ifelse1()
{
    lnum++;
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    //printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    temp_i++;
    label[++ltop]=lnum;
}

ifelse2()
{
    int x;
    lnum++;
    x=label[ltop--];
    //printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
    //printf("L%d: \n",x);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");

    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ifelse3()
{
int y;
y=label[ltop--];
//printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

ternary1()
{
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 //printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
 //printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}

ternary2()
{
int x;
lnum++;
x=label[ltop--];
//printf("goto L%d\n",lnum);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;
//printf("L%d: \n",x);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
    label[++ltop]=lnum;
}

ternary3()
{
int y;
y=label[ltop--];
//printf("L%d: \n",y);
q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
lnum++;
}

while1()
{

    l_while = lnum;
    //printf("L%d: \n",lnum++);
	lnum++;
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}

while2()
{
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 //printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    //printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

 temp_i++;
 }

while3()
{

//printf("goto L%d \n",l_while);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(l_while+2));
    strcpy(q[quadlen].op,"goto");
    char x[10];
    sprintf(x,"%d",l_while);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
    //printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x1[10];
    sprintf(x1,"%d",lnum-1);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
}

for1()
{
    l_for = lnum;
    //printf("L%d: \n",lnum++);
	lnum++;
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
for2()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    //printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;

    temp_i++;
    label[++ltop]=lnum;
    lnum++;
    //printf("goto L%d\n",lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"goto");
    char x1[10];
    sprintf(x1,"%d",lnum);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
    quadlen++;
    label[++ltop]=lnum;
    //printf("L%d: \n",++lnum);
	++lnum;
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x2[10];
    sprintf(x2,"%d",lnum);
    char l2[]="L";
    strcpy(q[quadlen].res,strcat(l2,x2));
    quadlen++;
 }
for3()
{
    int x;
    x=label[ltop--];
    //printf("goto L%d \n",l_for);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",l_for);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;


    //printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;

}

for4()
{
    int x;
    x=label[ltop--];
    //printf("goto L%d \n",lnum);

    q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"goto");
    char jug[10];
    sprintf(jug,"%d",lnum);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,jug));
    quadlen++;

    //printf("L%d: \n",x);

    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(x+2));
    strcpy(q[quadlen].op,"Label");
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,jug1));
    quadlen++;
}
int yywrap(){return(1);}
