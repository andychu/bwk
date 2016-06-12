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
#line 25 "awkgram.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "awk.h"

void checkdup(Node *list, Cell *item);
int yywrap(void) { return(1); }

Node	*beginloc = 0;
Node	*endloc = 0;
int	infunc	= 0;	/* = 1 if in arglist or body of func */
int	inloop	= 0;	/* = 1 if in while, for, do */
char	*curfname = 0;	/* current function name */
Node	*arglist = 0;	/* list of args for current function */

#line 82 "y.tab.c" /* yacc.c:339  */

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
    FIRSTTOKEN = 258,
    PROGRAM = 259,
    PASTAT = 260,
    PASTAT2 = 261,
    XBEGIN = 262,
    XEND = 263,
    NL = 264,
    ARRAY = 265,
    MATCH = 266,
    NOTMATCH = 267,
    MATCHOP = 268,
    FINAL = 269,
    DOT = 270,
    ALL = 271,
    CCL = 272,
    NCCL = 273,
    CHAR = 274,
    OR = 275,
    STAR = 276,
    QUEST = 277,
    PLUS = 278,
    EMPTYRE = 279,
    AND = 280,
    BOR = 281,
    APPEND = 282,
    EQ = 283,
    GE = 284,
    GT = 285,
    LE = 286,
    LT = 287,
    NE = 288,
    IN = 289,
    ARG = 290,
    BLTIN = 291,
    BREAK = 292,
    CLOSE = 293,
    CONTINUE = 294,
    DELETE = 295,
    DO = 296,
    EXIT = 297,
    FOR = 298,
    FUNC = 299,
    SUB = 300,
    GSUB = 301,
    IF = 302,
    INDEX = 303,
    LSUBSTR = 304,
    MATCHFCN = 305,
    NEXT = 306,
    NEXTFILE = 307,
    ADD = 308,
    MINUS = 309,
    MULT = 310,
    DIVIDE = 311,
    MOD = 312,
    ASSIGN = 313,
    ASGNOP = 314,
    ADDEQ = 315,
    SUBEQ = 316,
    MULTEQ = 317,
    DIVEQ = 318,
    MODEQ = 319,
    POWEQ = 320,
    PRINT = 321,
    PRINTF = 322,
    SPRINTF = 323,
    ELSE = 324,
    INTEST = 325,
    CONDEXPR = 326,
    POSTINCR = 327,
    PREINCR = 328,
    POSTDECR = 329,
    PREDECR = 330,
    VAR = 331,
    IVAR = 332,
    VARNF = 333,
    CALL = 334,
    NUMBER = 335,
    STRING = 336,
    REGEXPR = 337,
    GETLINE = 338,
    RETURN = 339,
    SPLIT = 340,
    SUBSTR = 341,
    WHILE = 342,
    CAT = 343,
    NOT = 344,
    UMINUS = 345,
    POWER = 346,
    DECR = 347,
    INCR = 348,
    INDIRECT = 349,
    LASTTOKEN = 350
  };
#endif
/* Tokens.  */
#define FIRSTTOKEN 258
#define PROGRAM 259
#define PASTAT 260
#define PASTAT2 261
#define XBEGIN 262
#define XEND 263
#define NL 264
#define ARRAY 265
#define MATCH 266
#define NOTMATCH 267
#define MATCHOP 268
#define FINAL 269
#define DOT 270
#define ALL 271
#define CCL 272
#define NCCL 273
#define CHAR 274
#define OR 275
#define STAR 276
#define QUEST 277
#define PLUS 278
#define EMPTYRE 279
#define AND 280
#define BOR 281
#define APPEND 282
#define EQ 283
#define GE 284
#define GT 285
#define LE 286
#define LT 287
#define NE 288
#define IN 289
#define ARG 290
#define BLTIN 291
#define BREAK 292
#define CLOSE 293
#define CONTINUE 294
#define DELETE 295
#define DO 296
#define EXIT 297
#define FOR 298
#define FUNC 299
#define SUB 300
#define GSUB 301
#define IF 302
#define INDEX 303
#define LSUBSTR 304
#define MATCHFCN 305
#define NEXT 306
#define NEXTFILE 307
#define ADD 308
#define MINUS 309
#define MULT 310
#define DIVIDE 311
#define MOD 312
#define ASSIGN 313
#define ASGNOP 314
#define ADDEQ 315
#define SUBEQ 316
#define MULTEQ 317
#define DIVEQ 318
#define MODEQ 319
#define POWEQ 320
#define PRINT 321
#define PRINTF 322
#define SPRINTF 323
#define ELSE 324
#define INTEST 325
#define CONDEXPR 326
#define POSTINCR 327
#define PREINCR 328
#define POSTDECR 329
#define PREDECR 330
#define VAR 331
#define IVAR 332
#define VARNF 333
#define CALL 334
#define NUMBER 335
#define STRING 336
#define REGEXPR 337
#define GETLINE 338
#define RETURN 339
#define SPLIT 340
#define SUBSTR 341
#define WHILE 342
#define CAT 343
#define NOT 344
#define UMINUS 345
#define POWER 346
#define DECR 347
#define INCR 348
#define INDIRECT 349
#define LASTTOKEN 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 41 "awkgram.y" /* yacc.c:355  */

	Node	*p;
	Cell	*cp;
	int	i;
	char	*s;

