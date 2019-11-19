
/*  A Bison parser, made from myparser.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	VOID	257
#define	INT	258
#define	MAIN	259
#define	WHILE	260
#define	FOR	261
#define	IF	262
#define	ELSE	263
#define	SEMICOLON	264
#define	ASSIGN	265
#define	DEFINE	266
#define	STRUCT	267
#define	INPUT	268
#define	OUTPUT	269
#define	ID	270
#define	DIGIT	271
#define	EOR_ID	272
#define	PLUS	273
#define	MINUS	274
#define	MULTIPLY	275
#define	DIVIDE	276
#define	MOD	277
#define	POW	278
#define	L_E	279
#define	GT	280
#define	LT	281
#define	GTandL_E	282
#define	LTandL_E	283
#define	LNOT	284
#define	NOT	285
#define	AND	286
#define	OR	287
#define	LP	288
#define	RP	289
#define	SINGLE_QUOTE	290
#define	DOUBLE_QUOTE	291
#define	LBRACE	292
#define	RBRACE	293
#define	COMIC	294
#define	UNDEFINED	295

#line 1 "myparser.y"

#include "table.h"
int yyerror(const char *msg);
extern int yylex();
extern FILE* yyin;
extern char yytext[];
Parse_Tree myparse_tree;
Tnode *p;


#line 11 "myparser.y"
typedef union {
		class Node *node;
		class Tnode *tnode;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		126
#define	YYFLAG		-32768
#define	YYNTBASE	42

#define YYTRANSLATE(x) ((unsigned)(x) <= 295 ? yytranslate[x] : 67)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     8,    12,    18,    20,    22,    24,
    26,    28,    30,    33,    37,    39,    42,    44,    46,    50,
    52,    56,    58,    62,    64,    67,    69,    73,    75,    79,
    83,    87,    91,    93,    97,   101,   103,   107,   111,   115,
   119,   121,   123,   127,   129,   133,   135,   139,   141,   144,
   150,   158,   164,   171,   179,   186,   194,   196,   198,   200,
   202,   204,   206,   212
};

static const short yyrhs[] = {     3,
     0,     4,     0,    16,     0,    17,     0,    34,    55,    35,
     0,    42,     5,    34,    35,    46,     0,    46,     0,    52,
     0,    62,     0,    63,     0,    65,     0,    66,     0,    38,
    39,     0,    38,    47,    39,     0,    48,     0,    47,    48,
     0,    49,     0,    45,     0,    42,    50,    10,     0,    51,
     0,    50,    40,    51,     0,    16,     0,    16,    11,    55,
     0,    10,     0,    53,    10,     0,    60,     0,    16,    11,
    55,     0,    54,     0,    16,    19,    19,     0,    16,    20,
    20,     0,    19,    19,    16,     0,    20,    20,    16,     0,
    56,     0,    55,    19,    56,     0,    55,    20,    56,     0,
    57,     0,    56,    21,    57,     0,    56,    22,    57,     0,
    56,    23,    57,     0,    43,    24,    43,     0,    43,     0,
    43,     0,    43,    64,    43,     0,    61,     0,    59,    32,
    61,     0,    59,     0,    60,    33,    59,     0,    58,     0,
    31,    58,     0,     8,    34,    53,    35,    45,     0,     8,
    34,    53,    35,    45,     9,    45,     0,     6,    34,    53,
    35,    45,     0,     7,    34,    52,    52,    35,    45,     0,
     7,    34,    52,    52,    53,    35,    45,     0,     7,    34,
    49,    52,    35,    45,     0,     7,    34,    49,    52,    53,
    35,    45,     0,    27,     0,    29,     0,    25,     0,    26,
     0,    28,     0,    30,     0,    15,    34,    43,    35,    10,
     0,    14,    34,    16,    35,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    50,    52,    57,    60,    67,    74,    84,    85,    86,    87,
    88,    89,    93,    94,    98,   103,   110,   111,   115,   120,
   123,   127,   129,   138,   139,   143,   144,   150,   154,   159,
   164,   169,   177,   178,   182,   189,   190,   194,   198,   205,
   209,   213,   214,   220,   221,   228,   229,   236,   237,   244,
   250,   262,   268,   276,   284,   291,   302,   304,   306,   308,
   310,   312,   318,   325
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","VOID","INT",
"MAIN","WHILE","FOR","IF","ELSE","SEMICOLON","ASSIGN","DEFINE","STRUCT","INPUT",
"OUTPUT","ID","DIGIT","EOR_ID","PLUS","MINUS","MULTIPLY","DIVIDE","MOD","POW",
"L_E","GT","LT","GTandL_E","LTandL_E","LNOT","NOT","AND","OR","LP","RP","SINGLE_QUOTE",
"DOUBLE_QUOTE","LBRACE","RBRACE","COMIC","UNDEFINED","Type_Specifier","primary_expression",
"function_definition","statement","compound_statement","block_item_list","block_item",
"declaration","init_declarator_list","init_declarator","expression_statement",
"expression","self_operate_expression","additive_expression","mutiply_expression",
"power_expression","Logic_assign_expression","logic_and_expression","logic_or_expression",
"login_not_expression","selection_statement","iteration_statement","LP_Symbol",
"write_Statement","input_Statement", NULL
};
#endif

static const short yyr1[] = {     0,
    42,    42,    43,    43,    43,    44,    45,    45,    45,    45,
    45,    45,    46,    46,    47,    47,    48,    48,    49,    50,
    50,    51,    51,    52,    52,    53,    53,    53,    54,    54,
    54,    54,    55,    55,    55,    56,    56,    56,    56,    57,
    57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
    62,    63,    63,    63,    63,    63,    64,    64,    64,    64,
    64,    64,    65,    66
};

static const short yyr2[] = {     0,
     1,     1,     1,     1,     3,     5,     1,     1,     1,     1,
     1,     1,     2,     3,     1,     2,     1,     1,     3,     1,
     3,     1,     3,     1,     2,     1,     3,     1,     3,     3,
     3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
     1,     1,     3,     1,     3,     1,     3,     1,     2,     5,
     7,     5,     6,     7,     6,     7,     1,     1,     1,     1,
     1,     1,     5,     4
};

static const short yydefact[] = {     0,
     1,     2,     0,     0,     0,     0,     0,     6,     0,     0,
     0,    24,     0,     0,     3,     4,     0,     0,     0,     0,
    13,     0,    42,    18,     7,     0,    15,    17,     8,     0,
    28,    48,    46,    26,    44,     9,    10,    11,    12,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
    49,    41,     0,    33,    36,    22,     0,    20,    59,    60,
    57,    61,    58,    62,     0,    14,    16,    25,     0,     0,
     0,     0,     0,     0,     0,     0,    27,    29,    30,    31,
    32,     0,     0,     0,     5,     0,     0,     0,     0,    19,
     0,    43,    45,    47,     0,     0,     0,     0,    64,     0,
    40,    34,    35,    37,    38,    39,    23,    21,    52,     0,
     0,     0,     0,    50,    63,    55,     0,    53,     0,     0,
    56,    54,    51,     0,     0,     0
};

static const short yydefgoto[] = {    22,
    23,   124,    24,    25,    26,    27,    28,    57,    58,    29,
    30,    31,    53,    54,    55,    32,    33,    34,    35,    36,
    37,    65,    38,    39
};

static const short yypact[] = {    23,
-32768,-32768,     5,   -11,    -2,    10,     1,-32768,    27,    38,
    42,-32768,    51,    62,    40,-32768,    78,    79,    13,    13,
-32768,    84,    63,-32768,-32768,    67,-32768,-32768,-32768,    92,
-32768,-32768,    71,    77,-32768,-32768,-32768,-32768,-32768,   140,
   109,   140,    88,    13,    13,    95,   102,   107,   111,-32768,
-32768,   112,    30,    31,-32768,   126,     2,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    13,-32768,-32768,-32768,    -3,    -3,
   103,   114,   114,   106,   118,   123,    36,-32768,-32768,-32768,
-32768,    13,    13,    13,-32768,    13,    13,    13,    13,-32768,
    84,-32768,-32768,    71,   101,   130,   135,   101,-32768,   132,
-32768,    31,    31,-32768,-32768,-32768,    36,-32768,-32768,   101,
   127,   101,   128,   158,-32768,-32768,   101,-32768,   101,   101,
-32768,-32768,-32768,   144,   168,-32768
};

static const short yypgoto[] = {   172,
   -20,-32768,   -76,   167,-32768,   149,   136,-32768,    85,   -35,
   -39,-32768,   -43,    11,    -8,   159,   110,-32768,   113,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		182


static const short yytable[] = {    52,
    71,    77,    74,     1,     2,    73,     9,    10,    11,     4,
    12,    90,    50,    16,    13,    14,    15,    16,   109,    17,
    18,   114,     5,    76,    52,     1,     2,    19,    50,    16,
    20,    19,     6,   116,    20,   118,    96,    97,     7,    21,
   121,    91,   122,   123,    92,   107,    20,     7,    83,    84,
    45,    86,    87,    88,    83,    84,   111,   113,    46,    47,
    40,   101,    52,    52,    85,    52,    52,    52,    52,     1,
     2,    41,     9,    10,    11,    42,    12,   104,   105,   106,
    13,    14,    15,    16,    43,    17,    18,    59,    60,    61,
    62,    63,    64,   102,   103,    44,    48,    19,    49,    56,
    20,    68,    69,    75,     7,    66,     9,    10,    11,    70,
    12,     1,     2,    78,    13,    14,    15,    16,    12,    17,
    18,    79,    80,    12,    15,    16,    81,    17,    18,    15,
    16,    19,    17,    18,    20,    82,    89,    95,     7,    19,
    98,   115,    20,   125,    19,    15,    16,    20,    17,    18,
    15,    16,    99,    17,    18,    15,    16,   100,    17,    18,
    19,   117,   119,    20,   110,    19,   120,   126,    20,   112,
    19,     3,     8,    20,    67,   108,    72,    51,     0,    94,
     0,    93
};

static const short yycheck[] = {    20,
    40,    45,    42,     3,     4,    41,     6,     7,     8,     5,
    10,    10,    16,    17,    14,    15,    16,    17,    95,    19,
    20,    98,    34,    44,    45,     3,     4,    31,    16,    17,
    34,    31,    35,   110,    34,   112,    72,    73,    38,    39,
   117,    40,   119,   120,    65,    89,    34,    38,    19,    20,
    11,    21,    22,    23,    19,    20,    96,    97,    19,    20,
    34,    82,    83,    84,    35,    86,    87,    88,    89,     3,
     4,    34,     6,     7,     8,    34,    10,    86,    87,    88,
    14,    15,    16,    17,    34,    19,    20,    25,    26,    27,
    28,    29,    30,    83,    84,    34,    19,    31,    20,    16,
    34,    10,    32,    16,    38,    39,     6,     7,     8,    33,
    10,     3,     4,    19,    14,    15,    16,    17,    10,    19,
    20,    20,    16,    10,    16,    17,    16,    19,    20,    16,
    17,    31,    19,    20,    34,    24,    11,    35,    38,    31,
    35,    10,    34,     0,    31,    16,    17,    34,    19,    20,
    16,    17,    35,    19,    20,    16,    17,    35,    19,    20,
    31,    35,    35,    34,    35,    31,     9,     0,    34,    35,
    31,     0,     6,    34,    26,    91,    41,    19,    -1,    70,
    -1,    69
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 50 "myparser.y"
{ p = new Tnode("Type_Specifier", "VOID");
					yyval.tnode = p;;
    break;}
case 2:
#line 52 "myparser.y"
{ p = new Tnode("Type_Specifier", "INT");
					yyval.tnode = p;;
    break;}
case 3:
#line 57 "myparser.y"
{ p = new Tnode("ID Declaration", yyvsp[0].node->name);
					p->address = yyvsp[0].node;
					yyval.tnode = p;;
    break;}
case 4:
#line 60 "myparser.y"
{ 	int hello = yyvsp[0].node->value;
					char buffer[20];  
					_itoa( hello, buffer, 10 );
					string s(buffer);
					p = new Tnode("CONST Declaration",s);
					p->address = yyvsp[0].node;	
					yyval.tnode = p;;
    break;}
case 5:
#line 67 "myparser.y"
{
				yyval.tnode = yyvsp[-1].tnode;
		;
    break;}
case 6:
#line 74 "myparser.y"
{
			p = new Tnode("function_definition", "Main");		
			p->addchild(yyvsp[0].tnode);
			myparse_tree.root = p;
			yyval.tnode = p;
			myparse_tree.print_tree(myparse_tree.root, 0);
	;
    break;}
case 13:
#line 93 "myparser.y"
{yyval.tnode = NULL;;
    break;}
case 14:
#line 94 "myparser.y"
{yyval.tnode = yyvsp[-1].tnode;;
    break;}
case 15:
#line 98 "myparser.y"
{
									p = new Tnode("compound_statement"," ");
									p->addchild(yyvsp[0].tnode);
									yyval.tnode = p;
									;
    break;}
case 16:
#line 103 "myparser.y"
{
									
									yyvsp[-1].tnode->addchild(yyvsp[0].tnode);
									;
    break;}
case 19:
#line 115 "myparser.y"
{	yyvsp[-1].tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode = yyvsp[-1].tnode;;
    break;}
case 20:
#line 120 "myparser.y"
{p = new Tnode("Var declaration", " ");
													p->addchild(yyvsp[0].tnode);
													yyval.tnode = p;;
    break;}
case 21:
#line 123 "myparser.y"
{yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 22:
#line 127 "myparser.y"
{p = new Tnode("ID declaration",yyvsp[0].node->name);
													yyval.tnode = p;;
    break;}
case 23:
#line 129 "myparser.y"
{	p = new Tnode("expression_statement","=");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[-2].node->name);
														yyval.tnode->addchild(p);
														yyval.tnode->addchild(yyvsp[0].tnode);
													 
													;
    break;}
case 24:
#line 138 "myparser.y"
{yyval.tnode = NULL;;
    break;}
case 27:
#line 144 "myparser.y"
{	p = new Tnode("expression_statement","=");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[-2].node->name);
														yyval.tnode->addchild(p);
														yyval.tnode->addchild(yyvsp[0].tnode);									 
														;
    break;}
case 29:
#line 154 "myparser.y"
{p = new Tnode("expression_statement","op:++");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[-2].node->name);
														yyval.tnode->addchild(p);
														;
    break;}
case 30:
#line 159 "myparser.y"
{p = new Tnode("expression_statement","op:--");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[-2].node->name);
														yyval.tnode->addchild(p);
														;
    break;}
case 31:
#line 164 "myparser.y"
{p = new Tnode("expression_statement","++op:");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[0].node->name);
														yyval.tnode->addchild(p);
														;
    break;}
case 32:
#line 169 "myparser.y"
{p = new Tnode("expression_statement","--op:");
														yyval.tnode = p;
														p = new Tnode("ID declaration",yyvsp[0].node->name);
														yyval.tnode->addchild(p);
														;
    break;}
case 34:
#line 178 "myparser.y"
{p = new Tnode("expression_statement","op:+");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 35:
#line 182 "myparser.y"
{p = new Tnode("expression_statement","op:-");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 37:
#line 190 "myparser.y"
{p = new Tnode("expression_statement","op:*");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 38:
#line 194 "myparser.y"
{p = new Tnode("expression_statement","op:/");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 39:
#line 198 "myparser.y"
{p = new Tnode("expression_statement","op:%");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 40:
#line 205 "myparser.y"
{p = new Tnode("expression_statement","op:^");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 43:
#line 214 "myparser.y"
{yyvsp[-1].tnode->addchild(yyvsp[-2].tnode);
														yyvsp[-1].tnode->addchild(yyvsp[0].tnode);
														yyval.tnode = yyvsp[-1].tnode;;
    break;}
case 45:
#line 221 "myparser.y"
{p = new Tnode("expression_statement","op:&&");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 47:
#line 229 "myparser.y"
{p = new Tnode("expression_statement","op:||");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);;
    break;}
case 49:
#line 237 "myparser.y"
{p = new Tnode("expression_statement","op:!");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[0].tnode);
														;
    break;}
case 50:
#line 244 "myparser.y"
{p = new Tnode("selection_statement"," ");
														yyval.tnode = p;
														p =new Tnode("IF"," ");
														p->addchild(yyvsp[-2].tnode);
														p->addchild(yyvsp[0].tnode);
														yyval.tnode->addchild(p);;
    break;}
case 51:
#line 250 "myparser.y"
{p = new Tnode("selection_statement"," ");
														yyval.tnode = p;
														p =new Tnode("IF"," ");
														p->addchild(yyvsp[-4].tnode);
														p->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(p);
														p =new Tnode("ELSE"," ");
														p->addchild(yyvsp[0].tnode);
														yyval.tnode->addchild(p);;
    break;}
case 52:
#line 262 "myparser.y"
{
												p = new Tnode("iteration_statement","while");
												yyval.tnode = p;
												yyval.tnode->addchild(yyvsp[-2].tnode);
												yyval.tnode->addchild(yyvsp[0].tnode);
												;
    break;}
case 53:
#line 269 "myparser.y"
{
														p = new Tnode("iteration_statement","for");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-3].tnode);
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);
														;
    break;}
case 54:
#line 276 "myparser.y"
{
														p = new Tnode("iteration_statement","for");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-4].tnode);
														yyval.tnode->addchild(yyvsp[-3].tnode);
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);
														;
    break;}
case 55:
#line 284 "myparser.y"
{
														p = new Tnode("iteration_statement","for");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-3].tnode);
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);
														;
    break;}
case 56:
#line 291 "myparser.y"
{
														p = new Tnode("iteration_statement","for");
														yyval.tnode = p;
														yyval.tnode->addchild(yyvsp[-4].tnode);
														yyval.tnode->addchild(yyvsp[-3].tnode);
														yyval.tnode->addchild(yyvsp[-2].tnode);
														yyval.tnode->addchild(yyvsp[0].tnode);
														;
    break;}
case 57:
#line 302 "myparser.y"
{p = new Tnode("expression_statement","op:<");
										yyval.tnode = p;;
    break;}
case 58:
#line 304 "myparser.y"
{p = new Tnode("expression_statement","op:<=");
										yyval.tnode = p;;
    break;}
case 59:
#line 306 "myparser.y"
{p = new Tnode("expression_statement","op:==");
										yyval.tnode = p;;
    break;}
case 60:
#line 308 "myparser.y"
{p = new Tnode("expression_statement","op:>");
										yyval.tnode = p;;
    break;}
case 61:
#line 310 "myparser.y"
{p = new Tnode("expression_statement","op:>=");
										yyval.tnode = p;;
    break;}
case 62:
#line 312 "myparser.y"
{p = new Tnode("expression_statement","op:!=");
										yyval.tnode = p;;
    break;}
case 63:
#line 318 "myparser.y"
{p = new Tnode("write_Statement","print");
																	yyval.tnode = p;
																	yyval.tnode->addchild(yyvsp[-2].tnode);
																	;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 328 "myparser.y"





int yyerror(const char *msg)
{
	printf("Error: %s \n", msg);
}



int main(void)
{
	yyin = fopen("sample.c","r");
	yyparse();
	getchar();
	return 0;
}




