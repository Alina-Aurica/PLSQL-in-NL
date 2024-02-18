/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "proiect.y"
 
   /*
    Translator din limbaj PL-SQL in limbaj natural. 
    Proiectul s-a concentrat pe ceea ce difera dintre PL-SQL si SQL
   */
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    //functie pentru a elimina anumite caractere
    char* substr(const char *src, int m, int n); 
    //declararea unor variabile auxiliare -- acestea se initializeaza in dreptul tipurilor de instructiuni care le folosesc
    char str_create[100]; //utilizat in concatenarile de la instructiunile de tip create
    char str_where[100];
    char str_insert[100];
    char str_insert_values[100];
    char str_set[100];
    char str_select[100];
    char str_ifCond[100];
    char str_thenExp[100];
    char str_elseExp[100];
    char str_forVar[100];
    char str_forExp[100];
    char str_inExp[100];
    char str_inVar[100];
    char str_inVar1[100];
    char str_isVar[100];
    char str_beginVar[100];
    char str_exceptionVar[100];
    char str_then1Exp[100];
    char str_baiio[100];
    char str_iouodd[100];
    char str_ferr[100];
    char str_cursor[100];

    char aux[50];
    char aux1[50];
    int poz=0;  

#line 109 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    CREATE = 258,
    DROP = 259,
    DELETE = 260,
    INSERT = 261,
    INTO = 262,
    VALUES = 263,
    WHERE = 264,
    TABLE = 265,
    WORD = 266,
    AND = 267,
    OR = 268,
    ALTER = 269,
    COLUMN = 270,
    MODIFY = 271,
    RENAME = 272,
    ADD = 273,
    TO = 274,
    UPDATE = 275,
    IF = 276,
    THEN = 277,
    END = 278,
    SET = 279,
    EQ = 280,
    LTE = 281,
    GTE = 282,
    NQ = 283,
    ELSE = 284,
    FOR = 285,
    LOOP = 286,
    REVERSE = 287,
    IN = 288,
    SELECT = 289,
    FROM = 290,
    ALL = 291,
    PROCEDURE = 292,
    IS = 293,
    EXCEPTION = 294,
    OTHERS = 295,
    BEGINN = 296,
    REPLACE = 297,
    WHEN = 298,
    WHILE = 299,
    CASE = 300,
    TRIGGER = 301,
    OF = 302,
    AFTER = 303,
    INSTEAD = 304,
    EACH = 305,
    DECLARE = 306,
    ON = 307,
    ROW = 308,
    BEFORE = 309,
    CURSOR = 310,
    COMMIT = 311,
    CLOSE = 312,
    OPEN = 313,
    FETCH = 314
  };
#endif
/* Tokens.  */
#define CREATE 258
#define DROP 259
#define DELETE 260
#define INSERT 261
#define INTO 262
#define VALUES 263
#define WHERE 264
#define TABLE 265
#define WORD 266
#define AND 267
#define OR 268
#define ALTER 269
#define COLUMN 270
#define MODIFY 271
#define RENAME 272
#define ADD 273
#define TO 274
#define UPDATE 275
#define IF 276
#define THEN 277
#define END 278
#define SET 279
#define EQ 280
#define LTE 281
#define GTE 282
#define NQ 283
#define ELSE 284
#define FOR 285
#define LOOP 286
#define REVERSE 287
#define IN 288
#define SELECT 289
#define FROM 290
#define ALL 291
#define PROCEDURE 292
#define IS 293
#define EXCEPTION 294
#define OTHERS 295
#define BEGINN 296
#define REPLACE 297
#define WHEN 298
#define WHILE 299
#define CASE 300
#define TRIGGER 301
#define OF 302
#define AFTER 303
#define INSTEAD 304
#define EACH 305
#define DECLARE 306
#define ON 307
#define ROW 308
#define BEFORE 309
#define CURSOR 310
#define COMMIT 311
#define CLOSE 312
#define OPEN 313
#define FETCH 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "proiect.y"
char *word;

#line 279 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   359

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    60,     2,     2,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    62,
      66,    64,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    68,    75,    76,    81,    87,    88,    94,
     101,   109,   115,   125,   128,   132,   136,   140,   146,   147,
     150,   151,   152,   153,   156,   157,   158,   159,   162,   166,
     172,   181,   193,   212,   232,   235,   236,   237,   238,   239,
     240,   243,   244,   247,   251,   252,   255,   261,   269,   272,
     275,   278,   283,   287,   296,   300,   304,   318,   324,   330,
     334,   337,   366,   370,   375,   380,   385,   390,   395,   400,
     406,   414,   419,   422,   427,   430,   435,   438,   445,   448,
     453,   456,   461,   464,   470,   475,   480,   485,   490,   495,
     500,   506,   514,   523,   526,   535,   542,   545,   546,   550,
     555,   560,   561,   564,   570,   576
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "DROP", "DELETE", "INSERT",
  "INTO", "VALUES", "WHERE", "TABLE", "WORD", "AND", "OR", "ALTER",
  "COLUMN", "MODIFY", "RENAME", "ADD", "TO", "UPDATE", "IF", "THEN", "END",
  "SET", "EQ", "LTE", "GTE", "NQ", "ELSE", "FOR", "LOOP", "REVERSE", "IN",
  "SELECT", "FROM", "ALL", "PROCEDURE", "IS", "EXCEPTION", "OTHERS",
  "BEGINN", "REPLACE", "WHEN", "WHILE", "CASE", "TRIGGER", "OF", "AFTER",
  "INSTEAD", "EACH", "DECLARE", "ON", "ROW", "BEFORE", "CURSOR", "COMMIT",
  "CLOSE", "OPEN", "FETCH", "')'", "'('", "';'", "','", "'='", "'>'",
  "'<'", "'['", "']'", "'{'", "'}'", "$accept", "instruction", "create",
  "str_fer", "str_baio", "str_iouod", "drop", "delete", "insert", "where",
  "alter", "update", "set", "iff", "casee", "when", "whilee", "foor",
  "select", "wordsSelect", "wordsforVar", "wordsInVar", "wordsCondition",
  "wordsExpression", "thenExpression", "elseExpression", "wordsSet",
  "wordsInsert", "wordsInsertValues", "wordsWhere", "wordsCreate",
  "wordsIs", "wordsBegin", "wordsCursor", "wordsException", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      41,    40,    59,    44,    61,    62,    60,    91,    93,   123,
     125
};
# endif

