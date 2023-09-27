#include <bits/stdc++.h>

using namespace std;

class Node {
public:
	int key;
	Node *left;
	Node *right;

	Node(int key) {
		this->key = key;
		left = right = NULL;
	}
};

Node* insert(Node *pRoot,Node *z) {
	Node *y = NULL;
	Node *x = pRoot;

	while (x != NULL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}

	if (y == NULL) {
		pRoot = z;
	}
	else if (z->key < y->key) {
		y->left = z;
	}
	else {
		y->right = z;
	}

	return pRoot;
}

void printInOrder(Node *pCur) {

	if (pCur == NULL) {
		return;
	}
	printInOrder(pCur->left);
	cout << " " << pCur->key;
	printInOrder(pCur->right);
}

void printPreOrder(Node *pCur) {

	if (pCur == NULL) {
		return;
	}
	cout << " " << pCur->key;
	printPreOrder(pCur->left);
	printPreOrder(pCur->right);
}

void free(Node *p) {

	if (p == NULL) {
		return;
	}
	if (p->left != NULL) {
		p = p->left;
	}
	if (p->right != NULL) {
		p = p->right;
	}

	delete p;
	p = NULL;
}

int main() {
	int m, z;
	string cmd;
	Node *pRoot = NULL;

	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> z;
			Node *pNode = new Node(z);
			pRoot = insert(pRoot, pNode);
		}
		else {
			printInOrder(pRoot);
			cout << endl;
			printPreOrder(pRoot);
			cout << endl;
		}
	}
	free(pRoot);

	return 0;
}
