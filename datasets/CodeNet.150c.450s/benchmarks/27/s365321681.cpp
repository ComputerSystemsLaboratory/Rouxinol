#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

struct node{
	int key;
	node *parent, *left, *right;
};

node *root, *NIL;

void insert(int k) {
	node *y = NIL;
	node *x = root;
	node *z;

	z = (node *)malloc(sizeof(node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while( x != NIL) {
		y = x;
		if( z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->parent = y;
	if( y == NIL) {
		root = z;
	} else if( z->key < y->key){
		y->left = z;
	} else {
		y->right = z;
	}
}



void Preorder(node *t) {
	if( t == NIL) return;
	printf(" %d", t->key);
	Preorder(t->left);
	Preorder(t->right);
}

void Inorder(node *t) {
	if( t == NIL) return;
	Inorder(t->left);
	printf(" %d", t->key);
	Inorder(t->right);
}

void Postorder(node *t) {
	if( t == NIL) return;
	Postorder(t->left);
	Postorder(t->right);
	printf(" %d", t->key);
}

int main(){
	int x, n;
	string st;
	cin >> n;
	for( int i = 0; i < n; i++) {
		cin >> st;
		if(st[0] == 'i') {
			cin >> x;
			insert(x);
		} else {
			Inorder(root);
			cout << endl;
			Preorder(root);
			cout << endl;
		}
	}
	return 0;
}