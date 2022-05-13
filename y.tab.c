/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "miniL.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(const char *msg);
    extern int currLine;
    extern int currPos;
    FILE * yyin;

#line 75 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END = 260,
    END_PARAMS = 261,
    BEGIN_LOCALS = 262,
    END_LOCALS = 263,
    BEGIN_BODY = 264,
    END_BODY = 265,
    INTEGER = 266,
    ARRAY = 267,
    ENUM = 268,
    OF = 269,
    IF = 270,
    THEN = 271,
    ENDIF = 272,
    ELSE = 273,
    FOR = 274,
    WHILE = 275,
    DO = 276,
    BEGINLOOP = 277,
    ENDLOOP = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    RETURN = 283,
    COLON = 284,
    COMMA = 285,
    SEMICOLON = 286,
    CONTINUE = 287,
    IDENT = 288,
    NUMBER = 289,
    L_PAREN = 290,
    R_PAREN = 291,
    L_SQAURE_BRACKET = 292,
    R_SQUARE_BRACKET = 293,
    MULT = 294,
    DIV = 295,
    MOD = 296,
    ADD = 297,
    SUB = 298,
    LT = 299,
    LTE = 300,
    GT = 301,
    GTE = 302,
    EQ = 303,
    NEQ = 304,
    NOT = 305,
    AND = 306,
    OR = 307,
    ASSIGN = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "miniL.y" /* yacc.c:355  */

  int num_val;
  char* id_val;

