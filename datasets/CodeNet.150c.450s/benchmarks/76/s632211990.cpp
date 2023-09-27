#include <bits/stdc++.h>
using namespace std;
#define NIL NULL

struct Node {
	int key;
	Node *parent, *left, *right;
	Node (int x) {
		key = x;
		parent = left = right = NIL;
	}
};

struct Tree {
	Node *root;
	Tree() {
		root = NIL;
	}
	void insert(int x) {
		Node *new_node = new  Node(x);
		Node *temp_parent = NIL;
		Node *now_node = root;
		while (now_node != NIL) {
			temp_parent = now_node;
			if (now_node->key > new_node->key)
				now_node = now_node->left;
			else
				now_node = now_node->right;
		}
		if (temp_parent == NIL) {
			root = new_node;
			return;
		}
		new_node->parent = temp_parent;
		if (temp_parent->key > new_node->key) {
			temp_parent->left = new_node;
		} else {
			temp_parent->right = new_node;
		}
	}
	bool find(int x) {
		Node *now_node = root;
		while (now_node != NIL) {
			if (now_node->key == x)
				return true;
			if (now_node->key > x)
				now_node = now_node->left;
			else
				now_node = now_node->right;
		}
		return false;
	}
	void printInorder() {
		inorder(root);
	}
	void inorder(Node *v) {
		if (v == NIL)
			return;
		inorder(v->left);
		cout << " " << v->key;
		inorder(v->right);
	}
	void printPreorder() {
		preorder(root);
	}
	void preorder(Node *v) {
		if (v == NIL)
			return;
		cout << " " << v->key;
		preorder(v->left);
		preorder(v->right);
	}
};

int main(void) {
	Tree T;
	int n, i, x;
	string com;
	cin >> n;
	while (n--) {
		cin >> com;
		if (com == "insert") {
			cin >> x;
			T.insert(x);
		} else if (com == "find") {
			cin >> x;
			if (T.find(x)) {
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		} else if (com == "print") {
			T.printInorder();
			cout << endl;
			T.printPreorder();
			cout << endl;
		}
	}
}
