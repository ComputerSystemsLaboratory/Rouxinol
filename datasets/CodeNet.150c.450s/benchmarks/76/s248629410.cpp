#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct Node {
	int key;
	Node *l, *r, *p;
};
Node *root, *NIL; 
inline void pre(Node *u) {

	cout << " " << u->key;
	if (u->l != NIL) pre(u->l);
	if (u->r != NIL) pre(u->r);
}
inline void in(Node* u) {
	if(u->l != NIL)in(u->l);
	cout << " " << u->key;
	if (u->r != NIL) in(u->r);

}
inline int find(int k) {
	Node *r = root;
	//Node *f = NIL;
	Node *f;
	f = (Node *)malloc(sizeof(Node));
	f->key = k;
	while (r != NIL) {
		if (k < r->key)
			r = r->l;
		else if(k > r->key) r = r->r;
		else return 1;
	}
	return 0;
}
inline void insert(int k) {
	Node *x = root;
	Node *y = NIL;
	Node *z;
	int cnt = 0;
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->l = NIL;
	z->r = NIL;
	while (x != NIL) {
		y = x;
		if (x->key > z->key)
			x = x->l;
		else
			x = x->r;
	}
	z->p = y;
	if (y == NIL) {
		root = z;
	}
	else if (y->key > z->key) {
		y->l = z;
	}
	else if (y->key < z->key) {
		y->r = z;
	}
}
int main(){
	int m;
	cin >> m;
	string com;
	int n;
	for (int i = 0; i < m; i++) {
		cin >> com;
		if (com == "insert") {
			scanf("%d", &n);
			insert(n);
		}
		else if(com == "print"){
			in(root);
			cout << endl;
			pre(root);
			cout << endl;
		}
		else {
			scanf("%d", &n);
			if (find(n)) cout << "yes" << endl;
			else cout << "no" << endl;
		}

	}
	return 0;
}