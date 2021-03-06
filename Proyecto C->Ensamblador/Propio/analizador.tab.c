/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "analizador.y" /* yacc.c:337  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
extern int yylex(void);
extern char *yytext;
extern int lineas;
extern FILE * yyin;
FILE * fsalidaRep;
FILE * fsalidaSel;
FILE * fsalidaFun;
FILE * fsalidaStru;
void yyerror(char *s);

#line 86 "analizador.tab.c" /* yacc.c:337  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "analizador.tab.h".  */
#ifndef YY_YY_ANALIZADOR_TAB_H_INCLUDED
# define YY_YY_ANALIZADOR_TAB_H_INCLUDED
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
    T_ID = 258,
    T_INT = 259,
    T_FLOAT = 260,
    T_IF = 261,
    T_ELSE = 262,
    T_SWITCH = 263,
    T_CASE = 264,
    T_FOR = 265,
    T_WHILE = 266,
    T_DO = 267,
    T_TDATO = 268,
    T_OPAARIT = 269,
    T_INCR2 = 270,
    T_COMA = 271,
    T_PTCOM = 272,
    T_OPRELACION = 273,
    T_OPASIG = 274,
    T_PA = 275,
    T_PC = 276,
    T_CA = 277,
    T_CC = 278,
    T_INCR = 279,
    T_ANDOR = 280,
    T_CHAR = 281,
    T_RETURN = 282,
    T_STRUCT = 283,
    T_DOSPTO = 284,
    T_BREAK = 285,
    T_CAR = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "analizador.y" /* yacc.c:352  */

	char *valor;

#line 165 "analizador.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADOR_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

#define YYUNDEFTOK  2
#define YYMAXUTOK   286

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    42,    44,    53,    54,    55,    57,    58,
      58,    60,    60,    60,    63,    64,    66,    67,    69,    70,
      71,    72,    73,    75,    76,    77,    79,    80,    81,    83,
      84,    85,    88,    89,    90,    92,    93,    95,    95,    97,
      97,    97,    97,    97,    97,    99,   104,   109,   115,   118,
     124,   130,   134,   135,   137,   138,   140,   141,   142,   144,
     144,   144,   146,   146,   148
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ID", "T_INT", "T_FLOAT", "T_IF",
  "T_ELSE", "T_SWITCH", "T_CASE", "T_FOR", "T_WHILE", "T_DO", "T_TDATO",
  "T_OPAARIT", "T_INCR2", "T_COMA", "T_PTCOM", "T_OPRELACION", "T_OPASIG",
  "T_PA", "T_PC", "T_CA", "T_CC", "T_INCR", "T_ANDOR", "T_CHAR",
  "T_RETURN", "T_STRUCT", "T_DOSPTO", "T_BREAK", "T_CAR", "$accept",
  "funciones", "funcion", "argumentos", "conte", "elementos",
  "declaracion", "id", "operaciones", "asignaciones", "operArit",
  "valores", "return", "estructuras", "estructurasCuerpo",
  "estructuraAlgoritmo", "for", "while", "dowhile", "if", "IfElse",
  "switch", "cases", "case", "constantes", "contsEstructura",
  "contEstructura", "struct", YY_NULLPTR
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
     285,   286
};
# endif

