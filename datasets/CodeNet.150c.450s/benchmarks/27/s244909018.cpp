#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	node *parent, *left, *right;
	node(int x)
	{
		key = x;
		parent = left = right = NULL;
	}
};

struct Tree {
	node *root;
	Tree() {
		root = NULL;
	}
} T;

void insert(int k) {
	node *z = new node(k);
	node *y = NULL;
	node *x = T.root;
	while (x != NULL) {
		y = x;
		if (x->key > z->key) {
			x = x->left;
		} else {
			x = x->right;
		}
	}
	if (y != NULL) {
		z->parent = y;
		if (z->key > y ->key) {
			y->right = z;
		} else {
			y->left = z;
		}
	} else {
		T.root = z;
	}
}

void inorder(node *v) {
	if (v == NULL) 
		return;
	inorder(v->left);
	cout << " " << v->key;
	inorder(v->right);
}

void preorder(node *v) {
	if (v == NULL)
		return;
	cout << " " << v->key;
	preorder(v->left);
	preorder(v->right);
}

int main(void) 
{
	int n, x;
	string com;
	cin >> n;
	while (n--) {
		cin >> com;
		if (com[0] == 'i') {
			cin >> x;
			insert(x);
		} else {
			inorder(T.root);
			cout << endl;
			preorder(T.root);
			cout << endl;
		}
	}
}
