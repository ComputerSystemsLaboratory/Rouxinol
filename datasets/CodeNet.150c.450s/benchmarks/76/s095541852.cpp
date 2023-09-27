#include <stdlib.h>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

struct Node {
	int key;
	Node* p;
	Node* l;
	Node* r;
};

Node* root;
Node* NIL;

void insert(int z) {

	Node* y = NIL;
	Node* x = root;

	Node* zn = (Node *) malloc(sizeof(Node));
	zn->key = z;
	zn->l = NIL;
	zn->r = NIL;

	while (x != NIL) {
		y = x;
		if (zn->key < x->key)
			x = x->l;
		else
			x = x->r;
	}

	if (y == NIL)
		root = zn;
	else if (zn->key < y->key)
		y->l = zn;
	else
		y->r = zn;

}

bool find(Node* n, int k) {
	if (n->key == k)
		return true;

	bool result;
	if (k < n->key) {
		if (n->l != NIL)
			result = find(n->l, k);
		else
			result = false;
	}

	if (n->key < k) {

		if (n->r != NIL)
			result = find(n->r, k);
		else
			result = false;
	}
	return result;
}

void printInOrder(Node* n) {
	if (n == NIL)
		return;

	printInOrder(n->l);
	cout << " " << n->key;
	printInOrder(n->r);
}

void printPreOrder(Node* n) {
	if (n == NIL)
		return;
	cout << " " << n->key;
	printPreOrder(n->l);
	printPreOrder(n->r);
}

int main() {

	int n;
	scanf("%d", &n);

	string s;
	int k;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s == "insert") {
			scanf("%d", &k);
			insert(k);
		} else if (s == "find") {
			scanf("%d", &k);
			if (find(root, k))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		} else {
			printInOrder(root);
			cout << endl;
			printPreOrder(root);
			cout << endl;
		}
	}

	return 0;
}