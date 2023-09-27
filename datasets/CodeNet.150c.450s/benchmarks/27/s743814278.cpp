#include<iostream>
using namespace std;

struct Node {
	int key;
	Node *p, *l, *r;
};

Node *nil;
Node *root = nil;

void insert(int k) {
	Node *y = nil;
	Node *x = root;
	Node *z = new Node;
	z->key = k;
	z->l = nil;
	z->r = nil;
	while (x != nil) {
		y = x;
		if (z->key < x->key) x = x->l;
		else x = x->r;
	}
	z->p = y;
	if (y == nil) root = z;
	else {
		if (z->key < y->key) y->l = z;
		else y->r = z; 
	}
}

void inorder(Node *root) {
	if (root == nil) return;
	inorder(root->l);
	cout << ' ' << root->key;
	inorder(root->r);
}

void preorder(Node *root) {
	if (root == nil) return;
	cout << ' ' << root->key;
	preorder(root->l);
	preorder(root->r);
}

void print() {
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
}

int main() {
	int n, key;
	char cmd[10];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd[0] == 'i') {
			cin >> key;
			insert(key);
		}
		else print();
	}

	return 0;
}