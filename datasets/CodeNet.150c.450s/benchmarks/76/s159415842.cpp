#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <string>
#pragma warning(disable : 4996)


struct Node {
	int value;
	Node *parent;
	Node *left;
	Node *right;
	Node() : parent(NULL), left(NULL), right(NULL) {}
};

void Preorder(Node *node) {
	printf(" %d", node->value);
	if(node->left != NULL) Preorder(node->left);
	if(node->right != NULL) Preorder(node->right);
}
void Inorder(Node *node) {
	if (node->left != NULL) Inorder(node->left);
	printf(" %d", node->value);
	if (node->right != NULL) Inorder(node->right);
}
void Postorder(Node *node) {
	if (node->left != NULL) Postorder(node->left);
	if (node->right != NULL) Postorder(node->right);
	printf(" %d", node->value);
}
Node *Insert(Node *root, Node *z) {
	Node *y = NULL;
	Node *x = root;
	while (x != NULL) {
		y = x;
		if (z->value < x->value) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NULL) {
		root = z;
	}
	else if(z->value < y->value) {
		y->left = z;
	}
	else {
		y->right = z;
	}
	return root;
}
Node *Find(Node *root, int v) {
	Node *x = root;
	while (x != NULL) {
		if(x->value == v) { 
			return x;
		}
		else if (v < x->value) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	return NULL;
}
int main(void) {
	int n;
	scanf("%d", &n);
	char line[1024];
	Node *root = NULL;
	for (int i = 0; i < n; ++i) {
		scanf("%s", &line[0]);
		if (strcmp(line, "print") == 0) {
			Inorder(root);
			printf("\n");
			Preorder(root);
			printf("\n");
		}
		else {
			int k;
			scanf("%d", &k);
			if (strcmp(line, "insert") == 0) {
				Node *z = new Node();
				z->value = k;
				root = Insert(root, z);
			}
			else {
				if (Find(root, k) == NULL) {
					printf("no\n");
				}
				else {
					printf("yes\n");
				}
			}
		}
	}
	return 0;
}
