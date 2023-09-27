#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

typedef struct Node
{
	int key;
	Node *parent, *left, *right;
}Node;

Node *root, *NIL;

void insert(int key)
{
	Node *y = NIL;
	Node *x = root;
	Node *z;
	z = (Node *)malloc(sizeof(Node));
	z->key = key, z->left = NIL, z->right = NIL;

	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

	if (y == NIL)
		root = z;
	else if (z->key < y->key)
		y->left = z;
	else
		y->right = z;
}

void inOrder(Node *node)
{
	if (node == NIL) return;
	inOrder(node->left);
	cout << " " << node->key;
	inOrder(node->right);
}

void preOrder(Node *node)
{
	if (node == NIL) return;
	cout << " " << node->key;
	preOrder(node->left);
	preOrder(node->right);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string order;
		cin >> order;
		if (order == "insert")
		{
			int key;
			cin >> key;
			insert(key);
		}
		else if (order == "print")
		{
			inOrder(root);
			cout << endl;
			preOrder(root);
			cout << endl;
		}
	}

	return 0;
}