#define YYPACT_NINF (-231)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -231,    76,  -231,   144,     7,   -27,    18,    20,     9,    32,
      97,    88,    32,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,   108,    60,   134,   136,   147,   157,
     167,   131,    66,    14,  -231,    80,  -231,    91,    -3,    99,
     118,   105,   119,   120,     0,     3,   121,   169,     4,   172,
     173,   174,   175,   176,   177,    32,    32,   178,    89,   179,
     180,   181,   182,    97,   183,   178,   184,   185,   187,  -231,
    -231,   188,  -231,   138,   140,   191,   189,   190,    94,   192,
     195,   139,   145,  -231,   148,  -231,  -231,  -231,  -231,  -231,
    -231,   158,   158,   149,     8,  -231,   198,   186,   193,     5,
     194,     6,   170,  -231,    84,   201,    96,   153,    95,    22,
     160,  -231,   204,  -231,   100,   205,   207,   208,   209,   210,
     211,   212,   169,  -231,  -231,   203,   214,   178,   196,   178,
     215,  -231,   168,   220,  -231,   171,   221,    85,   206,  -231,
     197,   184,   184,  -231,   199,  -231,    98,   223,   224,   225,
     227,   228,   229,   188,   188,  -231,   102,   233,   191,   200,
     231,   202,   232,   226,   213,  -231,  -231,   216,   217,   125,
     178,   129,   235,  -231,   235,  -231,   230,   236,   170,   218,
    -231,  -231,   104,  -231,  -231,  -231,  -231,    25,  -231,  -231,
    -231,  -231,  -231,  -231,   160,   160,   219,   204,   222,  -231,
    -231,   234,  -231,   237,   239,  -231,  -231,  -231,   240,   214,
     130,   238,   241,   242,   243,   244,   178,   245,  -231,   246,
      98,   247,  -231,  -231,   204,  -231,  -231,   248,   249,   251,
     250,  -231,  -231,   252,   253,   178,   254,    28,   257,   255,
     106,  -231,  -231,   256,  -231,  -231,   260,   261,   262,    10,
     258,   259,   264,   263,  -231,   265,   266,   267,    12,    28,
      88,   268,   269,   275,  -231,  -231,  -231,  -231,   270,   276,
     277,     1,    -2,  -231,  -231,   272,  -231,   271,   273,   274,
      12,    11,    28,   278,  -231,   279,    13,    17,   280,   286,
      12,    12,   283,   282,    -5,   284,   281,    -7,   285,   282,
     287,  -231,   288,   282,  -231,    55,   292,  -231,  -231,   289,
     291,  -231,   290,   293,   295,   304,   294,  -231
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      13,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     5,     6,     7,     8,     9,
      12,    11,    10,     3,     0,     0,     0,     0,     0,     0,
       0,     0,    62,     0,    60,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    42,     0,    63,    66,    67,    68,    65,
      64,    69,    70,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,    23,     0,
      34,    30,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    71,     0,     0,    72,     0,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,    92,
       0,     0,     0,    21,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,     0,     0,     0,
       0,     0,     0,    55,     0,    56,     0,     0,    48,     0,
      14,    93,     0,    22,    26,    24,    25,     0,    87,    88,
      89,    83,    84,    85,    90,    91,     0,     0,     0,    80,
      36,     0,    40,     0,     0,    35,    44,    75,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,    33,    82,     0,    38,    39,     0,     0,     0,
       0,    53,    57,     0,    71,    74,     0,     0,    27,    19,
       0,    37,    45,     0,    50,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    32,    46,    94,   103,     0,     0,
      97,     0,     0,    95,    18,     0,   100,     0,     0,     0,
       0,   101,     0,     0,    98,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,    16,     0,     0,    15,   105,     0,
       0,    17,     0,     0,     0,     0,     0,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,  -231,  -231,    31,  -231,  -231,   -62,   -45,
    -231,  -231,  -231,   -53,  -231,   154,  -231,  -231,    -1,   -63,
     296,   159,    29,   -55,  -231,   137,   135,   107,  -108,    21,
      35,  -230,  -157,  -231,  -153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,   252,   146,   187,    14,    15,    16,    73,
      17,    18,    48,    19,    20,   178,    21,    22,   270,    38,
      35,    97,    33,   127,   217,   209,    82,   114,   156,   110,
     106,   259,   281,   250,   297
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   103,    94,    84,    61,    61,   268,   249,    28,    71,
     104,    74,   268,    71,    71,    71,   302,    26,   298,    93,
      31,   247,   268,   268,   268,    29,    55,    56,   247,   260,
      30,   125,    62,    62,   299,   260,    57,   126,   220,   247,
     279,    39,    63,    32,    27,   260,   260,   260,   147,   148,
     149,   258,   287,   269,   132,   303,   135,   280,   291,   269,
      64,    64,    72,   280,    75,   248,    83,   131,   134,   269,
     269,   269,   248,   280,   171,   290,     2,   221,   309,     3,
       4,     5,     6,   248,    91,    92,   150,   151,   152,   223,
       7,    49,    50,    51,    52,    93,     8,     9,    59,    36,
      95,   271,    41,   184,   185,   117,    10,   138,    34,   118,
      11,    55,    56,    58,   177,   210,   240,   303,   186,    40,
      12,    96,   216,   286,    37,    76,    60,   212,   136,   213,
      65,    53,    54,   286,   294,    77,   168,    78,    79,    80,
      93,    93,    67,   143,   144,    42,   305,    43,   208,   145,
     308,    68,   211,   229,    24,    47,   140,    25,    44,   141,
     157,   235,   196,   158,   219,   197,   253,   141,    45,   197,
      55,    56,   153,   154,   194,   195,   181,   182,    46,    66,
      81,    69,    70,    85,    86,    87,    88,    89,    90,    93,
      98,    99,   100,   101,    36,   105,   107,   272,   108,   109,
     111,   112,   113,   121,   115,   116,   120,   119,   122,    95,
     123,   124,   139,   136,   142,   155,   159,   129,   160,   161,
     162,   163,   164,   165,   167,   168,   172,   170,   130,   133,
     173,   174,   176,   175,   188,   189,   190,   179,   191,   192,
     193,   198,   201,   203,    71,   204,   183,   215,   312,   261,
     227,   238,   214,   310,   233,   128,   137,   166,   239,   180,
       0,   228,   200,   169,   202,   199,     0,     0,   236,   230,
     220,   255,   256,   257,     0,   205,   -73,     0,   206,   207,
     218,   222,   243,   224,   237,   251,   275,   277,   278,   246,
     295,   292,   260,   296,     0,   300,   225,     6,     0,   226,
       0,     0,     0,   231,   232,   267,   234,   263,   293,   262,
     241,   242,   244,     9,   245,   316,     0,   285,   254,   289,
       0,     0,   274,   282,     0,   264,     0,   265,   266,     0,
     273,     0,   276,   283,     0,   284,     0,   288,     0,     0,
       0,     0,     0,   301,     0,     0,   313,   304,     0,   306,
     307,   311,   315,     0,     0,   314,   317,     0,     0,   102
};

