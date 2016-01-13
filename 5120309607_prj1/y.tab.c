/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "smallc_prj1.y" /* yacc.c:339  */

#include "header.h"
#include "lex.yy.c"
#include "syntax_tree.h"

using namespace std;
void yyerror(char*);
extern int yylineno;


#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD_ASSIGN = 258,
    SUB_ASSIGN = 259,
    MUL_ASSIGN = 260,
    DIV_ASSIGN = 261,
    AND_ASSIGN = 262,
    MOD_ASSIGN = 263,
    XOR_ASSIGN = 264,
    OR_ASSIGN = 265,
    RIGHT_OP = 266,
    LEFT_OP = 267,
    AND_OP = 268,
    OR_OP = 269,
    EQ_OP = 270,
    NE_OP = 271,
    RIGHT_ASSIGN = 272,
    LEFT_ASSIGN = 273,
    LOG_NOT_OP = 274,
    BIT_NOT_OP = 275,
    INT = 276,
    ID = 277,
    SEMI = 278,
    COMMA = 279,
    TYPE = 280,
    LP = 281,
    RP = 282,
    LB = 283,
    RB = 284,
    LC = 285,
    RC = 286,
    STRUCT = 287,
    RETURN = 288,
    IF = 289,
    ELSE = 290,
    BREAK = 291,
    CONT = 292,
    FOR = 293,
    DOT = 294,
    ASSIGN = 295,
    IF_NO_ELSE = 296,
    ELSE_AFTER_IF = 297,
    BIT_OR_OP = 298,
    BIT_XOR_OP = 299,
    BIT_AND_OP = 300,
    GE_OP = 301,
    LE_OP = 302,
    GT_OP = 303,
    LT_OP = 304,
    PLUS_OP = 305,
    MINUS_OP = 306,
    PRODUCT_OP = 307,
    DIV_OP = 308,
    MOD_OP = 309,
    INC_OP = 310,
    DEC_OP = 311,
    UNARY = 312
  };
#endif
/* Tokens.  */
#define ADD_ASSIGN 258
#define SUB_ASSIGN 259
#define MUL_ASSIGN 260
#define DIV_ASSIGN 261
#define AND_ASSIGN 262
#define MOD_ASSIGN 263
#define XOR_ASSIGN 264
#define OR_ASSIGN 265
#define RIGHT_OP 266
#define LEFT_OP 267
#define AND_OP 268
#define OR_OP 269
#define EQ_OP 270
#define NE_OP 271
#define RIGHT_ASSIGN 272
#define LEFT_ASSIGN 273
#define LOG_NOT_OP 274
#define BIT_NOT_OP 275
#define INT 276
#define ID 277
#define SEMI 278
#define COMMA 279
#define TYPE 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LC 285
#define RC 286
#define STRUCT 287
#define RETURN 288
#define IF 289
#define ELSE 290
#define BREAK 291
#define CONT 292
#define FOR 293
#define DOT 294
#define ASSIGN 295
#define IF_NO_ELSE 296
#define ELSE_AFTER_IF 297
#define BIT_OR_OP 298
#define BIT_XOR_OP 299
#define BIT_AND_OP 300
#define GE_OP 301
#define LE_OP 302
#define GT_OP 303
#define LT_OP 304
#define PLUS_OP 305
#define MINUS_OP 306
#define PRODUCT_OP 307
#define DIV_OP 308
#define MOD_OP 309
#define INC_OP 310
#define DEC_OP 311
#define UNARY 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "smallc_prj1.y" /* yacc.c:355  */

    char* string;
    TreeNode* node;

