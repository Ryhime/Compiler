/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "Parser.bison"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ASTGenerator.h"
    #define YYSTYPE Node*
    extern char *yytext;

    int yylex(void);
    int yyerror(char* s);
    Node* parserResult = NULL;

#line 83 "Parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "Token.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_INT = 3,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_FLOAT = 4,                /* TOKEN_FLOAT  */
  YYSYMBOL_TOKEN_CHAR = 5,                 /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_ADD = 6,                  /* TOKEN_ADD  */
  YYSYMBOL_TOKEN_MINUS = 7,                /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_MUL = 8,                  /* TOKEN_MUL  */
  YYSYMBOL_TOKEN_DIV = 9,                  /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_EQUAL = 10,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_DOUBLE_EQUAL = 11,        /* TOKEN_DOUBLE_EQUAL  */
  YYSYMBOL_TOKEN_LESS = 12,                /* TOKEN_LESS  */
  YYSYMBOL_TOKEN_GREATER = 13,             /* TOKEN_GREATER  */
  YYSYMBOL_TOKEN_LESS_EQUAL = 14,          /* TOKEN_LESS_EQUAL  */
  YYSYMBOL_TOKEN_GREATER_EQUAL = 15,       /* TOKEN_GREATER_EQUAL  */
  YYSYMBOL_TOKEN_ADD_EQUAL = 16,           /* TOKEN_ADD_EQUAL  */
  YYSYMBOL_TOKEN_SUB_EQUAL = 17,           /* TOKEN_SUB_EQUAL  */
  YYSYMBOL_TOKEN_MUL_EQUAL = 18,           /* TOKEN_MUL_EQUAL  */
  YYSYMBOL_TOKEN_DIV_EQUAL = 19,           /* TOKEN_DIV_EQUAL  */
  YYSYMBOL_TOKEN_DOUBLE_ADD = 20,          /* TOKEN_DOUBLE_ADD  */
  YYSYMBOL_TOKEN_DOUBLE_SUB = 21,          /* TOKEN_DOUBLE_SUB  */
  YYSYMBOL_TOKEN_OR = 22,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_AND = 23,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_XOR = 24,                 /* TOKEN_XOR  */
  YYSYMBOL_TOKEN_NOT = 25,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_LPAREN = 26,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 27,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LCURL = 28,               /* TOKEN_LCURL  */
  YYSYMBOL_TOKEN_RCURL = 29,               /* TOKEN_RCURL  */
  YYSYMBOL_TOKEN_SEMI = 30,                /* TOKEN_SEMI  */
  YYSYMBOL_TOKEN_ERROR = 31,               /* TOKEN_ERROR  */
  YYSYMBOL_TOKEN_EOF = 32,                 /* TOKEN_EOF  */
  YYSYMBOL_TOKEN_IF_KEYWORD = 33,          /* TOKEN_IF_KEYWORD  */
  YYSYMBOL_TOKEN_ELSE_KEYWORD = 34,        /* TOKEN_ELSE_KEYWORD  */
  YYSYMBOL_TOKEN_WHILE_KEYWORD = 35,       /* TOKEN_WHILE_KEYWORD  */
  YYSYMBOL_TOKEN_FOR_KEYWORD = 36,         /* TOKEN_FOR_KEYWORD  */
  YYSYMBOL_TOKEN_INT_KEYWORD = 37,         /* TOKEN_INT_KEYWORD  */
  YYSYMBOL_TOKEN_FLOAT_KEYWORD = 38,       /* TOKEN_FLOAT_KEYWORD  */
  YYSYMBOL_TOKEN_CHAR_KEYWORD = 39,        /* TOKEN_CHAR_KEYWORD  */
  YYSYMBOL_TOKEN_BOOL_KEYWORD = 40,        /* TOKEN_BOOL_KEYWORD  */
  YYSYMBOL_TOKEN_TRUE_KEYWORD = 41,        /* TOKEN_TRUE_KEYWORD  */
  YYSYMBOL_TOKEN_FALSE_KEYWORD = 42,       /* TOKEN_FALSE_KEYWORD  */
  YYSYMBOL_TOKEN_FUNCTION_KEYWORD = 43,    /* TOKEN_FUNCTION_KEYWORD  */
  YYSYMBOL_TOKEN_RETURN_KEYWORD = 44,      /* TOKEN_RETURN_KEYWORD  */
  YYSYMBOL_TOKEN_IMPLIES = 45,             /* TOKEN_IMPLIES  */
  YYSYMBOL_TOKEN_IDENT = 46,               /* TOKEN_IDENT  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_lines = 49,                     /* lines  */
  YYSYMBOL_line = 50,                      /* line  */
  YYSYMBOL_declaration = 51,               /* declaration  */
  YYSYMBOL_assignment = 52,                /* assignment  */
  YYSYMBOL_while = 53,                     /* while  */
  YYSYMBOL_for = 54,                       /* for  */
  YYSYMBOL_if = 55,                        /* if  */
  YYSYMBOL_elseif = 56,                    /* elseif  */
  YYSYMBOL_else = 57,                      /* else  */
  YYSYMBOL_function = 58,                  /* function  */
  YYSYMBOL_variable = 59,                  /* variable  */
  YYSYMBOL_firstVariable = 60,             /* firstVariable  */
  YYSYMBOL_expr = 61,                      /* expr  */
  YYSYMBOL_term = 62,                      /* term  */
  YYSYMBOL_factor = 63                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    65,    65,    67,    68,    69,    70,    71,
      72,    74,    75,    76,    77,    78,    79,    80,    81,    83,
      84,    85,    86,    87,    88,    89,    91,    93,    95,    96,
      97,   100,   101,   102,   105,   107,   108,   109,   110,   111,
     113,   115,   117,   118,   119,   120,   121,   122,   123,   126,
     127,   128,   129,   130,   131,   132,   133,   135,   136,   137,
     138,   139,   140,   141,   142
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_INT",
  "TOKEN_FLOAT", "TOKEN_CHAR", "TOKEN_ADD", "TOKEN_MINUS", "TOKEN_MUL",
  "TOKEN_DIV", "TOKEN_EQUAL", "TOKEN_DOUBLE_EQUAL", "TOKEN_LESS",
  "TOKEN_GREATER", "TOKEN_LESS_EQUAL", "TOKEN_GREATER_EQUAL",
  "TOKEN_ADD_EQUAL", "TOKEN_SUB_EQUAL", "TOKEN_MUL_EQUAL",
  "TOKEN_DIV_EQUAL", "TOKEN_DOUBLE_ADD", "TOKEN_DOUBLE_SUB", "TOKEN_OR",
  "TOKEN_AND", "TOKEN_XOR", "TOKEN_NOT", "TOKEN_LPAREN", "TOKEN_RPAREN",
  "TOKEN_LCURL", "TOKEN_RCURL", "TOKEN_SEMI", "TOKEN_ERROR", "TOKEN_EOF",
  "TOKEN_IF_KEYWORD", "TOKEN_ELSE_KEYWORD", "TOKEN_WHILE_KEYWORD",
  "TOKEN_FOR_KEYWORD", "TOKEN_INT_KEYWORD", "TOKEN_FLOAT_KEYWORD",
  "TOKEN_CHAR_KEYWORD", "TOKEN_BOOL_KEYWORD", "TOKEN_TRUE_KEYWORD",
  "TOKEN_FALSE_KEYWORD", "TOKEN_FUNCTION_KEYWORD", "TOKEN_RETURN_KEYWORD",
  "TOKEN_IMPLIES", "TOKEN_IDENT", "$accept", "program", "lines", "line",
  "declaration", "assignment", "while", "for", "if", "elseif", "else",
  "function", "variable", "firstVariable", "expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     135,   -25,   -18,     6,    -5,    -5,    -5,    -5,    -5,   -28,
      34,   -28,   135,    16,    17,   -28,   -28,   -28,   -28,   166,
       2,     2,   -27,   -28,    32,    39,    40,    41,    45,   -28,
     -28,   -28,   -28,     2,     2,     2,     2,     2,   -28,   -28,
     -28,   -28,   -28,    26,     2,     2,   -28,   -28,   -28,    -3,
     180,   -28,   123,    43,     2,     2,     2,     2,    47,    76,
      76,    76,    76,    76,   -28,    76,   133,    26,    26,    26,
      26,    26,    60,    26,    26,    26,    26,    26,    26,    26,
      62,     2,    76,    76,    76,    76,    -6,   -28,   180,   180,
     180,   180,   180,   135,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   135,    54,   135,   164,    46,    65,    55,    75,    64,
      74,    83,    84,    88,   -28,    96,   -28,   135,   135,   135,
     135,    12,   -28,   -28,   100,    80,    87,    90,    91,   135,
     106,   135,     2,     2,     2,     2,   112,     2,   113,    63,
      73,   103,   114,   -28,   142,   -28,   122,   124,   125,   130,
     134,   -28,   -28,   -28,   -28,   135,   132,    88,   -28,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     2,     3,     0,     0,     7,     8,     9,    10,     0,
       0,     0,     0,    41,    11,    13,    15,    17,     0,     1,
       4,     6,     5,     0,     0,     0,     0,     0,    24,    25,
      59,    60,    61,     0,     0,     0,    63,    62,    64,     0,
      48,    56,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    21,    22,    23,    57,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    14,    16,    18,     0,    58,    42,    43,
      46,    45,    47,     0,    49,    50,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    26,     0,    35,     0,     0,     0,
       0,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,    27,     0,     0,     0,     0,
       0,    36,    37,    38,    39,     0,     0,    31,    32,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -28,   -28,   -12,   -28,   136,    56,   -28,   -28,   -28,    10,
      20,   -28,   -28,    58,   -19,   129,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    14,    15,    16,    17,   122,
     123,    18,    19,    24,    49,    50,    51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    20,    52,    67,    68,    40,    41,    42,    21,    43,
       4,     5,     6,     7,    59,    60,    61,    62,    63,    69,
      70,    71,   103,    64,    72,    65,    66,    44,    45,    40,
      41,    42,    22,    43,    29,    82,    83,    84,    85,   104,
     129,    23,    54,    46,    47,   130,    31,    32,    48,    55,
      56,    57,    45,    94,    95,    96,    97,    98,    99,   100,
      67,    68,   102,    25,    26,    27,    28,    46,    47,    67,
      68,    58,    48,    81,    86,   113,    69,    70,    71,    67,
      68,   105,    67,    68,   107,    69,    70,    71,    93,   106,
     101,   108,   117,   146,   114,    69,    70,    71,    69,    70,
      71,     9,   118,   147,   116,   125,   126,   127,   128,    67,
      68,   119,   120,   139,   140,   141,   142,   136,   144,   138,
      67,    68,   121,   124,   132,    69,    70,    71,   131,    67,
      68,   133,   137,   148,   134,   135,    69,    70,    71,    67,
      68,   143,   145,   156,   149,    69,    70,    71,    67,    68,
      80,   151,     0,   152,   153,    69,    70,    71,    53,   154,
      87,   157,   155,   115,    69,    70,    71,   158,     1,   150,
       2,     3,     4,     5,     6,     7,    33,   159,     8,     0,
       0,     9,    34,    35,    36,    37,    38,    39,    73,    74,
       0,    75,    76,    77,    78,    79,    88,    89,    90,    91,
      92,   109,   110,   111,   112
};

