
%{
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;
#define error -1
class Node {
public:
	int value;
	int address;
	string name;
	string type;
	Node* next;
	Node();
};
Node::Node(){
	next = NULL;
}
class Table {
public:
	Node *first,*end;
	Table();
	void add(Node* node);
	int check(string _name);
};
Table::Table(){
	first=NULL;
	end=NULL;
}
void Table::add(Node* node){
	if(first == NULL) {
		first = node;
		end = node;
		return;
	}
	end->next = node;
	end = node;
}

int Table::check(string _name) {
	Node* p = first;
	if (p == NULL) {
		return -1;
	}
	while (p != NULL && p->name != _name){
		p = p->next;
	}
	if (p == NULL) {
		return -1;
	}
	return p->address;	
}
Table my_table;
int init_ID(string _name) {
	int addr = my_table.check(_name);
	if (addr != -1) {
		return addr;
	}
	Node* new_node = new Node();

	new_node->name = _name;
	new_node->address = int(new_node);
	my_table.add(new_node);
	return new_node->address; 
}


%}

DIGIT [0-9]+
ID [_]*[A-Za-z][_]*[A-Za-z0-9_]*
EOR_ID [0-9]+[_]*[A-Za-z0-9_]*
ws [\t\n ]*
VOID void
INT int
MAIN main
IF if
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
OUTPUT   printf
WHILE    while
FOR    for
ROP    "=="|">"|"<"|">="|"<="|"!="
LOP    "&&"|"||"|"!"
DEFINE    #define
COMMENT    ("//"[ \t\nA-Za-z_0-9]*)|("/*"[A-Za-z_0-9\t\n ]*"*/")
INPUT_FORMAT    "%d"|"%s"|"%f"
%%
{DIGIT}                     {printf("%-20s%-20s%-20d\n","NUMBER",yytext,atoi(yytext));}
{VOID}                      {printf("%-20s%-20s\n","VOID",yytext);}
{INT}                       {printf("%-20s%-20s\n","INT",yytext);}
{MAIN}                      {printf("%-20s%-20s\n","MAIN",yytext);}
{WHILE}                     {printf("%-20s%-20s\n","WHILE",yytext);}
{FOR}                       {printf("%-20s%-20s\n","FOR",yytext);}
{IF}                        {printf("%-20s%-20s\n","IF",yytext);}
{ASSIGN}                    {printf("%-20s%-20s\n","ASSIGN",yytext);}
{SEMICOLON}                 {printf("%-20s%-20s\n","SEMICOLON",yytext);}
{DEFINE}                    {printf("%-20s%-20s\n","DEFINE",yytext);}
{STRUCT}                    {printf("%-20s%-20s\n","STRUCT",yytext);}
{INPUT}                     {printf("%-20s%-20s\n","INPUT",yytext);}
{OUTPUT}                    {printf("%-20s%-20s\n","OUTPUT",yytext);}
{ID}                        {printf("%-20s%-20s%-20d\n","ID", yytext, init_ID(yytext));}						
{EOR_ID}                    {printf("%-20s%-20s\n","EOR_ID",yytext);}
"+"                         {printf("%-20s%-20s\n","PLUS(OP)",yytext);}
"-"                         {printf("%-20s%-20s\n","MINUS(OP)",yytext);}
"*"                         {printf("%-20s%-20s\n","MULTIPLY(OP)",yytext);}
"/"                         {printf("%-20s%-20s\n","DIVIDE(OP)",yytext);}
"%"                         {printf("%-20s%-20s\n","MOD(OP)",yytext);}
"^"                         {printf("%-20s%-20s\n","POW(OP)",yytext);}
"=="                        {printf("%-20s%-20s\n","L_E(LP)",yytext);}
">"                         {printf("%-20s%-20s\n","GT(LP)",yytext);}
"<"                         {printf("%-20s%-20s\n","LT(LP)",yytext);}
">="                        {printf("%-20s%-20s\n","GT&L_E(LP)",yytext);}
"<="                        {printf("%-20s%-20s\n","LT&L_E(LP)",yytext);}
"!="                        {printf("%-20s%-20s\n","LNOT(LP)",yytext);}                        
"&&"                        {printf("%-20s%-20s\n","AND(LOP)",yytext);}                    
"||"                        {printf("%-20s%-20s\n","OR(LOP)",yytext);}
"!"                         {printf("%-20s%-20s\n","NOT(LOP)",yytext);}
{LP}                        {printf("%-20s%-20s\n","LP",yytext);}
{RP}                        {printf("%-20s%-20s\n","RP",yytext);}
{SINGLE_QUOTE}              {printf("%-20s%-20s\n","SINGLE_QUOTE",yytext);}
{DOUBLE_QUOTE}              {printf("%-20s%-20s\n","DOUBLE_QUOTE",yytext);}
{LBRACE}                    {printf("%-20s%-20s\n","LBRACE",yytext);}
{RBRACE}                    {printf("%-20s%-20s\n","RBRACE",yytext);}
{COMMENT}                   {printf("%-20s%-20s\n","COMMENT",yytext);}
{COMIC}                     {printf("%-20s%-20s\n","COMIC",yytext);}
{INPUT_FORMAT}              {printf("%-20s%-20s\n","INPUT_FORMAT",yytext);}
{ws}                        {}
.                           {printf("%-20s%-20s\n","UNDEFINED",yytext);}

%%

int main()
{
	//yyin = fopen("2.c","r");
    yylex();
	getchar();
    return 0;
}
int yywrap()
{
    return 1;
}