#line 174 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    37,    38,    41,    42,    45,    48,    49,
      52,    56,    57,    60,    61,    62,    65,    66,    69,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    83,    84,
      87,    88,    91,    94,    97,    98,    99,   100,   101,   102,
     103,   104,   107,   108,   109,   110,   111,   112,   115,   116,
     117,   120,   121,   122,   125,   128,   129,   130,   131,   134,
     137,   138,   139,   140,   141,   142,   143,   146,   147,   150,
     151
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END",
  "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY",
  "INTEGER", "ARRAY", "ENUM", "OF", "IF", "THEN", "ENDIF", "ELSE", "FOR",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "READ", "WRITE", "TRUE", "FALSE",
  "RETURN", "COLON", "COMMA", "SEMICOLON", "CONTINUE", "IDENT", "NUMBER",
  "L_PAREN", "R_PAREN", "L_SQAURE_BRACKET", "R_SQUARE_BRACKET", "MULT",
  "DIV", "MOD", "ADD", "SUB", "LT", "LTE", "GT", "GTE", "EQ", "NEQ", "NOT",
  "AND", "OR", "ASSIGN", "$accept", "ident", "prog_start", "functions",
  "function", "comma", "identifiers", "declarations", "declaration",
  "states", "statements", "statement", "or_expr", "and_expr", "bool_expr",
  "relation_and_expr", "relation_expr", "comp", "expressions", "expr",
  "expression", "mult_expr", "multiplicative_expr", "term", "vars", "var", YY_NULLPTR
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
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -65

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-65)))

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,   -65,   -25,    13,   -65,    14,   -65,   -10,   -65,   -65,
      28,   -25,     4,    11,    44,    21,   -25,   -65,    52,    38,
     -25,   -65,   -65,    23,    26,   -25,   -65,    24,   -25,    59,
      32,    36,    65,    54,   -65,    90,    67,    53,    53,    62,
     -25,   -25,    97,   -65,    48,    66,    61,    41,   -65,   -65,
     -65,   -65,    53,    86,    56,   -30,    79,    45,    47,    98,
      -6,    94,   -65,    82,    90,    71,    71,    97,   -65,    97,
     -65,    90,    97,    72,    80,   -65,    97,   -65,   -65,   -65,
      53,    98,    97,    90,    53,   -65,    53,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,    97,    97,    97,   -65,    97,    97,
      97,   -65,    90,    84,   -25,   -65,   -65,    76,   103,   -65,
     -65,   -65,   -65,   -65,    81,   112,    97,   113,   120,    30,
      45,    47,   -65,    -6,   -65,   -65,   -65,   -65,   128,   132,
      71,   -65,   -65,   -65,   -65,   -65,    97,   -65,    90,   -65,
     -65,   -65,   -65,    53,   -65,   -65,   136,   -65,   -65
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     3,     5,     2,     0,     1,     6,
       0,    11,     8,     0,     0,     0,     0,    10,     0,     0,
      11,     9,    14,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    69,     0,     0,     0,    15,    36,
      38,    62,     0,     0,     0,    69,     0,    28,    30,     0,
      51,    55,    60,     0,     0,    67,    67,     0,    27,     0,
       7,    16,     0,     0,     0,    63,     0,    61,    37,    39,
       0,     0,    48,     0,     0,    32,     0,    33,    44,    46,
      45,    47,    42,    43,     0,     0,     0,    54,     0,     0,
       0,    59,     0,     0,     0,    24,    25,     0,     0,    18,
      17,    19,    40,    64,     0,     0,     0,     0,    49,     0,
      28,    30,    34,    51,    53,    56,    57,    58,     0,     0,
      67,    70,    65,    41,    35,    66,    48,    20,     0,    29,
      31,    52,    22,     0,    68,    50,     0,    23,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,    -2,   -65,   149,   -65,   -65,   -12,     0,   -65,   -65,
     -61,   -65,    35,    37,   -37,    73,    70,    78,    25,    40,
     -23,   -65,   -40,    39,   -64,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    55,     3,     4,     5,    17,    13,    14,    15,   109,
      45,    46,    85,    87,    56,    57,    58,    94,   117,    97,
      59,   101,    60,    61,   105,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    63,   106,   103,    21,    82,    47,    69,     6,    12,
     110,    65,    66,     8,    12,    73,    31,     2,    12,    68,
      26,    10,   119,    12,    77,    29,    12,    -5,     1,    74,
       2,    81,    11,    44,    16,    47,    95,    96,    44,    44,
      18,   128,    47,   115,   107,    25,   108,   137,   138,   111,
      19,    44,    20,   114,    47,   123,   124,    74,    30,   118,
      27,    28,    44,    22,    23,    24,   144,    32,    36,    44,
      33,   122,    34,    47,    35,   130,    70,   146,    48,    49,
      50,    44,    78,    79,    64,    69,     6,    51,    52,     6,
      51,    80,    71,   134,    72,    83,    53,    84,    86,    53,
      44,   104,    44,    54,   102,    37,   147,   129,   112,    47,
      38,    39,   113,   118,    40,    41,   113,   132,    42,     6,
      75,    76,    43,     6,    88,    89,    90,    91,    92,    93,
       6,    51,    67,    98,    99,   100,    44,   125,   126,   127,
      53,   131,    88,    89,    90,    91,    92,    93,   133,   135,
     136,   142,   143,   148,     9,   139,   121,   120,   140,   116,
       0,   145,     0,   141
};

