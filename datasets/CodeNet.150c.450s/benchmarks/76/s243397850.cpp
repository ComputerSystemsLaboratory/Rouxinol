#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Node {
	int key;
	Node* parent, * left, * right;
};

Node* root, * NIL;

void insert(int a) {
	Node* x = root;
	Node* y = NIL;
	Node* z;

	z = (Node*)malloc(sizeof(Node));
	z->key = a;
	z->right = NIL;
	z->left = NIL;

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

Node* find(Node* u, int k) {
	while (u != NIL && k != u->key) {
		if (k < u->key) u = u->left;
		else u = u->right;
	}
	return u;
}

void Pre(Node* u) {
	if (u == NIL) return;
	printf(" %d", u->key);
	Pre(u->left);
	Pre(u->right);
}

void In(Node * u) {
	if (u == NIL) return;
	In(u->left);
	printf(" %d", u->key);
	In(u->right);
}


int main() {
	int n, x;
	string str;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "insert") {
			scanf("%d", &x);
			insert(x);
		}
		else if (str == "print") {
			In(root);
			printf("\n");
			Pre(root);
			printf("\n");

		}
		else if (str == "find") {
			scanf("%d", &x);
			Node* node = find(root, x);
			if (node != NIL) printf("yes\n");
			else printf("no\n");
		}
	}

	return 0;
}

