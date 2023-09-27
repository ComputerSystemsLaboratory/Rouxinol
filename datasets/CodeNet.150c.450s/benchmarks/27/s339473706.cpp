#include <bits/stdc++.h>
using namespace std;

struct node {
	int k;
	node *p, *l, *r;
};
node *r, *NIL;

void insert(node *u) {
	node *p = NIL, *c = r;
	while (c != NIL) {
		p = c;
		if (u->k < c->k)
			c = c->l;
		else
			c = c->r;
	}
	u->p = p;
	if (p == NIL)
		r = u;
	else if (u->k < p->k)
		p->l = u;
	else
		p->r = u;
}

void inparse(node *u) {
	if (u == NIL)
		return;
	inparse(u->l);
	cout << " " << u->k;
	inparse(u->r);
}

void preparse(node *u) {
	if (u == NIL)
		return;
	cout << " " << u->k;
	preparse(u->l);
	preparse(u->r);
}

void print() {
	inparse(r);
	cout << endl;
	preparse(r);
	cout << endl;
}

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string cmd;
		cin >> cmd;
		if (cmd[0] == 'i') {
			node *u = (node*) malloc(sizeof(node));
			int k;
			cin >> k;
			u->k = k;
			u->l = NIL;
			u->r = NIL;
			insert(u);
		} else {
			print();
		}
	}
	return 0;
}