#line 319 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 334 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   4659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  368

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   104,     2,     2,
      12,    16,   103,   101,    10,   102,     2,    15,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    14,
       2,     2,     2,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,    13,    17,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    95,    96,
      97,    98,    99,   100,   105,   106,   107,   108,   109,   110,
     111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   100,   104,   104,   108,   108,   112,   112,
     116,   116,   120,   120,   124,   124,   126,   126,   128,   128,
     133,   134,   138,   142,   142,   146,   146,   150,   151,   155,
     156,   161,   162,   166,   167,   171,   175,   176,   177,   178,
     179,   180,   182,   184,   184,   189,   190,   194,   195,   199,
     200,   202,   204,   206,   207,   212,   213,   214,   215,   216,
     220,   221,   223,   225,   227,   228,   229,   230,   231,   232,
     233,   234,   239,   240,   241,   244,   247,   248,   249,   253,
     254,   258,   259,   263,   264,   265,   269,   269,   273,   273,
     273,   273,   277,   277,   281,   283,   287,   287,   291,   291,
     295,   298,   301,   304,   305,   306,   307,   308,   312,   313,
     317,   319,   321,   321,   321,   323,   324,   325,   326,   327,
     328,   329,   332,   335,   336,   337,   338,   338,   339,   343,
     344,   348,   348,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   378,   381,
     382,   384,   389,   390,   392,   394,   396,   397,   398,   400,
     405,   407,   412,   414,   416,   420,   421,   422,   423,   427,
     428,   429,   435,   436,   437,   442
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FIRSTTOKEN", "PROGRAM", "PASTAT",
  "PASTAT2", "XBEGIN", "XEND", "NL", "','", "'{'", "'('", "'|'", "';'",
  "'/'", "')'", "'}'", "'['", "']'", "ARRAY", "MATCH", "NOTMATCH",
  "MATCHOP", "FINAL", "DOT", "ALL", "CCL", "NCCL", "CHAR", "OR", "STAR",
  "QUEST", "PLUS", "EMPTYRE", "AND", "BOR", "APPEND", "EQ", "GE", "GT",
  "LE", "LT", "NE", "IN", "ARG", "BLTIN", "BREAK", "CLOSE", "CONTINUE",
  "DELETE", "DO", "EXIT", "FOR", "FUNC", "SUB", "GSUB", "IF", "INDEX",
  "LSUBSTR", "MATCHFCN", "NEXT", "NEXTFILE", "ADD", "MINUS", "MULT",
  "DIVIDE", "MOD", "ASSIGN", "ASGNOP", "ADDEQ", "SUBEQ", "MULTEQ", "DIVEQ",
  "MODEQ", "POWEQ", "PRINT", "PRINTF", "SPRINTF", "ELSE", "INTEST",
  "CONDEXPR", "POSTINCR", "PREINCR", "POSTDECR", "PREDECR", "VAR", "IVAR",
  "VARNF", "CALL", "NUMBER", "STRING", "REGEXPR", "'?'", "':'", "GETLINE",
  "RETURN", "SPLIT", "SUBSTR", "WHILE", "CAT", "'+'", "'-'", "'*'", "'%'",
  "NOT", "UMINUS", "POWER", "DECR", "INCR", "INDIRECT", "LASTTOKEN",
  "$accept", "program", "and", "bor", "comma", "do", "else", "for", "$@1",
  "$@2", "$@3", "funcname", "if", "lbrace", "nl", "opt_nl", "opt_pst",
  "opt_simple_stmt", "pas", "pa_pat", "pa_stat", "$@4", "pa_stats",
  "patlist", "ppattern", "pattern", "plist", "pplist", "prarg", "print",
  "pst", "rbrace", "re", "reg_expr", "$@5", "rparen", "simple_stmt", "st",
  "stmt", "$@6", "$@7", "$@8", "stmtlist", "subop", "term", "var",
  "varlist", "varname", "while", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      44,   123,    40,   124,    59,    47,    41,   125,    91,    93,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    63,    58,   338,   339,   340,   341,   342,
     343,    43,    45,    42,    37,   344,   345,   346,   347,   348,
     349,   350
};
# endif

#define YYPACT_NINF -308

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-308)))

