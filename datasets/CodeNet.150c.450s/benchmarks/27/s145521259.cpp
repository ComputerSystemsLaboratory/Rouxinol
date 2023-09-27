#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
const int MAXSIZE = 500001 + 2;
struct Node {
	int data;
	Node  *parent, *left, *right;
};
Node *Root, *NIL;
void Insert(int key) {
	Node *y = NIL;
	Node *x = Root;
	Node *z;

	z = (Node*)malloc(sizeof(Node));
	z->data = key;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL) {
		y = x;
		if (z->data < x->data) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NIL) {
		Root = z;
	}
	else {
		if (z->data < y->data) {
			y->left = z;
		}
		else {
			y->right = z;
		}
	}
}
void Inorder(Node *u) {
	if (u == NIL) return;
	Inorder(u->left);
	printf(" %d", u->data);
	Inorder(u->right);
}
void Preorder(Node* u) {
	if (u == NIL) return;
	printf(" %d", u->data);
	Preorder(u->left);
	Preorder(u->right);
}
int main() {
	string str1;
	int  num_node;
	int value;
	cin >> num_node;
	for (int i = 0; i < num_node; i++) {
		cin >> str1;
		if (str1 == "insert") {
			cin >> value;
			Insert(value);
		}
		else if(str1 == "print"){
			Inorder(Root);
			printf("\n");
			Preorder(Root);
			printf("\n");
		}
	}
	return 0;
}