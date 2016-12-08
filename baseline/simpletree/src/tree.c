#include "tree.h"

int main(int argc, char *argv[])
{
		if (argc < 3) return -1;
		
		int n = atoi(argv[1]);
		int t = atoi(argv[2]);
		
		Node* root = build_tree(n);

		for(int i = 0; i < t; i++) visit_tree(root);
		
		return 0;
}

Node* build_tree(int n)
{
		if (n == 0) return NULL;

		Node* node = (Node*)malloc(sizeof(Node));
		node->data = 0;
		node->l    = build_tree(n-1);
		node->r    = build_tree(n-1);

		return node;
}

void visit_tree(Node* n)
{
		if (n == NULL) return;

		n->data++;

		visit_tree(n->l);
		visit_tree(n->r);
}
