%{
#include "table.h"
int yyerror(const char *msg);
extern int yylex();
extern FILE* yyin;
extern char yytext[];
Parse_Tree myparse_tree;
Tnode *p;

%}
%union {
		class Node *node;
		class Tnode *tnode;
}

%token <tnode> VOID INT
%token <tnode> MAIN
%token <tnode> WHILE FOR
%nonassoc <tnode> IF
%nonassoc <tnode> ELSE
%token <tnode> SEMICOLON
%right <tnode> ASSIGN
%token <tnode> DEFINE
%token <tnode> STRUCT
%token <tnode> INPUT
%token <tnode> OUTPUT
%token <node> ID DIGIT
%token <tnode> EOR_ID
%left <tnode> PLUS MINUS
%left <tnode> MULTIPLY DIVIDE MOD
%left <tnode> POW
%token <tnode> L_E GT LT GTandL_E LTandL_E LNOT
%left <tnode> NOT
%left <tnode> AND
%left <tnode> OR
%token <tnode> LP RP SINGLE_QUOTE DOUBLE_QUOTE LBRACE RBRACE
%token <tnode> COMIC UNDEFINED


%type <tnode> Type_Specifier function_definition
%type <tnode> declaration expression expression_statement write_Statement input_Statement compound_statement iteration_statement
%type <tnode> selection_statement statement primary_expression block_item_list block_item LP_Symbol
%type <tnode> init_declarator_list init_declarator self_operate_expression additive_expression
%type <tnode> mutiply_expression power_expression logic_and_expression logic_or_expression login_not_expression Logic_assign_expression

%start function_definition

%%

Type_Specifier
	:VOID   	{ p = new Tnode("Type_Specifier", "VOID");
					$$ = p;}
	|INT		{ p = new Tnode("Type_Specifier", "INT");
					$$ = p;}
	;

primary_expression
	:ID			{ p = new Tnode("ID Declaration", $1->name);
					p->address = $1;
					$$ = p;}
	|DIGIT      { 	int hello = $1->value;
					char buffer[20];  
					_itoa( hello, buffer, 10 );
					string s(buffer);
					p = new Tnode("CONST Declaration",s);
					p->address = $1;	
					$$ = p;}
	|LP additive_expression RP {
				$$ = $2;
		}
	;

	
function_definition
	:Type_Specifier MAIN LP RP compound_statement{
			p = new Tnode("function_definition", "Main");		
			p->addchild($5);
			myparse_tree.root = p;
			$$ = p;
			myparse_tree.print_tree(myparse_tree.root, 0);
	}
	;

statement
	:compound_statement  
	|expression_statement
	|selection_statement
	|iteration_statement
	|write_statement
	|input_statement
	;

compound_statement
	:LBRACE RBRACE				   {$$ = NULL;}
	|LBRACE block_item_list RBRACE {$$ = $2;}
	;
	
block_item_list
	:block_item						{
									p = new Tnode("compound_statement"," ");
									p->addchild($1);
									$$ = p;
									}
	|block_item_list block_item     {
									
									$1->addchild($2);
									}
	;
	
block_item
	:declaration					
	|statement
	;	
	
declaration
	:Type_Specifier init_declarator_list SEMICOLON  {	
														$2->addchild($1);
														$$ = $2;
													}											
	;

init_declarator_list
	: init_declarator								{	
														p = new Tnode("Var declaration", " ");
														p->addchild($1);
														$$ = p;
													}
	| init_declarator_list COMIC init_declarator    {$$->addchild($3);}


init_declarator
	: ID											{
														p = new Tnode("ID declaration",$1->name);
														$$ = p;
													}			
	| ID ASSIGN additive_expression					{	
														p = new Tnode("expression_statement","=");
														$$ = p;
														p = new Tnode("ID declaration",$1->name);
														$$->addchild(p);
														$$->addchild($3);											 
													}	

expression_statement
	:SEMICOLON										{$$ = NULL;}
	|expression SEMICOLON						
	;
	
expression
	:logic_or_expression      
	|ID ASSIGN additive_expression    					{	p = new Tnode("expression_statement","=");
														$$ = p;
														p = new Tnode("ID declaration",$1->name);
														$$->addchild(p);
														$$->addchild($3);									 
														}	
	|self_operate_expression
	;
	
