#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node {
	int key;
	Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k) {
	Node *x = root;
	Node *y = NIL;
	Node *z;

	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void inorder(Node *u) {
	if (u == NIL) return;
	inorder(u->left);
	cout << " " << u->key;
	inorder(u->right);
}

void preorder(Node *u) {
	if (u == NIL) return;
	cout << " " << u->key;
	preorder(u->left);
	preorder(u->right);
}

Node* find(Node *u,int k) {
	while (u != NIL && k != u->key) {
		if (k < u->key) {
			u = u->left;
		}
		else {
			u = u->right;
		}
	}

	return u;
}

int main() {
	int n, x;
	string com;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		cin >> com;
		if (com == "insert") {
			scanf("%d", &x);
			insert(x);
		}
		else if (com == "print") {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
		else if (com == "find") {
			scanf("%d", &x);
			Node *t = find(root, x);
			if (t != NIL) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}


	return 0;
}


