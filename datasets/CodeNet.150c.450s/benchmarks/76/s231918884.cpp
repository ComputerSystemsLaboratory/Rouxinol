#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
	Node* par;
};

struct binarySearchTree {
	Node* root;

	binarySearchTree() {
		root = NULL;
	}

	void insert(int key);
	void inorderTreeWalk(Node* node);
	void preorderTreeWalk(Node* node);
	bool find(Node* node, int key);
};

void binarySearchTree::insert(int key) {
	Node* z = (Node*)malloc(sizeof(Node));
	z->key = key;
	z->left = z->right = z->par = NULL;

	if (root == NULL) {
		root = z;
		return;
	}

	Node* y = NULL;
	Node* x = root;

	while (x != NULL) {
		y = x;
		if (x->key>key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}

	z->par = y;
	if (y->key>key) {
		y->left = z;
	}
	else {
		y->right = z;
	}
	return;
}

void binarySearchTree::inorderTreeWalk(Node* node) {
	if (node != NULL) {
		inorderTreeWalk(node->left);
		cout << " " << node->key;
		inorderTreeWalk(node->right);
	}
	return;
}

void binarySearchTree::preorderTreeWalk(Node* node) {
	if (node != NULL) {
		cout << " " << node->key;
		preorderTreeWalk(node->left);
		preorderTreeWalk(node->right);
	}
	return;
}

bool binarySearchTree::find(Node* node, int key) {
	if (node == NULL) {
		return 0;
	}
	else if (node->key == key) {
		return 1;
	}
	else if (node->key>key) {
		return find(node->left, key);
	}
	else {
		return find(node->right, key);
	}
}

int main(void) {
	int n, x, i;
	string s;
	binarySearchTree tree;

	cin >> n;

	for (i = 0;i<n;i++) {
		cin >> s;
		if (s[0] == 'i') {
			cin >> x;
			tree.insert(x);
		}
		else if (s[0] == 'p') {
			tree.inorderTreeWalk(tree.root);
			cout << endl;
			tree.preorderTreeWalk(tree.root);
			cout << endl;
		}
		else {
			cin >> x;
			if (tree.find(tree.root, x)) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
	}
	return 0;
}

