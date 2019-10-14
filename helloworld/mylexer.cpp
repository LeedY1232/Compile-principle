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
* Date: 09/30/19
* Time: 05:59:26
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

Date: 2019Äê9ÔÂ23ÈÕ
****************************************************************************/

#include "myparser.h"
int chars = 0;
int words = 0;
int lines = 0;

#line 52 "mylexer.cpp"
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
#line 27 ".\\mylexer.l"

	// place any extra initialisation code here

#line 76 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 32 ".\\mylexer.l"

	// place any extra cleanup code here

#line 88 "mylexer.cpp"
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
#line 39 ".\\mylexer.l"
words++;chars += strlen(yytext);
#line 160 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 40 ".\\mylexer.l"
chars++;lines++;
#line 167 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 41 ".\\mylexer.l"
chars++;
#line 174 "mylexer.cpp"
		}
		break;
#line 46 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 182 "mylexer.cpp"
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

	yytransitionmax = 172;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 4, 1 },
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
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 1 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 },
		{ 5, 5 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ -3, -9, 0 },
		{ 1, 0, 0 },
		{ 0, 0, 3 },
		{ 0, 0, 2 },
		{ 0, 49, 1 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 53 ".\\mylexer.l"

main(int argc,char **argv)
{
    printf("%8d%8d%8d\n",lines,words,chars);
}
/////////////////////////////////////////////////////////////////////////////
// programs section


