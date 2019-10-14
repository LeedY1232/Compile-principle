%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2019Äê9ÔÂ23ÈÕ
****************************************************************************/

#include "myparser.h"
int chars = 0;
int words = 0;
int lines = 0;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here

%%
[a-zA-Z]+ {words++;chars += strlen(yytext);}
\n {chars++;lines++;}
. {chars++;}

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here

%%
main(int argc,char **argv)
{
    printf("%8d%8d%8d\n",lines,words,chars);
}
/////////////////////////////////////////////////////////////////////////////
// programs section

