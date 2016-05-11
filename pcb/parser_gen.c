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
    WORD_LINE = 269,
    WORD_MIL = 270,
    WORD_MM = 271,
    WORD_NET = 272,
    WORD_NETLIST = 273,
    WORD_PAD = 274,
    WORD_PCB = 275,
    WORD_PIN = 276,
    WORD_POLYAREA = 277,
    WORD_RAT = 278,
    WORD_STYLES = 279,
    WORD_SYMBOL = 280,
    WORD_SYMBOLLINE = 281,
    WORD_THERMAL = 282,
    STRING = 283,
    CHAR = 284,
    INTEGER = 285,
    FLOAT = 286
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

#line 173 "pcb/parser_gen.c" /* yacc.c:355  */
};

typedef union NIMPCB_YYSTYPE NIMPCB_YYSTYPE;
# define NIMPCB_YYSTYPE_IS_TRIVIAL 1
# define NIMPCB_YYSTYPE_IS_DECLARED 1
#endif


extern NIMPCB_YYSTYPE nimpcb_yylval;

int nimpcb_yyparse (void);

#endif /* !YY_NIMPCB_YY_PCB_PARSER_GEN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 190 "pcb/parser_gen.c" /* yacc.c:358  */

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
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

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
      32,    33,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if NIMPCB_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    63,    64,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      86,    87,    91,    92,    97,    98,   100,   101,   105,   106,
     110,   111,   115,   119,   120,   124,   125,   129,   133,   134,
     138,   139,   143,   147,   152,   157,   159,   161,   167,   166,
     189,   191,   196,   198,   203,   205,   207,   209,   214,   216,
     218,   220,   222,   227,   232,   237,   239,   241,   246,   252,
     251,   256,   255,   262,   264,   266,   272,   271,   279,   278,
     285,   287,   289,   294,   299,   301,   306,   308,   314,   313,
     318,   317,   324,   325,   329,   330,   334,   336,   341,   346,
     348,   350,   352,   354,   356,   361,   363,   368,   370,   375,
     377,   382,   384
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
  "WORD_LAYER", "WORD_LINE", "WORD_MIL", "WORD_MM", "WORD_NET",
  "WORD_NETLIST", "WORD_PAD", "WORD_PCB", "WORD_PIN", "WORD_POLYAREA",
  "WORD_RAT", "WORD_STYLES", "WORD_SYMBOL", "WORD_SYMBOLLINE",
  "WORD_THERMAL", "STRING", "CHAR", "INTEGER", "FLOAT", "'('", "')'",
  "'['", "']'", "$accept", "pcb", "items", "item", "e_items_opt",
  "e_items", "e_item", "l_items_opt", "l_items", "l_item", "n_items_opt",
  "n_items", "n_item", "nl_items_opt", "nl_items", "nl_item",
  "attribute_item", "connect_item", "drc_item", "element_item", "$@1",
  "elem_elementarc_item", "elem_elementline_item", "elem_pad_item",
  "elem_pin_item", "fileversion_item", "flags_item", "grid_item",
  "groups_item", "layer_item", "$@2", "$@3", "line_item", "net_item",
  "$@4", "netlist_item", "$@5", "pcb_item", "polyarea_item", "rat_item",
  "styles_item", "symbol_item", "$@6", "$@7", "symbolline_items_opt",
  "symbolline_items", "symbolline_item", "thermal_item", "dimension_new",
  "dimension_old", "float", "pcb_flags", "object_flags", YY_NULLPTR
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
     285,   286,    40,    41,    91,    93
};
# endif

