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

/* Substitute the type names.  */
#define YYSTYPE         NIMPCB_YYSTYPE
/* Substitute the variable and function names.  */
#define yyparse         nimpcb_yyparse
#define yylex           nimpcb_yylex
#define yyerror         nimpcb_yyerror
#define yydebug         nimpcb_yydebug
#define yynerrs         nimpcb_yynerrs

#define yylval          nimpcb_yylval
#define yychar          nimpcb_yychar

/* Copy the first part of user declarations.  */
#line 3 "pcb/parser.y" /* yacc.c:339  */


#include <stdint.h>
#include <stdio.h>

#include "lexer_gen.h"
#include "parser.h"


#line 85 "pcb/parser_gen.c" /* yacc.c:339  */

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
   by #include "parser_gen.h".  */
#ifndef YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED
# define YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED
/* Debug traces.  */
#ifndef NIMPCB_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define NIMPCB_YYDEBUG 1
#  else
#   define NIMPCB_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define NIMPCB_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined NIMPCB_YYDEBUG */
#if NIMPCB_YYDEBUG
extern int nimpcb_yydebug;
#endif

/* Token type.  */
#ifndef NIMPCB_YYTOKENTYPE
# define NIMPCB_YYTOKENTYPE
  enum nimpcb_yytokentype
  {
    WORD_ATTRIBUTE = 258,
    WORD_CONNECT = 259,
    WORD_DRC = 260,
    WORD_ELEMENT = 261,
    WORD_ELEMENTARC = 262,
    WORD_ELEMENTLINE = 263,
    WORD_FILEVERSION = 264,
    WORD_FLAGS = 265,
    WORD_GRID = 266,
    WORD_GROUPS = 267,
    WORD_LAYER = 268,
    WORD_MIL = 269,
    WORD_MM = 270,
    WORD_NET = 271,
    WORD_NETLIST = 272,
    WORD_PAD = 273,
    WORD_PCB = 274,
    WORD_PIN = 275,
    WORD_POLYAREA = 276,
    WORD_RAT = 277,
    WORD_STYLES = 278,
    WORD_SYMBOL = 279,
    WORD_SYMBOLLINE = 280,
    WORD_THERMAL = 281,
    STRING = 282,
    CHAR = 283,
    INTEGER = 284,
    FLOAT = 285
  };
#endif

/* Value type.  */
#if ! defined NIMPCB_YYSTYPE && ! defined NIMPCB_YYSTYPE_IS_DECLARED

union NIMPCB_YYSTYPE
{
#line 13 "pcb/parser.y" /* yacc.c:355  */

    char *sval;
    char cval;
    int64_t ival;
    double fval;
    uint32_t u32val;

#line 172 "pcb/parser_gen.c" /* yacc.c:355  */
};

typedef union NIMPCB_YYSTYPE NIMPCB_YYSTYPE;
# define NIMPCB_YYSTYPE_IS_TRIVIAL 1
# define NIMPCB_YYSTYPE_IS_DECLARED 1
#endif


extern NIMPCB_YYSTYPE nimpcb_yylval;

int nimpcb_yyparse (void);

#endif /* !YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "pcb/parser_gen.c" /* yacc.c:358  */

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
         || (defined NIMPCB_YYSTYPE_IS_TRIVIAL && NIMPCB_YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  327

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

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
      31,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if NIMPCB_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      85,    86,    90,    91,    96,    97,    99,   100,   104,   105,
     109,   110,   114,   118,   119,   123,   124,   128,   132,   133,
     137,   138,   142,   146,   151,   156,   158,   160,   166,   165,
     188,   190,   195,   197,   202,   204,   206,   208,   213,   215,
     217,   219,   221,   226,   231,   236,   238,   240,   245,   251,
     250,   255,   254,   262,   261,   269,   268,   275,   277,   279,
     284,   289,   291,   296,   298,   304,   303,   308,   307,   314,
     315,   319,   320,   324,   326,   331,   336,   338,   340,   342,
     344,   346,   351,   353,   358,   360,   365,   367,   372,   374
};
#endif

