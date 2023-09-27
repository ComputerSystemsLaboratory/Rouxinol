#include <iostream>
#include <string>


using namespace std;


struct Node {
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) 
{
	Node *y = NIL;
	Node *x = root;
	Node *z;

	z = new Node;
	z->key = k;
	z->left = NIL;
	z->right = NIL;

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

bool find(int key)
{
	Node *x = root;

	while (x != NIL ) {

		if (key < x->key) {
			x = x->left;
		}
		else if(key > x->key){
			x = x->right;
		}
		else {
			return true;
		}
	}

	return false;
}

void inorder(Node *u) {
	if (u == NIL) {
		return;
	}

	inorder(u->left);
	cout << " " <<u->key;
	inorder(u->right);
}


void preorder(Node *u) {
	if (u == NIL) {
		return;
	}

	cout << " " << u->key;
	preorder(u->left);
	preorder(u->right);
}


int main(void)
{
	int n;
	string command;
	int key;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "insert") {
			cin >> key;
			insert(key);
		}
		else if (command == "print") {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;

		}
		else if (command == "find") {
			cin >> key;
			cout << ((find(key)) ? "yes" : "no" )<< endl;
		}

	}

	return 0;

}