#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Node {
	int key;
	Node* p, * l, * r;
};
Node* root, * NIL;
void insert(int k) {
	Node* y = NIL, * x = root, * z;
	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->l = NIL;
	z->r = NIL;
	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->l;
		}
		else {
			x = x->r;
		}
	}
	z->p = y;
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->l = z;
		}
		else {
			y->r = z;
		}
	}
}
void inorder(Node* u) {
	if (u == NIL)return;
	inorder(u->l);
	cout << " " << u->key;
	inorder(u->r);
}
void preorder(Node* u) {
	if (u == NIL)return;
	cout << " " << u->key;
	preorder(u->l);
	preorder(u->r);
}
 

int main() {
	ios::sync_with_stdio(false); cin.tie(0);

	int n, x;
	string com;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> com;
		if (com[0] == 'i') {
			cin >> x;
			insert(x);
		}
		else {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
	}
}
