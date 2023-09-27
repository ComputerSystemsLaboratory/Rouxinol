#include <iostream>
#include <string>

using namespace std;

struct Node {
	int key;
	Node* parent;
	Node* left;
	Node* right;
};

Node* root;
Node* NIL;

int floorfunc(double num) {
	return int(num);
}

int main() {
	Node* tree[300];
	int n, data[300];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tree[i] = new Node;
		cin >> tree[i]->key;
	}
	tree[1]->parent = NIL;
	tree[1]->left = tree[2];
	tree[1]->right = tree[3];
	for (int i = 2; i <= n; i++) {
		tree[i]->parent = tree[floorfunc(i / 2)];
		if (2 * i <= n) {
			tree[i]->left = tree[2 * i];
		}
		else {
			tree[i]->left = NIL;
		}
		if (2 * i + 1 <= n) {
			tree[i]->right = tree[2 * i + 1];
		}
		else {
			tree[i]->right = NIL;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": ";
		cout << "key = " << tree[i]->key << ", ";
		if (tree[i]->parent != NIL) {
			cout << "parent key = " << tree[i]->parent->key << ", ";
		}
		if (tree[i]->left != NIL) {
			cout << "left key = " << tree[i]->left->key << ", ";
		}
		if (tree[i]->right != NIL) {
			cout << "right key = " << tree[i]->right->key << ", ";
		}
		cout << endl;
	}
	return 0;
}
