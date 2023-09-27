#include<iostream>
using namespace std;
/*
	1.用NIL结点来表示特殊结点
	2.中序 ： 前 中 右
	3.前序： 中 左 右
*/
struct Tree
{
	int key;
	Tree* parent, * left, * right;
};
Tree* root, * NIL;
int find(int key) {
	Tree* b = root;
	while (b != NIL)
	{
		if (b->key == key) return 1;
		else if (b->key > key) b = b->left;
		else
		{
			b = b->right;
		}
	}
	return 0;
}
void insert(Tree* k) {
	Tree* d = root;
	Tree* m = d;
	while (d != NIL)
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
void midle(Tree* t) {
	if (t == NIL) return;
	midle(t->left);
	cout << " " << t->key;
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
		else if(m=="print"){
			midle(root);
			cout << endl;
			pre(root);
			cout << endl;
		}
		else {
			int n;
			cin >> n;
			if (find(n))cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}
