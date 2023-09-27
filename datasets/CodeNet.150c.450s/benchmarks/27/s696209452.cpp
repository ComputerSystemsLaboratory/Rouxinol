#include<iostream>
using namespace std;
struct Tree
{
	int key;
	Tree* parent, * left, * right;
};
Tree* root, * NIL;
void insert(Tree* k) {
	Tree* d = root;
	Tree* m = d;
	while (d!= NIL)
	{
		m = d;
		if (k->key > d->key) {
			d = d->right;
		}
		else {
			d = d->left;
		}
	}
	k->parent = m;
	if (k->key > m->key) {
		m->right = k;
	}
	else {
		m->left = k;
	}
}
void midle(Tree *t) {
	if (t == NIL) return;
	midle(t->left);
	cout <<" "<< t->key ;
	midle(t->right);
}
void pre(Tree* t) {
	if (t == NIL) return;
	cout << " " << t->key;
	pre(t->left);
	pre(t->right);
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string m;
		cin >> m;
		if (m == "insert") {
			int key;
			cin >> key;
			Tree* k = new Tree();
			k->left = NIL;
			k->right = NIL;
			k->key = key;
			k->parent = NIL;
			if (root == NULL) {
				root = k;
			}
			else {
				insert(k);
			}
		}
		else {
			midle(root);
			cout << endl;
			pre(root);
			cout << endl;
		}
	}
	return 0;
}