#define YYPACT_NINF -49

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-49)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      96,   -28,    -4,     5,    17,    25,    -3,    41,    60,    68,
      29,    69,    33,    34,    37,    70,   117,    96,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,    94,    -5,    32,    95,    42,     4,
       4,    98,    99,    91,   100,   104,     4,    16,    -5,   105,
     106,   107,   110,     4,   -49,   -49,   114,    61,    80,    -5,
     -49,   -49,   115,   111,   -49,   -49,   102,   -49,   -49,    16,
      -5,   118,   119,   116,   -13,    -5,   122,   -49,   -49,    16,
      -5,   121,   125,    16,    -5,   128,   133,   -49,   -49,   -49,
     -49,    -5,   139,   -49,   -49,    16,    -5,   -49,   -14,   -49,
     -49,    16,    -5,   -49,   138,   140,   -49,   -49,   136,   141,
     -49,   -49,   -25,   145,    -9,   148,   146,   149,   163,   150,
     147,    16,    -5,   152,   153,   -49,   -23,    -5,   154,   -49,
     151,   156,   -49,   157,   158,   163,   -49,   -49,   -49,   -49,
      16,    -5,   -49,   -49,   -49,    -5,    -5,   -49,   -49,   -49,
     176,   164,   -49,   -49,   165,   166,   167,   167,   162,    -5,
     176,    48,   168,   176,   -49,   -49,   170,    32,    32,    49,
     169,   167,   -49,   171,   -49,    -5,   173,    16,    -5,   -49,
     -49,   182,   183,   206,    16,    -5,   -49,   -49,   -49,   212,
     -49,    16,    -5,   215,   -49,   -49,    16,    -5,   220,    16,
      -5,   -49,    16,    -5,    32,    16,    -5,   195,    16,    -5,
     216,    16,    -5,   221,   219,   195,   -49,   -49,    16,    -5,
     224,    10,    -5,   172,   -49,   -49,   229,   222,   -49,   230,
      32,   231,    32,   235,   -49,   -49,    -6,   236,   -49,   237,
     -49,    52,    53,    56,    57,   238,    -6,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,    16,    -5,    16,    -5,    16,    -5,
      16,    -5,   -49,   -49,    16,    -5,    16,    -5,    16,    -5,
      16,    -5,    16,    -5,    16,    -5,    16,    -5,    16,    -5,
      16,    -5,    16,    -5,    16,    -5,    14,    -5,   240,   243,
      16,    -5,    16,    -5,    32,    22,    -5,   244,   245,   246,
     241,    28,    -5,   247,    82,    16,    -5,    16,    -5,   -49,
     -49,    85,    16,    -5,   -49,    32,   248,   250,   254,   252,
     251,    32,   256,   255,   259,   257,   -49,   263,   264,   -49,
     -49,   260,   -49,   267,   268,   -49,    32,    32,   -49,    32,
      32,   265,   262,   266,   269,   -49,   -49,   -49,   -49
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
       0,     0,     0,     0,     1,     3,     0,    99,   100,     0,
     111,   112,     0,     0,   109,   110,     0,   107,   108,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   106,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   103,   102,
     104,     0,     0,    63,    64,     0,     0,    68,     0,    78,
      82,     0,     0,    83,     0,     0,    87,    86,     0,     0,
      98,    43,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,    67,
       0,     0,    71,     0,     0,    38,    41,    42,    81,    80,
       0,     0,    90,    88,    46,     0,     0,    66,    65,    69,
      29,     0,    79,    40,     0,     0,    93,    93,     0,     0,
      29,     0,     0,    28,    31,    32,     0,     0,     0,     0,
       0,    92,    95,     0,    45,     0,     0,     0,     0,    72,
      30,     0,     0,     0,     0,     0,    91,    94,    89,     0,
      70,     0,     0,     0,    85,    84,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,    33,    36,    37,     0,     0,
       0,     0,     0,     0,    77,    35,     0,     0,    48,   105,
       0,     0,     0,     0,    97,    96,    21,     0,    75,     0,
      44,     0,     0,     0,     0,     0,    20,    23,    24,    25,
      26,    27,    74,    73,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      52,     0,     0,     0,    62,   111,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,    61,     0,     0,    51,
      50,     0,    57,     0,     0,    60,     0,     0,    56,     0,
       0,     0,     0,     0,     0,    59,    58,    55,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,   -49,   283,   -49,   -49,    55,   142,   -49,   143,
     -49,   -49,    88,   -49,   -49,   179,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   159,   -49,   134,   -49,   -48,   -46,
     -37,   -49,   -27
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,   245,   246,   247,   162,   163,   164,
     214,   215,   216,   134,   135,   136,    19,   217,    20,    21,
     236,   248,   249,   250,   251,    22,    23,    24,    25,    26,
     160,   150,   165,   137,   207,    27,   118,    28,    29,    30,
      31,    32,   157,   156,   170,   171,   172,    33,    59,    79,
      69,    66,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   241,   242,    70,    34,    57,    58,    57,    58,    76,
     125,    91,   144,   243,   116,   244,    85,    77,    78,   117,
     100,   128,    96,    95,   129,    57,    58,   102,   101,    39,
      35,    40,   105,   104,    67,    68,   109,   108,    60,    36,
     229,    78,   294,   112,    77,    78,    77,    78,   115,   114,
     304,    37,    77,    78,   120,   119,   311,    38,    77,    78,
      60,    44,    61,    45,   126,    47,    49,    48,    50,    51,
      64,    52,    65,    41,   141,   140,    87,    88,   145,   146,
     177,   184,   178,   185,   254,   256,   255,   257,   258,   260,
     259,   261,    42,   155,   154,    89,    90,   158,   159,     1,
      43,     2,     3,    46,    53,     4,     5,     6,     7,     8,
     315,   175,    61,   321,     9,    61,    10,    54,    11,    12,
      13,    14,    56,    15,    73,    63,    71,   189,    74,    72,
     192,   191,    75,    81,    82,    94,    83,   197,   196,    84,
     182,   183,    86,    92,   200,   199,    93,    98,    99,   203,
     202,    97,   206,   205,   106,   209,   208,   103,   212,   211,
     107,   219,   218,   110,   222,   221,   111,   113,   121,   123,
     122,   227,   226,   127,   232,   230,   124,   210,   130,   131,
     133,   132,   139,   138,   142,   143,   148,   147,   149,   151,
     161,   152,   166,   169,   231,   167,   168,   174,   181,   213,
     233,   179,   186,   237,   188,   239,   190,   265,   264,   267,
     266,   269,   268,   271,   270,   193,   194,   273,   272,   275,
     274,   277,   276,   279,   278,   281,   280,   283,   282,   285,
     284,   287,   286,   289,   288,   291,   290,   293,   292,   296,
     295,   195,   198,   300,   299,   302,   301,   201,   306,   305,
     204,   220,   224,   223,   313,   312,   228,   235,   318,   317,
     320,   319,   234,  -112,   238,   324,   323,   303,   240,   252,
     297,   262,   253,   298,   307,   308,   310,   316,   327,   309,
     314,   326,   328,   333,   322,   329,   330,   334,   325,   332,
     335,   336,   337,   338,   331,   339,   340,   346,   345,   347,
      55,   263,   176,   225,   348,   187,   180,     0,     0,   341,
     342,     0,   343,   344,   153,     0,   173
};