static const yytype_int16 yycheck[] =
{
       1,    64,    57,    48,     7,     7,    11,   237,    35,     9,
      65,     8,    11,     9,     9,     9,    23,    10,    23,    11,
      11,    11,    11,    11,    11,     7,    12,    13,    11,    34,
      10,    23,    35,    35,    39,    34,    22,    29,    13,    11,
      39,    12,    45,    11,    37,    34,    34,    34,    26,    27,
      28,    41,   282,    58,    99,    62,   101,    62,    41,    58,
      63,    63,    62,    62,    61,    55,    62,    62,    62,    58,
      58,    58,    55,    62,   129,    62,     0,    52,    23,     3,
       4,     5,     6,    55,    55,    56,    64,    65,    66,   197,
      14,    25,    26,    27,    28,    11,    20,    21,     7,    11,
      11,   258,    42,     5,     6,    11,    30,    23,    11,    15,
      34,    12,    13,    33,    29,   170,   224,    62,    20,    11,
      44,    32,   177,   280,    36,     4,    35,   172,    43,   174,
      31,    65,    66,   290,   291,    14,    11,    16,    17,    18,
      11,    11,    37,    48,    49,    11,   299,    11,    23,    54,
     303,    46,    23,    23,    10,    24,    60,    13,    11,    63,
      60,   216,    60,    63,    60,    63,    60,    63,    11,    63,
      12,    13,    12,    13,   153,   154,   141,   142,    11,    61,
      11,    62,    62,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,   260,    11,    11,
      62,    61,    11,    64,    15,    15,    11,    15,    63,    11,
      62,    62,    11,    43,    61,    11,    11,    31,    11,    11,
      11,    11,    11,    11,    21,    11,    11,    31,    35,    35,
      62,    11,    11,    62,    11,    11,    11,    31,    11,    11,
      11,     8,    11,    11,     9,    19,    47,    11,   310,   250,
      11,   220,    22,   306,    11,    96,   102,   122,    11,    62,
      -1,    21,    62,   126,    62,   158,    -1,    -1,    23,    31,
      13,    11,    11,    11,    -1,    62,    23,    -1,    62,    62,
      62,    62,    31,    61,    38,    30,    11,    11,    11,    35,
       7,    11,    34,    11,    -1,    11,    62,     6,    -1,    62,
      -1,    -1,    -1,    62,    62,    38,    62,    43,    22,    50,
      62,    62,    62,    21,    62,    11,    -1,    43,    62,    40,
      -1,    -1,    53,    51,    -1,    62,    -1,    62,    62,    -1,
      62,    -1,    62,    62,    -1,    62,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    56,    62,    -1,    62,
      62,    62,    57,    -1,    -1,    62,    62,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,     0,     3,     4,     5,     6,    14,    20,    21,
      30,    34,    44,    73,    77,    78,    79,    81,    82,    84,
      85,    87,    88,    89,    10,    13,    10,    37,    35,     7,
      10,    11,    11,    93,    11,    91,    11,    36,    90,    93,
      11,    42,    11,    11,    11,    11,    11,    24,    83,    25,
      26,    27,    28,    65,    66,    12,    13,    22,    33,     7,
      35,     7,    35,    45,    63,    31,    61,    37,    46,    62,
      62,     9,    62,    80,     8,    61,     4,    14,    16,    17,
      18,    11,    97,    62,    80,    11,    11,    11,    11,    11,
      11,    93,    93,    11,    94,    11,    32,    92,    11,    11,
      11,    11,    91,    90,    94,    11,   101,    11,    11,    11,
     100,    62,    61,    11,    98,    15,    15,    11,    15,    15,
      11,    64,    63,    62,    62,    23,    29,    94,    92,    31,
      35,    62,    80,    35,    62,    80,    43,    86,    23,    11,
      60,    63,    61,    48,    49,    54,    75,    26,    27,    28,
      64,    65,    66,    12,    13,    11,    99,    60,    63,    11,
      11,    11,    11,    11,    11,    11,    97,    21,    11,    96,
      31,    94,    11,    62,    11,    62,    11,    29,    86,    31,
      62,   101,   101,    47,     5,     6,    20,    76,    11,    11,
      11,    11,    11,    11,   100,   100,    60,    63,     8,    98,
      62,    11,    62,    11,    19,    62,    62,    62,    23,    96,
      94,    23,    80,    80,    22,    11,    94,    95,    62,    60,
      13,    52,    62,    99,    61,    62,    62,    11,    21,    23,
      31,    62,    62,    11,    62,    94,    23,    38,    76,    11,
      99,    62,    62,    31,    62,    62,    35,    11,    55,   102,
     104,    30,    74,    60,    62,    11,    11,    11,    41,   102,
      34,    89,    50,    43,    62,    62,    62,    38,    11,    58,
      89,   103,    90,    62,    53,    11,    62,    11,    11,    39,
      62,   103,    51,    62,    62,    43,   103,   102,    59,    40,
      62,    41,    11,    22,   103,     7,    11,   105,    23,    39,
      11,    62,    23,    62,    62,   105,    62,    62,   105,    23,
      84,    62,    79,    56,    62,    57,    11,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    84,    84,    85,    86,    86,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   103,
     103,   103,   103,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     7,    19,    18,    20,     3,     0,
       1,     1,     2,     0,     1,     1,     1,     3,     4,     4,
       5,     4,    11,     8,     2,     7,     7,     9,     8,     8,
       7,     5,     4,     2,     7,     9,    11,     5,     2,     7,
       9,    10,     5,     8,     5,     6,     6,     8,     1,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     2,     1,     3,    15,
       2,     2,     4,     3,     2,     3
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
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
  case 2:
#line 58 "proiect.y"
                                                      {
                                                       // instructiuni de tip create: table, trigger, procedure
                                                       // trigger-le si procedure-ile sunt specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_exceptionVar, ""); 
                                                       strcpy(str_beginVar, ""); 
                                                       strcpy(str_isVar, ""); 
                                                       strcpy(str_create, ""); 
                                                       strcpy(str_cursor, "");
                                                       }
#line 1675 "y.tab.c"
    break;

  case 3:
#line 68 "proiect.y"
                                                      {
                                                       // instructiuni de tip select: select all cu si fara clauza WHERE, select columns cu si fara clauza WHERE
                                                       // specific PL-SQL: select into variable -- rezultatul de la select va fi retinut intr-o anumita variabila
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, ""); 
                                                       strcpy(str_select, "");
                                                      }
