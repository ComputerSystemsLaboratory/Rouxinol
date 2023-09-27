#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

struct Node {
	int key;
	Node *parent, *left, *right;
};

Node *root, *nil;

void insert(int& a) {
	Node *b = (Node*)malloc(sizeof(Node)), *c = root, *d = nil;
	b->key = a;
	b->left = nil;
	b->right = nil;
	while (c != nil) {
		d = c;
		if (b->key < c->key) c = c->left;
		else c = c->right;
	}
	b->parent = d;
	if (b->parent == nil) root = b;
	else if (b->key < b->parent->key) b->parent->left = b;
	else b->parent->right = b;
}

void inorderTreeWalk(Node* a = root) {
	if (a != nil) {
		inorderTreeWalk(a->left);
		cout << ' ' << a->key;
		inorderTreeWalk(a->right);
	}
}

void preorderTreeWalk(Node* a = root) {
	if (a != nil) {
		cout << ' ' << a->key;
		preorderTreeWalk(a->left);
		preorderTreeWalk(a->right);
	}
}

int main() {
	int m, k;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string a;
		cin >> a;
		if (a == "insert") {
			cin >> k;
			insert(k);
		}
		else {
			inorderTreeWalk();
			cout << endl;
			preorderTreeWalk();
			cout << endl;
		}
	}
}