static const yytype_int16 yycheck[] =
{
      48,     7,     8,    40,    32,    30,    31,    30,    31,    46,
      35,    59,    35,    19,    28,    21,    53,    30,    31,    33,
      33,    30,    70,    69,    33,    30,    31,    75,    74,    32,
      34,    34,    80,    79,    30,    31,    84,    83,    28,    34,
      30,    31,    28,    91,    30,    31,    30,    31,    96,    95,
      28,    34,    30,    31,   102,   101,    28,    32,    30,    31,
      28,    32,    30,    34,   112,    32,    32,    34,    34,    32,
      28,    34,    30,    32,   122,   121,    15,    16,   126,   127,
      32,    32,    34,    34,    32,    32,    34,    34,    32,    32,
      34,    34,    32,   141,   140,    15,    16,   145,   146,     3,
      32,     5,     6,    34,    34,     9,    10,    11,    12,    13,
      28,   159,    30,    28,    18,    30,    20,     0,    22,    23,
      24,    25,    28,    27,    33,    30,    28,   175,    28,    30,
     178,   177,    28,    28,    28,    33,    29,   185,   184,    29,
     167,   168,    28,    28,   192,   191,    35,    28,    32,   197,
     196,    33,   200,   199,    33,   203,   202,    35,   206,   205,
      35,   209,   208,    35,   212,   211,    33,    28,    30,    33,
      30,   219,   218,    28,   222,   221,    35,   204,    30,    33,
      17,    32,    35,    33,    32,    32,    35,    33,    32,    32,
      14,    33,    28,    26,   221,    30,    30,    35,    28,     4,
      28,    33,    33,   230,    33,   232,    33,   255,   254,   257,
     256,   259,   258,   261,   260,    33,    33,   265,   264,   267,
     266,   269,   268,   271,   270,   273,   272,   275,   274,   277,
     276,   279,   278,   281,   280,   283,   282,   285,   284,   287,
     286,    35,    30,   291,   290,   293,   292,    32,   296,   295,
      30,    35,    33,    32,   302,   301,    32,    35,   306,   305,
     308,   307,    33,    33,    33,   313,   312,   294,    33,    33,
      30,    33,    35,    30,    30,    30,    35,   304,    28,    33,
      33,    33,    28,    28,   311,    33,    35,    28,   315,    33,
      33,    28,    28,    33,   321,    28,    28,    35,    33,    33,
      17,   246,   160,   215,    35,   171,   163,    -1,    -1,   336,
     337,    -1,   339,   340,   135,    -1,   157
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     9,    10,    11,    12,    13,    18,
      20,    22,    23,    24,    25,    27,    37,    38,    39,    52,
      54,    55,    61,    62,    63,    64,    65,    71,    73,    74,
      75,    76,    77,    83,    32,    34,    34,    34,    32,    32,
      34,    32,    32,    32,    32,    34,    34,    32,    34,    32,
      34,    32,    34,    34,     0,    39,    28,    30,    31,    84,
      28,    30,    88,    30,    28,    30,    87,    30,    31,    86,
      86,    28,    30,    33,    28,    28,    86,    30,    31,    85,
      84,    28,    28,    29,    29,    86,    28,    15,    16,    15,
      16,    84,    28,    35,    33,    85,    84,    33,    28,    32,
      33,    85,    84,    35,    85,    84,    33,    35,    85,    84,
      35,    33,    84,    28,    85,    84,    28,    33,    72,    85,
      84,    30,    30,    33,    35,    35,    84,    28,    30,    33,
      30,    33,    32,    17,    49,    50,    51,    69,    33,    35,
      85,    84,    32,    32,    35,    84,    84,    33,    35,    32,
      67,    32,    33,    51,    85,    84,    79,    78,    84,    84,
      66,    14,    43,    44,    45,    68,    28,    30,    30,    26,
      80,    81,    82,    80,    35,    84,    43,    32,    34,    33,
      45,    28,    88,    88,    32,    34,    33,    82,    33,    84,
      33,    85,    84,    33,    33,    35,    85,    84,    30,    85,
      84,    32,    85,    84,    30,    85,    84,    70,    85,    84,
      88,    85,    84,     4,    46,    47,    48,    53,    85,    84,
      35,    85,    84,    32,    33,    48,    85,    84,    32,    30,
      85,    88,    84,    28,    33,    35,    56,    88,    33,    88,
      33,     7,     8,    19,    21,    40,    41,    42,    57,    58,
      59,    60,    33,    35,    32,    34,    32,    34,    32,    34,
      32,    34,    33,    42,    85,    84,    85,    84,    85,    84,
      85,    84,    85,    84,    85,    84,    85,    84,    85,    84,
      85,    84,    85,    84,    85,    84,    85,    84,    85,    84,
      85,    84,    85,    84,    28,    85,    84,    30,    30,    85,
      84,    85,    84,    88,    28,    85,    84,    30,    30,    33,
      35,    28,    85,    84,    33,    28,    88,    85,    84,    85,
      84,    28,    88,    85,    84,    88,    33,    28,    28,    33,
      35,    88,    33,    28,    28,    33,    28,    28,    33,    28,
      28,    88,    88,    88,    88,    33,    35,    33,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      40,    40,    41,    41,    42,    42,    42,    42,    43,    43,
      44,    44,    45,    46,    46,    47,    47,    48,    49,    49,
      50,    50,    51,    52,    53,    54,    54,    54,    56,    55,
      57,    57,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    61,    62,    63,    63,    63,    64,    66,
      65,    67,    65,    68,    68,    68,    70,    69,    72,    71,
      73,    73,    73,    74,    75,    75,    76,    76,    78,    77,
      79,    77,    80,    80,    81,    81,    82,    82,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88
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
      10,     0,     9,    10,    10,     9,     0,     9,     0,     7,
       6,     6,     4,     4,    10,    10,     4,     4,     0,     9,
       0,     9,     1,     0,     2,     1,     8,     8,     4,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 148 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_attribute((yyvsp[-2].sval), (yyvsp[-1].sval)); }
