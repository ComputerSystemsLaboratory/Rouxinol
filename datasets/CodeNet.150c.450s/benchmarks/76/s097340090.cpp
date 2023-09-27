#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

#define MAX_N 500000
struct Node {
	int key;
	Node *parent;
	Node *left;
	Node *right;
	Node() :key(0), parent(NULL), left(NULL), right(NULL) {}
	~Node(){}
};

Node *root, *NIL;

Node* find(Node *u, int key) {
	while (u != NIL && key != u->key) {
		if (key < u->key) u = u->left;
		else u = u->right;
	}
	return u;
}

void insert(int key) {
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = new Node;
	z->key = key;
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
	return;
}

void inorder(Node *u) {
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
	return;
}

void preorder(Node *u) {
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
	return;
}

int main() {
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		string order;
		cin >> order;
		if (order == "insert") {
			int key;
			scanf("%d", &key);
			insert(key);
		}
		else if (order == "find") {
			int key;
			scanf("%d", &key);
			Node *t = find(root, key);
			if (t != NIL) printf("yes\n");
			else printf("no\n");
		}
		else {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}

	return 0;
}