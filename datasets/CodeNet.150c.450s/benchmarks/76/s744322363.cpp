#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

struct Node{
	int key;
	Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
	Node *y = NIL;
	Node *x = root;
	Node *z;
	
	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	
	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}else {
			x = x->right;
		}
	}
	
	z->parent = y;
	if (y == NIL) {
		root = z;
	}else {
		if (z->key < y->key) {
			y->left = z;
		}else {
			y->right = z;
		}
	}
}

void inOrder(Node* u){
	if (u == NIL) {
		return;
	}
	inOrder(u->left);
	printf(" %d", u->key);
	inOrder(u->right);
}

void preOrder(Node* u)
{
	if (u == NIL) {
		return;
	}
	printf(" %d", u->key);
	preOrder(u->left);
	preOrder(u->right);
}

bool find(Node* root, int k)
{
	while (root != NIL) {
		if (root->key == k) {
			return true;
		}else if (k < root->key) {
			root = root->left;
		}else {
			root = root->right;
		}
	}
	return false;
}


int main(int argc, char *argv[]) {
	int n, i, x;
	string com;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		cin >> com;
		if (com == "insert") {
			scanf("%d", &x);
			insert(x);
		}else if (com == "print") {
			inOrder(root);
			printf("\n");
			preOrder(root);
			printf("\n");
		}else if (com == "find") {
			scanf("%d", &x);
			if (find(root, x)) {
				printf("yes\n");
			}else {
				printf("no\n");
			}
		}
	}
	return 0;
}
