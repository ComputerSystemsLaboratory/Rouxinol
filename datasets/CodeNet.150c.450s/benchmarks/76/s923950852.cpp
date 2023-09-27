#include<iostream>
using namespace std;

struct Node {
	int key;
	Node *parent, *left, *right;
};

Node *NIL, *root;

void printPreOrder(Node *u);
void printInOrder(Node *u);
void insertTree(int k);
void isFound(int k);

int main() {
	int i, j, n, k;
	char com[10];
	cin >> n;
	
	for (i = 0; i < n; i++) {
		cin >> com;
		if (com[0] == 'i') {
			cin >> k;
			insertTree(k);
		} else if(com[0] == 'f'){
			cin >> k;
			isFound(k);
		} else {
			printInOrder(root);
			cout << endl;
			printPreOrder(root);
			cout << endl;
		}
	}
	return 0;
}

void printPreOrder(Node *u) {
	if (u == NIL)return;
	cout << " " << u->key;
	printPreOrder(u->left);
	printPreOrder(u->right);
}

void printInOrder(Node *u) {
	if (u == NIL)return;
	printInOrder(u->left);
	cout << " " << u->key;
	printInOrder(u->right);
}

void insertTree(int k) {
	Node *y = NIL;
	Node *x = root;
	Node *z;
	z = new Node;
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	while (x != NIL) {
		y = x;
		if (z->key < x->key)x = x->left;
		else x = x->right;
	}
	z->parent = y;
	if (y == NIL)root = z;
	else if (z->key < y->key)y->left = z;
	else y->right = z;
}

void isFound(int k) {
	Node *x = root;
	while (x != NIL) {
		if (x->key == k) {
			cout << "yes\n";
			return;
		}
		else if (x->key < k)x = x->right;
		else x = x->left;
	}
	cout << "no\n";
	return;
	return;
}