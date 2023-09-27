#include"bits/stdc++.h"
using namespace std;

struct node {
	int key;
	node *p, *l, *r;
};

node *root, *NIL;

void insert(int k)
{
	node* y = NIL;
	node* x = root;
	node* z;

	z = (node*)malloc(sizeof(node));
	z->key = k;
	z->l = NIL;
	z->r = NIL;

	while (x != NIL)
	{
		y = x;
		if (z->key < x->key) x = x->l;
		else x = x->r;
	}

	z->p = y;
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) y->l = z;
		else y->r = z;
	}
}

void find_t(node* n, int k)
{
	node* x = n;
	while (x != NIL && k != x->key)
	{
		if (k < x->key) x = x->l;
		else x = x->r;
	}
	if (x != NIL) cout << "yes" << endl;
	else cout << "no" << endl;

	return;
}

void inorder(node *n)
{
	if (n == NIL) return;

	inorder(n->l);
	cout << " " <<  n->key;
	inorder(n->r);

	return;
}

void preorder(node *n)
{
	if (n == NIL) return;

	cout << " " << n->key;
	preorder(n->l);
	preorder(n->r);

	return;
}

int main(void)
{
	int N, k;
	string s;
	list<node> t;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "insert"){
			cin >> k;
			insert(k);
		}
		else if (s == "print") {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		else if (s == "find") {
			cin >> k;
			find_t(root, k);
		}
	}
	

	return 0;
}
