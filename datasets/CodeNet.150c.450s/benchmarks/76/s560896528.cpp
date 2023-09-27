#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k)
{
	Node *y = NIL;
	Node *x = root;
	Node *z = new Node;
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	
	while (x != NIL){
		y = x;
		if (z->key < x->key){
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	
	z->parent = y;
	if (y == NIL){
		root = z;
	}
	else {
		if (z->key < y->key){
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void inorder(Node *u)
{
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preorder(Node *u)
{
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}

Node *find(Node *u, int key)
{
	while (u != NIL && key != u->key){
		if (key < u->key) u = u->left;
		else u = u->right;
	}
	return u;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		string com;
		cin >> com;
		if (com == "insert"){
			int x;
			scanf("%d", &x);
			insert(x);
		}
		else if (com == "find"){
			int x;
			scanf("%d", &x);
			if (find(root, x) != NIL) puts("yes");
			else puts("no");
		}
		else if (com == "print"){
			inorder(root);
			puts("");
			preorder(root);
			puts("");
		}
	}
	
	return 0;
}