#line 236 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   512

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    46,    47,    50,    51,    52,    56,    57,
      58,    61,    62,    63,    64,    65,    68,    69,    70,    73,
      77,    78,    79,    82,    85,    86,    89,    90,    91,    92,
      93,    94,    95,    96,    99,   100,   101,   104,   105,   108,
     109,   112,   113,   114,   115,   118,   119,   122,   123,   126,
     127,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   167,   168,   171,   172,
     176,   177,   178,   179,   180,   181
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN",
  "DIV_ASSIGN", "AND_ASSIGN", "MOD_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "RIGHT_OP", "LEFT_OP", "AND_OP", "OR_OP", "EQ_OP", "NE_OP",
  "RIGHT_ASSIGN", "LEFT_ASSIGN", "LOG_NOT_OP", "BIT_NOT_OP", "INT", "ID",
  "SEMI", "COMMA", "TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT",
  "RETURN", "IF", "ELSE", "BREAK", "CONT", "FOR", "DOT", "ASSIGN",
  "IF_NO_ELSE", "ELSE_AFTER_IF", "BIT_OR_OP", "BIT_XOR_OP", "BIT_AND_OP",
  "GE_OP", "LE_OP", "GT_OP", "LT_OP", "PLUS_OP", "MINUS_OP", "PRODUCT_OP",
  "DIV_OP", "MOD_OP", "INC_OP", "DEC_OP", "UNARY", "$accept", "PROGRAM",
  "EXTDEFS", "EXTDEF", "SEXTVARS", "EXTVARS", "STSPEC", "FUNC", "PARAS",
  "STMTBLOCK", "STMTS", "STMT", "DEFS", "SDEFS", "SDECS", "DECS", "VAR",
  "INIT", "EXP", "EXPS", "ARRS", "ARGS", "UNARYOP", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -167

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-167)))

#define YYTABLE_NINF -51

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,     5,    -1,    35,  -167,    -8,    28,    34,    59,    54,
     -12,    88,    96,  -167,  -167,    99,   101,   102,  -167,    32,
    -167,    36,   105,   110,    96,   112,   106,    28,  -167,   116,
     115,    36,   112,   409,  -167,  -167,   133,  -167,  -167,  -167,
      94,   456,   456,  -167,  -167,  -167,  -167,   139,   297,   456,
     108,   140,   144,  -167,  -167,   145,  -167,   147,    -6,   148,
     456,   146,   150,   151,   149,  -167,   152,   409,   153,   297,
    -167,   456,   456,   155,  -167,   141,   154,   181,    36,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,  -167,  -167,
     112,    96,   102,    32,    36,   110,    32,   193,   456,  -167,
    -167,   456,  -167,  -167,  -167,   186,   185,  -167,  -167,   456,
    -167,  -167,   297,   297,   297,   297,   297,   297,   297,   297,
      15,    15,   309,    -5,    25,    25,   297,   297,   297,   320,
     364,   373,     2,     2,     2,     2,    33,    33,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,   156,  -167,  -167,   245,
     159,  -167,   187,  -167,    36,   436,   456,  -167,  -167,   182,
     195,   436,   456,  -167,   192,   436,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    15,     0,     0,     2,     4,    10,    45,     0,     0,
      11,    18,    38,     1,     3,     8,     0,    22,     5,    36,
       7,    15,     0,     0,    38,     0,     0,    10,     6,     0,
       0,     0,     0,    25,    45,    12,     0,    93,    92,    85,
      87,     0,    50,    90,    91,    94,    95,    13,    47,     0,
       0,    40,     0,    17,     9,    21,    19,     0,    41,     0,
       0,     0,     0,     0,     0,    27,     0,    25,     0,    49,
      46,    50,    50,     0,    83,     0,    89,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    16,
       0,    38,    22,    36,     0,     0,    36,     0,     0,    33,
      32,    50,    23,    24,    26,     0,     0,    84,    81,    50,
      48,    14,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    51,    52,    55,    56,    68,    69,    57,    79,
      78,    72,    54,    53,    77,    76,    70,    71,    73,    74,
      75,    39,    37,    20,    34,    42,    44,    35,    28,     0,
       0,    82,    87,    88,     0,    50,    50,    86,    43,    29,
       0,    50,    50,    30,     0,    50,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,   174,  -167,   194,   -17,    20,  -167,   111,   211,
     157,  -166,   -90,     8,   -29,  -112,   -31,   107,   -41,    10,
      53,   -66,  -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    16,     8,    32,     9,    30,    65,
      66,    67,    33,    26,    52,    57,    10,    47,    68,    69,
      74,    77,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    76,   165,    59,    35,   125,    87,    88,    89,   179,
      91,    92,    21,    87,    88,   183,    22,     1,   114,   186,
       6,    11,    22,   164,     2,     6,   167,     7,    23,    12,
      76,   126,    50,    48,   115,    13,    87,    88,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      15,    75,   103,   104,   105,   106,   107,    31,    34,   108,
      17,   131,   178,   173,     2,   103,   104,   105,   106,   107,
     117,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     170,   161,    18,    58,    19,   105,   106,   107,    76,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    24,   162,
      71,    25,    72,    27,    28,    48,    36,    29,   169,    37,
      38,    39,    40,    73,    51,   180,    41,    53,    55,   109,
      42,   184,    56,    58,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      43,    44,    70,    78,   110,    45,    46,   111,   128,   112,
     113,   116,   118,   119,   120,   121,   124,   127,   129,    14,
     174,    95,   176,   122,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   130,   171,   172,    72,   168,   181,   182,   185,
      20,    54,   166,   163,   123,   177,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     0,     0,     0,     0,
      87,    88,     0,     0,    91,    92,     0,     0,     0,     0,
       0,    87,    88,     0,     0,    91,    92,    95,     0,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    87,    88,     0,     0,    91,
      92,     0,     0,     0,    87,    88,     0,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    37,    38,
      39,    40,   -50,     0,     0,    41,     0,     0,     0,    19,
       0,     0,    60,    61,     0,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,    40,    43,
      44,     0,    41,     0,    45,    46,    19,     0,     0,    60,
      61,     0,    62,    63,    64,    37,    38,    39,    40,     0,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,     0,     0,
       0,    45,    46
};