#define YYPACT_NINF -118

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define YYTABLE_NINF -32

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    16,    22,  -118,     7,  -118,  -118,     8,    51,    29,
       9,    33,     8,    20,  -118,    24,    38,    59,    60,    62,
      71,    81,    82,   102,    84,    20,  -118,   110,    98,   103,
    -118,    53,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,    96,  -118,    41,    96,    96,   118,    96,   100,   112,
     109,   140,   111,  -118,  -118,    55,   117,   121,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,   123,   124,   126,  -118,   133,
     142,   115,   139,   145,   155,   110,  -118,    65,  -118,    81,
     161,   156,   157,   158,   161,   164,  -118,  -118,    96,    96,
     154,   167,    96,    96,   169,  -118,  -118,  -118,   165,   166,
     168,   163,  -118,   160,   175,  -118,  -118,  -118,   170,   171,
     173,  -118,  -118,  -118,   172,   153,    10,     1,  -118,    96,
     174,    96,  -118,   100,  -118,  -118,  -118,  -118,   162,   176,
    -118,  -118,   177,   100,   179,    86,   184,   184,   187,   119,
      96,   188,    -1,     4,    76,   178,  -118,   180,   181,   183,
     185,    96,   182,   189,   100,  -118,  -118,   100,  -118,   129,
     143,  -118,  -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     0,     1,     2,     7,     0,     0,
       5,     0,     7,    10,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,    12,     0,     0,
       9,    13,    36,    37,    39,    40,    41,    42,    43,    44,
      38,     0,    28,     0,     0,     0,     0,     0,    61,    16,
       0,     0,     0,     4,     8,     0,     0,     0,    18,    20,
      35,    31,    29,    30,    26,    23,    24,    25,    19,     0,
       0,     0,     0,     0,     0,    62,    63,     0,    60,     0,
      14,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,     0,    59,    17,    15,     0,     0,
       0,     0,    27,     0,     0,    23,    24,    25,     0,     0,
       0,    32,    33,    34,     0,     0,     0,     0,    53,     0,
       0,     0,    64,    61,    49,    56,    57,    58,     0,     0,
      51,    52,     0,    61,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    61,    55,    54,    61,    47,     0,
       0,    50,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,   196,   195,   186,  -118,   -67,   130,   -13,   -26,
     -24,   -36,  -118,  -118,   190,    47,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,    91,  -118,  -117,   -73,  -118
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    24,    25,    26,    50,    75,    28,
      29,    69,    30,    31,    32,    76,    34,    35,    36,    37,
      38,    39,   117,   118,   129,    77,    78,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    56,    55,    57,    95,    64,   135,    55,    70,    71,
     116,    74,    27,    97,   125,   126,   139,   101,     1,     4,
      73,     8,     5,    15,   130,    12,    16,     7,    17,   149,
      18,    19,    20,    21,   150,     1,   127,   159,    41,    42,
     160,   128,   124,    43,    65,    66,    67,    22,    23,    56,
      11,    57,   102,   103,    10,    13,   108,   109,    44,    16,
      33,    17,    95,    18,    19,    20,    95,    68,    15,    41,
      42,    16,    33,    17,    85,    18,    19,    20,    33,    45,
      46,    23,    47,   132,    49,   134,    95,    95,    94,    15,
      41,    42,    16,    48,    17,   151,    18,    19,    20,    61,
      62,    63,    51,    15,   147,    52,    16,    53,    17,   141,
      18,    19,    20,    55,   145,    58,    56,    56,    57,    57,
      59,    72,    15,   142,   143,    16,    80,    17,    79,    18,
      19,    20,    15,    84,    86,    16,    90,    17,    87,    18,
      19,    20,   146,    81,    82,    83,    15,   -31,   -29,    16,
     -30,    17,   161,    18,    19,    20,    15,    88,    91,    16,
      89,    17,    92,    18,    19,    20,   162,    65,    66,    67,
     105,   106,   107,    93,    21,   123,   104,    98,    99,   100,
     110,   115,   111,   112,   116,   113,   114,    15,   119,   122,
     144,   136,   120,   121,   138,   148,   133,   140,     6,   152,
     155,   153,   156,   154,   157,   137,   158,    14,   131,    96,
       0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60
};