#line 1687 "y.tab.c"
    break;

  case 4:
#line 75 "proiect.y"
                                                      { /* instructiune de tip drop: table, procedure - cea mai usoara instructiune in PL-SQL */ }
#line 1693 "y.tab.c"
    break;

  case 5:
#line 76 "proiect.y"
                                                      {
                                                       // instructiuni de tip delete: table
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, "");
                                                      }
#line 1703 "y.tab.c"
    break;

  case 6:
#line 81 "proiect.y"
                                                      {
                                                       // instructiuni de tip insert: in table
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_insert, ""); 
                                                       strcpy(str_insert_values, "");
                                                      }
#line 1714 "y.tab.c"
    break;

  case 7:
#line 87 "proiect.y"
                                                      { /* instructiuni de tip alter table*/}
#line 1720 "y.tab.c"
    break;

  case 8:
#line 88 "proiect.y"
                                                      {
                                                       // instructiuni de tip update: table - cu si fara clauza where
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_where, ""); 
                                                       strcpy(str_set, "");
                                                      }
#line 1731 "y.tab.c"
    break;

  case 9:
#line 94 "proiect.y"
                                                      {
                                                       // instructiuni de tip if - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_ifCond, ""); 
                                                       strcpy(str_thenExp, "");
                                                       strcpy(str_elseExp, "");
                                                      }
#line 1743 "y.tab.c"
    break;

  case 10:
#line 101 "proiect.y"
                                                      {
                                                       // instructiuni de tip for - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_forVar, ""); 
                                                       strcpy(str_inVar, "");
                                                       strcpy(str_inVar1, ""); 
                                                       strcpy(str_thenExp, "");
                                                      }
#line 1756 "y.tab.c"
    break;

  case 11:
#line 109 "proiect.y"
                                                      {
                                                       // instructiuni de tip while - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_forVar, ""); 
                                                       strcpy(str_thenExp, "");
                                                      }
#line 1767 "y.tab.c"
    break;

  case 12:
#line 115 "proiect.y"
                                                     {
                                                       // instructiuni de tip case - specifice PL-SQL
                                                       // initializare variabile pe care le vom folosi pentru concatenari
                                                       strcpy(str_select, ""); 
                                                       strcpy(str_forVar, "");
                                                       strcpy(str_inVar, "");
                                                       strcpy(str_thenExp, "");
                                                       strcpy(str_then1Exp, "");
                                                       
                                                      }
#line 1782 "y.tab.c"
    break;

  case 14:
#line 128 "proiect.y"
                                                                                                                                                            { 
                                                                                                                                                              // crearea unui table 
                                                                                                                                                              printf("Create the table named %s that has the following columns, respectively date types: %s.\n", (yyvsp[-4].word), str_create);
                                                                                                                                                            }
#line 1791 "y.tab.c"
    break;

  case 15:
#line 132 "proiect.y"
                                                                                                                                                            {
                                                                                                                                                              // crearea unei procedure           
                                                                                                                                                              printf("Create or replace a procedure called %s with the following parameters: %s. Inside it, declare the local variables: %s, and inside the body %s. If there is an exception then %s.\n", (yyvsp[-14].word), (yyvsp[-12].word), str_isVar, str_beginVar, str_exceptionVar);
                                                                                                                                                            }
#line 1800 "y.tab.c"
    break;

  case 16:
#line 136 "proiect.y"
                                                                                                                                                            { 
                                                                                                                                                              // crearea unui trigger fara caz de exceptie
                                                                                                                                                              printf("Create or replace trigger %s, %s, %s on %s, %s when %s declare %s, begin %s.\n ", (yyvsp[-13].word), str_baiio, str_iouodd, (yyvsp[-9].word), str_ferr, (yyvsp[-6].word), str_isVar, str_beginVar);                     
                                                                                                                                                            }
#line 1809 "y.tab.c"
    break;

  case 17:
#line 140 "proiect.y"
                                                                                                                                                            { 
                                                                                                                                                              // crearea unui trigger cu caz de exceptie
                                                                                                                                                              printf("Create or replace trigger %s, %s, %s on %s, %s when %s declare %s, begin %s except %s .\n ", (yyvsp[-15].word), str_baiio, str_iouodd, (yyvsp[-11].word), str_ferr, (yyvsp[-8].word), str_isVar, str_beginVar, str_exceptionVar);                     
                                                                                                                                                            }