#line 1484 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 44:
#line 153 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_connect((yyvsp[-1].sval)); }
#line 1490 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1496 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 46:
#line 160 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival), 0, 0); }
#line 1502 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 47:
#line 162 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_drc((yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival), 0, 0, 0); }
#line 1508 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_element_start((yyvsp[-12].u32val), (yyvsp[-11].sval), (yyvsp[-10].sval), (yyvsp[-9].sval), 1, (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].u32val)); }
#line 1514 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 49:
#line 169 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_element_end(); }
#line 1520 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 50:
#line 190 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementarc(0, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1526 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementarc(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1532 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 52:
#line 197 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementline(0, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1538 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 53:
#line 199 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_elementline(1, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1544 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 54:
#line 204 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(0, (yyvsp[-10].ival), (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1550 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 55:
#line 206 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(0, (yyvsp[-10].ival), (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1556 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 56:
#line 208 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(1, (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), 0, 0, (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1562 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 57:
#line 210 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pad(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), 0, 0, (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1568 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 58:
#line 215 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(0, (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1574 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 59:
#line 217 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(0, (yyvsp[-9].ival), (yyvsp[-8].ival), (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1580 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 60:
#line 219 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), 0, 0, (yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval), (yyvsp[-1].u32val)); }
#line 1586 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 61:
#line 221 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), 0, 0, (yyvsp[-3].ival), (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1592 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 62:
#line 223 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_elem_pin(1, (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), 0, 0, 0, (yyvsp[-2].sval), "", (yyvsp[-1].u32val)); }
#line 1598 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 63:
#line 228 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_fileversion((yyvsp[-1].ival)); }
#line 1604 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 64:
#line 233 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_flags((yyvsp[-1].u32val)); }
#line 1610 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 65:
#line 238 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-4].fval), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1616 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 66:
#line 240 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-4].fval), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1622 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 67:
#line 242 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_grid((yyvsp[-3].fval), (yyvsp[-2].ival), (yyvsp[-1].ival), 0); }
#line 1628 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 68:
#line 247 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_groups((yyvsp[-1].sval)); }
#line 1634 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 69:
#line 252 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_start((yyvsp[-4].ival), (yyvsp[-3].sval), (yyvsp[-2].sval)); }
#line 1640 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 70:
#line 254 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_end(); }
#line 1646 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 71:
#line 256 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_start((yyvsp[-3].ival), (yyvsp[-2].sval), ""); }
#line 1652 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 72:
#line 258 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_layer_end(); }
#line 1658 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 73:
#line 263 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_line((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1664 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 74:
#line 265 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_line((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1670 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 75:
#line 267 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_line((yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), 0, (yyvsp[-1].u32val)); }
#line 1676 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 76:
#line 272 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_net_start((yyvsp[-3].sval), (yyvsp[-2].sval)); }
#line 1682 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 77:
#line 274 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_net_end(); }
#line 1688 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 78:
#line 279 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_netlist_start(); }
#line 1694 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 79:
#line 281 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_netlist_end(); }
#line 1700 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 80:
#line 286 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb((yyvsp[-3].sval), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1706 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 81:
#line 288 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb((yyvsp[-3].sval), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1712 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 82:
#line 290 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_pcb_default_size((yyvsp[-1].sval)); }
#line 1718 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 83:
#line 295 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_polyarea((yyvsp[-1].fval)); }
#line 1724 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 84:
#line 300 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_rat((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1730 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_rat((yyvsp[-7].ival), (yyvsp[-6].ival), (yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].u32val)); }
#line 1736 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 86:
#line 307 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_styles((yyvsp[-1].sval)); }
#line 1742 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 87:
#line 309 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_styles((yyvsp[-1].sval)); }
#line 1748 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 88:
#line 314 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_start((yyvsp[-3].cval), (yyvsp[-2].ival)); }
#line 1754 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 89:
#line 316 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_end(); }
#line 1760 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 90:
#line 318 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_start((yyvsp[-3].cval), (yyvsp[-2].ival)); }
#line 1766 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 91:
#line 320 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbol_end(); }
#line 1772 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 96:
#line 335 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbolline((yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1778 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 97:
#line 337 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_symbolline((yyvsp[-5].ival), (yyvsp[-4].ival), (yyvsp[-3].ival), (yyvsp[-2].ival), (yyvsp[-1].ival)); }
#line 1784 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 98:
#line 342 "pcb/parser.y" /* yacc.c:1646  */
    { nimpcb_process_thermal((yyvsp[-1].fval)); }
