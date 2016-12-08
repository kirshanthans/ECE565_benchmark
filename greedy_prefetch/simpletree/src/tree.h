#ifndef TREE_H_
#define TREE_H_
#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
		int data;
		struct tree* l;
		struct tree* r;
}Node;

Node* build_tree(int n);
void  visit_tree(Node* n);
#endif
