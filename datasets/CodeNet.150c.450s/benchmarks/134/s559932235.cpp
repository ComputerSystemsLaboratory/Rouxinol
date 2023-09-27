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

struct node{ int parent, left, right;};
node t[100];
int n, NIL = -1;

void Preorder(int u) {
	if( u == NIL) return;
	printf(" %d", u);
	Preorder(t[u].left);
	Preorder(t[u].right);
}

void Inorder(int u) {
	if( u == NIL) return;
	Inorder(t[u].left);
	printf(" %d", u);
	Inorder(t[u].right);
}

void Postorder(int u) {
	if( u == NIL) return;
	Postorder(t[u].left);
	Postorder(t[u].right);
	printf(" %d", u);
}

int main(){
	int v, c, l, r;
	int n; cin >> n;
	for( int i = 0; i < n; i++) t[i].parent = NIL;
	for( int i = 0; i < n; i++) {
		cin >> v;
		for( int j = 0; j < 2; j++) {
			cin >> c;
			if( j == 0) t[v].left = c;
			else t[v].right = c;
			if( c != NIL) t[c].parent = v;
		}
	}
	for( int i = 0; i < n; i++) {
		if( t[i].parent == NIL) r = i;
	}

	cout << "Preorder" <<endl;
	Preorder(r);
	cout << endl;
	cout << "Inorder" <<endl;
	Inorder(r);
	cout << endl;
	cout << "Postorder" <<endl;
	Postorder(r);
	cout << endl;

	return 0;
}