#if NIMPCB_YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WORD_ATTRIBUTE", "WORD_CONNECT",
  "WORD_DRC", "WORD_ELEMENT", "WORD_ELEMENTARC", "WORD_ELEMENTLINE",
  "WORD_FILEVERSION", "WORD_FLAGS", "WORD_GRID", "WORD_GROUPS",
  "WORD_LAYER", "WORD_MIL", "WORD_MM", "WORD_NET", "WORD_NETLIST",
  "WORD_PAD", "WORD_PCB", "WORD_PIN", "WORD_POLYAREA", "WORD_RAT",
  "WORD_STYLES", "WORD_SYMBOL", "WORD_SYMBOLLINE", "WORD_THERMAL",
  "STRING", "CHAR", "INTEGER", "FLOAT", "'('", "')'", "'['", "']'",
  "$accept", "pcb", "items", "item", "e_items_opt", "e_items", "e_item",
  "l_items_opt", "l_items", "l_item", "n_items_opt", "n_items", "n_item",
  "nl_items_opt", "nl_items", "nl_item", "attribute_item", "connect_item",
  "drc_item", "element_item", "$@1", "elem_elementarc_item",
  "elem_elementline_item", "elem_pad_item", "elem_pin_item",
  "fileversion_item", "flags_item", "grid_item", "groups_item",
  "layer_item", "$@2", "$@3", "net_item", "$@4", "netlist_item", "$@5",
  "pcb_item", "polyarea_item", "rat_item", "styles_item", "symbol_item",
  "$@6", "$@7", "symbolline_items_opt", "symbolline_items",
  "symbolline_item", "thermal_item", "dimension_new", "dimension_old",
  "float", "pcb_flags", "object_flags", YY_NULLPTR
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
     285,    40,    41,    91,    93
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,   -30,    18,    24,    40,   -19,    30,    -6,    45,    46,
      34,    59,    35,    38,    39,    67,   104,   242,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,    78,    -9,    13,    77,    33,     1,
       1,    80,    79,    82,    83,    85,     1,     5,    -9,    86,
      89,    87,    90,     1,  -153,  -153,    92,    81,    88,    -9,
    -153,  -153,    94,    75,  -153,  -153,    91,  -153,  -153,     5,
      -9,    93,    95,    96,     9,    -9,    97,  -153,  -153,     5,
      -9,   100,    99,     5,    -9,   102,   106,  -153,  -153,  -153,
    -153,    -9,   101,  -153,  -153,     5,    -9,  -153,    -8,  -153,
    -153,     5,    -9,  -153,   110,   111,  -153,  -153,   114,   108,
    -153,  -153,   -27,   116,    -3,   121,   119,    98,   138,   123,
     122,     5,    -9,   126,   127,  -153,   -21,    -9,   132,  -153,
     125,   136,  -153,   137,   139,   138,  -153,  -153,  -153,  -153,
       5,    -9,  -153,  -153,  -153,    -9,    -9,  -153,  -153,  -153,
     156,   143,  -153,  -153,   144,   145,   147,   147,   141,    -9,
     156,  -153,   146,   156,  -153,   149,    13,    13,    49,   148,
     147,  -153,   150,  -153,    -9,   151,  -153,  -153,   152,   161,
     160,     5,    -9,  -153,  -153,  -153,   190,  -153,   189,  -153,
    -153,     5,    -9,   196,  -153,     5,    -9,    13,   113,     5,
      -9,   194,   198,   199,   113,  -153,  -153,     5,    -9,   203,
     154,  -153,  -153,   208,   201,  -153,   209,  -153,  -153,    -2,
    -153,    50,    53,    54,    57,   210,    -2,  -153,  -153,  -153,
    -153,  -153,     5,    -9,     5,    -9,     5,    -9,     5,    -9,
    -153,  -153,     5,    -9,     5,    -9,     5,    -9,     5,    -9,
       5,    -9,     5,    -9,     5,    -9,     5,    -9,     5,    -9,
       5,    -9,     5,    -9,    17,    -9,   217,   220,     5,    -9,
       5,    -9,    13,    23,    -9,   221,   227,   225,   224,    29,
      -9,   228,    62,     5,    -9,     5,    -9,  -153,  -153,    72,
       5,    -9,  -153,    13,   230,   240,   243,   237,   238,    13,
     239,   246,   247,   244,  -153,   248,   250,  -153,  -153,   249,
    -153,   251,   252,  -153,    13,    13,  -153,    13,    13,   253,
     254,   255,   256,  -153,  -153,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     3,     0,    96,    97,     0,
     108,   109,     0,     0,   106,   107,     0,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   100,    99,
     101,     0,     0,    63,    64,     0,     0,    68,     0,    75,
      79,     0,     0,    80,     0,     0,    84,    83,     0,     0,
      95,    43,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,    67,
       0,     0,    71,     0,     0,    38,    41,    42,    78,    77,
       0,     0,    87,    85,    46,     0,     0,    66,    65,    69,
      29,     0,    76,    40,     0,     0,    90,    90,     0,     0,
      29,    32,     0,    28,    31,     0,     0,     0,     0,     0,
      89,    92,     0,    45,     0,     0,    72,    30,     0,     0,
       0,     0,     0,    88,    91,    86,     0,    70,     0,    82,
      81,     0,     0,     0,    73,     0,     0,     0,    34,     0,
       0,     0,     0,     0,    33,    36,    37,     0,     0,     0,
       0,    74,    35,     0,     0,    48,     0,    94,    93,    21,
      44,     0,     0,     0,     0,     0,    20,    23,    24,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,    52,     0,
       0,     0,    62,   108,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,    61,     0,     0,    51,    50,     0,
      57,     0,     0,    60,     0,     0,    56,     0,     0,     0,
       0,     0,     0,    59,    58,    55,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,   107,  -153,  -153,   -49,    19,  -153,   117,
    -153,  -153,    26,  -153,  -153,   157,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,   129,  -153,   112,  -153,   -48,   -46,   -36,
    -153,  -152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,   225,   226,   227,   162,   163,   164,
     203,   204,   205,   134,   135,   136,    19,   206,    20,    21,
     219,   228,   229,   230,   231,    22,    23,    24,    25,    26,
     160,   150,   137,   198,    27,   118,    28,    29,    30,    31,
      32,   157,   156,   169,   170,   171,    33,    59,    79,    69,
      66,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      80,    34,    57,    58,    70,   221,   222,   125,    57,    58,
      76,    91,    38,   144,   179,   180,   223,    85,   224,   116,
      57,    58,    96,    95,   117,    41,   128,   102,   101,   129,
      67,    68,   105,   104,    77,    78,   109,   108,    77,    78,
      60,   100,    61,   112,   272,   201,    77,    78,   115,   114,
     282,    35,    77,    78,   120,   119,   289,    36,    77,    78,
      64,    39,    65,    40,   126,    44,    47,    45,    48,    49,
      51,    50,    52,    37,   141,   140,    42,    43,   145,   146,
     181,   232,   182,   233,   234,   236,   235,   237,   238,   293,
     239,    61,    46,   155,   154,    87,    88,   158,   159,   299,
      53,    61,    89,    90,    54,    56,    63,    71,    72,    93,
      74,   174,    75,    81,    73,    83,    82,   202,    84,    86,
     281,    92,    98,    94,    55,    97,   186,    99,   113,   132,
     294,   103,   106,   107,   192,   191,   110,   300,   111,   121,
     122,   303,   124,   127,   196,   195,   123,   309,   200,   199,
     130,   131,   208,   207,   133,   138,   139,   142,   143,   148,
     214,   213,   319,   320,   147,   321,   322,   149,   151,   161,
     165,   152,   168,   166,   167,   173,   178,   241,   176,   175,
     183,   216,   185,   187,   188,   243,   242,   245,   244,   247,
     246,   249,   248,   189,   190,   251,   250,   253,   252,   255,
     254,   257,   256,   259,   258,   261,   260,   263,   262,   265,
     264,   267,   266,   269,   268,   271,   270,   274,   273,   193,
     194,   278,   277,   280,   279,   197,   284,   283,   209,   210,
     212,   211,   291,   290,   215,   218,   296,   295,   298,   297,
     217,   220,   240,   302,   301,     1,   275,     2,     3,   276,
     285,     4,     5,     6,     7,     8,   286,   287,   288,     9,
     292,    10,   304,    11,    12,    13,    14,   305,    15,   307,
     306,   310,   308,   311,   312,   314,   313,   315,   317,   318,
     177,   316,   184,     0,     0,   323,   172,   325,   324,     0,
     326,     0,   153
};

