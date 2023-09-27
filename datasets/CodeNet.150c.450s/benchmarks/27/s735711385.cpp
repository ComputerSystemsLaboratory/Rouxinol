#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<vector<int> > vvi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<string, int> psi;
typedef pair<int, int> pii;
struct node {
	int key;
	node* parent, * left, * right;
};
node* nil, * root;
void insert(int key) {
	node* y = nil;//親
	node* x = root;
	node* z;
	z = (node*)malloc(sizeof(node));
	z->key = key;
	z->left = nil;
	z->right = nil;
	while (x!=nil) {
		y = x;
		if (z->key<x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y==nil) {
		root = z;
	}
	else {
		if (z->key<y->key) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
};
void ino(node* u) {
	if (u == nil) {
		return;
	}
	ino(u->left);
	cout << " " << u->key;
	ino(u->right);
};
void pre(node* u) {
	if (u == nil) {
		return;
	}
	cout << " " << u->key;
	pre(u->left);
	pre(u->right);
}
void print(node* root) {
	ino(root);
	cout << endl;
	pre(root);
	cout << endl;
};
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string order;
		cin >> order;
		if (order == "insert") {
			int key;
			cin >> key;
			insert(key);
		}
		else {
			print(root);
		}
	}
};