#define YYTABLE_NINF -32

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-32)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     681,  -308,  -308,  -308,    77,  1585,  -308,    86,  -308,    50,
      50,  -308,  4223,  -308,  -308,    66,  4549,   -56,  -308,  -308,
      76,    90,    92,  -308,  -308,  -308,    93,  -308,  -308,   212,
     104,   113,  4549,  4549,  4281,   248,   248,  4549,   812,    34,
    -308,   132,  3509,  -308,  -308,   121,   -11,   -44,   117,  -308,
    -308,   812,   812,  2194,    38,    57,  4038,  4223,  4549,   -11,
      44,  -308,  -308,   130,  4223,  4223,  4223,  4096,  4549,   115,
    4223,  4223,    51,    51,  -308,    51,  -308,  -308,  -308,  -308,
    -308,   151,   141,   141,   -31,  -308,  1745,   149,   153,   141,
     141,  -308,  -308,  1745,   160,   154,  -308,  1426,   812,  3509,
    4339,   141,  -308,   880,  -308,   151,   812,  1585,    82,  4223,
    -308,  -308,  4223,  4223,  4223,  4223,  4223,  4223,   -31,  4223,
    1803,  1861,   -11,  4223,  4397,  4549,  4549,  4549,  4549,  4549,
    4223,  -308,  -308,  4223,   948,  1016,  -308,  -308,  1919,   140,
    1919,   171,  -308,    65,  3509,  2682,   102,  2591,  2591,    69,
    -308,   107,   -11,  4549,  2591,  2591,  -308,   182,  -308,   151,
     182,  -308,  -308,   176,  1687,  -308,  1493,  4223,  -308,  -308,
    1687,  -308,  4223,  -308,  1426,   133,  1084,  4223,  3911,   201,
      10,  -308,   -11,    -2,  -308,  -308,  -308,  1426,  4223,  1152,
    -308,   248,  3760,  -308,  3760,  3760,  3760,  3760,  3760,  3760,
    -308,  2773,  -308,  3680,  -308,  3600,  2591,   201,  4549,    51,
      -6,    -6,    51,    51,    51,  3509,    21,  -308,  -308,  -308,
    3509,   -31,  3509,  -308,  -308,  1919,  -308,   108,  1919,  1919,
    -308,  -308,   -11,     1,  1919,  -308,  -308,  4223,  -308,   200,
    -308,    18,  2864,  -308,  2864,  -308,  -308,  1222,  -308,   208,
     110,  4455,   -31,  4455,  1977,  2035,   -11,  2093,  4549,  4549,
    4549,  4455,  -308,    50,  -308,  -308,  4223,  1919,  1919,   -11,
    -308,  -308,  3509,  -308,    13,   209,  2955,   204,  3046,   211,
     111,  2295,    24,   142,   -31,   209,   209,   125,  -308,  -308,
    -308,   189,  4223,  4524,  -308,  -308,  3831,  4165,  3980,  3911,
     -11,   -11,   -11,  3911,   812,  3509,  2396,  2497,  -308,  -308,
      50,  -308,  -308,  -308,  -308,  -308,  1919,  -308,  1919,  -308,
     151,  4223,   218,   224,   -31,   120,  4455,  1290,  -308,   187,
    -308,   187,   812,  3137,   232,  3228,  1560,  3327,   209,  4223,
    -308,   189,  3911,  -308,   233,   234,  1358,  -308,  -308,  -308,
     218,   151,  1426,  3418,  -308,  -308,  -308,   209,  1560,  -308,
     141,  1426,   218,  -308,  -308,   209,  1426,  -308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,    88,    89,     0,    33,     2,    30,     1,     0,
       0,    23,     0,    96,   183,   145,     0,     0,   131,   132,
       0,     0,     0,   182,   177,   184,     0,   162,   167,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      45,    29,    35,    77,    94,     0,    78,   174,   175,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     174,    20,    21,     0,     0,     0,     0,     0,     0,   155,
       0,     0,   141,   140,    95,   142,   149,   150,   178,   107,
      24,    27,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    86,    87,     0,     0,   112,   117,     0,     0,   106,
      83,     0,   129,     0,   126,    27,     0,    34,     0,     0,
       4,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,   151,   152,     0,     0,     0,     8,   159,     0,     0,
       0,     0,   143,     0,    47,     0,   179,     0,     0,     0,
     146,     0,   154,     0,     0,     0,    25,    28,   128,    27,
     108,   110,   111,   105,     0,   116,     0,     0,   121,   122,
       0,   124,     0,    11,     0,   119,     0,     0,    81,    84,
     103,    58,    59,   174,   125,    40,   130,     0,     0,     0,
      46,    75,    71,    70,    64,    65,    66,    67,    68,    69,
      72,     0,     5,    63,     7,    62,     0,    94,     0,   137,
     134,   135,   136,   138,   139,    60,     0,    41,    42,     9,
      79,     0,    80,    97,   144,     0,   180,     0,     0,     0,
     166,   147,   153,     0,     0,    26,   109,     0,   115,     0,
      32,   175,     0,   123,     0,   113,    12,     0,    92,   120,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,   127,    38,    37,    74,     0,     0,     0,   133,
     176,    73,    48,    98,     0,    43,     0,    94,     0,    94,
       0,     0,     0,    27,     0,    22,   185,     0,    13,   118,
      93,    85,     0,    54,    53,    55,     0,    52,    51,    82,
     100,   101,   102,    49,     0,    61,     0,     0,   181,    99,
       0,   157,   158,   161,   160,   165,     0,   173,     0,   104,
      27,     0,     0,     0,     0,     0,     0,     0,   169,     0,
     168,     0,     0,     0,    94,     0,     0,     0,    18,     0,
      56,     0,    50,    39,     0,     0,     0,   163,   164,   172,
       0,    27,     0,     0,   171,   170,    44,    16,     0,    19,
       0,     0,     0,   114,    17,    14,     0,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,  -129,   -96,    61,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,    -4,   -73,   -90,   210,  -307,  -308,    64,
     148,  -308,  -308,   -39,  -181,   527,  -170,  -308,  -308,  -308,
    -308,  -308,   -32,   -85,  -308,  -203,  -163,   -30,   310,  -308,
    -308,  -308,   -40,  -308,   270,   -16,  -308,    87,  -308
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,   120,   121,   225,    95,   247,    96,   366,   361,
     352,    63,    97,    98,   160,   158,     5,   239,     6,    39,
      40,   310,    41,   143,   178,    99,    54,   179,   180,   100,
       7,   249,    43,    44,    55,   275,   101,   161,   102,   174,
     287,   187,   103,    45,    46,    47,   227,    48,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    38,    74,   240,   124,    51,    52,   250,   157,   124,
     219,   134,   135,    69,    14,   188,    60,    60,    60,    76,
      77,    60,   219,   258,   193,   130,    60,   149,   151,   350,
      61,   136,   157,    62,   136,   106,   133,    60,   207,   285,
     270,   286,    60,   319,   105,    11,    14,   259,   136,   254,
     260,   362,    60,   162,   139,    23,   165,    25,   176,   168,
     169,    11,   284,   171,   131,   132,   189,   261,   181,   236,
     293,   184,   296,   297,   298,   136,   299,     8,    56,   136,
     303,   224,   255,    60,   183,   230,   157,    23,    64,    25,
     125,   126,   127,   128,   216,    49,   129,   127,   128,   308,
      50,   129,    65,    38,    66,    67,   131,   132,    60,    60,
      60,    60,    60,    60,   138,   140,    70,   136,   136,   338,
     136,   136,   325,   231,   273,    71,   291,   315,    60,    60,
     136,    60,    60,   123,   238,   133,   341,    60,    60,    60,
     243,     2,   146,   277,   279,   342,     3,   357,    60,   141,
     156,   156,   131,   132,    60,   159,   320,   153,   129,   365,
     156,   166,    60,   173,   254,   167,   294,   254,   254,   254,
     254,   163,   172,   240,   254,   265,    60,   191,    60,    60,
      60,    60,    60,    60,   221,    60,   223,    60,   226,    60,
      60,   235,    60,   321,   237,   240,   219,   255,   282,    60,
     255,   255,   255,   255,    60,   200,    60,   255,   228,   229,
     157,   136,   246,   254,   283,   233,   234,   290,   309,   181,
     312,   181,   181,   181,   323,   181,    60,   314,    60,   181,
     336,   334,    14,   324,   273,   183,   339,   183,   183,   183,
     257,   183,    60,    60,    60,   183,   255,   157,   348,   354,
     355,   107,   263,   241,    68,   190,    60,    14,     0,   304,
      60,   358,    60,     0,   327,    60,     0,   267,   268,     0,
       0,     0,     0,    23,    24,    25,     0,    60,   157,     0,
      60,    60,    60,    60,     0,     0,    59,    60,   274,    60,
      60,    60,   346,    14,   181,     0,     0,    37,    23,    24,
      25,     0,    72,    73,    75,     0,   332,    78,   271,     0,
     183,   140,   122,   344,     0,   345,     0,    60,     0,    60,
     280,    60,    37,   122,     0,     0,    60,     0,    75,     0,
     363,     0,     0,     0,    23,    24,    25,    60,   152,   295,
       0,   316,   318,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,   329,   331,   122,
     182,   322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
       0,     0,     0,     0,     0,     0,     0,   175,     0,     0,
       0,   340,     0,   186,   122,   122,     0,   122,   122,     0,
       0,     0,     0,   232,   122,   122,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
     122,     0,     0,     0,   186,   186,     0,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   122,   122,   122,   122,   122,   122,
       0,   122,     0,   122,     0,   122,   122,     0,   269,     0,
       0,     0,     0,     0,   245,   122,   186,     0,     0,     0,
     122,     0,   122,     0,     0,     0,     0,   262,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   122,     0,     0,     0,     0,     0,
       0,   182,     0,   182,   182,   182,     0,   182,   300,   301,
     302,   182,    42,     0,     0,     0,     0,     0,     0,    53,
       0,     0,   122,     0,     0,     0,   122,     0,   122,     0,
       0,   122,     0,     0,     0,     0,     0,   289,     0,     0,
       0,     0,     0,   256,     0,     0,   256,   256,   256,   256,
       0,     0,     0,   256,     0,   122,   122,   122,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,   147,   148,   144,   144,     0,   182,   154,   155,     0,
       0,     0,     0,   122,     0,   122,     0,   122,     0,     0,
       0,     0,   256,   164,     0,     0,     0,     0,     0,     0,
     170,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,   192,   186,     0,   194,
     195,   196,   197,   198,   199,     0,   201,   203,   205,     0,
     206,     0,     0,     0,     0,     0,   186,   215,     0,     0,
     144,     0,   359,     0,     0,   220,     0,   222,     0,     0,
       0,   364,     0,     0,     0,     0,   367,     0,     0,     0,
       0,   -29,     1,     0,     0,     0,     0,     0,   -29,   -29,
       2,     0,   -29,   -29,   242,     3,   -29,     0,     0,   244,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,     0,   -29,
       0,     0,     0,     0,     0,   -29,   -29,   -29,     0,   -29,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,     0,     0,   276,   278,     0,     0,   -29,
       0,   281,     0,     0,   144,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,   -29,     0,   -29,   -29,
       0,     0,   -29,   -29,     0,     0,   -29,     0,     0,   -29,
     -29,   -29,     0,   305,   306,   307,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,    53,
       0,    80,     0,    11,    12,     0,    81,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   333,     0,   335,     0,     0,   337,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,    82,
      16,    83,    84,    85,    86,    87,   353,    18,    19,    88,
      20,     0,    21,    89,    90,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    91,    92,
      22,    11,    12,     0,    81,    13,     0,   185,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    93,    30,
      31,    94,     0,    32,    33,     0,     0,    34,     0,     0,
      35,    36,    37,     0,     0,    14,    15,    82,    16,    83,
      84,    85,    86,    87,     0,    18,    19,    88,    20,     0,
      21,    89,    90,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,    91,    92,    22,    11,
      12,     0,    81,    13,     0,   217,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,    93,    30,    31,    94,
       0,    32,    33,     0,     0,    34,     0,     0,    35,    36,
      37,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    91,    92,    22,    11,    12,     0,
      81,    13,     0,   218,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,    93,    30,    31,    94,     0,    32,
      33,     0,     0,    34,     0,     0,    35,    36,    37,     0,
       0,    14,    15,    82,    16,    83,    84,    85,    86,    87,
       0,    18,    19,    88,    20,     0,    21,    89,    90,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,    91,    92,    22,    11,    12,     0,    81,    13,
       0,   248,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,    93,    30,    31,    94,     0,    32,    33,     0,
       0,    34,     0,     0,    35,    36,    37,     0,     0,    14,
      15,    82,    16,    83,    84,    85,    86,    87,     0,    18,
      19,    88,    20,     0,    21,    89,    90,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
      91,    92,    22,    11,    12,     0,    81,    13,     0,   264,
      23,    24,    25,    26,    27,    28,     0,     0,     0,    29,
      93,    30,    31,    94,     0,    32,    33,     0,     0,    34,
       0,     0,    35,    36,    37,     0,     0,    14,    15,    82,
      16,    83,    84,    85,    86,    87,     0,    18,    19,    88,
      20,     0,    21,    89,    90,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,    91,    92,
      22,   288,     0,    11,    12,     0,    81,    13,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    93,    30,
      31,    94,     0,    32,    33,     0,     0,    34,     0,     0,
      35,    36,    37,     0,     0,     0,     0,    14,    15,    82,
      16,    83,    84,    85,    86,    87,     0,    18,    19,    88,
      20,     0,    21,    89,    90,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    91,    92,
      22,    11,    12,     0,    81,    13,     0,   343,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    93,    30,
      31,    94,     0,    32,    33,     0,     0,    34,     0,     0,
      35,    36,    37,     0,     0,    14,    15,    82,    16,    83,
      84,    85,    86,    87,     0,    18,    19,    88,    20,     0,
      21,    89,    90,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,    91,    92,    22,    11,
      12,     0,    81,    13,     0,   356,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,    93,    30,    31,    94,
       0,    32,    33,     0,     0,    34,     0,     0,    35,    36,
      37,     0,     0,    14,    15,    82,    16,    83,    84,    85,
      86,    87,     0,    18,    19,    88,    20,     0,    21,    89,
      90,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,    91,    92,    22,    11,    12,     0,
      81,    13,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,    93,    30,    31,    94,     0,    32,
      33,     0,     0,    34,     0,     0,    35,    36,    37,     0,
       0,    14,    15,    82,    16,    83,    84,    85,    86,    87,
       0,    18,    19,    88,    20,     0,    21,    89,    90,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    22,    12,     0,   -31,    13,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,    93,    30,    31,    94,     0,    32,    33,     0,
       0,    34,     0,     0,    35,    36,    37,     0,    14,    15,
       0,    16,     0,    84,     0,     0,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    22,    12,     0,     0,    13,   -31,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     9,    10,    32,    33,    11,    12,    34,     0,
      13,    35,    36,    37,     0,    14,    15,     0,    16,     0,
      84,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,    16,     0,     0,    91,    92,    22,    17,
      18,    19,     0,    20,     0,    21,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,    22,     0,    34,     0,     0,    35,    36,
      37,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,     0,     0,
      34,     0,     0,    35,    36,    37,   156,     0,     0,    57,
     108,   159,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   111,     0,   112,   113,   114,   115,   116,
     117,   118,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,   156,     0,     0,    12,     0,   159,
      13,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     119,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    58,    16,     0,    35,    36,    37,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,   202,     0,     0,    12,     0,     0,    13,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,    16,     0,    35,    36,    37,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
     204,     0,     0,    12,     0,     0,    13,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    34,    16,
       0,    35,    36,    37,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,   219,     0,
       0,    12,     0,     0,    13,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    14,    15,    34,    16,     0,    35,
      36,    37,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,   202,     0,     0,   292,
       0,     0,    13,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,    34,    16,     0,    35,    36,    37,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,   204,     0,     0,   292,     0,     0,
      13,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    34,    16,     0,    35,    36,    37,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,   219,     0,     0,   292,     0,     0,    13,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      34,    16,     0,    35,    36,    37,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,     0,     0,    34,     0,
       0,    35,    36,    37,   136,     0,    57,   108,     0,     0,
     137,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,   119,     0,    29,
       0,    30,    31,     0,     0,    32,    33,     0,     0,    58,
       0,     0,    35,    36,    37,   136,     0,    57,   108,     0,
       0,   317,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
      14,    15,     0,    16,     0,     0,     0,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,   119,     0,
      29,     0,    30,    31,     0,     0,    32,    33,     0,     0,
      58,     0,     0,    35,    36,    37,   136,     0,    57,   108,
       0,     0,   328,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,   119,
       0,    29,     0,    30,    31,     0,     0,    32,    33,     0,
       0,    58,     0,     0,    35,    36,    37,   136,     0,    57,
     108,     0,     0,   330,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   111,     0,   112,   113,   114,   115,   116,
     117,   118,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     119,     0,    29,     0,    30,    31,     0,     0,    32,    33,
       0,   136,    58,    57,   108,    35,    36,    37,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,     0,   112,
     113,   114,   115,   116,   117,   118,    14,    15,     0,    16,
       0,     0,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,   119,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    57,   108,    58,     0,   137,    35,
      36,    37,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,     0,
     112,   113,   114,   115,   116,   117,   118,    14,    15,     0,
      16,     0,     0,     0,     0,     0,     0,    18,    19,     0,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,     0,   119,     0,    29,     0,    30,
      31,     0,     0,    32,    33,    57,   108,    58,     0,     0,
      35,    36,    37,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
       0,   112,   113,   114,   115,   116,   117,   118,    14,    15,
       0,    16,     0,     0,     0,     0,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,   119,   266,    29,     0,
      30,    31,     0,     0,    32,    33,    57,   108,    58,     0,
     273,    35,    36,    37,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,     0,   119,     0,    29,
       0,    30,    31,     0,     0,    32,    33,    57,   108,    58,
       0,   311,    35,    36,    37,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
      14,    15,     0,    16,     0,     0,     0,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,   119,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    57,   108,
      58,     0,   313,    35,    36,    37,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,    14,    15,     0,    16,     0,     0,     0,     0,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,     0,   119,
       0,    29,     0,    30,    31,     0,     0,    32,    33,    57,
     108,    58,     0,   347,    35,    36,    37,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   111,     0,   112,   113,   114,   115,   116,
     117,   118,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     119,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      57,   108,    58,     0,   349,    35,    36,    37,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,   119,     0,    29,     0,    30,    31,     0,     0,    32,
      33,     0,     0,    58,     0,     0,    35,    36,    37,    57,
     108,   351,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   111,     0,   112,   113,   114,   115,   116,
     117,   118,    14,    15,     0,    16,     0,     0,     0,     0,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
     119,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      57,   108,    58,     0,   360,    35,    36,    37,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,    14,    15,     0,    16,     0,     0,     0,
       0,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,   119,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    57,   108,    58,     0,     0,    35,    36,    37,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,   111,     0,   112,   113,   114,
     115,   116,   117,   118,    14,    15,     0,    16,     0,     0,
       0,     0,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,   119,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    57,   108,    58,     0,     0,    35,    36,    37,
       0,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   108,     0,    29,     0,    30,    31,     0,
       0,    32,    33,   109,     0,    58,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,   115,   116,   117,   118,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    57,   -32,     0,    29,     0,    30,    31,     0,
       0,    32,    33,   -32,     0,    58,     0,     0,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,    57,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,   251,     0,     0,    30,    31,     0,
       0,    32,    33,     0,     0,    58,   110,   111,    35,    36,
      37,     0,     0,     0,     0,   252,    14,    15,     0,    16,
       0,     0,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    57,   253,   326,    29,     0,    30,    31,
       0,     0,    32,    33,   251,     0,    58,     0,     0,    35,
      36,    37,     0,     0,     0,     0,   110,   111,     0,     0,
       0,     0,     0,     0,     0,   252,    14,    15,     0,    16,
       0,     0,     0,     0,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,    57,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,   251,   253,     0,    29,     0,    30,    31,
       0,     0,    32,    33,     0,   110,    58,     0,     0,    35,
      36,    37,     0,     0,   252,    14,    15,     0,    16,     0,
       0,     0,     0,     0,     0,    18,    19,     0,    20,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,    13,   142,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,     0,    30,    31,     0,
       0,    32,    33,    14,    15,    58,    16,     0,    35,    36,
      37,     0,     0,    18,    19,     0,    20,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,    13,   150,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,     0,    30,    31,     0,     0,    32,
      33,    14,    15,    34,    16,     0,    35,    36,    37,     0,
       0,    18,    19,     0,    20,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,     0,     0,    57,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,   251,     0,
       0,    29,     0,    30,    31,     0,     0,    32,    33,     0,
       0,    34,     0,     0,    35,    36,    37,     0,     0,   252,
      14,    15,     0,    16,     0,     0,     0,     0,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,    13,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,    14,    15,
      58,    16,     0,    35,    36,    37,     0,     0,    18,    19,
       0,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,    13,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,    33,    14,    15,    34,    16,
       0,    35,    36,    37,     0,     0,    18,    19,     0,    20,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,    13,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,    33,    14,    15,    34,    16,     0,    35,
      36,    37,     0,     0,    18,    19,     0,    20,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,    14,    15,    34,    16,     0,    35,    36,    37,
       0,     0,    18,    19,     0,    20,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,   208,   292,     0,     0,
      13,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,    33,
      14,    15,    58,    16,     0,    35,    36,    37,     0,     0,
      18,    19,     0,    20,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,    57,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,   -32,     0,     0,
      29,     0,    30,    31,     0,     0,    32,    33,     0,     0,
      34,    57,     0,    35,    36,    37,     0,     0,   -32,    14,
      15,     0,    16,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,    16,     0,     0,
       0,     0,    22,     0,    18,    19,     0,    20,     0,    21,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,    30,    31,     0,     0,    32,    33,    22,     0,    58,
       0,     0,    35,    36,    37,    23,    24,    25,    26,    27,
      28,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,    33,     0,     0,    58,     0,     0,    35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      16,     5,    34,   166,    15,     9,    10,   177,    81,    15,
       9,    51,    52,    29,    45,   105,    32,    33,    34,    35,
      36,    37,     9,    13,   109,    69,    42,    66,    67,   336,
      86,    10,   105,    89,    10,    39,    18,    53,   123,   242,
      19,   244,    58,    19,    10,    11,    45,    37,    10,   178,
      40,   358,    68,    83,    16,    86,    86,    88,    98,    89,
      90,    11,    44,    93,   108,   109,   106,    69,   100,   159,
     251,   101,   253,   254,   255,    10,   257,     0,    12,    10,
     261,    16,   178,    99,   100,    16,   159,    86,    12,    88,
     101,   102,   103,   104,   133,     9,   107,   103,   104,    86,
      14,   107,    12,   107,    12,    12,   108,   109,   124,   125,
     126,   127,   128,   129,    53,    54,    12,    10,    10,   322,
      10,    10,   292,    16,    16,    12,    16,    16,   144,   145,
      10,   147,   148,    12,   164,    18,    16,   153,   154,   155,
     170,     9,    12,   228,   229,   326,    14,   350,   164,    92,
       9,     9,   108,   109,   170,    14,    14,    42,   107,   362,
       9,    12,   178,     9,   293,    12,   251,   296,   297,   298,
     299,    84,    12,   336,   303,   191,   192,    95,   194,   195,
     196,   197,   198,   199,    44,   201,    15,   203,    86,   205,
     206,     9,   208,   283,    18,   358,     9,   293,   237,   215,
     296,   297,   298,   299,   220,   118,   222,   303,   147,   148,
     283,    10,    79,   342,    14,   154,   155,     9,     9,   251,
      16,   253,   254,   255,    99,   257,   242,    16,   244,   261,
     320,   316,    45,    44,    16,   251,    12,   253,   254,   255,
     179,   257,   258,   259,   260,   261,   342,   320,    16,    16,
      16,    41,   188,   166,    42,   107,   272,    45,    -1,   263,
     276,   351,   278,    -1,   304,   281,    -1,   206,   207,    -1,
      -1,    -1,    -1,    86,    87,    88,    -1,   293,   351,    -1,
     296,   297,   298,   299,    -1,    -1,    16,   303,   227,   305,
     306,   307,   332,    45,   326,    -1,    -1,   110,    86,    87,
      88,    -1,    32,    33,    34,    -1,   310,    37,   221,    -1,
     326,   250,    42,   329,    -1,   331,    -1,   333,    -1,   335,
     233,   337,   110,    53,    -1,    -1,   342,    -1,    58,    -1,
     360,    -1,    -1,    -1,    86,    87,    88,   353,    68,   252,
      -1,   280,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,   307,    99,
     100,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
      -1,   324,    -1,   103,   144,   145,    -1,   147,   148,    -1,
      -1,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   134,   135,    -1,    -1,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,   194,   195,   196,   197,   198,   199,
      -1,   201,    -1,   203,    -1,   205,   206,    -1,   208,    -1,
      -1,    -1,    -1,    -1,   174,   215,   176,    -1,    -1,    -1,
     220,    -1,   222,    -1,    -1,    -1,    -1,   187,    -1,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,   254,   255,    -1,   257,   258,   259,
     260,   261,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,    -1,
      -1,   281,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,   296,   297,   298,   299,
      -1,    -1,    -1,   303,    -1,   305,   306,   307,    -1,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,   326,    70,    71,    -1,
      -1,    -1,    -1,   333,    -1,   335,    -1,   337,    -1,    -1,
      -1,    -1,   342,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   327,    -1,   112,
     113,   114,   115,   116,   117,    -1,   119,   120,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,   346,   130,    -1,    -1,
     133,    -1,   352,    -1,    -1,   138,    -1,   140,    -1,    -1,
      -1,   361,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,    -1,    -1,    -1,     7,     8,
       9,    -1,    11,    12,   167,    14,    15,    -1,    -1,   172,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   228,   229,    -1,    -1,    78,
      -1,   234,    -1,    -1,   237,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,
     109,   110,    -1,   266,   267,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,     9,    -1,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,   318,    -1,    -1,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   339,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    11,    12,    -1,    14,    15,    -1,    17,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,   109,   110,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    11,
      12,    -1,    14,    15,    -1,    17,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,   109,
     110,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    11,    12,    -1,
      14,    15,    -1,    17,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,   109,   110,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    11,    12,    -1,    14,    15,
      -1,    17,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,   109,   110,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    11,    12,    -1,    14,    15,    -1,    17,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,   108,   109,   110,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    76,    77,
      78,     9,    -1,    11,    12,    -1,    14,    15,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,   109,   110,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    11,    12,    -1,    14,    15,    -1,    17,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,   109,   110,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    11,
      12,    -1,    14,    15,    -1,    17,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,   109,
     110,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    11,    12,    -1,
      14,    15,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,   109,   110,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    12,    -1,    14,    15,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,   109,   110,    -1,    45,    46,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    12,    -1,    -1,    15,    16,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,     7,     8,   101,   102,    11,    12,   105,    -1,
      15,   108,   109,   110,    -1,    45,    46,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    -1,    -1,    76,    77,    78,    54,
      55,    56,    -1,    58,    -1,    60,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    78,    -1,   105,    -1,    -1,   108,   109,
     110,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,   108,   109,   110,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,   108,   109,   110,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,   108,   109,   110,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    45,    46,   105,    48,
      -1,   108,   109,   110,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    45,    46,   105,    48,    -1,   108,
     109,   110,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    45,    46,   105,    48,    -1,   108,   109,   110,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,   108,   109,   110,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,   108,   109,   110,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,   108,   109,   110,    10,    -1,    12,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,   108,   109,   110,    10,    -1,    12,    13,    -1,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,   108,   109,   110,    10,    -1,    12,    13,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,   109,   110,    10,    -1,    12,
      13,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      -1,    10,   105,    12,    13,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    12,    13,   105,    -1,    16,   108,
     109,   110,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      98,    -1,    -1,   101,   102,    12,    13,   105,    -1,    -1,
     108,   109,   110,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    12,    13,   105,    -1,
      16,   108,   109,   110,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    88,    89,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    98,    -1,    -1,   101,   102,    12,    13,   105,
      -1,    16,   108,   109,   110,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    12,    13,
     105,    -1,    16,   108,   109,   110,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    12,
      13,   105,    -1,    16,   108,   109,   110,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      12,    13,   105,    -1,    16,   108,   109,   110,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,   109,   110,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      12,    13,   105,    -1,    16,   108,   109,   110,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    12,    13,   105,    -1,    -1,   108,   109,   110,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    12,    13,   105,    -1,    -1,   108,   109,   110,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    23,    -1,   105,    -1,    -1,   108,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    12,    13,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    23,    -1,   105,    -1,    -1,   108,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    23,    -1,    -1,    97,    98,    -1,
      -1,   101,   102,    -1,    -1,   105,    35,    36,   108,   109,
     110,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    12,    93,    94,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    23,    -1,   105,    -1,    -1,   108,
     109,   110,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    23,    93,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    -1,    35,   105,    -1,    -1,   108,
     109,   110,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,
      -1,   101,   102,    45,    46,   105,    48,    -1,   108,   109,
     110,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,
     102,    45,    46,   105,    48,    -1,   108,   109,   110,    -1,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    23,    -1,
      -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,   109,   110,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    45,    46,
     105,    48,    -1,   108,   109,   110,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      97,    98,    -1,    -1,   101,   102,    45,    46,   105,    48,
      -1,   108,   109,   110,    -1,    -1,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    97,    98,
      -1,    -1,   101,   102,    45,    46,   105,    48,    -1,   108,
     109,   110,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    45,    46,   105,    48,    -1,   108,   109,   110,
      -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    95,    -1,    97,    98,    -1,    -1,   101,   102,
      45,    46,   105,    48,    -1,   108,   109,   110,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    23,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,   102,    -1,    -1,
     105,    12,    -1,   108,   109,   110,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    78,    -1,    55,    56,    -1,    58,    -1,    60,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    97,    98,    -1,    -1,   101,   102,    78,    -1,   105,
      -1,    -1,   108,   109,   110,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,   108,   109,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    14,   113,   128,   130,   142,     0,     7,
       8,    11,    12,    15,    45,    46,    48,    54,    55,    56,
      58,    60,    78,    86,    87,    88,    89,    90,    91,    95,
      97,    98,   101,   102,   105,   108,   109,   110,   125,   131,
     132,   134,   137,   144,   145,   155,   156,   157,   159,     9,
      14,   125,   125,   137,   138,   146,    12,    12,   105,   156,
     157,    86,    89,   123,    12,    12,    12,    12,    42,   157,
      12,    12,   156,   156,   144,   156,   157,   157,   156,     1,
       9,    14,    47,    49,    50,    51,    52,    53,    57,    61,
      62,    76,    77,    96,    99,   117,   119,   124,   125,   137,
     141,   148,   150,   154,   160,    10,   125,   128,    13,    23,
      35,    36,    38,    39,    40,    41,    42,    43,    44,    93,
     114,   115,   156,    12,    15,   101,   102,   103,   104,   107,
      69,   108,   109,    18,   154,   154,    10,    16,   116,    16,
     116,    92,    16,   135,   137,   137,    12,   137,   137,   135,
      16,   135,   156,    42,   137,   137,     9,   126,   127,    14,
     126,   149,   149,   159,   137,   149,    12,    12,   149,   149,
     137,   149,    12,     9,   151,   150,   154,    12,   136,   139,
     140,   144,   156,   157,   149,    17,   150,   153,   127,   154,
     132,    95,   137,   145,   137,   137,   137,   137,   137,   137,
     159,   137,     9,   137,     9,   137,   137,   145,    69,   156,
     156,   156,   156,   156,   156,   137,   135,    17,    17,     9,
     137,    44,   137,    15,    16,   116,    86,   158,   116,   116,
      16,    16,   156,   116,   116,     9,   127,    18,   149,   129,
     148,   159,   137,   149,   137,   150,    79,   118,    17,   143,
     138,    23,    44,    93,   114,   115,   156,   116,    13,    37,
      40,    69,   150,   131,    17,   157,    94,   116,   116,   156,
      19,   159,   137,    16,   116,   147,   137,   145,   137,   145,
     159,   137,   135,    14,    44,   147,   147,   152,     9,   150,
       9,    16,    12,   136,   145,   159,   136,   136,   136,   136,
     156,   156,   156,   136,   125,   137,   137,   137,    86,     9,
     133,    16,    16,    16,    16,    16,   116,    16,   116,    19,
      14,   127,   159,    99,    44,   138,    94,   154,    16,   116,
      16,   116,   125,   137,   145,   137,   127,   137,   147,    12,
     159,    16,   136,    17,   157,   157,   154,    16,    16,    16,
     129,    14,   122,   137,    16,    16,    17,   147,   127,   150,
      16,   121,   129,   149,   150,   147,   120,   150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   120,   119,   121,   119,   122,   119,
     123,   123,   124,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   132,   132,   132,   132,
     132,   132,   132,   133,   132,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   140,   141,   141,   142,   142,
     142,   142,   143,   143,   144,   144,   146,   145,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   151,   152,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   153,   150,   150,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   157,   157,   157,   157,   158,
     158,   158,   159,   159,   159,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     0,    12,     0,    10,     0,     8,
       1,     1,     4,     1,     2,     1,     2,     0,     1,     0,
       1,     0,     1,     1,     3,     1,     1,     4,     4,     7,
       3,     4,     4,     0,     9,     1,     3,     1,     3,     3,
       5,     3,     3,     3,     3,     3,     5,     2,     1,     1,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     4,     3,     2,     1,     1,     3,
       3,     1,     3,     0,     1,     3,     1,     1,     1,     1,
       2,     2,     1,     2,     1,     2,     0,     4,     1,     2,
       4,     4,     4,     2,     5,     2,     1,     1,     1,     2,
       2,     2,     0,     0,     9,     3,     2,     1,     4,     2,
       3,     2,     2,     3,     2,     2,     0,     3,     2,     1,
       2,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     4,     1,     3,     4,     2,     2,
       2,     2,     2,     4,     3,     2,     1,     6,     6,     3,
       6,     6,     1,     8,     8,     6,     4,     1,     6,     6,
       8,     8,     8,     6,     1,     1,     4,     1,     2,     0,
       1,     3,     1,     1,     1,     4
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
#line 98 "awkgram.y" /* yacc.c:1646  */
    { if (errorflag==0)
			winner = (Node *)stat3(PROGRAM, beginloc, (yyvsp[0].p), endloc); }
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "awkgram.y" /* yacc.c:1646  */
    { yyclearin; bracecheck(); SYNTAX("bailing out"); }
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "awkgram.y" /* yacc.c:1646  */
    {inloop++;}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "awkgram.y" /* yacc.c:1646  */
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[-9].p), notnull((yyvsp[-6].p)), (yyvsp[-3].p), (yyvsp[0].p)); }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 126 "awkgram.y" /* yacc.c:1646  */
    {inloop++;}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 127 "awkgram.y" /* yacc.c:1646  */
    { --inloop; (yyval.p) = stat4(FOR, (yyvsp[-7].p), NIL, (yyvsp[-3].p), (yyvsp[0].p)); }
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "awkgram.y" /* yacc.c:1646  */
    {inloop++;}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "awkgram.y" /* yacc.c:1646  */
    { --inloop; (yyval.p) = stat3(IN, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (yyvsp[0].p)); }
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "awkgram.y" /* yacc.c:1646  */
    { setfname((yyvsp[0].cp)); }
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "awkgram.y" /* yacc.c:1646  */
    { setfname((yyvsp[0].cp)); }
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 138 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "awkgram.y" /* yacc.c:1646  */
    { (yyval.i) = 0; }
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 155 "awkgram.y" /* yacc.c:1646  */
    { (yyval.i) = 0; }
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 166 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 167 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[0].p)); }
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 175 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = pa2stat((yyvsp[-3].p), (yyvsp[0].p), stat2(PRINT, rectonode(), NIL)); }
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 178 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = pa2stat((yyvsp[-6].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 179 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(PASTAT, NIL, (yyvsp[-1].p)); }
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 181 "awkgram.y" /* yacc.c:1646  */
    { beginloc = linkum(beginloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 183 "awkgram.y" /* yacc.c:1646  */
    { endloc = linkum(endloc, (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 184 "awkgram.y" /* yacc.c:1646  */
    {infunc++;}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 185 "awkgram.y" /* yacc.c:1646  */
    { infunc--; curfname=0; defn((Cell *)(yyvsp[-7].p), (yyvsp[-5].p), (yyvsp[-1].p)); (yyval.p) = 0; }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 190 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 195 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 201 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 203 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 205 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 206 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "awkgram.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 212 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 213 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 214 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 220 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 222 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(CONDEXPR, notnull((yyvsp[-4].p)), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BOR, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 226 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(AND, notnull((yyvsp[-2].p)), notnull((yyvsp[0].p))); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 230 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 231 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 232 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2((yyvsp[-1].i), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 233 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 235 "awkgram.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[0].p)))
			(yyval.p) = op3((yyvsp[-1].i), NIL, (yyvsp[-2].p), (Node*)makedfa(strnode((yyvsp[0].p)), 0));
		  else
			(yyval.p) = op3((yyvsp[-1].i), (Node *)1, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 239 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-2].p), makearr((yyvsp[0].p))); }
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 240 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INTEST, (yyvsp[-3].p), makearr((yyvsp[0].p))); }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "awkgram.y" /* yacc.c:1646  */
    { 
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (yyvsp[0].p), itonp((yyvsp[-2].i)), (yyvsp[-3].p)); }
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 244 "awkgram.y" /* yacc.c:1646  */
    { 
			if (safe) SYNTAX("cmd | getline is unsafe");
			else (yyval.p) = op3(GETLINE, (Node*)0, itonp((yyvsp[-1].i)), (yyvsp[-2].p)); }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 247 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CAT, (yyvsp[-1].p), (yyvsp[0].p)); }
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 253 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 254 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 259 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-2].p), (yyvsp[0].p)); }
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 263 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = rectonode(); }
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 282 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(MATCH, NIL, rectonode(), (Node*)makedfa((yyvsp[0].s), 0)); }
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 283 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 287 "awkgram.y" /* yacc.c:1646  */
    {startreg();}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 287 "awkgram.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 295 "awkgram.y" /* yacc.c:1646  */
    { 
			if (safe) SYNTAX("print | is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 298 "awkgram.y" /* yacc.c:1646  */
    {
			if (safe) SYNTAX("print >> is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 301 "awkgram.y" /* yacc.c:1646  */
    {
			if (safe) SYNTAX("print > is unsafe");
			else (yyval.p) = stat3((yyvsp[-3].i), (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 304 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat3((yyvsp[-1].i), (yyvsp[0].p), NIL, NIL); }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 305 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 306 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(DELETE, makearr((yyvsp[0].p)), 0); }
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 307 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = exptostat((yyvsp[0].p)); }
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 308 "awkgram.y" /* yacc.c:1646  */
    { yyclearin; SYNTAX("illegal statement"); }
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 317 "awkgram.y" /* yacc.c:1646  */
    { if (!inloop) SYNTAX("break illegal outside of loops");
				  (yyval.p) = stat1(BREAK, NIL); }
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 319 "awkgram.y" /* yacc.c:1646  */
    {  if (!inloop) SYNTAX("continue illegal outside of loops");
				  (yyval.p) = stat1(CONTINUE, NIL); }
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 321 "awkgram.y" /* yacc.c:1646  */
    {inloop++;}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 321 "awkgram.y" /* yacc.c:1646  */
    {--inloop;}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 322 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat2(DO, (yyvsp[-6].p), notnull((yyvsp[-2].p))); }
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 323 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(EXIT, (yyvsp[-1].p)); }
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 324 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(EXIT, NIL); }
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 326 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat3(IF, (yyvsp[-3].p), (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 327 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat3(IF, (yyvsp[-1].p), (yyvsp[0].p), NIL); }
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 328 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 329 "awkgram.y" /* yacc.c:1646  */
    { if (infunc)
				SYNTAX("next is illegal inside a function");
			  (yyval.p) = stat1(NEXT, NIL); }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 332 "awkgram.y" /* yacc.c:1646  */
    { if (infunc)
				SYNTAX("nextfile is illegal inside a function");
			  (yyval.p) = stat1(NEXTFILE, NIL); }
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 335 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(RETURN, (yyvsp[-1].p)); }
#line 3060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 336 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = stat1(RETURN, NIL); }
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 338 "awkgram.y" /* yacc.c:1646  */
    {inloop++;}
#line 3072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 338 "awkgram.y" /* yacc.c:1646  */
    { --inloop; (yyval.p) = stat2(WHILE, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 339 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = 0; }
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 344 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = linkum((yyvsp[-1].p), (yyvsp[0].p)); }
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 352 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(DIVEQ, (yyvsp[-3].p), (yyvsp[0].p)); }
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 353 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(ADD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 354 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MINUS, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 355 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MULT, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 356 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(DIVIDE, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 357 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(MOD, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 358 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(POWER, (yyvsp[-2].p), (yyvsp[0].p)); }
#line 3132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 359 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(UMINUS, (yyvsp[0].p)); }
#line 3138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 360 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[0].p); }
#line 3144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 361 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(NOT, notnull((yyvsp[0].p))); }
#line 3150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 362 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[-2].i)), rectonode()); }
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 363 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[-3].i)), (yyvsp[-1].p)); }
#line 3162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 364 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(BLTIN, itonp((yyvsp[0].i)), rectonode()); }
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 365 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CALL, celltonode((yyvsp[-2].cp),CVAR), NIL); }
#line 3174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 366 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(CALL, celltonode((yyvsp[-3].cp),CVAR), (yyvsp[-1].p)); }
#line 3180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 367 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(CLOSE, (yyvsp[0].p)); }
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 368 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(PREDECR, (yyvsp[0].p)); }
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 369 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(PREINCR, (yyvsp[0].p)); }
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 370 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(POSTDECR, (yyvsp[-1].p)); }
#line 3204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 371 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(POSTINCR, (yyvsp[-1].p)); }
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 372 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (yyvsp[-2].p), itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 373 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, NIL, itonp((yyvsp[-1].i)), (yyvsp[0].p)); }
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 374 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, (yyvsp[0].p), NIL, NIL); }
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 375 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(GETLINE, NIL, NIL, NIL); }
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 377 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(INDEX, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 379 "awkgram.y" /* yacc.c:1646  */
    { SYNTAX("index() doesn't permit regular expressions");
		  (yyval.p) = op2(INDEX, (yyvsp[-3].p), (Node*)(yyvsp[-1].s)); }
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 381 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = (yyvsp[-1].p); }
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 383 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa((yyvsp[-1].s), 1)); }
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 385 "awkgram.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-1].p)))
			(yyval.p) = op3(MATCHFCN, NIL, (yyvsp[-3].p), (Node*)makedfa(strnode((yyvsp[-1].p)), 1));
		  else
			(yyval.p) = op3(MATCHFCN, (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 389 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CCON); }
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 391 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (yyvsp[-1].p), (Node*)STRING); }
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 393 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-5].p), makearr((yyvsp[-3].p)), (Node*)makedfa((yyvsp[-1].s), 1), (Node *)REGEXPR); }
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 395 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op4(SPLIT, (yyvsp[-3].p), makearr((yyvsp[-1].p)), NIL, (Node*)STRING); }
#line 3292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 396 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1((yyvsp[-3].i), (yyvsp[-1].p)); }
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 397 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CCON); }
#line 3304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 399 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa((yyvsp[-3].s), 1), (yyvsp[-1].p), rectonode()); }
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 401 "awkgram.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-3].p)))
			(yyval.p) = op4((yyvsp[-5].i), NIL, (Node*)makedfa(strnode((yyvsp[-3].p)), 1), (yyvsp[-1].p), rectonode());
		  else
			(yyval.p) = op4((yyvsp[-5].i), (Node *)1, (yyvsp[-3].p), (yyvsp[-1].p), rectonode()); }
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 406 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa((yyvsp[-5].s), 1), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 408 "awkgram.y" /* yacc.c:1646  */
    { if (constnode((yyvsp[-5].p)))
			(yyval.p) = op4((yyvsp[-7].i), NIL, (Node*)makedfa(strnode((yyvsp[-5].p)), 1), (yyvsp[-3].p), (yyvsp[-1].p));
		  else
			(yyval.p) = op4((yyvsp[-7].i), (Node *)1, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 413 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-5].p), (yyvsp[-3].p), (yyvsp[-1].p)); }
