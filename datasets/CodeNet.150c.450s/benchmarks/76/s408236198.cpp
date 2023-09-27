#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct node {
	int key;
	node* left, * right, * parent;
};

node* nil, * root;

void insert(int k) {
	node* y = nil;
	node* x = root;
	node* z;

	z = (node*)malloc(sizeof(node));
	z->key = k;
	z->left = nil;
	z->right = nil;

	while (x != nil) {
		y = x;
		if (z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->parent = y;

	if (y == nil) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

node* find(node *root,int k) {
	while (root != nil && k != root->key) {
		if (k < root->key) {
			root = root->left;
		}
		else if (k > root->key) {
			root = root->right;
		}
	}
	return root;
}

void inorder(node* root) {
	if (root == nil) return;
	if (root->left != nil) inorder(root->left);
	cout << " " << root->key;
	if (root->right != nil) inorder(root->right);
}

void preorder(node* root) {
	if (root == nil) return;
	cout << " " << root->key;
	if (root->left != nil) preorder(root->left);
	if (root->right != nil) preorder(root->right);
}

int main()
{
	int key, m;
	char com[20];
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		cin >> com;
		if (com[0] == 'i') {
			cin >> key;
			insert(key);
		}
		else if (com[0] == 'p') {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		else if (com[0] == 'f') {
			cin >> key;
			node* ans = find(root, key);
			if (ans) cout << "yes\n";
			else cout << "no\n";
		}
	}

	return 0;
}
