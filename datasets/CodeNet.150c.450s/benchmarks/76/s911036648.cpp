// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

struct Node {
	int key;
	Node *parent, *left, *right;
};

// These pointer adress is NULL until first store (root == NIL).
// NIL adress is permanently NULL for defining empty node.
Node *root, *NIL;

void myInsert(int k) {
	Node *y = NIL; // parent
	Node *x = root; // comparison
	Node *z; // insertion

	z = (Node *)malloc(sizeof(Node));
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

void inOrderPrint(Node *n) {
	if (n == NIL) return;
	inOrderPrint(n->left);
	cout << " " << n->key;
	inOrderPrint(n->right);
}

void preOrderPrint(Node *n) {
	if (n == NIL) return;
	cout << " " << n->key;
	preOrderPrint(n->left);
	preOrderPrint(n->right);
}

Node * myFind(Node *n, int k) {
	while (n != NIL && n->key != k) {
		if (k > n->key)	n = n->right;
		else n = n->left;
	}
	return n;
}

int main() {
	int n, x;
	char com[7];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> com;
		if (com[0] == 'i') {
			cin >> x;
			myInsert(x);
		}
		else if (com[0] == 'p') {
			inOrderPrint(root);
			cout << endl;
			preOrderPrint(root);
			cout << endl;
		}
		else if (com[0] == 'f') {
			cin >> x;
			if(myFind(root, x ) == NIL) cout << "no";
			else cout << "yes";
			cout << endl;
		}
	}

	return 0;
}
