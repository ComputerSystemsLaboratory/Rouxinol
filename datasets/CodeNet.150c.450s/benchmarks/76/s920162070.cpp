#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

struct Node {
	int key;
	Node* l, * p, * r;
};

Node* root, * Nil;

void insert(int key) {
	Node* x, * y, * z;
	x = root;
	y = Nil;
	z = (Node*)malloc(sizeof(Node));
	z->key = key;
	z->l = Nil;
	z->r = Nil;
	while (x != Nil) {
		y = x;
		if (x->key > z->key) {
			x = x->l;
		}
		else {
			x = x->r;
		}
	}
	z->p = y;
	if (y == Nil) {
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

Node* find(Node* u, int key) {
	while (u != Nil && u->key != key) {
		if (key < u->key) {
			u = u->l;
		}
		else {
			u = u->r;
		}
	}
	return u;
}

void In(Node* h) {
	if (h == Nil) {
		return;
	}
	In(h->l);
	cout << " " << h->key;
	In(h->r);
}

void Pre(Node* p) {
	if (p == Nil) {
		return;
	}
	cout << " " << p->key;
	Pre(p->l);
	Pre(p->r);
}

int main() {
	int n, num;
	string S;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S;
		if (S == "insert") {
			cin >> num;
			insert(num);
		}
		else if (S == "find") {
			cin >> num;
			Node* j = find(root, num);
			if (j != Nil) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
		else if (S == "print") {
			In(root);
			cout << endl;
			Pre(root);
			cout << endl;
		}
	}
}