#line 3340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 415 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op3(SUBSTR, (yyvsp[-3].p), (yyvsp[-1].p), NIL); }
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 421 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op2(ARRAY, makearr((yyvsp[-3].p)), (yyvsp[-1].p)); }
#line 3352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 422 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(INDIRECT, celltonode((yyvsp[0].cp), CVAR)); }
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 423 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(INDIRECT, (yyvsp[0].p)); }
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 427 "awkgram.y" /* yacc.c:1646  */
    { arglist = (yyval.p) = 0; }
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 428 "awkgram.y" /* yacc.c:1646  */
    { arglist = (yyval.p) = celltonode((yyvsp[0].cp),CVAR); }
#line 3376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 429 "awkgram.y" /* yacc.c:1646  */
    {
			checkdup((yyvsp[-2].p), (yyvsp[0].cp));
			arglist = (yyval.p) = linkum((yyvsp[-2].p),celltonode((yyvsp[0].cp),CVAR)); }
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 435 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = celltonode((yyvsp[0].cp), CVAR); }
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 436 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(ARG, itonp((yyvsp[0].i))); }
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 437 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = op1(VARNF, (Node *) (yyvsp[0].cp)); }
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 442 "awkgram.y" /* yacc.c:1646  */
    { (yyval.p) = notnull((yyvsp[-1].p)); }
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3412 "y.tab.c" /* yacc.c:1646  */
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
#line 445 "awkgram.y" /* yacc.c:1906  */


void setfname(Cell *p)
{
	if (isarr(p))
		SYNTAX("%s is an array, not a function", p->nval);
	else if (isfcn(p))
		SYNTAX("you can't define function %s more than once", p->nval);
	curfname = p->nval;
}

int constnode(Node *p)
{
	return isvalue(p) && ((Cell *) (p->narg[0]))->csub == CCON;
}

char *strnode(Node *p)
{
	return ((Cell *)(p->narg[0]))->sval;
}

Node *notnull(Node *n)
{
	switch (n->nobj) {
	case LE: case LT: case EQ: case NE: case GT: case GE:
	case BOR: case AND: case NOT:
		return n;
	default:
		return op2(NE, n, nullnode);
	}
}

void checkdup(Node *vl, Cell *cp)	/* check if name already in list */
{
	char *s = cp->nval;
	for ( ; vl; vl = vl->nnext) {
		if (strcmp(s, ((Cell *)(vl->narg[0]))->nval) == 0) {
			SYNTAX("duplicate argument %s", s);
			break;
		}
	}
}
