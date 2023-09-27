#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

#define MAX 120

struct Node {
	int key;
	Node *p, *l, *r;
};

Node *root, *NIL;

void insert(int k) {
	Node *x = root;
	Node *y = NIL;
	Node *z;
	z = new Node;
	z->key = k; z->l = NIL; z->r = NIL;
	while (x != NIL) {
		y = x;
		if (z->key < x->key) x = x->l;
		else x = x->r;
	}
	z->p = y;

	if (y == NIL) root = z;
	else if (z->key < y->key) y->l = z;
	else y->r = z;
}

void preorder(Node *u) {
	if (u == NIL) return;
	cout << " " << u->key;
	preorder(u->l);
	preorder(u->r);
}

void inorder(Node *u) {
	if (u == NIL) return;
	inorder(u->l);
	cout << " " << u->key;
	inorder(u->r);
}

void print() {
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
}

int main() {
	int n;
	int num;
	cin >> n; cin.ignore();
	string line;
	for (int i = 0; i < n; i++) {
		getline(cin, line);
		if (line[0] == 'i') {
			num = atoi(line.substr(7).c_str());
			insert(num); 
			
		}
		else print();
	}
}