#line 1818 "y.tab.c"
    break;

  case 18:
#line 146 "proiect.y"
                                                         { strcat(str_ferr, "FOR EACH ROW ");}
#line 1824 "y.tab.c"
    break;

  case 20:
#line 150 "proiect.y"
                                                         { strcat(str_baiio, "BEFORE ");}
#line 1830 "y.tab.c"
    break;

  case 21:
#line 151 "proiect.y"
                                                         { strcat(str_baiio, "AFTER ");}
#line 1836 "y.tab.c"
    break;

  case 22:
#line 152 "proiect.y"
                                                         { strcat(str_baiio, "INSTEAD OF ");}
#line 1842 "y.tab.c"
    break;

  case 23:
#line 153 "proiect.y"
                                                         { strcat(str_baiio, "");}
#line 1848 "y.tab.c"
    break;

  case 24:
#line 156 "proiect.y"
                                                         { strcat(str_iouodd, "INSERT ");}
#line 1854 "y.tab.c"
    break;

  case 25:
#line 157 "proiect.y"
                                                         { strcat(str_iouodd, "UPDATE ");}
#line 1860 "y.tab.c"
    break;

  case 26:
#line 158 "proiect.y"
                                                         { strcat(str_iouodd, "DELETE ");}
#line 1866 "y.tab.c"
    break;

  case 27:
#line 159 "proiect.y"
                                                         { /* pentru multiplicitatea variantelor de triggere */}
#line 1872 "y.tab.c"
    break;

  case 28:
#line 162 "proiect.y"
                                                     { 
                                                      // stergerea tabelului
                                                      printf("Delete the table named %s.\n", (yyvsp[-1].word));
                                                     }
#line 1881 "y.tab.c"
    break;

  case 29:
#line 166 "proiect.y"
                                                     { 
                                                      // stergerea procedurii
                                                      printf("Delete the procedure named %s.\n", (yyvsp[-1].word));
                                                     }
#line 1890 "y.tab.c"
    break;

  case 30:
#line 172 "proiect.y"
                                                     {  // stergerea tuturor elementelor unui tabel, cu clauza where
                                                        // conversie din upperCase in lowerCase
                                                        char strAux[100];
                                                        for(int i = 0; i < strlen((yyvsp[-2].word)); i++){ 
                                                            char c = tolower((yyvsp[-2].word)[i]);
                                                            strAux[i] = c;
                                                        }
                                                        printf("Delete all %s who have %s from the table.\n", strAux, str_where);
                                                     }
#line 1904 "y.tab.c"
    break;

  case 31:
#line 181 "proiect.y"
                                                     {  
                                                        // stergerea tuturor elementelor unui tabel, cu clauza where
                                                        // conversie din upperCase in lowerCase
                                                        char strAux[100];
                                                        for(int i = 0; i < strlen((yyvsp[-1].word)); i++){
                                                            char c = tolower((yyvsp[-1].word)[i]);
                                                            strAux[i] = c;
                                                        }
                                                        printf("Delete all %s from the table.\n", strAux);
                                                     }
#line 1919 "y.tab.c"
    break;

  case 32:
#line 193 "proiect.y"
                                                                                             { 
                                                                                               // instructiunea insert cu denumirea coloanelor in clauza
                                                                                               // conversie din upperCase in lowerCase
                                                                                               char strAux[100];
                                                                                               for(int i = 0; i < strlen((yyvsp[-8].word)); i++){
                                                                                                    char c = tolower((yyvsp[-8].word)[i]);
                                                                                                    strAux[i] = c;
                                                                                               }
                                                                                               
                                                                                               // eliminarea pluralului
                                                                                               if(strAux[strlen(strAux) - 1] == 's' && strAux[strlen(strAux) - 2] != 's'){
                                                                                                    char *s = substr(strAux, 0, strlen((yyvsp[-8].word)) - 1);
                                                                                                    printf("Add the following %s to the table: %s.\n", s, str_insert_values);
                                                                                               }
                                                                                               else
                                                                                               {
                                                                                                    printf("Add the following %s to the table: %s.\n", (yyvsp[-8].word), str_insert_values);
                                                                                               }
                                                                                             }
#line 1943 "y.tab.c"
    break;

  case 33:
#line 212 "proiect.y"
                                                                                             { 
                                                                                              // instructiunea insert fara denumirea coloanelor in clauza
                                                                                               char strAux[100];
                                                                                               for(int i = 0; i < strlen((yyvsp[-5].word)); i++){
                                                                                                    char c = tolower((yyvsp[-5].word)[i]);
                                                                                                    strAux[i] = c;
                                                                                               }
                                                                                               
                                                                                               // eliminarea pluralului
                                                                                               if(strAux[strlen(strAux) - 1] == 's' && strAux[strlen(strAux) - 2] != 's'){
                                                                                                    char *s = substr(strAux, 0, strlen((yyvsp[-5].word)) - 1);
                                                                                                    printf("Add the following %s to the table: %s.\n", s, str_insert_values);
                                                                                               }
                                                                                               else
                                                                                               {
                                                                                                    printf("Add the following %s to the table: %s.\n", (yyvsp[-5].word), str_insert_values);
                                                                                               }
                                                                                             }
#line 1966 "y.tab.c"
    break;

  case 34:
#line 232 "proiect.y"
                                                     { }
#line 1972 "y.tab.c"
    break;

  case 35:
#line 235 "proiect.y"
                                                         { printf("Add to the %s table the column with the name %s and the data type %s.\n", (yyvsp[-4].word), (yyvsp[-2].word), (yyvsp[-1].word));}
#line 1978 "y.tab.c"
    break;

  case 36:
#line 236 "proiect.y"
                                                         { printf("Delete column %s from table %s.\n", (yyvsp[-1].word), (yyvsp[-4].word));}
#line 1984 "y.tab.c"
    break;

  case 37:
#line 237 "proiect.y"
                                                         { printf("Rename column %s with name %s from table %s.\n", (yyvsp[-3].word), (yyvsp[-1].word), (yyvsp[-6].word));}
#line 1990 "y.tab.c"
    break;

  case 38:
