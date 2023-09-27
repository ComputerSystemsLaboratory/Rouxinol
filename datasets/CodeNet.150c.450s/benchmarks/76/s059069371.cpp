#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct Node { int key; struct Node *p, *left, *right; };

Node *T = NULL;

void Preorder(Node *id) {
	if (id == NULL) return;
	cout << " " << id->key;
	Preorder(id->left);
	Preorder(id->right);
}

void Inorder(Node *id) {
	if (id == NULL) return;
	Inorder(id->left);
	cout << " " << id->key;
	Inorder(id->right);
}

void treeInsert(Node *Z) {
	Node *y = NULL;
	Node *x = T;
	while (x != NULL) {
		y = x;
		if (Z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	Z->p = y;
	if (y == NULL)
		T = Z;
	else if (Z->key < y->key)
		y->left = Z;
	else
		y->right = Z;
}

bool treeFind(int key) {
	Node *y = NULL;
	Node *x = T;
	while (x != NULL) {
		y = x;
		if (key == x->key)
			return true;
		else if (key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	Node *node = new Node[n];
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "insert") {
			cin >> node[i].key;
			node[i].left = NULL;
			node[i].right = NULL;
			treeInsert(&node[i]);
		}
		else if (s == "find") {
			int key;
			cin >> key;
			if (treeFind(key))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else {
			Inorder(T);
			cout << endl;
			Preorder(T);
			cout << endl;
		}
	}
	delete[] node;
	return 0;
}