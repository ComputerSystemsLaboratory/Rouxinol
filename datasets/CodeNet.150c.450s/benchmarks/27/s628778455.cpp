#include <bits/stdc++.h>
using namespace std;

#define NIL (Node *)-1

struct Node {
	int key;
	Node *p, *left, *right;
	Node( int k ) { key = k; p = left = right = NIL; }
};
Node *root = NIL;

void insert( Node *z )
{
	Node *y = NIL;
	Node *x = root;
	while( x != NIL ) {
		y = x;
		if( z->key < x->key ) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->p = y;
	if( y == NIL ) {
		root = z;
	}
	else if( z->key < y->key ) {
		y->left = z;
	}
	else {
		y->right = z;
	}
}

void printp( Node *n )
{
	if( n == NIL ) return;
	cout << " " << n->key;
	printp( n->left );
	printp( n->right );
}

void printm( Node *n )
{
	if( n == NIL ) return;
	printm( n->left );
	cout << " " << n->key;
	printm( n->right );
}

int main()
{
	int m;
	cin >> m;
	for( int i = 0; i < m; i++ ) {
		string com;
		cin >> com;
		if( com == "insert" ) {
			int k;
			cin >> k;
			Node *n = new Node( k );
			insert( n );
		}
		else {
			printm( root );
			cout << endl;
			printp( root );
			cout << endl;
		}
	}
}

