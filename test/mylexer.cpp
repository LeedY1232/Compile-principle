/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 1 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 10/10/19
* Time: 19:36:29
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 2 ".\\mylexer.l"

#include<math.h>
#include<stdlib.h>
#include<stdio.h>

#line 44 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 35 ".\\mylexer.l"
printf("NUMBER%20s%10d\n",yytext,atoi(yytext));
#line 127 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 36 ".\\mylexer.l"
printf("VOID%20s\n",yytext);
#line 134 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 37 ".\\mylexer.l"
printf("INT%20s\n",yytext);
#line 141 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 38 ".\\mylexer.l"
printf("MAIN%20s\n",yytext);
#line 148 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 39 ".\\mylexer.l"
printf("WHILE%20s\n",yytext);
#line 155 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 40 ".\\mylexer.l"
printf("FOR%20s\n",yytext);
#line 162 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 41 ".\\mylexer.l"
printf("ROP%20s\n",yytext);
#line 169 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 42 ".\\mylexer.l"
printf("LOP%20s\n",yytext);
#line 176 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 43 ".\\mylexer.l"
printf("ASSIGN%20s\n",yytext);
#line 183 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 44 ".\\mylexer.l"
printf("SEMICOLON%20s\n",yytext);
#line 190 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 45 ".\\mylexer.l"
printf("DEFINE%20s\n",yytext);
#line 197 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 46 ".\\mylexer.l"
printf("STRUCT%20s\n",yytext);
#line 204 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 47 ".\\mylexer.l"
printf("INPUT%20s\n",yytext);
#line 211 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 48 ".\\mylexer.l"
printf("OUTPUT%20s\n",yytext);
#line 218 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 49 ".\\mylexer.l"
printf("ID%20s%10o\n",yytext,&yytext);
#line 225 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 50 ".\\mylexer.l"
printf("OP%20s\n",yytext);
#line 232 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 51 ".\\mylexer.l"
printf("LP%20s\n",yytext);
#line 239 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 52 ".\\mylexer.l"
printf("RP%20s\n",yytext);
#line 246 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 53 ".\\mylexer.l"
printf("SINGLE_QUOTE%20s\n",yytext);
#line 253 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 54 ".\\mylexer.l"
printf("DOUBLE_QUOTE%20s\n",yytext);
#line 260 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 55 ".\\mylexer.l"
printf("LBRACE%20s\n",yytext);
#line 267 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 56 ".\\mylexer.l"
printf("RBRACE%20s\n",yytext);
#line 274 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 57 ".\\mylexer.l"
printf("DECLARE%20s\n",yytext);
#line 281 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 58 ".\\mylexer.l"
printf("COMIC%20s\n",yytext);
#line 288 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 59 ".\\mylexer.l"
printf("INPUT_FORMAT%20s\n",yytext);
#line 295 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 60 ".\\mylexer.l"

#line 302 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 61 ".\\mylexer.l"
printf("UNDEFINED%20s\n",yytext);
#line 309 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 382;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
		{ 4, 1 },
		{ 41, 25 },
		{ 38, 22 },
		{ 4, 4 },
		{ 4, 4 },
		{ 33, 8 },
		{ 39, 23 },
		{ 33, 8 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 42, 25 },
		{ 40, 24 },
		{ 33, 8 },
		{ 32, 7 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 4, 4 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 13, 1 },
		{ 43, 26 },
		{ 15, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 35, 15 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 18, 1 },
		{ 36, 15 },
		{ 44, 27 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 34, 29 },
		{ 45, 32 },
		{ 34, 9 },
		{ 13, 1 },
		{ 20, 1 },
		{ 31, 19 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 22, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 23, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 24, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 25, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 20, 1 },
		{ 28, 1 },
		{ 29, 1 },
		{ 30, 1 },
		{ 35, 35 },
		{ 35, 35 },
		{ 47, 37 },
		{ 48, 38 },
		{ 49, 39 },
		{ 50, 40 },
		{ 51, 41 },
		{ 52, 42 },
		{ 53, 43 },
		{ 54, 44 },
		{ 55, 45 },
		{ 56, 46 },
		{ 57, 49 },
		{ 58, 50 },
		{ 59, 51 },
		{ 60, 52 },
		{ 61, 53 },
		{ 62, 54 },
		{ 63, 55 },
		{ 64, 58 },
		{ 65, 59 },
		{ 66, 60 },
		{ 67, 62 },
		{ 35, 35 },
		{ 68, 63 },
		{ 69, 64 },
		{ 70, 66 },
		{ 71, 68 },
		{ 37, 21 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 46, 35 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 35, 35 },
		{ 0, 0 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 35, 35 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 36, 36 },
		{ 0, 0 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 36, 36 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 20, 70 },
		{ 0, 0 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 },
		{ 20, 70 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -8, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 27 },
		{ 0, -4, 26 },
		{ 19, 0, 8 },
		{ 0, 0, 20 },
		{ 0, -77, 27 },
		{ 0, -93, 16 },
		{ 0, 47, 27 },
		{ 0, 0, 19 },
		{ 0, 0, 17 },
		{ 0, 0, 18 },
		{ 0, 0, 16 },
		{ 0, 0, 24 },
		{ 0, 8, 16 },
		{ 70, -38, 1 },
		{ 0, 0, 10 },
		{ 19, 0, 7 },
		{ 0, 27, 9 },
		{ 70, 0, 15 },
		{ 70, 35, 15 },
		{ 70, -106, 15 },
		{ 70, -89, 15 },
		{ 70, -93, 15 },
		{ 70, -96, 15 },
		{ 70, -73, 15 },
		{ 70, -48, 15 },
		{ 0, 0, 21 },
		{ 0, -41, 27 },
		{ 0, 0, 22 },
		{ 0, 0, 7 },
		{ 0, -17, 0 },
		{ 0, 0, 25 },
		{ 0, 0, 8 },
		{ 0, 109, 0 },
		{ 0, 184, 23 },
		{ 70, 6, 15 },
		{ 70, 5, 15 },
		{ 70, 17, 15 },
		{ 70, 18, 15 },
		{ 70, 27, 15 },
		{ 70, 11, 15 },
		{ 70, 21, 15 },
		{ 70, 22, 15 },
		{ 0, 26, 0 },
		{ 0, 82, 0 },
		{ 70, 0, 6 },
		{ 70, 0, 3 },
		{ 70, 20, 15 },
		{ 70, 21, 15 },
		{ 70, 22, 15 },
		{ 70, 16, 15 },
		{ 70, 34, 15 },
		{ 70, 27, 15 },
		{ 0, 31, 0 },
		{ 0, 0, 23 },
		{ 70, 0, 4 },
		{ 70, 21, 15 },
		{ 70, 36, 15 },
		{ 70, 40, 15 },
		{ 70, 0, 2 },
		{ 70, 39, 15 },
		{ 0, 32, 0 },
		{ 70, 41, 15 },
		{ 70, 0, 13 },
		{ 70, 28, 15 },
		{ 70, 0, 5 },
		{ 0, 44, 0 },
		{ 70, 0, 14 },
		{ 0, 259, 12 },
		{ 0, 0, 11 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 63 ".\\mylexer.l"

int main()
{
    yylex();
    return 0;
}
int yywrap()
{
    return 1;
}
