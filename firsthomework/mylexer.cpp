/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 8 of your 30 day trial period.
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
* Date: 09/23/19
* Time: 16:40:15
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

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2019Äê9ÔÂ16ÈÕ
****************************************************************************/
#include<stdio.h>
#include "myparser.h"
void count();


#line 51 "mylexer.cpp"
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

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 26 ".\\mylexer.l"

	// place any extra initialisation code here

#line 75 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 31 ".\\mylexer.l"

	// place any extra cleanup code here

#line 87 "mylexer.cpp"
}

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
#line 38 ".\\mylexer.l"
comment();
#line 159 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 39 ".\\mylexer.l"
count();return(AUTO);
#line 166 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 40 ".\\mylexer.l"
count();return(BREAK);
#line 173 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 41 ".\\mylexer.l"
count();return(CASE);
#line 180 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 42 ".\\mylexer.l"
count();return(CHAR);
#line 187 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 43 ".\\mylexer.l"
count();return(CONST);
#line 194 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 44 ".\\mylexer.l"
count();return(CONTINUE);
#line 201 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 45 ".\\mylexer.l"
count();return(DEFAULT);
#line 208 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 46 ".\\mylexer.l"
count();return(DO);
#line 215 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 47 ".\\mylexer.l"
count();return(WHILE);
#line 222 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 48 ".\\mylexer.l"
count();return(FOR);
#line 229 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 49 ".\\mylexer.l"
count();return(IF);
#line 236 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 50 ".\\mylexer.l"
count();return(ELSE);
#line 243 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 51 ".\\mylexer.l"
count();return(DEFINE);
#line 250 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 52 ".\\mylexer.l"
count();return(VOID);
#line 257 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 53 ".\\mylexer.l"
count();return(INT);
#line 264 "mylexer.cpp"
		}
		break;
#line 58 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 272 "mylexer.cpp"
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

	yytransitionmax = 74;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 16, 6 },
		{ 19, 7 },
		{ 23, 10 },
		{ 21, 8 },
		{ 44, 32 },
		{ 42, 31 },
		{ 43, 31 },
		{ 17, 6 },
		{ 22, 9 },
		{ 15, 5 },
		{ 24, 10 },
		{ 20, 7 },
		{ 45, 32 },
		{ 25, 11 },
		{ 18, 6 },
		{ 26, 12 },
		{ 27, 14 },
		{ 28, 15 },
		{ 29, 16 },
		{ 30, 17 },
		{ 31, 18 },
		{ 32, 19 },
		{ 33, 21 },
		{ 34, 22 },
		{ 35, 24 },
		{ 36, 25 },
		{ 37, 26 },
		{ 38, 27 },
		{ 39, 28 },
		{ 40, 29 },
		{ 41, 30 },
		{ 13, 3 },
		{ 14, 4 },
		{ 46, 33 },
		{ 47, 36 },
		{ 48, 37 },
		{ 49, 39 },
		{ 50, 42 },
		{ 51, 43 },
		{ 52, 44 },
		{ 53, 45 },
		{ 54, 48 },
		{ 55, 51 },
		{ 56, 52 },
		{ 57, 53 },
		{ 58, 55 },
		{ 59, 56 },
		{ 60, 58 },
		{ 0, 0 },
		{ 4, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 10, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 11, 1 },
		{ 12, 1 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 0, -46, 0 },
		{ 1, 0, 0 },
		{ 0, -9, 0 },
		{ 0, -83, 0 },
		{ 0, -103, 0 },
		{ 0, -95, 0 },
		{ 0, -98, 0 },
		{ 0, -103, 0 },
		{ 0, -101, 0 },
		{ 0, -98, 0 },
		{ 0, -96, 0 },
		{ 0, -87, 0 },
		{ 0, 0, 1 },
		{ 0, -98, 0 },
		{ 0, -82, 0 },
		{ 0, -95, 0 },
		{ 0, -76, 0 },
		{ 0, -88, 0 },
		{ 0, -79, 0 },
		{ 0, 0, 9 },
		{ 0, -91, 0 },
		{ 0, -89, 0 },
		{ 0, 0, 12 },
		{ 0, -90, 0 },
		{ 0, -78, 0 },
		{ 0, -77, 0 },
		{ 0, -82, 0 },
		{ 0, -67, 0 },
		{ 0, -70, 0 },
		{ 0, -82, 0 },
		{ 0, -108, 0 },
		{ 0, -91, 0 },
		{ 0, -66, 0 },
		{ 0, 0, 11 },
		{ 0, 0, 16 },
		{ 0, -64, 0 },
		{ 0, -71, 0 },
		{ 0, 0, 2 },
		{ 0, -69, 0 },
		{ 0, 0, 4 },
		{ 0, 0, 5 },
		{ 0, -77, 0 },
		{ 0, -65, 0 },
		{ 0, -76, 0 },
		{ 0, -68, 0 },
		{ 0, 0, 13 },
		{ 0, 0, 15 },
		{ 0, -58, 0 },
		{ 0, 0, 3 },
		{ 0, 0, 6 },
		{ 0, -66, 0 },
		{ 0, -63, 0 },
		{ 0, -55, 0 },
		{ 0, 0, 10 },
		{ 0, -70, 0 },
		{ 0, -68, 0 },
		{ 0, 0, 14 },
		{ 0, -52, 0 },
		{ 0, 0, 8 },
		{ 0, 0, 7 }
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
		0
	};
	yybackup = backup;
}
#line 65 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


