#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node {
	int key;
	Node *left, *right, *parent;
};

//ポインタなので同じ容器
Node* root, * NIL;

void insert(int t) {
	Node* x, * y, * z;
	x = root;
	y = NIL;
	z = (Node*)malloc(sizeof(Node));
	z->key = t;
	z->left = NIL;
	z->right = NIL;
	//zの親を決める
	while (x != NIL) {
		y = x;
		if (z->key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NIL) {
		root = z;
	}
	else {
		if (z->key < y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}

void In(Node* s) {
	if (s == NIL) {
		return;
	}
	In(s->left);
	cout << " " << s->key;
	In(s->right);
}

void Pre(Node* d) {
	if (d == NIL) {
		return;
	}
	cout << " " << d->key;
	Pre(d->left);
	Pre(d->right);

}

int main() {
	string S;
	int num, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S;
		if (S == "insert") {
			cin >> num;
			insert(num);
		}
		else if (S == "print") {
			In(root);
			cout << endl;
			Pre(root);
			cout << endl;
		}
	}
}