self_operate_expression
	:ID PLUS PLUS										{p = new Tnode("expression_statement","op:++");
														$$ = p;
														p = new Tnode("ID declaration",$1->name);
														$$->addchild(p);
														}
	|ID MINUS MINUS										{p = new Tnode("expression_statement","op:--");
														$$ = p;
														p = new Tnode("ID declaration",$1->name);
														$$->addchild(p);
														}
	|PLUS PLUS ID										{p = new Tnode("expression_statement","++op:");
														$$ = p;
														p = new Tnode("ID declaration",$3->name);
														$$->addchild(p);
														}
	|MINUS MINUS ID										{p = new Tnode("expression_statement","--op:");
														$$ = p;
														p = new Tnode("ID declaration",$3->name);
														$$->addchild(p);
														}
	;
	
additive_expression
	:mutiply_expression
	|additive_expression PLUS mutiply_expression		{p = new Tnode("expression_statement","op:+");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	|additive_expression MINUS mutiply_expression		{p = new Tnode("expression_statement","op:-");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	;

mutiply_expression
	:power_expression
	|mutiply_expression MULTIPLY power_expression		{p = new Tnode("expression_statement","op:*");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	|mutiply_expression DIVIDE power_expression			{p = new Tnode("expression_statement","op:/");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	|mutiply_expression MOD power_expression			{p = new Tnode("expression_statement","op:%");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	;
	
power_expression
	:primary_expression POW primary_expression			{p = new Tnode("expression_statement","op:^");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	|primary_expression								
	;
	
Logic_assign_expression
	:primary_expression
	|primary_expression LP_Symbol primary_expression	{$2->addchild($1);
														$2->addchild($3);
														$$ = $2;}
	;
	
logic_and_expression
	:login_not_expression
	|logic_and_expression AND login_not_expression		{p = new Tnode("expression_statement","op:&&");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	;

logic_or_expression
	:logic_and_expression
	|logic_or_expression OR logic_and_expression		{p = new Tnode("expression_statement","op:||");
														$$ = p;
														$$->addchild($1);
														$$->addchild($3);}
	;
	
login_not_expression
	:Logic_assign_expression
	|NOT Logic_assign_expression						{p = new Tnode("expression_statement","op:!");
														$$ = p;
														$$->addchild($2);
														}
	;
	
selection_statement
	:IF LP expression RP statement %prec IF				{p = new Tnode("selection_statement"," ");
														$$ = p;
														p =new Tnode("IF"," ");
														p->addchild($3);
														p->addchild($5);
														$$->addchild(p);}
	|IF LP expression RP statement ELSE statement		{p = new Tnode("selection_statement"," ");
														$$ = p;
														p =new Tnode("IF"," ");
														p->addchild($3);
														p->addchild($5);
														$$->addchild(p);
														p =new Tnode("ELSE"," ");
														p->addchild($7);
														$$->addchild(p);}
	;

iteration_statement
	:WHILE LP expression RP statement			{
												p = new Tnode("iteration_statement","while");
												$$ = p;
												$$->addchild($3);
												$$->addchild($5);
												}
	|FOR LP expression_statement expression_statement RP statement
														{
														p = new Tnode("iteration_statement","for");
														$$ = p;
														$$->addchild($3);
														$$->addchild($4);
														$$->addchild($6);
														}
	|FOR LP expression_statement expression_statement expression RP statement	{
														p = new Tnode("iteration_statement","for");
														$$ = p;
														$$->addchild($3);
														$$->addchild($4);
														$$->addchild($5);
														$$->addchild($7);
														}
	|FOR LP declaration expression_statement RP statement	{
														p = new Tnode("iteration_statement","for");
														$$ = p;
														$$->addchild($3);
														$$->addchild($4);
														$$->addchild($6);
														}
	|FOR LP declaration expression_statement expression RP statement{
														p = new Tnode("iteration_statement","for");
														$$ = p;
														$$->addchild($3);
														$$->addchild($4);
														$$->addchild($5);
														$$->addchild($7);
														}
	;

LP_Symbol
	:LT									{p = new Tnode("expression_statement","op:<");
										$$ = p;}
	|LTandL_E							{p = new Tnode("expression_statement","op:<=");
										$$ = p;}
	|L_E								{p = new Tnode("expression_statement","op:==");
										$$ = p;}
	|GT									{p = new Tnode("expression_statement","op:>");
										$$ = p;}
	|GTandL_E							{p = new Tnode("expression_statement","op:>=");
										$$ = p;}
	|LNOT								{p = new Tnode("expression_statement","op:!=");
										$$ = p;}
	;
	
	
write_statement
	:OUTPUT LP primary_expression RP SEMICOLON						{p = new Tnode("write_Statement","print");
																	$$ = p;
																	$$->addchild($3);
																	}
	;

input_statement
	:INPUT LP ID RP
	;

%%




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