#line 238 "proiect.y"
                                                         { printf("Change the data type of column %s to %s in table %s.\n", (yyvsp[-2].word), (yyvsp[-1].word), (yyvsp[-5].word));}
#line 1996 "y.tab.c"
    break;

  case 39:
#line 239 "proiect.y"
                                                         { printf("Change the data type of column %s to %s in table %s.\n", (yyvsp[-2].word), (yyvsp[-1].word), (yyvsp[-5].word));}
#line 2002 "y.tab.c"
    break;

  case 40:
#line 240 "proiect.y"
                                                         { printf("Change the data type of column %s to %s in table %s.\n", (yyvsp[-2].word), (yyvsp[-1].word), (yyvsp[-4].word));}
#line 2008 "y.tab.c"
    break;

  case 41:
#line 243 "proiect.y"
                                                         { printf("Modify the %s table so that %s for the element that has %s.\n", (yyvsp[-3].word), str_set, str_where);}
#line 2014 "y.tab.c"
    break;

  case 42:
#line 244 "proiect.y"
                                                         { printf("Modify the %s table so that %s.\n", (yyvsp[-2].word), str_set);}
#line 2020 "y.tab.c"
    break;

  case 43:
#line 247 "proiect.y"
                                                         {}
#line 2026 "y.tab.c"
    break;

  case 44:
#line 251 "proiect.y"
                                                                                             { printf("Check if %s then %s.\n", str_ifCond, str_thenExp);}
#line 2032 "y.tab.c"
    break;

  case 45:
#line 252 "proiect.y"
                                                                                             { printf("Check if %s then %s, else do: %s.\n", str_ifCond, str_thenExp, str_elseExp);}
#line 2038 "y.tab.c"
    break;

  case 46:
#line 255 "proiect.y"
                                                                                             {  
                                                                                                //instructiunea case -- inclusa intre clauzele unui select
                                                                                                printf("Select %s, in case %s %s. \n", str_select, str_forVar, str_inVar);
                                                                                             }
#line 2047 "y.tab.c"
    break;

  case 47:
#line 261 "proiect.y"
                                                                                             {
                                                                                              // structura unui case implica aparitia unor clauze de tip WHEN... THEN
                                                                                              strcat(str_inVar, " when ");
                                                                                              strcat(str_inVar, (yyvsp[-3].word)); 
                                                                                              strcat(str_inVar, " then "); 
                                                                                              strcat(str_inVar, (yyvsp[-1].word)); 
                                                                                              strcat(str_inVar, " ");
                                                                                             }
#line 2060 "y.tab.c"
    break;

  case 48:
#line 269 "proiect.y"
                                                                                             { /* pot exista mai multe clauze de tip WHEN... THEN*/}
#line 2066 "y.tab.c"
    break;

  case 49:
#line 272 "proiect.y"
                                                                                             { printf("While %s, do this: %s.\n", str_ifCond, str_thenExp);}
#line 2072 "y.tab.c"
    break;

  case 50:
#line 275 "proiect.y"
                                                                                             { 
                                                                                                printf("For a %s which has value in %s and %s, do this: %s.\n", str_forVar, str_inVar, str_inVar1, str_thenExp);
                                                                                             }
#line 2080 "y.tab.c"
    break;

  case 51:
#line 278 "proiect.y"
                                                                                             { 
                                                                                                printf("For a %s which has value in %s and %s, do this: %s.\n", str_forVar, str_inVar, str_inVar1, str_thenExp);
                                                                                             }
#line 2088 "y.tab.c"
    break;

  case 52:
#line 283 "proiect.y"
                                                             { 
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului, fara o clauza where
                                                               printf("Get all %s.\n", (yyvsp[-1].word));
                                                             }
#line 2097 "y.tab.c"
    break;

  case 53:
#line 287 "proiect.y"
                                                             {
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului intr-o variabila, cu o clauza where
                                                               strcat(str_beginVar, " assign the variable "); 
                                                               strcat(str_beginVar, (yyvsp[-4].word)); 
                                                               strcat(str_beginVar, " the result of get all "); 
                                                               strcat(str_beginVar, (yyvsp[-2].word));  

                                                               //printf("Assign the variable %s the result of get all %s.\n", $4, $6);
                                                             }
#line 2111 "y.tab.c"
    break;

  case 54:
#line 296 "proiect.y"
                                                             { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului, fara o clauza where
                                                               printf("Get %s for %s.\n", str_select, (yyvsp[-1].word));
                                                             }
#line 2120 "y.tab.c"
    break;

  case 55:
#line 300 "proiect.y"
                                                             { 
                                                               // instructiunea select: afisarea tuturor coloanelor tabelului, cu o clauza where
                                                               printf("Get all %s with property/ies: %s.\n", (yyvsp[-2].word), str_where);
                                                             }
#line 2129 "y.tab.c"
    break;

  case 56:
#line 304 "proiect.y"
                                                             { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului, cu o clauza where
                                                               //printf("Get %s for %s with property/ies: %s.\n", str_select, $4, str_where);
                                                               char temp[100];
                                                               strcpy(temp, str_select);
                                                               strcpy(str_select, "");
                                                               strcat(str_select, " get ");
                                                               strcat(str_select, temp);
                                                               strcat(str_select, " for ");
                                                               strcat(str_select, (yyvsp[-2].word));
                                                               strcat(str_select, " ");
                                                               strcat(str_select, str_where);
                                                               strcat(str_select, " ");
                                                             }
#line 2148 "y.tab.c"
    break;

  case 57:
#line 318 "proiect.y"
                                                             { 
                                                               // instructiunea select: afisarea unor coloane ale tabelului intr-o variabila, cu o clauza where
                                                               printf("Assign the variable %s the result of get %s for %s with property/ies: %s.\n", (yyvsp[-4].word), str_select, (yyvsp[-2].word), str_where);
                                                             }
#line 2157 "y.tab.c"
    break;

  case 58:
#line 324 "proiect.y"
                                                  { 
                                                   // stocarea coloanelor pentru instructiunea select
                                                   strcat(str_select, (yyvsp[0].word));
                                                   strcat(str_select, " ");

                                                  }