#line 1790 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 99:
#line 347 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].ival); }
#line 1796 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 100:
#line 349 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[0].fval); }
#line 1802 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 101:
#line 351 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].ival) * 100); }
#line 1808 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 102:
#line 353 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].fval) * 100.0); }
#line 1814 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 103:
#line 355 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) (((double) (yyvsp[-1].ival)) * 3937.01); }
#line 1820 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 104:
#line 357 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[-1].fval) * 3937.01); }
#line 1826 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 105:
#line 362 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[0].ival) * 100); }
#line 1832 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 106:
#line 364 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (int64_t) ((yyvsp[0].fval) * 100.0); }
#line 1838 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 107:
#line 369 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.fval) = (double) (yyvsp[0].ival); }
#line 1844 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 108:
#line 371 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.fval) = (yyvsp[0].fval); }
#line 1850 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 109:
#line 376 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = nimpcb_parse_pcb_flags_string((yyvsp[0].sval)); }
#line 1856 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 110:
#line 378 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = (uint32_t) (yyvsp[0].ival); }
#line 1862 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 111:
#line 383 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = nimpcb_parse_object_flags_string((yyvsp[0].sval)); }
#line 1868 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;

  case 112:
#line 385 "pcb/parser.y" /* yacc.c:1646  */
    { (yyval.u32val) = (uint32_t) (yyvsp[0].ival); }
#line 1874 "pcb/parser_gen.c" /* yacc.c:1646  */
    break;


#line 1878 "pcb/parser_gen.c" /* yacc.c:1646  */
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
#line 388 "pcb/parser.y" /* yacc.c:1906  */


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
