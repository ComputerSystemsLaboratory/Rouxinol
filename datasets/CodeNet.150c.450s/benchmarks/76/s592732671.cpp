#include <iostream>
#include <string>
using namespace std;

struct Node{
	long key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(long k){
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = new Node;
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL){
		y = x;
		if (z->key < x->key) x = x->left;
		else x = x->right;
	}
	z->parent = y;

	if (y == NIL) root = z;
	else {
		if (z->key < y->key) y->left = z;
		else y->right = z;
	}
}

void inorder(Node *u){
	if (u == NIL) return;
	inorder(u->left);
	cout << " " << u->key;
	inorder(u->right);
}

void preorder(Node *u){
	if (u == NIL) return;
	cout << " " << u->key;
	preorder(u->left);
	preorder(u->right);
}

long find(Node *u, long x){
	if (u == NIL) return 0;
	if (u->key == x) return 1;
	else if (u->key > x) return find(u->left, x);
	else return find(u->right, x);
}

int main(){
	long n, x;
	string com;
	cin >> n;
	for (long i = 0; i < n; i++){
		cin >> com;
		if (com == "insert"){
			cin >> x;
			insert(x);
		}
		else if (com == "print"){
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
		else {
			cin >> x;
			if (find(root, x)) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}