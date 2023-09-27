#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <list>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

const int INF = 1 << 30;
const int MOD = 1000000007;
const int MAX = 100000;
const int N = 100;

struct Node {
	int key;
	Node *parent, *left, *right;
};
Node *root;

void insertKey(int k) {
	Node *z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NULL;
	z->right = NULL;
	Node *y = NULL;
	Node *x = root;
	while (x) {
		y = x;
		if (z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

	if (y == NULL)
		root = z;
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

void findKey(int k) {
	Node *p = NULL;
	Node *c = root;
	while (c) {
		p = c;
		if (k == c->key) {
			cout << "yes" << endl;
			return;
		}
		else if (k < c->key)
			c = c->left;
		else
			c = c->right;
	}
	cout << "no" << endl;
}

void inParse(Node *n) {
	if (n == NULL) return;
	inParse(n->left);
	cout << ' ' << n->key;
	inParse(n->right);
}

void preParse(Node *n) {
	if (n == NULL) return;
	cout << ' ' << n->key;
	preParse(n->left);
	preParse(n->right);
}	

void printKey() {
	inParse(root);
	cout << endl;
	preParse(root);
	cout << endl;
}

int main() {
	int n; cin >> n;
	string com;
	rep(i, n) {
		cin >> com;
		if (com == "insert") {
			int k; cin >> k;
			insertKey(k);
		}
		else if (com == "print")
			printKey();
		else if (com == "find") {
			int k; cin >> k;
			findKey(k);
		}
	}
}

