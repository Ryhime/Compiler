
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
#line 1 "Parser.bison"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ASTGenerator.h"
    #define YYSTYPE Node*
    extern char *yytext;

    int yylex(void);
    int yyerror(char* s);
    Node* parserResult = NULL;


/* Line 189 of yacc.c  */
#line 86 "Parser.c"

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
     TOKEN_INT = 258,
     TOKEN_FLOAT = 259,
     TOKEN_CHAR = 260,
     TOKEN_ADD = 261,
     TOKEN_MINUS = 262,
     TOKEN_MUL = 263,
     TOKEN_DIV = 264,
     TOKEN_EQUAL = 265,
     TOKEN_DOUBLE_EQUAL = 266,
     TOKEN_LESS = 267,
     TOKEN_GREATER = 268,
     TOKEN_LESS_EQUAL = 269,
     TOKEN_GREATER_EQUAL = 270,
     TOKEN_ADD_EQUAL = 271,
     TOKEN_SUB_EQUAL = 272,
     TOKEN_MUL_EQUAL = 273,
     TOKEN_DIV_EQUAL = 274,
     TOKEN_DOUBLE_ADD = 275,
     TOKEN_DOUBLE_SUB = 276,
     TOKEN_OR = 277,
     TOKEN_AND = 278,
     TOKEN_XOR = 279,
     TOKEN_NOT = 280,
     TOKEN_LPAREN = 281,
     TOKEN_RPAREN = 282,
     TOKEN_LCURL = 283,
     TOKEN_RCURL = 284,
     TOKEN_SEMI = 285,
     TOKEN_ERROR = 286,
     TOKEN_EOF = 287,
     TOKEN_IF_KEYWORD = 288,
     TOKEN_ELSE_KEYWORD = 289,
     TOKEN_WHILE_KEYWORD = 290,
     TOKEN_FOR_KEYWORD = 291,
     TOKEN_INT_KEYWORD = 292,
     TOKEN_FLOAT_KEYWORD = 293,
     TOKEN_CHAR_KEYWORD = 294,
     TOKEN_BOOL_KEYWORD = 295,
     TOKEN_TRUE_KEYWORD = 296,
     TOKEN_FALSE_KEYWORD = 297,
     TOKEN_IDENT = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "Parser.c"

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
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    16,    18,    20,
      22,    25,    30,    33,    38,    41,    46,    49,    54,    58,
      62,    66,    70,    74,    77,    80,    88,   100,   108,   117,
     126,   135,   145,   155,   160,   162,   164,   168,   172,   175,
     179,   183,   187,   189,   193,   197,   201,   205,   209,   213,
     217,   219,   222,   226,   228,   230,   232,   234,   236
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    47,    -1,    47,    46,    -1,
      49,    30,    -1,    48,    30,    -1,    50,    -1,    51,    -1,
      52,    -1,    37,    56,    -1,    37,    56,    10,    57,    -1,
      38,    56,    -1,    38,    56,    10,    57,    -1,    39,    56,
      -1,    39,    56,    10,    57,    -1,    40,    56,    -1,    40,
      56,    10,    57,    -1,    55,    10,    57,    -1,    55,    16,
      57,    -1,    55,    17,    57,    -1,    55,    18,    57,    -1,
      55,    19,    57,    -1,    55,    20,    -1,    55,    21,    -1,
      35,    26,    57,    27,    28,    46,    29,    -1,    36,    26,
      48,    30,    57,    30,    49,    27,    28,    46,    29,    -1,
      33,    26,    57,    27,    28,    46,    29,    -1,    33,    26,
      57,    27,    28,    46,    29,    53,    -1,    33,    26,    57,
      27,    28,    46,    29,    54,    -1,    34,    33,    26,    57,
      27,    28,    46,    29,    -1,    34,    33,    26,    57,    27,
      28,    46,    29,    53,    -1,    34,    33,    26,    57,    27,
      28,    46,    29,    54,    -1,    34,    28,    46,    29,    -1,
      43,    -1,    43,    -1,    57,     6,    58,    -1,    57,     7,
      58,    -1,    25,    57,    -1,    57,    23,    58,    -1,    57,
      22,    58,    -1,    57,    24,    58,    -1,    58,    -1,    58,
       8,    59,    -1,    58,     9,    59,    -1,    58,    11,    59,
      -1,    58,    12,    59,    -1,    58,    13,    59,    -1,    58,
      14,    59,    -1,    58,    15,    59,    -1,    59,    -1,     7,
      59,    -1,    26,    57,    27,    -1,     3,    -1,     4,    -1,
       5,    -1,    42,    -1,    41,    -1,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    61,    63,    64,    65,    66,    67,
      69,    70,    71,    72,    73,    74,    75,    76,    78,    79,
      80,    81,    82,    83,    84,    86,    88,    90,    91,    92,
      95,    96,    97,   100,   102,   103,   105,   106,   107,   108,
     109,   110,   111,   114,   115,   116,   117,   118,   119,   120,
     121,   123,   124,   125,   126,   127,   128,   129,   130
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_INT", "TOKEN_FLOAT", "TOKEN_CHAR",
  "TOKEN_ADD", "TOKEN_MINUS", "TOKEN_MUL", "TOKEN_DIV", "TOKEN_EQUAL",
  "TOKEN_DOUBLE_EQUAL", "TOKEN_LESS", "TOKEN_GREATER", "TOKEN_LESS_EQUAL",
  "TOKEN_GREATER_EQUAL", "TOKEN_ADD_EQUAL", "TOKEN_SUB_EQUAL",
  "TOKEN_MUL_EQUAL", "TOKEN_DIV_EQUAL", "TOKEN_DOUBLE_ADD",
  "TOKEN_DOUBLE_SUB", "TOKEN_OR", "TOKEN_AND", "TOKEN_XOR", "TOKEN_NOT",
  "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_LCURL", "TOKEN_RCURL",
  "TOKEN_SEMI", "TOKEN_ERROR", "TOKEN_EOF", "TOKEN_IF_KEYWORD",
  "TOKEN_ELSE_KEYWORD", "TOKEN_WHILE_KEYWORD", "TOKEN_FOR_KEYWORD",
  "TOKEN_INT_KEYWORD", "TOKEN_FLOAT_KEYWORD", "TOKEN_CHAR_KEYWORD",
  "TOKEN_BOOL_KEYWORD", "TOKEN_TRUE_KEYWORD", "TOKEN_FALSE_KEYWORD",
  "TOKEN_IDENT", "$accept", "program", "lines", "line", "declaration",
  "assignment", "while", "for", "if", "elseif", "else", "variable",
  "firstVariable", "expr", "term", "factor", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    50,    51,    52,    52,    52,
      53,    53,    53,    54,    55,    56,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       2,     4,     2,     4,     2,     4,     2,     4,     3,     3,
       3,     3,     3,     2,     2,     7,    11,     7,     8,     8,
       8,     9,     9,     4,     1,     1,     3,     3,     2,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       2,     3,     0,     0,     7,     8,     9,     0,     0,     0,
       0,    35,    10,    12,    14,    16,     1,     4,     6,     5,
       0,     0,     0,     0,     0,    23,    24,    53,    54,    55,
       0,     0,     0,    57,    56,    58,     0,    42,    50,     0,
       0,     0,     0,     0,     0,    18,    19,    20,    21,    22,
      51,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    13,
      15,    17,    52,    36,    37,    40,    39,    41,     0,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,    27,    25,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,    33,     0,    26,     0,     0,     0,
      30,    31,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,   105,
     106,    17,    22,    46,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int8 yypact[] =
{
      43,   -24,    -6,    -4,   -13,   -13,   -13,   -13,   -25,    27,
     -25,    43,     2,     7,   -25,   -25,   -25,   111,     0,     0,
     104,   -25,    28,    29,    48,    57,   -25,   -25,   -25,   -25,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
      14,     0,     0,   -25,   -25,   -25,    47,   125,   -25,    66,
      38,     0,     0,     0,     0,   102,   102,   102,   102,   102,
     -25,   102,    89,    14,    14,    14,    14,    14,    56,    14,
      14,    14,    14,    14,    14,    14,    59,     0,   102,   102,
     102,   102,   -25,   125,   125,   125,   125,   125,    43,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,    43,    22,    46,    62,
      49,    64,   -25,    73,   -22,   -25,   -25,    75,    43,    78,
      43,    76,     0,    77,   -25,    95,   -25,    82,    43,    85,
      64,   -25,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -11,   -25,   100,    15,   -25,   -25,   -25,    25,
      26,   -25,     3,   -18,   -16,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      27,    49,    18,    37,    38,    39,   108,    40,    23,    24,
      25,   109,    55,    56,    57,    58,    59,    37,    38,    39,
      19,    40,    20,    61,    62,    41,    42,    26,    63,    64,
      21,    60,    28,    78,    79,    80,    81,    29,    51,    52,
      42,    43,    44,    45,    65,    66,    67,    83,    84,    85,
      86,    87,   100,    63,    64,    43,    44,    45,    53,    97,
      89,    90,    91,    92,    93,    94,    95,    54,    77,    65,
      66,    67,    63,    64,    68,   101,     1,    98,     2,     3,
       4,     5,     6,     7,    88,    99,     8,    96,    65,    66,
      67,   102,     8,    76,   115,    63,    64,   111,   104,   113,
     107,    63,    64,   110,   112,   114,   116,   119,    63,    64,
     118,    65,    66,    67,   120,   103,    82,    65,    66,    67,
      50,    30,   117,     0,    65,    66,    67,    31,    32,    33,
      34,    35,    36,    69,    70,     0,    71,    72,    73,    74,
      75,     4,     5,     6,     7,   121,   122
};

