#include <math.h>
#include <stdlib.h>
#include <stdio.h>

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
		next = NULL;
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
	int check(string _name)
	{
		Node *p = first;
		if (p == NULL)
		{
			return error;
		}
		while (p != NULL && p->name != _name)
		{
			p = p->next;
		}
		if (p == NULL)
		{
			return error;
		}
		return p->address;
	}
};

class Tnode{
	string type;
	string name;
	string childrenmsg;
	int childnum;
	Node *address;
	vector<Tnode> child;
	Tnode(string msg, string name)
	{
		this->type = msg;
		this->name = name;
		this->childrenmsg = "children:";
		next = NULL;
	};
	
};


class Parse_Tree
{
public:
	Node *root;
	Node *childtree_root;
	char treemsg[2048];
	Parse_Tree()
	{
		root = NULL;
		childtree_root = NULL;
	}
	void initNewnode(Node *child, ...)
	{
		va_list childlist;
		va_start(childlist, *child);
		va_arg(childlist, Node);
		va_end(childlist);
	}

	void print_tree(){

	}
};