static const yytype_int16 yycheck[] =
{
      13,    27,     3,    27,    77,    41,   123,     3,    44,    45,
       9,    47,    25,    80,     4,     5,   133,    84,    13,     3,
      46,    13,     0,     3,    23,    16,     6,    20,     8,    30,
      10,    11,    12,    13,    30,    13,    26,   154,    14,    15,
     157,    31,   115,    19,     3,     4,     5,    27,    28,    75,
      21,    75,    88,    89,     3,    22,    92,    93,    20,     6,
      13,     8,   135,    10,    11,    12,   139,    26,     3,    14,
      15,     6,    25,     8,    19,    10,    11,    12,    31,    20,
      20,    28,    20,   119,     3,   121,   159,   160,    23,     3,
      14,    15,     6,    22,     8,    19,    10,    11,    12,     3,
       4,     5,    20,     3,   140,     3,     6,    23,     8,    23,
      10,    11,    12,     3,   138,    17,   142,   143,   142,   143,
      17,     3,     3,   136,   137,     6,    17,     8,    16,    10,
      11,    12,     3,    22,    17,     6,    21,     8,    17,    10,
      11,    12,    23,     3,     4,     5,     3,    24,    24,     6,
      24,     8,    23,    10,    11,    12,     3,    24,    19,     6,
      18,     8,    17,    10,    11,    12,    23,     3,     4,     5,
       3,     4,     5,    18,    13,    22,    22,    21,    21,    21,
      11,    21,    17,    17,     9,    17,    23,     3,    18,    17,
       3,    29,    21,    20,    17,     7,    22,    18,     2,    21,
      17,    21,    17,    22,    22,    29,    17,    12,   117,    79,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    33,    34,     3,     0,    34,    20,    13,    35,
       3,    21,    16,    22,    35,     3,     6,     8,    10,    11,
      12,    13,    27,    28,    36,    37,    38,    40,    41,    42,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      59,    14,    15,    19,    20,    20,    20,    20,    22,     3,
      39,    20,     3,    23,    36,     3,    41,    42,    17,    17,
      46,     3,     4,     5,    43,     3,     4,     5,    26,    43,
      43,    43,     3,    41,    43,    40,    47,    57,    58,    16,
      17,     3,     4,     5,    22,    19,    17,    17,    24,    18,
      21,    19,    17,    18,    23,    58,    39,    38,    21,    21,
      21,    38,    43,    43,    22,     3,     4,     5,    43,    43,
      11,    17,    17,    17,    23,    21,     9,    54,    55,    18,
      21,    20,    17,    22,    58,     4,     5,    26,    31,    56,
      23,    55,    43,    22,    43,    57,    29,    29,    17,    57,
      18,    23,    40,    40,     3,    42,    23,    43,     7,    30,
      30,    19,    21,    21,    22,    17,    17,    22,    17,    57,
      57,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    33,    34,    35,    35,    35,    36,    36,
      36,    37,    37,    37,    38,    38,    39,    39,    40,    40,
      40,    40,    40,    41,    41,    41,    42,    42,    42,    43,
      43,    43,    44,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    47,    47,    48,    49,    50,    51,    51,
      52,    53,    54,    54,    55,    55,    56,    56,    56,    57,
      57,    57,    58,    58,    59
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     8,     2,     4,     0,     2,     1,
       0,     1,     1,     1,     3,     4,     1,     3,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     5,     2,     1,
       1,     1,     5,     5,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    13,     9,    11,     9,     7,
      13,     7,     2,     1,     6,     6,     1,     1,     1,     2,
       1,     0,     1,     1,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 4:
#line 44 "analizador.y" /* yacc.c:1652  */
    {
		if(!strcmp((yyvsp[-7].valor),"void")){
			if(strcmp((yyvsp[-1].valor),""))
				yyerror("Documento no valido");
		}
		else if(!strcmp((yyvsp[-1].valor),""))
			yyerror("Documento no valido");
		fprintf(fsalidaFun,"Funcion:\t%s\nRetorno:\t%s\nArgumentos:\t%s\n========\n", (yyvsp[-6].valor), (yyvsp[-1].valor), (yyvsp[-4].valor));}
#line 1381 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 53 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].valor)," ");strcat((yyvsp[-1].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-1].valor);}
#line 1387 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 54 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-3].valor)," ");strcat((yyvsp[-3].valor),(yyvsp[-2].valor));strcat((yyvsp[-3].valor),", ");strcat((yyvsp[-3].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-3].valor);}
#line 1393 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 55 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)="";}
#line 1399 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 57 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1405 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 58 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1411 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 58 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)="";}
#line 1417 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 63 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor)," ");strcat((yyvsp[-2].valor),(yyvsp[-1].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1423 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 64 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-3].valor)," ");strcat((yyvsp[-3].valor),(yyvsp[-2].valor));strcat((yyvsp[-3].valor),", ");strcat((yyvsp[-3].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-3].valor);}
#line 1429 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 66 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1435 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 67 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor),",");strcat((yyvsp[-2].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1441 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 69 "analizador.y" /* yacc.c:1652  */
    {}
#line 1447 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 70 "analizador.y" /* yacc.c:1652  */
    {}
#line 1453 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 71 "analizador.y" /* yacc.c:1652  */
    {}
#line 1459 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 72 "analizador.y" /* yacc.c:1652  */
    {}
#line 1465 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 73 "analizador.y" /* yacc.c:1652  */
    {}
#line 1471 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 75 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor),(yyvsp[-1].valor));strcat((yyvsp[-2].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1477 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 76 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor),(yyvsp[-1].valor));strcat((yyvsp[-2].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1483 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 77 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor),(yyvsp[-1].valor));strcat((yyvsp[-2].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1489 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 79 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-2].valor),(yyvsp[-1].valor));strcat((yyvsp[-2].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-2].valor);}
#line 1495 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 80 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-4].valor),(yyvsp[-3].valor));strcat((yyvsp[-4].valor),(yyvsp[-2].valor));strcat((yyvsp[-4].valor),(yyvsp[-1].valor));strcat((yyvsp[-4].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-4].valor);}
#line 1501 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 81 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-1].valor);}
#line 1507 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 83 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1513 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 84 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1519 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 85 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1525 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 88 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[-2].valor);}
#line 1531 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 89 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[-2].valor);}
#line 1537 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 90 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[-2].valor);}
#line 1543 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 92 "analizador.y" /* yacc.c:1652  */
    {}
#line 1549 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 93 "analizador.y" /* yacc.c:1652  */
    {}
#line 1555 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 99 "analizador.y" /* yacc.c:1652  */
    {
	strcat((yyvsp[-8].valor),(yyvsp[-7].valor));strcat((yyvsp[-8].valor),(yyvsp[-6].valor));
	fprintf(fsalidaRep,"Estructura repetitiva:\t%s\nAsignaciones:\t%s\nCondicion de Paro:\t%s\nIncremento:\t%s\n========\n",(yyvsp[-12].valor),(yyvsp[-10].valor),(yyvsp[-8].valor),(yyvsp[-4].valor));
	}
#line 1564 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 104 "analizador.y" /* yacc.c:1652  */
    {
		strcat((yyvsp[-6].valor),(yyvsp[-5].valor));strcat((yyvsp[-6].valor),(yyvsp[-4].valor));
		fprintf(fsalidaRep,"Estructura repetitiva:\t%s\nCondicion de paro:\t%s\n========\n",(yyvsp[-8].valor),(yyvsp[-6].valor));
		}
#line 1573 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 109 "analizador.y" /* yacc.c:1652  */
    {
		strcat((yyvsp[-4].valor),(yyvsp[-3].valor));strcat((yyvsp[-4].valor),(yyvsp[-2].valor));
		fprintf(fsalidaRep,"Estructura repetitiva:\tDo-while\nCondicion de paro:\t%s\n========\n",(yyvsp[-4].valor));
		}
#line 1582 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 115 "analizador.y" /* yacc.c:1652  */
    {
		strcat((yyvsp[-6].valor),(yyvsp[-5].valor));strcat((yyvsp[-6].valor),(yyvsp[-4].valor));
		fprintf(fsalidaSel,"Condicional:\nif\nCondicion a evaluar:\t%s\n========\n",(yyvsp[-6].valor));}
#line 1590 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 118 "analizador.y" /* yacc.c:1652  */
    {
		strcat((yyvsp[-4].valor),(yyvsp[-3].valor));strcat((yyvsp[-4].valor),(yyvsp[-2].valor));
		fprintf(fsalidaSel,"Condicional:\tif\nCondicion a evaluar:\t%s\n========\n",(yyvsp[-4].valor));
		}
#line 1599 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 124 "analizador.y" /* yacc.c:1652  */
    {
		strcat((yyvsp[-10].valor),(yyvsp[-9].valor));strcat((yyvsp[-10].valor),(yyvsp[-8].valor));
		fprintf(fsalidaSel,"Condicional:\tif-else\nCondicion a evaluar:\t%s\n========\n",(yyvsp[-10].valor));
		}
#line 1608 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 130 "analizador.y" /* yacc.c:1652  */
    {
		fprintf(fsalidaSel,"Condicional:\tswitch-case\nCondicion a Evaluar:\t%s\nCases: case %s\n========\n",(yyvsp[-4].valor),(yyvsp[-1].valor));
		}
#line 1616 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 134 "analizador.y" /* yacc.c:1652  */
    {strcat((yyvsp[-1].valor),", case ");strcat((yyvsp[-1].valor),(yyvsp[0].valor));(yyval.valor)=(yyvsp[-1].valor);}
#line 1622 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 135 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1628 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 137 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[-4].valor);}
#line 1634 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 138 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[-4].valor);}
#line 1640 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 140 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1646 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 141 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1652 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 142 "analizador.y" /* yacc.c:1652  */
    {(yyval.valor)=(yyvsp[0].valor);}
#line 1658 "analizador.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 148 "analizador.y" /* yacc.c:1652  */
    {
	fprintf(fsalidaStru,"Struct:\t%s\nMiembros:\t%s\n========\n",(yyvsp[-4].valor),(yyvsp[-2].valor));
	}
#line 1666 "analizador.tab.c" /* yacc.c:1652  */
    break;


#line 1670 "analizador.tab.c" /* yacc.c:1652  */
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 152 "analizador.y" /* yacc.c:1918  */


void yyerror(char *s)
{
	printf("\nError: %s\n\n",s);
	exit(0);
}

int main()
{
	yyparse();
	return 0;
}

