#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
#include <cstring>
#include <stdarg.h>

#define error -1
class Node
{
public:
	int value;
	int address;
	string name;
	string type;
	Node *next;
	Node()
	{
		this->next = NULL;
	}
	Node(int number){
		this->value = number;
	}
	
};

class Table
{
public:
	Node *first, *end;
	Table()
	{
		first = NULL;
		end = NULL;
	}
	void add(Node *node)
	{
		if (first == NULL)
		{
			first = node;
			end = node;
			return;
		}
		end->next = node;
		end = node;
	}
	Node* check(string _name)
	{
		Node *p = first;
		if (p == NULL)
		{
			return NULL;
		}
		while (p != NULL && p->name != _name)
		{
			p = p->next;
		}
		if (p == NULL)
		{
			return NULL;
		}
		return p;
	}
};

class Tnode{
public:
	string type;
	string name;
	string childrenmsg;
	int childnum;
	Node *address;
	vector<Tnode*> child;
	Tnode(string msg, string name)
	{
		this->type = msg;
		this->name = name;
		this->childrenmsg = "children:";
		this->address = NULL;
	};
	void addchild(Tnode *t){
		if(t != NULL){
			child.push_back(t);
		}
	}
	
};


class Parse_Tree
{
public:
	Tnode *root;
	char treemsg[2048];
	Parse_Tree()
	{
		this->root = NULL;
	}
	void print_tree(Tnode* c, int num){
		cout<<c->type<<"    "<<c->name<<endl;
		for(int i = 0; i < c->child.size(); i++) {
			for(int j = 0; j < num; j++) {
				cout<<"  ";
				if(j == num-1){
					cout<<"|-*";
				}
			}
			print_tree((c->child)[i], num + 1);
		}
		
	}
};
