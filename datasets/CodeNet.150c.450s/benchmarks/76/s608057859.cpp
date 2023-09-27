#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;

struct Node{
	int key;
	Node *p, *l, *r;
};

Node *root, *NIL;

void insert(int key){
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = (Node *)malloc(sizeof(Node));
	z->key = key;
	z->l = NIL;
	z->r = NIL;

	while(x != NIL){
		y = x;
		if(z->key < x->key)		x = x->l;
		else	x = x->r;
	}

	z->p = y;
	if(y == NIL)
		root = z;
	else{
		if(z->key < y->key)		y->l = z;
		else	y->r = z;
	}
}

void preParse(Node *u){
	if(u == NIL)	return;
	cout << " " << u->key;
	preParse(u->l);
	preParse(u->r);
}

void inParse(Node *u){
	if(u == NIL)	return;
	inParse(u->l);
	cout << " " << u->key;
	inParse(u->r);
}

Node * find(Node *u, int key){
	while(u != NIL && key != u->key){
		if(key < u->key)	u = u->l;
		else	u = u->r;
	}
	return u;
}

int main(){
	int n, temp;
	char s[10];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s[0] == 'i'){
			cin >> temp;
			insert(temp);
		}
		else if(s[0] == 'f'){
			cin >> temp;
			Node *flag = find(root, temp);
			if(flag != NIL)	cout << "yes" << endl;
			else	cout << "no" << endl;
		}
		else{
			inParse(root);
			cout << endl;
			preParse(root);
			cout << endl;
		}
	}
	return 0;
}