static const yytype_int16 yycheck[] =
{
      31,    42,   114,    32,    21,    71,    11,    12,    13,   175,
      15,    16,    24,    11,    12,   181,    28,    25,    24,   185,
       0,    22,    28,   113,    32,     5,   116,    22,    40,    30,
      71,    72,    24,    23,    40,     0,    11,    12,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      22,    41,    50,    51,    52,    53,    54,    25,    22,    49,
      26,    78,   174,   129,    32,    50,    51,    52,    53,    54,
      60,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     121,   110,    23,   114,    30,    52,    53,    54,   129,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    30,   111,
      26,    25,    28,    24,    23,   115,    21,    25,   118,    19,
      20,    21,    22,    39,    22,   176,    26,    31,    22,    31,
      30,   182,    27,   174,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      50,    51,    29,    24,    24,    55,    56,    23,    27,    24,
      23,    23,    26,    23,    23,    26,    23,    22,    24,     5,
      24,    40,    23,    31,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    31,    27,    29,    28,    23,    35,    23,    27,
       9,    27,   115,   112,    67,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      11,    12,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    15,    16,    40,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    11,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    11,    12,    -1,    -1,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    -1,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    50,
      51,    -1,    26,    -1,    55,    56,    30,    -1,    -1,    33,
      34,    -1,    36,    37,    38,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    32,    59,    60,    61,    64,    22,    63,    65,
      74,    22,    30,     0,    60,    22,    62,    26,    23,    30,
      67,    24,    28,    40,    30,    25,    71,    24,    23,    25,
      66,    25,    64,    70,    22,    63,    21,    19,    20,    21,
      22,    26,    30,    50,    51,    55,    56,    75,    77,    80,
      71,    22,    72,    31,    62,    22,    27,    73,    74,    72,
      33,    34,    36,    37,    38,    67,    68,    69,    76,    77,
      29,    26,    28,    39,    78,    77,    76,    79,    24,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    40,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    77,    31,
      24,    23,    24,    23,    24,    40,    23,    77,    26,    23,
      23,    26,    31,    68,    23,    79,    76,    22,    27,    24,
      31,    63,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    72,    71,    66,    70,    73,    75,    70,    23,    77,
      76,    27,    29,    79,    24,    27,    23,    78,    73,    69,
      76,    35,    23,    69,    76,    27,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    62,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      66,    66,    66,    67,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     3,     1,     3,
       0,     1,     3,     3,     5,     0,     5,     4,     2,     4,
       4,     2,     0,     4,     2,     0,     2,     1,     3,     5,
       7,     9,     2,     2,     4,     4,     0,     4,     0,     3,
       1,     1,     3,     5,     3,     1,     4,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     2,     3,     1,     4,     0,     3,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
        case 2:
#line 44 "smallc_prj1.y" /* yacc.c:1646  */
    {root = (yyval.node) = getNodeInstance(yylineno,"PROGRAM: EXTDEFS",1,(yyvsp[0].node));}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno,"EXTDEFS: EXTDEF EXTDEFS",2,(yyvsp[-1].node),(yyvsp[0].node));}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "EXTDEFS:null", 0);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTDEF: TYPE EXTVARS ;", 2, getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[-1].node)); }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTDEF: STSPEC SEXTVARS ;", 2, (yyvsp[-2].node),(yyvsp[-1].node)); }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTDEF: TYPE FUNC STMTBLOCK", 3, getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[-1].node),(yyvsp[0].node)); }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "SEXTVARS: ID",1,getNodeInstance(yylineno,(yyvsp[0].string),0)); }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "SEXTVARS: ID , SEXTVARS", 2, getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[0].node)); }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "SEXTVARS: null", 0);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTVARS: VAR", 1, (yyvsp[0].node)); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTVARS:VAR , EXTVARS", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTVARS:VAR ASSIGN INIT", 3, (yyvsp[-2].node),getNodeInstance(yylineno,(yyvsp[-1].string),0),(yyvsp[0].node)); }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXTVARS:VAR ASSIGN INIT , EXTVARS", 4, (yyvsp[-4].node),getNodeInstance(yylineno,(yyvsp[-3].string),0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "EXTVARS:null", 0);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STSPEC: STRUCT ID { SDEFS }", 3, getNodeInstance(yylineno,(yyvsp[-4].string),0),getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-1].node)); }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STSPEC: STRUCT { SDEFS }", 2, getNodeInstance(yylineno,(yyvsp[-3].string),0),(yyvsp[-1].node)); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STSPEC: STRUCT ID", 2, getNodeInstance(yylineno,(yyvsp[-1].string),0),getNodeInstance(yylineno, (yyvsp[0].string), 0)); }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "FUNC: ID ( PARAS )", 2, getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-1].node)); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "PARAS: TYPE ID , PARAS", 3, getNodeInstance(yylineno, (yyvsp[-3].string), 0), getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[0].node)); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "PARAS: TYPE ID", 2, getNodeInstance(yylineno, (yyvsp[-1].string), 0), getNodeInstance(yylineno, (yyvsp[0].string), 0)); }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 79 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "PARAS: null", 0);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMTBLOCK: { DEFS STMTS }", 2, (yyvsp[-2].node),(yyvsp[-1].node)); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 85 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMTS: STMT STMTS", 2, (yyvsp[-1].node),(yyvsp[0].node)); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "STMTS: null", 0);}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: EXP ;", 1, (yyvsp[-1].node)); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 90 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: STMTBLOCK", 1, (yyvsp[0].node)); }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: RETURN EXPS ;", 2, getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[-1].node)); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: if ( EXPS ) STMT ", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: if ( EXPS ) STMT else STMT", 3, (yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: for ( EXP ; EXP ; EXP ) STMT", 4, (yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: CONT ;", 1, getNodeInstance(yylineno, (yyvsp[-1].string), 0)); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 96 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "STMT: BREAK ;", 1, getNodeInstance(yylineno, (yyvsp[-1].string), 0)); }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 99 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DEFS: TYPE DECS ; DEFS", 3, getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DEFS: STSPEC SDECS ; DEFS", 3, (yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "DEFS: null", 0);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 104 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "SDEFS: TYPE SDECS ; SDEFS", 3, getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "SDEFS: null", 0);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "SDECS: ID , SDECS", 2, getNodeInstance(yylineno, (yyvsp[-2].string), 0),(yyvsp[0].node)); }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 109 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "SDECS: ID ", 1,getNodeInstance(yylineno,(yyvsp[0].string),0)); }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DECS: VAR", 1, (yyvsp[0].node)); }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 113 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DECS: VAR, DECS ", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 114 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DECS: VAR ASSIGN INIT, DECS ", 4, (yyvsp[-4].node),getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 115 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "DECS: VAR ASSIGN INIT", 3, (yyvsp[-2].node),getNodeInstance(yylineno, (yyvsp[-1].string), 0),(yyvsp[0].node)); }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "VAR: ID", 1,getNodeInstance(yylineno, (yyvsp[0].string), 0)); }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "VAR:VAR [ INT ]", 2, (yyvsp[-3].node),getNodeInstance(yylineno, (yyvsp[-1].string), 0)); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "INIT: EXPS", 1, (yyvsp[0].node)); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 123 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "INIT: { ARGS }", 1, (yyvsp[-1].node)); }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 126 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXP: EXPS", 1, (yyvsp[0].node)); }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 127 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "EXP: null", 0);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 132 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 133 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 135 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 136 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 137 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 138 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 143 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 144 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 145 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 149 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 150 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 151 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 152 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 153 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 154 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 155 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 156 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 157 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 158 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[-1].string), 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 159 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXPS: UNARYOP EXPS ", 2, (yyvsp[-1].node),(yyvsp[0].node)); }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 160 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXPS: ( EXPS )", 1, (yyvsp[-1].node)); }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 161 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXPS: ID ( ARGS )", 2, getNodeInstance(yylineno, (yyvsp[-3].string), 0),(yyvsp[-1].node)); }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 162 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXPS: ID ARRS", 2, getNodeInstance(yylineno, (yyvsp[-1].string), 0),(yyvsp[0].node)); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 163 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "EXPS: ID DOT ID", 3, getNodeInstance(yylineno, (yyvsp[-2].string), 0),getNodeInstance(yylineno, (yyvsp[-1].string), 0),getNodeInstance(yylineno, (yyvsp[0].string), 0)); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 164 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 167 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "ARRS: [ EXP ] ARRS", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 168 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, "null", 0);}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 171 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "ARGS: EXP, ARGS", 2, (yyvsp[-2].node),(yyvsp[0].node)); }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 172 "smallc_prj1.y" /* yacc.c:1646  */
    { (yyval.node) = getNodeInstance(yylineno, "args", 1, (yyvsp[0].node)); }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 176 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 177 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 178 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 179 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 180 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 181 "smallc_prj1.y" /* yacc.c:1646  */
    {(yyval.node) = getNodeInstance(yylineno, (yyvsp[0].string), 0);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2086 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 184 "smallc_prj1.y" /* yacc.c:1906  */


#include "header.h"
#include "syntax_tree.h"

void yyerror(char *s)
{
	fflush(stdout);
	fprintf(stderr,"yyerror: %d :%s %s\n",yylineno,s,yytext);
}
int main(int argc, char *argv[])
{
	freopen(argv[1], "r", stdin);
    	freopen(argv[2], "w", stdout);
	if(!yyparse()){
		fprintf(stderr,"Parsing complete.\n");
		printTree(root,0);
	}
	else{
		
		printf("ERROR! parse failed.\n");
	}

	return 0;
}
int yywrap()
{
	return 1;
}
