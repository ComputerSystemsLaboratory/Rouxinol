#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	node *right, *left, *parent;
	node(int key_) {
		key = key_;
		right = left = parent = NULL;
	}
	~node() {
		if (right != NULL) delete right;
		if (left != NULL) delete left;
	}
};

struct Binary_Tree {
	node *head;
	Binary_Tree() {
		head = NULL;
	}
	~Binary_Tree() {
		if (head != NULL) delete head;
	}
	void insert(int z) {
		insert(new node(z));
	}
	void insert(node* z) {
		node *y = NULL, *x = head;
		while(x != NULL){
			y = x;
			if (z->key < x->key)
				x = x->left;
			else
				x = x->right;
		}
		z->parent = y;

		if (y == NULL) {
			head = z;
		}
		else if (z->key < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
	void Inorder(node *n) {
		if (n == NULL) return;
		Inorder(n->left);
		cout << ' ' << n->key;
		Inorder(n->right);
	}
	void Preorder(node *n) {
		if (n == NULL) return;
		cout << ' ' << n->key;
		Preorder(n->left);
		Preorder(n->right);
	}
	void print() {
		Inorder(head); cout << endl;
		Preorder(head); cout << endl;
	}
	void find(int z) {
		bool flag = false;
		node *x = head;
		while (x != NULL) {
			if (z == x->key) {
				flag = true;
				break;
			}
			else if (z < x->key)
				x = x->left;
			else
				x = x->right;
		}
		if (flag) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
};

int main()
{
	int m;
	string s;
	Binary_Tree bt;
	cin >> m;
	for (int i = 0, n; i < m; i++) {
		cin >> s;
		if (s == "insert") {
			cin >> n;
			bt.insert(n);
		}
		else if (s == "find") {
			cin >> n;
			bt.find(n);
		}
		else {
			bt.print();
		}
	}
	return 0;
}