#line 2168 "y.tab.c"
    break;

  case 59:
#line 330 "proiect.y"
                                                  { /* coloane multiple in select */}
#line 2174 "y.tab.c"
    break;

  case 60:
#line 334 "proiect.y"
                                          { strcat(str_forVar, (yyvsp[0].word)); }
#line 2180 "y.tab.c"
    break;

  case 61:
#line 337 "proiect.y"
                                          { // e nevoie de un split
                                            int count = 0, count1 = 0;

                                            for(int i = 0; i < strlen((yyvsp[0].word)); i++){
                                              if((yyvsp[0].word)[i] == '.') {
                                                //printf('a');
                                                poz = i;
                                                break;
                                              }
                                              aux[count] = (yyvsp[0].word)[i];
                                              count++;
                                            }

                                            aux[count] = '\n';
                                            for(poz = poz+2; poz < strlen((yyvsp[0].word)); poz++){
                                              aux1[count1] = (yyvsp[0].word)[poz];
                                              count1++;
                                            }
                                            aux1[count1] = '\n';
                                            // printf("DENISS!! ");
                                            // printf("%s", aux);
                                            // printf("%s", aux1);
                                            // printf("FINAL DENINS ");
                                            strcat(str_inVar, aux); 
                                            strcat(str_inVar1, aux1); 

                                          }
#line 2212 "y.tab.c"
    break;

  case 62:
#line 366 "proiect.y"
                                                                              { 
                                                                                // variabila e true
                                                                                strcat(str_ifCond, (yyvsp[0].word));
                                                                              }
#line 2221 "y.tab.c"
    break;

  case 63:
#line 370 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is equal ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));
                                                                              }
#line 2231 "y.tab.c"
    break;

  case 64:
#line 375 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is smaller than ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2241 "y.tab.c"
    break;

  case 65:
#line 380 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is greater than ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));
                                                                              }
#line 2251 "y.tab.c"
    break;

  case 66:
#line 385 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is smaller or equal than ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2261 "y.tab.c"
    break;

  case 67:
#line 390 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is greater or equal than ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2271 "y.tab.c"
    break;

  case 68:
