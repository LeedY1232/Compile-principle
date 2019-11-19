
%{
#include "table.h"
#include "myparser.tab.h"

extern YYSTYPE yylval;
Table my_table;
/*int init_ID(string _name) {
	int addr = my_table.check(_name);
	if (addr != error) {
		return addr;
	}
	Node* new_node = new Node();

	new_node->name = _name;
	new_node->address = int(new_node);
	my_table.add(new_node);
	return new_node->address; 
}*/
Node* hello_ID(string _name) {
	Node* addr = my_table.check(_name);
	if (addr != NULL) {
		return addr;
	}
	Node* new_node = new Node();
	new_node->name = _name;
	new_node->address = int(new_node);
	my_table.add(new_node);
	return new_node;
}

%}

DIGIT [0-9]+
ID [A-Za-z_][A-Za-z0-9_]*
EOR_ID [0-9]+[_]*[A-Za-z0-9_]*
ws [\t\n ]*
VOID void
INT int
MAIN main
IF if
ELSE else
LP   "("
RP   ")"
LBRACE    "{"
RBRACE    "}"
SINGLE_QUOTE   "'"|"'"
DOUBLE_QUOTE   "\""|"\""
ASSIGN	  =
SEMICOLON   ;
COMIC    ,
STRUCT   struct
INPUT    scanf
OUTPUT   print
WHILE    while
FOR    for
PLUS "+"
MINUS "-"
MULTIPLY "*"
DIVIDE "/"
MOD "%"
POW "^"
L_E "=="
GT ">"
GTandL_E ">="
LT "<"
LTandL_E "<="
LNOT "!="
AND "&&"
OR "||"
NOT "!"
DEFINE    #define
COMMENT    ("//"[^\n]*)|("/*"[^\t\n ]*"*/")

%%

{DIGIT}                     {
								//printf("%-20s%-20s%-20d\n","NUMBER",yytext,atoi(yytext));
								yylval.node = new Node(atoi(yytext));
								return(DIGIT);
							}

{VOID}                      {
								//printf("%-20s%-20s\n","VOID",yytext);
							
								return(VOID);
							}

{INT}                       {	
								//printf("%-20s%-20s\n","INT",yytext);
								
								return(INT);
							}

{MAIN}                      {
								//printf("%-20s%-20s\n","MAIN",yytext);
								
								return(MAIN);
							}

{WHILE}                     {
								//printf("%-20s%-20s\n","WHILE",yytext);
								
								return(WHILE);
							}

{FOR}                       {
								//printf("%-20s%-20s\n","FOR",yytext);
							
								return(FOR);
							}

{IF}                        {
								//printf("%-20s%-20s\n","IF",yytext);
								
								return(IF);
							}
		
{ELSE}                      {
								//printf("%-20s%-20s\n","ELSE",yytext);
								
								return(ELSE);
							}

{ASSIGN}                    {
								//printf("%-20s%-20s\n","ASSIGN",yytext);
								
								return(ASSIGN);
							}

{SEMICOLON}                 {
								//printf("%-20s%-20s\n","SEMICOLON",yytext);
								return(SEMICOLON);
							}

{DEFINE}                    {
								//printf("%-20s%-20s\n","DEFINE",yytext);
								return(DEFINE);
							}

{STRUCT}                    {
								//printf("%-20s%-20s\n","STRUCT",yytext);
								return(STRUCT);
							}

{INPUT}                     {	
								//printf("%-20s%-20s\n","INPUT",yytext);
								return(INPUT);
							}

{OUTPUT}                    {	
								//printf("%-20s%-20s\n","OUTPUT",yytext);
								
								return(OUTPUT);
							}

{ID}                        {
								yylval.node = hello_ID(yytext);
								//printf("%-20s%-20s%-20d\n","ID", yytext, init_ID(yytext));
								
								return(ID);	
							}	

{EOR_ID}                    {	
								//printf("%-20s%-20s\n","EOR_ID",yytext);
								
								return(EOR_ID);
							}

{PLUS}                      {	
								//printf("%-20s%-20s\n","PLUS",yytext);
								
								return(PLUS);
							}

{MINUS}                     {	
								//printf("%-20s%-20s\n","MINUS",yytext);
								
								return(MINUS);
							}

{MULTIPLY}                  {
								//printf("%-20s%-20s\n","MULTIPLY",yytext);
								
								return(MULTIPLY);
							}

{DIVIDE}                    {
								//printf("%-20s%-20s\n","DIVIDE",yytext);
								
								return(DIVIDE);
							}

{MOD}                       {	
								//printf("%-20s%-20s\n","MOD",yytext);
								
								return(MOD);
							}

{POW}                       {
								//printf("%-20s%-20s\n","POW",yytext);
								
								return(POW);
							}

{L_E}                       {
								//printf("%-20s%-20s\n","L_E",yytext);
								
								return(L_E);
							}

{GT}                        {
								//printf("%-20s%-20s\n","GT",yytext);
								
								return(GT);
							}

{LT}                        {	
								//printf("%-20s%-20s\n","LT",yytext);
								
								return(LT);
							}

{GTandL_E}                  {	
								//printf("%-20s%-20s\n","GTandL_E",yytext);
								
								return(GTandL_E);
							}

{LTandL_E}                  {	
								//printf("%-20s%-20s\n","LTandL_E",yytext);
								
								return(LTandL_E);
							}

{LNOT}                      {	
								//printf("%-20s%-20s\n","LNOT",yytext);
								
								return(LNOT);
							}   

{AND}                       {	
								//printf("%-20s%-20s\n","AND",yytext);
								
								return(AND);
							}  

{OR}                        {	
								//printf("%-20s%-20s\n","OR",yytext);
								
								return(OR);
							}

{NOT}                       {	
								//printf("%-20s%-20s\n","NOT",yytext);
								
								return(NOT);
							}

{LP}                        {
								//printf("%-20s%-20s\n","LP",yytext);
								return(LP);
							}

{RP}                        {	
								//printf("%-20s%-20s\n","RP",yytext);
								return(RP);
							}

{SINGLE_QUOTE}              {	
								//printf("%-20s%-20s\n","SINGLE_QUOTE",yytext);
								return(SINGLE_QUOTE);
							}

{DOUBLE_QUOTE}              {	
								//printf("%-20s%-20s\n","DOUBLE_QUOTE",yytext);
								return(DOUBLE_QUOTE);
							}
{LBRACE}                    {//printf("%-20s%-20s\n","LBRACE",yytext);
							return(LBRACE);}
{RBRACE}                    {//printf("%-20s%-20s\n","RBRACE",yytext);
							return(RBRACE);}
{COMMENT}                   {//printf("%-20s%-20s\n","COMMENT",yytext);
							}
{COMIC}                     {//printf("%-20s%-20s\n","COMIC",yytext);
								return(COMIC);}
{ws}                        {}
.                           {//printf("%-20s%-20s\n","UNDEFINED",yytext);
							return(UNDEFINED);}

%%


int yywrap(void)
{
	return 1;
}