static const yytype_int8 yycheck[] =
{
      11,    19,    26,     3,     4,     5,    28,     7,     5,     6,
       7,    33,    30,    31,    32,    33,    34,     3,     4,     5,
      26,     7,    26,    41,    42,    25,    26,     0,     6,     7,
      43,    40,    30,    51,    52,    53,    54,    30,    10,    10,
      26,    41,    42,    43,    22,    23,    24,    63,    64,    65,
      66,    67,    30,     6,     7,    41,    42,    43,    10,    77,
      69,    70,    71,    72,    73,    74,    75,    10,    30,    22,
      23,    24,     6,     7,    27,    29,    33,    88,    35,    36,
      37,    38,    39,    40,    28,    96,    43,    28,    22,    23,
      24,    29,    43,    27,   112,     6,     7,   108,    34,   110,
      27,     6,     7,    28,    26,    29,    29,   118,     6,     7,
      28,    22,    23,    24,    29,   100,    27,    22,    23,    24,
      20,    10,    27,    -1,    22,    23,    24,    16,    17,    18,
      19,    20,    21,     8,     9,    -1,    11,    12,    13,    14,
      15,    37,    38,    39,    40,   120,   120
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    35,    36,    37,    38,    39,    40,    43,    45,
      46,    47,    48,    49,    50,    51,    52,    55,    26,    26,
      26,    43,    56,    56,    56,    56,     0,    46,    30,    30,
      10,    16,    17,    18,    19,    20,    21,     3,     4,     5,
       7,    25,    26,    41,    42,    43,    57,    58,    59,    57,
      48,    10,    10,    10,    10,    57,    57,    57,    57,    57,
      59,    57,    57,     6,     7,    22,    23,    24,    27,     8,
       9,    11,    12,    13,    14,    15,    27,    30,    57,    57,
      57,    57,    27,    58,    58,    58,    58,    58,    28,    59,
      59,    59,    59,    59,    59,    59,    28,    57,    46,    46,
      30,    29,    29,    49,    34,    53,    54,    27,    28,    33,
      28,    46,    26,    46,    29,    57,    29,    27,    28,    46,
      29,    53,    54
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
#line 60 "Parser.bison"
    { parserResult = (yyvsp[(1) - (1)]) ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 61 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 61 "Parser.bison"
    { (yyval) = connectNodes((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 63 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (2)]) ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 64 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (2)]) ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 65 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]) ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 66 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 67 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 69 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_INT,(yyvsp[(2) - (2)]),createExpressionIntNode(0)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 70 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_INT,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 71 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_FLOAT,(yyvsp[(2) - (2)]),createExpressionFloatNode(0)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 72 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_FLOAT,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 73 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_CHAR,(yyvsp[(2) - (2)]),createExpressionCharNode('a')); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 74 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_CHAR,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 75 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_BOOL,(yyvsp[(2) - (2)]),createExpressionBoolNode(0)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 76 "Parser.bison"
    { (yyval) = createDeclarationNode(DECLARE_BOOL,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)])); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 78 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 79 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (3)]),createExpressionNode(EXPR_ADD,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 80 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (3)]),createExpressionNode(EXPR_SUB,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 81 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (3)]),createExpressionNode(EXPR_MUL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 82 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (3)]),createExpressionNode(EXPR_DIV,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]))); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 83 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (2)]), createExpressionNode(EXPR_ADD,(yyvsp[(1) - (2)]),createExpressionIntNode(1))); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 84 "Parser.bison"
    { (yyval) = createAssignmentNode((yyvsp[(1) - (2)]), createExpressionNode(EXPR_SUB,(yyvsp[(1) - (2)]),createExpressionIntNode(1))); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 86 "Parser.bison"
    { (yyval) = createWhileLoopNode((yyvsp[(3) - (7)]),(yyvsp[(6) - (7)])); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 88 "Parser.bison"
    { (yyval) = createForLoopNode((yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(10) - (11)])); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 90 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]),NULL,0); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 91 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),(yyvsp[(8) - (8)]),0); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 92 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]),(yyvsp[(8) - (8)]),0); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 95 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(4) - (8)]),(yyvsp[(7) - (8)]),NULL,0); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 96 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(4) - (9)]),(yyvsp[(7) - (9)]),(yyvsp[(9) - (9)]),0); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 97 "Parser.bison"
    { (yyval) = createIfStatementNode((yyvsp[(4) - (9)]),(yyvsp[(7) - (9)]),(yyvsp[(9) - (9)]),0); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 100 "Parser.bison"
    { (yyval) = createIfStatementNode(NULL,(yyvsp[(3) - (4)]),NULL,1); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 102 "Parser.bison"
    { (yyval) = createExpressionSymbolNode(yytext,0); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 103 "Parser.bison"
    { (yyval) = createExpressionSymbolNode(yytext,1); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 105 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_ADD,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 106 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_SUB,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 107 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_NOT,(yyvsp[(2) - (2)]),NULL); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 108 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_AND,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 109 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_OR,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 110 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_XOR,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 111 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 114 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_MUL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 115 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_DIV,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 116 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_EQUAL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 117 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_LESS,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 118 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_GREATER,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 119 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_LESS_EQUAL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 120 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_GREATER_EQUAL,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 121 "Parser.bison"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 123 "Parser.bison"
    { (yyval) = createExpressionNode(EXPR_SUB,createExpressionIntNode(0),(yyvsp[(2) - (2)])); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 124 "Parser.bison"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 125 "Parser.bison"
    { (yyval) = createExpressionIntNode(atoi(yytext)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 126 "Parser.bison"
    { (yyval) = createExpressionFloatNode(atof(yytext)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 127 "Parser.bison"
    { (yyval) = createExpressionCharNode(yytext[1]); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 128 "Parser.bison"
    { (yyval) = createExpressionBoolNode(0); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 129 "Parser.bison"
    { (yyval) = createExpressionBoolNode(1); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 130 "Parser.bison"
    { (yyval) = createExpressionSymbolNode(yytext,0); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1876 "Parser.c"
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
#line 132 "Parser.bison"



int yyerror(char* s){
    // This is where you can throw a syntax error
    return 0;
}
int yywrap() {return 1;}