#line 395 "proiect.y"
                                                                              { 
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " is not equal to ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2281 "y.tab.c"
    break;

  case 69:
#line 400 "proiect.y"
                                                                              { 
                                                                                // conditii care trebuie indeplinite simultan
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " AND ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2292 "y.tab.c"
    break;

  case 70:
#line 406 "proiect.y"
                                                                              { 
                                                                                // conditii care trebuie indeplinite in paralel
                                                                                strcat(str_ifCond, (yyvsp[-2].word));
                                                                                strcat(str_ifCond, " OR ");
                                                                                strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                                              }
#line 2303 "y.tab.c"
    break;

  case 71:
#line 414 "proiect.y"
                                                                              { 
                                                                                // instructiunile care se executa in bucla for
                                                                                strcat(str_thenExp, (yyvsp[-1].word));
                                                                                strcat(str_thenExp, " ");
                                                                              }
#line 2313 "y.tab.c"
    break;

  case 72:
#line 419 "proiect.y"
                                                                              { /* multiplicitate instructiuni */}
#line 2319 "y.tab.c"
    break;

  case 73:
#line 422 "proiect.y"
                                                                              {
                                                                                // instructiuni de pe prima ramura a if-ului
                                                                                strcat(str_then1Exp, (yyvsp[-1].word));
                                                                                strcat(str_then1Exp, " ");
                                                                              }
#line 2329 "y.tab.c"
    break;

  case 74:
#line 427 "proiect.y"
                                                                              { /* multiplicitate instructiuni */}
#line 2335 "y.tab.c"
    break;

  case 75:
#line 430 "proiect.y"
                                                                             {
                                                                               // instructiuni de pe ramura else a if-ului
                                                                               strcat(str_elseExp, (yyvsp[-1].word));
                                                                               strcat(str_elseExp, " ");                                                                        
                                                                             }
#line 2345 "y.tab.c"
    break;

  case 76:
#line 435 "proiect.y"
                                                                             { /* multiplicitate instructiuni */}
#line 2351 "y.tab.c"
    break;

  case 77:
#line 438 "proiect.y"
                                                         {
                                                           strcat(str_set, "column ");
                                                           strcat(str_set, (yyvsp[-2].word));
                                                           strcat(str_set, " to have the value ");
                                                           strcat(str_set, (yyvsp[0].word));
                                                           strcat(str_set, ", ");
                                                         }
#line 2363 "y.tab.c"
    break;

  case 78:
#line 445 "proiect.y"
                                                         { /* multiplicitate instructiuni */}
#line 2369 "y.tab.c"
    break;

  case 79:
#line 448 "proiect.y"
                                                              { 
                                                                // denumirea coloanelor unde dorim sa inseram valori
                                                                strcat(str_insert, (yyvsp[0].word));
                                                                strcat(str_insert, " ");
                                                              }
#line 2379 "y.tab.c"
    break;

  case 80:
#line 453 "proiect.y"
                                                              { /* multiplicitatea coloanelor in clauza insert*/}
#line 2385 "y.tab.c"
    break;

  case 81:
#line 456 "proiect.y"
                                                              {
                                                                //valorile pe care dorim sa le inseram
                                                                strcat(str_insert_values, (yyvsp[0].word));
                                                                strcat(str_insert_values, " ");
                                                              }
#line 2395 "y.tab.c"
    break;

  case 82:
#line 461 "proiect.y"
                                                              { /* multiplicitatea valorilor in clauza insert */ }
#line 2401 "y.tab.c"
    break;

  case 83:
#line 464 "proiect.y"
                                                     { 
                                                        // cazurile de baza ale WHERE
                                                        strcat(str_where, (yyvsp[-2].word));
                                                        strcat(str_where, " equal to ");
                                                        strcat(str_where, (yyvsp[0].word));
                                                     }
#line 2412 "y.tab.c"
    break;

  case 84:
#line 470 "proiect.y"
                                                     { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is greater than ");
                                                        strcat(str_ifCond, (yyvsp[0].word));
                                                     }
#line 2422 "y.tab.c"
    break;

  case 85:
#line 475 "proiect.y"
                                                     { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is smaller than ");
                                                        strcat(str_ifCond, (yyvsp[0].word));
                                                      }
#line 2432 "y.tab.c"
    break;

  case 86:
#line 480 "proiect.y"
                                                      { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is greater than ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                        
                                                      }
#line 2442 "y.tab.c"
    break;

  case 87:
#line 485 "proiect.y"
                                                      { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is smaller or equal than ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                        
                                                      }
#line 2452 "y.tab.c"
    break;

  case 88:
#line 490 "proiect.y"
                                                      { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is greater or equal than ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                        
                                                      }
#line 2462 "y.tab.c"
    break;

  case 89:
#line 495 "proiect.y"
                                                      { 
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " is not equal to ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                        
                                                      }
#line 2472 "y.tab.c"
    break;

  case 90:
#line 500 "proiect.y"
                                                      { 
                                                        // conditii care trebuie indeplinite simultan
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " AND ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                      }
#line 2483 "y.tab.c"
    break;

  case 91:
#line 506 "proiect.y"
                                                      { 
                                                        // conditii care trebuie indeplinite in paralel
                                                        strcat(str_ifCond, (yyvsp[-2].word));
                                                        strcat(str_ifCond, " OR ");
                                                        strcat(str_ifCond, (yyvsp[0].word));                                                                                
                                                      }
#line 2494 "y.tab.c"
    break;

  case 92:
#line 514 "proiect.y"
                                                     { 
                                                       // creat pentru instructiunea de creare a unui tabel sau a unei proceduri
                                                       // in primul WORD ($1) -- RETINEM NUMELE COLOANEI
                                                       strcat(str_create, (yyvsp[-1].word));
                                                       strcat(str_create, " ");
                                                       // in al doilea WORD ($2) -- RETINEM TIPUL DE DATA
                                                       strcat(str_create, (yyvsp[0].word));
                                                       strcat(str_create, " ");
                                                     }
#line 2508 "y.tab.c"
    break;

  case 93:
#line 523 "proiect.y"
                                                     { /* creat pentru cazul in care cream un tabel cu mai multe coloane*/}
#line 2514 "y.tab.c"
    break;

  case 94:
#line 526 "proiect.y"
                                                     { 
                                                       // creat pentru instructiunea de creare a unei proceduri si a unui trigger
                                                       // in primul WORD ($1) -- RETINEM NUMELE VARIABILEI
                                                       strcat(str_isVar, (yyvsp[-2].word));
                                                       strcat(str_isVar, " ");
                                                       // in al doilea WORD ($2) -- RETINEM TIPUL DE DATA AL VARIABILEI
                                                       strcat(str_isVar, (yyvsp[-1].word));
                                                       strcat(str_isVar, " ");
                                                     }
#line 2528 "y.tab.c"
    break;

  case 95:
#line 535 "proiect.y"
                                                     {
                                                       // pentru proceduri
                                                       // in structura acestora pot aparea cursori 
                                                       // care retin ceea ce returneaza o instructiune de tip select
                                                       strcat(str_isVar, str_cursor); 
                                                       strcat(str_isVar, str_select);
                                                     }
#line 2540 "y.tab.c"
    break;

  case 96:
#line 542 "proiect.y"
                                                     { /* pentru cazurile de duplicate */}
#line 2546 "y.tab.c"
    break;

  case 97:
#line 545 "proiect.y"
                                                                                            {/* tipuri de instructiuni din interiorul procedurii -- din body */}
#line 2552 "y.tab.c"
    break;

  case 98:
#line 546 "proiect.y"
                                                                                            { 
                                                                                              strcat(str_beginVar, " and do ");
                                                                                              strcat(str_beginVar, (yyvsp[-1].word));
                                                                                            }
#line 2561 "y.tab.c"
    break;

  case 99:
#line 550 "proiect.y"
                                                                                            {
                                                                                              // alta structura din interiorul body-ului unei proceduri
                                                                                              strcpy(str_beginVar, ""); 
                                                                                              printf("Open %s and fetch %s into %s and commit. Close %s.\n",(yyvsp[-13].word), (yyvsp[-10].word), (yyvsp[-8].word), (yyvsp[-1].word));
                                                                                            }
#line 2571 "y.tab.c"
    break;

  case 100:
#line 555 "proiect.y"
                                                                                            { 
                                                                                              // in body-ul unei proceduri putem avea doar cuvinte -- instructiuni elementare
                                                                                              strcat(str_beginVar, " "); 
                                                                                              strcat(str_beginVar, (yyvsp[-1].word));
                                                                                            }
#line 2581 "y.tab.c"
    break;

  case 101:
#line 560 "proiect.y"
                                                                                            { /* combinatii ale acestora se pot regasi */}
#line 2587 "y.tab.c"
    break;

  case 102:
#line 561 "proiect.y"
                                                                                            { /* combinatii ale acestora se pot regasi */}
#line 2593 "y.tab.c"
    break;

  case 103:
#line 564 "proiect.y"
                                { 
                                  // declararea unui cursor -- specific PL-SQL
                                  strcat(str_cursor, "Assign the cursor named "); 
                                  strcat(str_cursor, (yyvsp[-1].word)); strcat(str_cursor, " the result of ");
                                }
#line 2603 "y.tab.c"
    break;

  case 104:
#line 570 "proiect.y"
                                                      { 
                                                       // procedure si trigger pot returna exceptii
                                                       strcpy(str_exceptionVar, " ");
                                                       strcat(str_exceptionVar, (yyvsp[-1].word));
                                                       strcat(str_exceptionVar, " ");
                                                      }
#line 2614 "y.tab.c"
    break;

  case 105:
#line 576 "proiect.y"
                                                      { /* pentru cazurile de multiplicare a exceptiilor*/}
#line 2620 "y.tab.c"
    break;


#line 2624 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                  yystos[+*yyssp], yyvsp);
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
#line 580 "proiect.y"



int main(){
    yyparse();
    return 0;
}

yyerror(){
    ;
}