static const yytype_int16 yycheck[] =
{
       2,    38,    66,    64,    16,    35,    35,    37,    33,    11,
      71,    40,    41,     0,    16,    52,    28,     3,    20,    42,
      20,    31,    83,    25,    53,    25,    28,     0,     1,    52,
       3,    54,     4,    35,    30,    64,    42,    43,    40,    41,
      29,   102,    71,    80,    67,     7,    69,    17,    18,    72,
       6,    53,    31,    76,    83,    95,    96,    80,    34,    82,
      37,    35,    64,    11,    12,    13,   130,     8,    14,    71,
      38,    94,    36,   102,     9,   104,    10,   138,    11,    26,
      27,    83,    26,    27,    22,    37,    33,    34,    35,    33,
      34,    35,    31,   116,    53,    16,    43,    52,    51,    43,
     102,    30,   104,    50,    22,    15,   143,    23,    36,   138,
      20,    21,    36,   136,    24,    25,    36,    36,    28,    33,
      34,    35,    32,    33,    44,    45,    46,    47,    48,    49,
      33,    34,    35,    39,    40,    41,   138,    98,    99,   100,
      43,    38,    44,    45,    46,    47,    48,    49,    36,    36,
      30,    23,    20,    17,     5,   120,    86,    84,   121,    81,
      -1,   136,    -1,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    56,    57,    58,    33,    55,     0,    57,
      31,     4,    55,    60,    61,    62,    30,    59,    29,     6,
      31,    60,    11,    12,    13,     7,    61,    37,    35,    61,
      34,    60,     8,    38,    36,     9,    14,    15,    20,    21,
      24,    25,    28,    32,    55,    64,    65,    79,    11,    26,
      27,    34,    35,    43,    50,    55,    68,    69,    70,    74,
      76,    77,    79,    68,    22,    79,    79,    35,    74,    37,
      10,    31,    53,    68,    74,    34,    35,    79,    26,    27,
      35,    74,    35,    16,    52,    66,    51,    67,    44,    45,
      46,    47,    48,    49,    71,    42,    43,    73,    39,    40,
      41,    75,    22,    64,    30,    78,    78,    74,    74,    63,
      64,    74,    36,    36,    74,    68,    71,    72,    74,    64,
      69,    70,    74,    76,    76,    77,    77,    77,    64,    23,
      79,    38,    36,    36,    74,    36,    30,    17,    18,    66,
      67,    73,    23,    20,    78,    72,    64,    68,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    61,    62,    62,    62,    63,    63,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    72,    72,
      72,    73,    73,    73,    74,    75,    75,    75,    75,    76,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     2,    12,     0,     2,
       2,     0,     3,     6,     3,     8,     0,     1,     3,     3,
       5,     7,     5,     6,     3,     3,     1,     2,     0,     3,
       0,     3,     2,     2,     3,     4,     1,     2,     1,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     0,     3,     2,     2,     0,     2,     2,     2,     2,
       1,     2,     1,     2,     3,     4,     4,     0,     3,     1,
       4
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
#line 35 "miniL.y" /* yacc.c:1646  */
    {printf("ident -> IDENT %s\n", yylval.id_val);}
#line 1375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "miniL.y" /* yacc.c:1646  */
    {printf("prog_start -> functions\n");}
#line 1381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 38 "miniL.y" /* yacc.c:1646  */
    {yyerrok; yyclearin;}
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 41 "miniL.y" /* yacc.c:1646  */
    {printf("functions -> epsilon\n");}
#line 1393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "miniL.y" /* yacc.c:1646  */
    {printf("functions -> function functions\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 45 "miniL.y" /* yacc.c:1646  */
    {printf("function -> FUNCTION ident SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "miniL.y" /* yacc.c:1646  */
    {printf("comma -> epsilon\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 49 "miniL.y" /* yacc.c:1646  */
    {printf("idents -> COMMA identifiers\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "miniL.y" /* yacc.c:1646  */
    {printf("identifiers -> ident comma\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "miniL.y" /* yacc.c:1646  */
    {printf("declarations -> epsilon\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 57 "miniL.y" /* yacc.c:1646  */
    {printf ("declarations -> declaration SEMICOLON declarations\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "miniL.y" /* yacc.c:1646  */
    {printf("declaration -> identifiers COLON ENUM L_PAREN identifiers R_PAREN\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "miniL.y" /* yacc.c:1646  */
    {printf ("declaration -> identifiers COLON INTEGER\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 62 "miniL.y" /* yacc.c:1646  */
    {printf("declaration -> identifiers COLON ARRAY L_SQAURE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "miniL.y" /* yacc.c:1646  */
    {printf("states -> epsilon\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "miniL.y" /* yacc.c:1646  */
    {printf ("states -> statements\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "miniL.y" /* yacc.c:1646  */
    {printf("statements -> statement SEMICOLON states\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> var ASSIGN expression\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 73 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> IF bool_expr THEN statements ENDIF\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 74 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> IF bool_expr THEN statements ELSE statements ENDIF\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 75 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> WHILE bool_expr BEGINLOOP statements ENDLOOP\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 76 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_expr\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 77 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> READ var vars\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 78 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> WRITE var vars\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 79 "miniL.y" /* yacc.c:1646  */
    {printf("statement -> CONTINUE\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 80 "miniL.y" /* yacc.c:1646  */
    {printf("statement ->expression\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 83 "miniL.y" /* yacc.c:1646  */
    {printf("or_expr -> epsilon\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 84 "miniL.y" /* yacc.c:1646  */
    {printf("or_expr -> OR relation_and_expr or_expr\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 87 "miniL.y" /* yacc.c:1646  */
    {printf("and_expr -> epsilon\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 88 "miniL.y" /* yacc.c:1646  */
    {printf("and_expr -> OR relation_expr and_expr\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 91 "miniL.y" /* yacc.c:1646  */
    {printf("bool_expr -> relation_and_expr or_expr\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 94 "miniL.y" /* yacc.c:1646  */
    {printf("relation_and_expr -> relation_expr and_expr\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 97 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> expression comp expression\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 98 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT expression comp expression");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 99 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> TRUE\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 100 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT TRUE\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 101 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> FALSE\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 102 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT FALSE\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 103 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 104 "miniL.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 107 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 108 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 109 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 110 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 111 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 112 "miniL.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 115 "miniL.y" /* yacc.c:1646  */
    {printf("expressions -> epsilon\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 116 "miniL.y" /* yacc.c:1646  */
    {printf ("expressions -> expression\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 117 "miniL.y" /* yacc.c:1646  */
    {printf("expressions -> expression COMMA expressions\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 120 "miniL.y" /* yacc.c:1646  */
    {printf("expr -> epsilon\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 121 "miniL.y" /* yacc.c:1646  */
    {printf("expr -> ADD multiplicative_expr expr\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 122 "miniL.y" /* yacc.c:1646  */
    {printf("expr -> SUB multiplicative_expr expr\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 125 "miniL.y" /* yacc.c:1646  */
    {printf("expression -> multiplicative_expr expr\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 128 "miniL.y" /* yacc.c:1646  */
    {printf("mult_expr -> epsilon\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 129 "miniL.y" /* yacc.c:1646  */
    {printf("mult_expr -> MULT term\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 130 "miniL.y" /* yacc.c:1646  */
    {printf("mult_expr -> DIV term\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 131 "miniL.y" /* yacc.c:1646  */
    {printf("mult_expr -> MOD term\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 134 "miniL.y" /* yacc.c:1646  */
    {printf("multiplicative_expr -> term mult_expr\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 137 "miniL.y" /* yacc.c:1646  */
    {printf("term -> var\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 138 "miniL.y" /* yacc.c:1646  */
    {printf("term -> SUB var\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 139 "miniL.y" /* yacc.c:1646  */
    {printf("term -> NUMBER\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 140 "miniL.y" /* yacc.c:1646  */
    {printf("term -> SUB NUMBER\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 141 "miniL.y" /* yacc.c:1646  */
    {printf("term -> L_PAREN expression R_PAREN\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "miniL.y" /* yacc.c:1646  */
    {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "miniL.y" /* yacc.c:1646  */
    {printf("term -> L_PAREN expressions R_PAREN\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 146 "miniL.y" /* yacc.c:1646  */
    {printf("vars -> epsilon\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "miniL.y" /* yacc.c:1646  */
    {printf("vars -> COMMA var vars\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "miniL.y" /* yacc.c:1646  */
    {printf("var -> ident\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 151 "miniL.y" /* yacc.c:1646  */
    {printf("var -> ident L_SQAURE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1787 "y.tab.c" /* yacc.c:1646  */
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
#line 154 "miniL.y" /* yacc.c:1906  */

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[1]);
      }
   }
   yyparse();
   return 0;
}

void yyerror(const char *msg) {
    printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
