D [0-9]
L [a-zA-Z]
H [a-fA-F0-9]
E [Ee][+-]?{D}+
FS (f|F|l|L)
IS (u|U|l|L)*
%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2019Äê9ÔÂ16ÈÕ
****************************************************************************/
#include<stdio.h>
#include "myparser.h"
void count();

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
"/*" {comment();}
"auto" {count();return(AUTO);}
"break" {count();return(BREAK);}
"case" {count();return(CASE);}
"char" {count();return(CHAR);}
"const" {count();return(CONST);}
"continue" {count();return(CONTINUE);}
"default" {count();return(DEFAULT);}
"do" {count();return(DO);}
"while" {count();return(WHILE);}
"for" {count();return(FOR);}
"if" {count();return(IF);}
"else" {count();return(ELSE);}
"define" {count();return(DEFINE);}
"void" {count();return(VOID);}
"int" {count();return(INT);}
"(" {count();return(LP);}
")" {count();return(RP);}
"{" {count();return(LBRACE);}
"}" {count();return(RBRACE);}
"=" {count();return(ASSIGN);}
"!" {count();return(LNOT);}
";" {count();return(SEMICOLON);}
"main" {count();return(MAIN);}
0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{IS}?		{ count(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }
/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

