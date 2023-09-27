// BinarySearchTree.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;
int m;

struct Node {
	int key;
	Node* parent, * left, * right;
};

Node* root, * NIL;

void insert(int k)
{
	Node* y = NIL;
	Node* x = root;
	Node* z;

	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL)
	{
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

void inorder(Node* u)
{
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}
void preorder(Node* u)
{
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}

Node* find(Node* x, int key)
{
	while (x != NIL && key != x->key) {
		if (key < x->key) {
			x = x->left;
		}
		else {
			x = x->right;
		}
	}
	return x;
}

int main()
{
	string cmd;
	int k;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> cmd;
		if (cmd == "insert") {
			cin >> k;
			insert(k);
		}
		else if (cmd == "find") {
			cin >> k;
			if (find(root, k) != NIL)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (cmd == "print") {
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}