static const yytype_int16 yycheck[] =
{
      48,    31,    29,    30,    40,     7,     8,    34,    29,    30,
      46,    59,    31,    34,   166,   167,    18,    53,    20,    27,
      29,    30,    70,    69,    32,    31,    29,    75,    74,    32,
      29,    30,    80,    79,    29,    30,    84,    83,    29,    30,
      27,    32,    29,    91,    27,   197,    29,    30,    96,    95,
      27,    33,    29,    30,   102,   101,    27,    33,    29,    30,
      27,    31,    29,    33,   112,    31,    31,    33,    33,    31,
      31,    33,    33,    33,   122,   121,    31,    31,   126,   127,
      31,    31,    33,    33,    31,    31,    33,    33,    31,    27,
      33,    29,    33,   141,   140,    14,    15,   145,   146,    27,
      33,    29,    14,    15,     0,    27,    29,    27,    29,    34,
      27,   159,    27,    27,    32,    28,    27,     4,    28,    27,
     272,    27,    27,    32,    17,    32,   174,    31,    27,    31,
     282,    34,    32,    34,   182,   181,    34,   289,    32,    29,
      29,   293,    34,    27,   192,   191,    32,   299,   196,   195,
      29,    32,   200,   199,    16,    32,    34,    31,    31,    34,
     208,   207,   314,   315,    32,   317,   318,    31,    31,    13,
      27,    32,    25,    29,    29,    34,    27,   226,    32,   160,
      32,    27,    32,    32,    32,   233,   232,   235,   234,   237,
     236,   239,   238,    32,    34,   243,   242,   245,   244,   247,
     246,   249,   248,   251,   250,   253,   252,   255,   254,   257,
     256,   259,   258,   261,   260,   263,   262,   265,   264,    29,
      31,   269,   268,   271,   270,    29,   274,   273,    34,    31,
     204,    32,   280,   279,    31,    34,   284,   283,   286,   285,
      32,    32,    32,   291,   290,     3,    29,     5,     6,    29,
      29,     9,    10,    11,    12,    13,    29,    32,    34,    17,
      32,    19,    32,    21,    22,    23,    24,    27,    26,    32,
      27,    32,    34,    27,    27,    27,    32,    27,    27,    27,
     163,    32,   170,    -1,    -1,    32,   157,    32,    34,    -1,
      34,    -1,   135
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     9,    10,    11,    12,    13,    17,
      19,    21,    22,    23,    24,    26,    36,    37,    38,    51,
      53,    54,    60,    61,    62,    63,    64,    69,    71,    72,
      73,    74,    75,    81,    31,    33,    33,    33,    31,    31,
      33,    31,    31,    31,    31,    33,    33,    31,    33,    31,
      33,    31,    33,    33,     0,    38,    27,    29,    30,    82,
      27,    29,    86,    29,    27,    29,    85,    29,    30,    84,
      84,    27,    29,    32,    27,    27,    84,    29,    30,    83,
      82,    27,    27,    28,    28,    84,    27,    14,    15,    14,
      15,    82,    27,    34,    32,    83,    82,    32,    27,    31,
      32,    83,    82,    34,    83,    82,    32,    34,    83,    82,
      34,    32,    82,    27,    83,    82,    27,    32,    70,    83,
      82,    29,    29,    32,    34,    34,    82,    27,    29,    32,
      29,    32,    31,    16,    48,    49,    50,    67,    32,    34,
      83,    82,    31,    31,    34,    82,    82,    32,    34,    31,
      66,    31,    32,    50,    83,    82,    77,    76,    82,    82,
      65,    13,    42,    43,    44,    27,    29,    29,    25,    78,
      79,    80,    78,    34,    82,    42,    32,    44,    27,    86,
      86,    31,    33,    32,    80,    32,    82,    32,    32,    32,
      34,    83,    82,    29,    31,    83,    82,    29,    68,    83,
      82,    86,     4,    45,    46,    47,    52,    83,    82,    34,
      31,    32,    47,    83,    82,    31,    27,    32,    34,    55,
      32,     7,     8,    18,    20,    39,    40,    41,    56,    57,
      58,    59,    31,    33,    31,    33,    31,    33,    31,    33,
      32,    41,    83,    82,    83,    82,    83,    82,    83,    82,
      83,    82,    83,    82,    83,    82,    83,    82,    83,    82,
      83,    82,    83,    82,    83,    82,    83,    82,    83,    82,
      83,    82,    27,    83,    82,    29,    29,    83,    82,    83,
      82,    86,    27,    83,    82,    29,    29,    32,    34,    27,
      83,    82,    32,    27,    86,    83,    82,    83,    82,    27,
      86,    83,    82,    86,    32,    27,    27,    32,    34,    86,
      32,    27,    27,    32,    27,    27,    32,    27,    27,    86,
      86,    86,    86,    32,    34,    32,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      39,    39,    40,    40,    41,    41,    41,    41,    42,    42,
      43,    43,    44,    45,    45,    46,    46,    47,    48,    48,
      49,    49,    50,    51,    52,    53,    53,    53,    55,    54,
      56,    56,    57,    57,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    60,    61,    62,    62,    62,    63,    65,
      64,    66,    64,    68,    67,    70,    69,    71,    71,    71,
      72,    73,    73,    74,    74,    76,    75,    77,    75,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     0,     2,     1,     1,     1,     0,
       2,     1,     1,     5,     4,     9,     7,     6,     0,    18,
      10,    10,     8,     8,    13,    13,    11,    10,    12,    12,
      10,     9,     8,     4,     4,     7,     7,     6,     4,     0,
      10,     0,     9,     0,     9,     0,     7,     6,     6,     4,
       4,    10,    10,     4,     4,     0,     9,     0,     9,     1,
       0,     2,     1,     8,     8,     4,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1
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
#if NIMPCB_YYDEBUG

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
#else /* !NIMPCB_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !NIMPCB_YYDEBUG */


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
        case 43:
#line 147 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_attribute((yyvsp[-2].sval), (yyvsp[-1].sval)); }
#line 1470 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 44:
#line 152 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_connect((yyvsp[-1].sval)); }
#line 1476 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 45:
#line 157 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1482 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 46:
#line 159 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival), 0, 0); }
#line 1488 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival), 0, 0, 0); }
#line 1494 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 48:
#line 166 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_element_start((yyvsp[-12].u32val), (yyvsp[-11].sval), (yyvsp[-10].sval), (yyvsp[-9].sval), 1, (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].u32val)); }
#line 1500 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_element_end(); }
#line 1506 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 50:
#line 189 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementarc(0, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1512 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 51:
#line 191 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementarc(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1518 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 52:
#line 196 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementline(0, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1524 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 53:
#line 198 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementline(1, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1530 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 54:
#line 203 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(0, (yyvsp[-10].ival), (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1536 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(0, (yyvsp[-10].ival), (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1542 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 56:
#line 207 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(1, (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), 0, 0, (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1548 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 57:
#line 209 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), 0, 0, (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1554 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(0, (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1560 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 59:
#line 216 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(0, (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1566 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 60:
#line 218 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), 0, 0, (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1572 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 61:
#line 220 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), 0, 0, (yyvsp[-3].ival), (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1578 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 62:
#line 222 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), 0, 0, 0, (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1584 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 63:
#line 227 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_fileversion((yyvsp[-1].ival)); }
#line 1590 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 64:
#line 232 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_flags((yyvsp[-1].u32val)); }
#line 1596 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 65:
#line 237 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-4].fval), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1602 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 66:
#line 239 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-4].fval), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1608 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-3].fval), (yyvsp[-2].ival), (yyvsp[-1].ival), 0); }
#line 1614 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 68:
#line 246 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_groups((yyvsp[-1].sval)); }
#line 1620 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 69:
#line 251 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_start((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval)); }
#line 1626 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 70:
#line 253 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_end(); }
#line 1632 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 71:
#line 255 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_start((yyvsp[-3].ival), (yyvsp[-2].sval), ""); }
#line 1638 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 72:
#line 257 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_end(); }
#line 1644 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 73:
#line 262 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_net_start((yyvsp[-3].sval), (yyvsp[-2].sval)); }
#line 1650 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 74:
#line 264 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_net_end(); }
#line 1656 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 75:
#line 269 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_netlist_start(); }
#line 1662 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 76:
#line 271 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_netlist_end(); }
#line 1668 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 77:
#line 276 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb((yyvsp[-3].sval), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1674 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 78:
#line 278 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb((yyvsp[-3].sval), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1680 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 79:
#line 280 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb_default_size((yyvsp[-1].sval)); }
#line 1686 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 80:
#line 285 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_polyarea((yyvsp[-1].fval)); }
#line 1692 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 81:
#line 290 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_rat((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1698 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 82:
#line 292 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_rat((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1704 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 83:
#line 297 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_styles((yyvsp[-1].sval)); }
#line 1710 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 84:
#line 299 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_styles((yyvsp[-1].sval)); }
#line 1716 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 85:
#line 304 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_start((yyvsp[-3].cval), (yyvsp[-2].ival)); }
#line 1722 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 86:
#line 306 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_end(); }
#line 1728 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 87:
#line 308 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_start((yyvsp[-3].cval), (yyvsp[-2].ival)); }
#line 1734 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 88:
#line 310 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_end(); }
#line 1740 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 93:
#line 325 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbolline((yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1746 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 94:
#line 327 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbolline((yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1752 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 95:
#line 332 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_thermal((yyvsp[-1].fval)); }
#line 1758 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 96:
#line 337 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].ival); }
#line 1764 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 97:
#line 339 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].fval); }
#line 1770 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 98:
#line 341 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].ival) * 100); }
#line 1776 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 99:
#line 343 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].fval) * 100.0); }
#line 1782 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 100:
#line 345 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) (((double) (yyvsp[-1].ival)) * 3937.01); }
#line 1788 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 101:
#line 347 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].fval) * 3937.01); }
#line 1794 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 102:
#line 352 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[0].ival) * 100); }
#line 1800 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 103:
#line 354 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[0].fval) * 100.0); }
#line 1806 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 104:
#line 359 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.fval) = (double) (yyvsp[0].ival); }
#line 1812 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 105:
#line 361 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.fval) = (yyvsp[0].fval); }
#line 1818 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 106:
#line 366 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = nimpcb_parse_pcb_flags_string((yyvsp[0].sval)); }
#line 1824 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 107:
#line 368 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = (uint32_t) (yyvsp[0].ival); }
#line 1830 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 108:
#line 373 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = nimpcb_parse_object_flags_string((yyvsp[0].sval)); }
#line 1836 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 109:
#line 375 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = (uint32_t) (yyvsp[0].ival); }
#line 1842 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;


#line 1846 "pcb/parser_gen.c" /* yacc.c:1646  */
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
#line 378 "pcb/parser.y" /* yacc.c:1906  */


void nimpcb_parse_stdin() {
    nimpcb_yyin = stdin;
    while (!feof(nimpcb_yyin)) {
        nimpcb_yyparse();
    }
    nimpcb_yyin = NULL;
}

void nimpcb_parse_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        nimpcb_yyin = file;
        while (!feof(nimpcb_yyin)) {
            nimpcb_yyparse();
        }
        nimpcb_yyin = NULL;
        fclose(file);
    }
}
