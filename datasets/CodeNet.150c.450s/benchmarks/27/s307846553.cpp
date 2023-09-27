
#include <iostream>
using namespace std;

struct Node {
	int key;
	Node* parent, * left, * right;
};

#define MAX 500000

Node* root;

void in(Node* node) {
	if (node == NULL)return;
	in(node->left);
	cout << " " << node->key;
	in(node->right);
}

void pre(Node* node) {
	if (node == NULL)return;
	cout << " " << node->key;
	pre(node->left);
	pre(node->right);
}

void print() {
	in(root);
	cout << endl;
	pre(root);
	cout << endl;
}

void insert(int key) {
	Node* y = NULL;
	Node* x = root;
	Node* z = new Node;
	z->key = key;
	z->parent = z->left = z->right = NULL;

	if (root == NULL) {
		root = z;
		return;
	}

	while (x != NULL) {
		y = x;
		if (key < x->key)x = y->left;
		else if (key > x->key)x = y->right;
	}
	if (key < y->key) {
		y->left = z;
		z->parent = y;
	}
	else {
		y->right = z;
		z->parent = y;
	}
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		char buf[20];
		cin >> buf;
		if (buf[0] == 'i') {
			int k;
			cin >> k;
			insert(k);
		}
		else {
			print();
		}
	}
	return 0;
}