static const yytype_int16 yycheck[] =
{
      12,    26,    21,     6,     7,     3,     4,     5,    26,     7,
      37,    38,    39,    40,    33,    34,    35,    36,    37,    22,
      23,    24,    28,    43,    27,    44,    45,    25,    26,     3,
       4,     5,    26,     7,     0,    54,    55,    56,    57,    45,
      28,    46,    10,    41,    42,    33,    30,    30,    46,    10,
      10,    10,    26,    73,    74,    75,    76,    77,    78,    79,
       6,     7,    81,     5,     6,     7,     8,    41,    42,     6,
       7,    26,    46,    30,    27,    29,    22,    23,    24,     6,
       7,    93,     6,     7,    30,    22,    23,    24,    28,   101,
      28,   103,    28,    30,    29,    22,    23,    24,    22,    23,
      24,    46,    28,    30,    29,   117,   118,   119,   120,     6,
       7,    28,    28,   132,   133,   134,   135,   129,   137,   131,
       6,     7,    34,    27,    44,    22,    23,    24,    28,     6,
       7,    44,    26,    30,    44,    44,    22,    23,    24,     6,
       7,    29,    29,   155,    30,    22,    23,    24,     6,     7,
      27,    29,    -1,    29,    29,    22,    23,    24,    22,    29,
      27,    29,    28,   107,    22,    23,    24,   157,    33,    27,
      35,    36,    37,    38,    39,    40,    10,   157,    43,    -1,
      -1,    46,    16,    17,    18,    19,    20,    21,     8,     9,
      -1,    11,    12,    13,    14,    15,    67,    68,    69,    70,
      71,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    33,    35,    36,    37,    38,    39,    40,    43,    46,
      48,    49,    50,    51,    52,    53,    54,    55,    58,    59,
      26,    26,    26,    46,    60,    60,    60,    60,    60,     0,
      49,    30,    30,    10,    16,    17,    18,    19,    20,    21,
       3,     4,     5,     7,    25,    26,    41,    42,    46,    61,
      62,    63,    61,    51,    10,    10,    10,    10,    26,    61,
      61,    61,    61,    61,    63,    61,    61,     6,     7,    22,
      23,    24,    27,     8,     9,    11,    12,    13,    14,    15,
      27,    30,    61,    61,    61,    61,    27,    27,    62,    62,
      62,    62,    62,    28,    63,    63,    63,    63,    63,    63,
      63,    28,    61,    28,    45,    49,    49,    30,    49,    37,
      38,    39,    40,    29,    29,    52,    29,    28,    28,    28,
      28,    34,    56,    57,    27,    49,    49,    49,    49,    28,
      33,    28,    44,    44,    44,    44,    49,    26,    49,    61,
      61,    61,    61,    29,    61,    29,    30,    30,    30,    30,
      27,    29,    29,    29,    29,    28,    49,    29,    56,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    53,    54,    55,    55,
      55,    56,    56,    56,    57,    58,    58,    58,    58,    58,
      59,    60,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     4,     2,     4,     2,     4,     2,     4,     3,
       3,     3,     3,     3,     2,     2,     7,    11,     7,     8,
       8,     8,     9,     9,     4,     7,    12,    12,    12,    12,
       1,     1,     3,     3,     2,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     1,
       1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: lines  */
#line 64 "Parser.bison"
                { parserResult = yyvsp[0]; }
#line 1242 "Parser.c"
    break;

  case 3: /* lines: line  */
#line 65 "Parser.bison"
             { yyval = yyvsp[0]; }
#line 1248 "Parser.c"
    break;

  case 4: /* lines: line lines  */
#line 65 "Parser.bison"
                                       { yyval = connectNodes(yyvsp[-1],yyvsp[0]); }
#line 1254 "Parser.c"
    break;

  case 5: /* line: assignment TOKEN_SEMI  */
#line 67 "Parser.bison"
                             { yyval = yyvsp[-1]; }
#line 1260 "Parser.c"
    break;

  case 6: /* line: declaration TOKEN_SEMI  */
#line 68 "Parser.bison"
                              { yyval = yyvsp[-1]; }
#line 1266 "Parser.c"
    break;

  case 7: /* line: while  */
#line 69 "Parser.bison"
             { yyval = yyvsp[0]; }
#line 1272 "Parser.c"
    break;

  case 8: /* line: for  */
#line 70 "Parser.bison"
           { yyval = yyvsp[0]; }
#line 1278 "Parser.c"
    break;

  case 9: /* line: if  */
#line 71 "Parser.bison"
          { yyval = yyvsp[0]; }
#line 1284 "Parser.c"
    break;

  case 10: /* line: function  */
#line 72 "Parser.bison"
                { yyval = yyvsp[0]; }
#line 1290 "Parser.c"
    break;

  case 11: /* declaration: TOKEN_INT_KEYWORD firstVariable  */
#line 74 "Parser.bison"
                                              { yyval = createDeclarationNode(DECLARE_INT,yyvsp[0],createExpressionIntNode(0)); }
#line 1296 "Parser.c"
    break;

  case 12: /* declaration: TOKEN_INT_KEYWORD firstVariable TOKEN_EQUAL expr  */
#line 75 "Parser.bison"
                                                                 { yyval = createDeclarationNode(DECLARE_INT,yyvsp[-2],yyvsp[0]);}
#line 1302 "Parser.c"
    break;

  case 13: /* declaration: TOKEN_FLOAT_KEYWORD firstVariable  */
#line 76 "Parser.bison"
                                                  { yyval = createDeclarationNode(DECLARE_FLOAT,yyvsp[0],createExpressionFloatNode(0)); }
#line 1308 "Parser.c"
    break;

  case 14: /* declaration: TOKEN_FLOAT_KEYWORD firstVariable TOKEN_EQUAL expr  */
#line 77 "Parser.bison"
                                                                   { yyval = createDeclarationNode(DECLARE_FLOAT,yyvsp[-2],yyvsp[0]); }
#line 1314 "Parser.c"
    break;

  case 15: /* declaration: TOKEN_CHAR_KEYWORD firstVariable  */
#line 78 "Parser.bison"
                                                 { yyval = createDeclarationNode(DECLARE_CHAR,yyvsp[0],createExpressionCharNode('a')); }
#line 1320 "Parser.c"
    break;

  case 16: /* declaration: TOKEN_CHAR_KEYWORD firstVariable TOKEN_EQUAL expr  */
#line 79 "Parser.bison"
                                                                  { yyval = createDeclarationNode(DECLARE_CHAR,yyvsp[-2],yyvsp[0]); }
#line 1326 "Parser.c"
    break;

  case 17: /* declaration: TOKEN_BOOL_KEYWORD firstVariable  */
#line 80 "Parser.bison"
                                                 { yyval = createDeclarationNode(DECLARE_BOOL,yyvsp[0],createExpressionBoolNode(0)); }
#line 1332 "Parser.c"
    break;

  case 18: /* declaration: TOKEN_BOOL_KEYWORD firstVariable TOKEN_EQUAL expr  */
#line 81 "Parser.bison"
                                                                  { yyval = createDeclarationNode(DECLARE_BOOL,yyvsp[-2],yyvsp[0]); }
#line 1338 "Parser.c"
    break;

  case 19: /* assignment: variable TOKEN_EQUAL expr  */
#line 83 "Parser.bison"
                                       { yyval = createAssignmentNode(yyvsp[-2],yyvsp[0]); }
#line 1344 "Parser.c"
    break;

  case 20: /* assignment: variable TOKEN_ADD_EQUAL expr  */
#line 84 "Parser.bison"
                                       { yyval = createAssignmentNode(yyvsp[-2],createExpressionNode(EXPR_ADD,yyvsp[-2],yyvsp[0])); }
#line 1350 "Parser.c"
    break;

  case 21: /* assignment: variable TOKEN_SUB_EQUAL expr  */
#line 85 "Parser.bison"
                                       { yyval = createAssignmentNode(yyvsp[-2],createExpressionNode(EXPR_SUB,yyvsp[-2],yyvsp[0])); }
#line 1356 "Parser.c"
    break;

  case 22: /* assignment: variable TOKEN_MUL_EQUAL expr  */
#line 86 "Parser.bison"
                                       { yyval = createAssignmentNode(yyvsp[-2],createExpressionNode(EXPR_MUL,yyvsp[-2],yyvsp[0])); }
#line 1362 "Parser.c"
    break;

  case 23: /* assignment: variable TOKEN_DIV_EQUAL expr  */
#line 87 "Parser.bison"
                                       { yyval = createAssignmentNode(yyvsp[-2],createExpressionNode(EXPR_DIV,yyvsp[-2],yyvsp[0])); }
#line 1368 "Parser.c"
    break;

  case 24: /* assignment: variable TOKEN_DOUBLE_ADD  */
#line 88 "Parser.bison"
                                   { yyval = createAssignmentNode(yyvsp[-1], createExpressionNode(EXPR_ADD,yyvsp[-1],createExpressionIntNode(1))); }
#line 1374 "Parser.c"
    break;

  case 25: /* assignment: variable TOKEN_DOUBLE_SUB  */
#line 89 "Parser.bison"
                                   { yyval = createAssignmentNode(yyvsp[-1], createExpressionNode(EXPR_SUB,yyvsp[-1],createExpressionIntNode(1))); }
#line 1380 "Parser.c"
    break;

  case 26: /* while: TOKEN_WHILE_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL  */
#line 91 "Parser.bison"
                                                                                         { yyval = createWhileLoopNode(yyvsp[-4],yyvsp[-1]); }
#line 1386 "Parser.c"
    break;

  case 27: /* for: TOKEN_FOR_KEYWORD TOKEN_LPAREN declaration TOKEN_SEMI expr TOKEN_SEMI assignment TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL  */
#line 93 "Parser.bison"
                                                                                                                                  { yyval = createForLoopNode(yyvsp[-8],yyvsp[-6],yyvsp[-4],yyvsp[-1]); }
#line 1392 "Parser.c"
    break;

  case 28: /* if: TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL  */
#line 95 "Parser.bison"
                                                                                   { yyval = createIfStatementNode(yyvsp[-4],yyvsp[-1],NULL,0); }
#line 1398 "Parser.c"
    break;

  case 29: /* if: TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL elseif  */
#line 96 "Parser.bison"
                                                                                              { yyval = createIfStatementNode(yyvsp[-5],yyvsp[-2],yyvsp[0],0); }
#line 1404 "Parser.c"
    break;

  case 30: /* if: TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL else  */
#line 97 "Parser.bison"
                                                                                            { yyval = createIfStatementNode(yyvsp[-5],yyvsp[-2],yyvsp[0],0); }
#line 1410 "Parser.c"
    break;

  case 31: /* elseif: TOKEN_ELSE_KEYWORD TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL  */
#line 100 "Parser.bison"
                                                                                                          { yyval = createIfStatementNode(yyvsp[-4],yyvsp[-1],NULL,0); }
#line 1416 "Parser.c"
    break;

  case 32: /* elseif: TOKEN_ELSE_KEYWORD TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL elseif  */
#line 101 "Parser.bison"
                                                                                                                 { yyval = createIfStatementNode(yyvsp[-5],yyvsp[-2],yyvsp[0],0); }
#line 1422 "Parser.c"
    break;

  case 33: /* elseif: TOKEN_ELSE_KEYWORD TOKEN_IF_KEYWORD TOKEN_LPAREN expr TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL else  */
#line 102 "Parser.bison"
                                                                                                               { yyval = createIfStatementNode(yyvsp[-5],yyvsp[-2],yyvsp[0],0); }
#line 1428 "Parser.c"
    break;

  case 34: /* else: TOKEN_ELSE_KEYWORD TOKEN_LCURL lines TOKEN_RCURL  */
#line 105 "Parser.bison"
                                                        { yyval = createIfStatementNode(NULL,yyvsp[-1],NULL,1); }
#line 1434 "Parser.c"
    break;

  case 35: /* function: TOKEN_FUNCTION_KEYWORD firstVariable TOKEN_LPAREN TOKEN_RPAREN TOKEN_LCURL lines TOKEN_RCURL  */
#line 107 "Parser.bison"
                                                                                                        { yyval = createFunctionNode(DECLARE_VOID,yyvsp[-5],yyvsp[-1],NULL); }
#line 1440 "Parser.c"
    break;

  case 36: /* function: TOKEN_FUNCTION_KEYWORD firstVariable TOKEN_LPAREN TOKEN_RPAREN TOKEN_IMPLIES TOKEN_INT_KEYWORD TOKEN_LCURL lines TOKEN_RETURN_KEYWORD expr TOKEN_SEMI TOKEN_RCURL  */
#line 108 "Parser.bison"
                                                                                                                                                                           { yyval = createFunctionNode(DECLARE_INT, yyvsp[-10], yyvsp[-4], yyvsp[-2]); }
#line 1446 "Parser.c"
    break;

  case 37: /* function: TOKEN_FUNCTION_KEYWORD firstVariable TOKEN_LPAREN TOKEN_RPAREN TOKEN_IMPLIES TOKEN_FLOAT_KEYWORD TOKEN_LCURL lines TOKEN_RETURN_KEYWORD expr TOKEN_SEMI TOKEN_RCURL  */
#line 109 "Parser.bison"
                                                                                                                                                                             { yyval = createFunctionNode(DECLARE_FLOAT, yyvsp[-10], yyvsp[-4], yyvsp[-2]); }
#line 1452 "Parser.c"
    break;

  case 38: /* function: TOKEN_FUNCTION_KEYWORD firstVariable TOKEN_LPAREN TOKEN_RPAREN TOKEN_IMPLIES TOKEN_CHAR_KEYWORD TOKEN_LCURL lines TOKEN_RETURN_KEYWORD expr TOKEN_SEMI TOKEN_RCURL  */
#line 110 "Parser.bison"
                                                                                                                                                                            { yyval = createFunctionNode(DECLARE_CHAR, yyvsp[-10], yyvsp[-4], yyvsp[-2]); }
#line 1458 "Parser.c"
    break;

  case 39: /* function: TOKEN_FUNCTION_KEYWORD firstVariable TOKEN_LPAREN TOKEN_RPAREN TOKEN_IMPLIES TOKEN_BOOL_KEYWORD TOKEN_LCURL lines TOKEN_RETURN_KEYWORD expr TOKEN_SEMI TOKEN_RCURL  */
#line 111 "Parser.bison"
                                                                                                                                                                            { yyval = createFunctionNode(DECLARE_BOOL, yyvsp[-10], yyvsp[-4], yyvsp[-2]); }
#line 1464 "Parser.c"
    break;

  case 40: /* variable: TOKEN_IDENT  */
#line 113 "Parser.bison"
                       { yyval = createExpressionSymbolNode(yytext,0); }
#line 1470 "Parser.c"
    break;

  case 41: /* firstVariable: TOKEN_IDENT  */
#line 115 "Parser.bison"
                           { yyval = createExpressionSymbolNode(yytext,1); }
#line 1476 "Parser.c"
    break;

  case 42: /* expr: expr TOKEN_ADD term  */
#line 117 "Parser.bison"
                           { yyval = createExpressionNode(EXPR_ADD,yyvsp[-2],yyvsp[0]); }
#line 1482 "Parser.c"
    break;

  case 43: /* expr: expr TOKEN_MINUS term  */
#line 118 "Parser.bison"
                             { yyval = createExpressionNode(EXPR_SUB,yyvsp[-2],yyvsp[0]); }
#line 1488 "Parser.c"
    break;

  case 44: /* expr: TOKEN_NOT expr  */
#line 119 "Parser.bison"
                      { yyval = createExpressionNode(EXPR_NOT,yyvsp[0],NULL); }
#line 1494 "Parser.c"
    break;

  case 45: /* expr: expr TOKEN_AND term  */
#line 120 "Parser.bison"
                           { yyval = createExpressionNode(EXPR_AND,yyvsp[-2],yyvsp[0]); }
#line 1500 "Parser.c"
    break;

  case 46: /* expr: expr TOKEN_OR term  */
#line 121 "Parser.bison"
                          { yyval = createExpressionNode(EXPR_OR,yyvsp[-2],yyvsp[0]); }
#line 1506 "Parser.c"
    break;

  case 47: /* expr: expr TOKEN_XOR term  */
#line 122 "Parser.bison"
                           { yyval = createExpressionNode(EXPR_XOR,yyvsp[-2],yyvsp[0]); }
#line 1512 "Parser.c"
    break;

  case 48: /* expr: term  */
#line 123 "Parser.bison"
            { yyval = yyvsp[0]; }
#line 1518 "Parser.c"
    break;

  case 49: /* term: term TOKEN_MUL factor  */
#line 126 "Parser.bison"
                             { yyval = createExpressionNode(EXPR_MUL,yyvsp[-2],yyvsp[0]); }
#line 1524 "Parser.c"
    break;

  case 50: /* term: term TOKEN_DIV factor  */
#line 127 "Parser.bison"
                             { yyval = createExpressionNode(EXPR_DIV,yyvsp[-2],yyvsp[0]); }
#line 1530 "Parser.c"
    break;

  case 51: /* term: term TOKEN_DOUBLE_EQUAL factor  */
#line 128 "Parser.bison"
                                      { yyval = createExpressionNode(EXPR_EQUAL,yyvsp[-2],yyvsp[0]); }
#line 1536 "Parser.c"
    break;

  case 52: /* term: term TOKEN_LESS factor  */
#line 129 "Parser.bison"
                              { yyval = createExpressionNode(EXPR_LESS,yyvsp[-2],yyvsp[0]); }
#line 1542 "Parser.c"
    break;

  case 53: /* term: term TOKEN_GREATER factor  */
#line 130 "Parser.bison"
                                 { yyval = createExpressionNode(EXPR_GREATER,yyvsp[-2],yyvsp[0]); }
#line 1548 "Parser.c"
    break;

  case 54: /* term: term TOKEN_LESS_EQUAL factor  */
#line 131 "Parser.bison"
                                    { yyval = createExpressionNode(EXPR_LESS_EQUAL,yyvsp[-2],yyvsp[0]); }
#line 1554 "Parser.c"
    break;

  case 55: /* term: term TOKEN_GREATER_EQUAL factor  */
#line 132 "Parser.bison"
                                       { yyval = createExpressionNode(EXPR_GREATER_EQUAL,yyvsp[-2],yyvsp[0]); }
#line 1560 "Parser.c"
    break;

  case 56: /* term: factor  */
#line 133 "Parser.bison"
              { yyval = yyvsp[0]; }
#line 1566 "Parser.c"
    break;

  case 57: /* factor: TOKEN_MINUS factor  */
#line 135 "Parser.bison"
                            { yyval = createExpressionNode(EXPR_SUB,createExpressionIntNode(0),yyvsp[0]); }
#line 1572 "Parser.c"
    break;

  case 58: /* factor: TOKEN_LPAREN expr TOKEN_RPAREN  */
#line 136 "Parser.bison"
                                        { yyval = yyvsp[-1]; }
#line 1578 "Parser.c"
    break;

  case 59: /* factor: TOKEN_INT  */
#line 137 "Parser.bison"
                   { yyval = createExpressionIntNode(atoi(yytext)); }
#line 1584 "Parser.c"
    break;

  case 60: /* factor: TOKEN_FLOAT  */
#line 138 "Parser.bison"
                     { yyval = createExpressionFloatNode(atof(yytext)); }
#line 1590 "Parser.c"
    break;

  case 61: /* factor: TOKEN_CHAR  */
#line 139 "Parser.bison"
                    { yyval = createExpressionCharNode(yytext[1]); }
#line 1596 "Parser.c"
    break;

  case 62: /* factor: TOKEN_FALSE_KEYWORD  */
#line 140 "Parser.bison"
                             { yyval = createExpressionBoolNode(0); }
#line 1602 "Parser.c"
    break;

  case 63: /* factor: TOKEN_TRUE_KEYWORD  */
#line 141 "Parser.bison"
                            { yyval = createExpressionBoolNode(1); }
#line 1608 "Parser.c"
    break;

  case 64: /* factor: TOKEN_IDENT  */
#line 142 "Parser.bison"
                     { yyval = createExpressionSymbolNode(yytext,0); }
#line 1614 "Parser.c"
    break;


#line 1618 "Parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 144 "Parser.bison"



int yyerror(char* s){
    // This is where you can throw a syntax error
    return 0;
}
int yywrap() {return 1;}
