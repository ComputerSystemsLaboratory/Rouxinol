#include <iostream>
#include <string>

using namespace std;

struct Node
{
	int key;
	Node* parent;
	Node* left;
	Node* right;
};

Node* root;
Node* NIL;

void insert(int key)
{
	Node* y = NIL;
	Node* x = root;
	Node* z;

	z = new Node;
	z->key = key;
	z->left = NIL;
	z->right = NIL;

	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)
		{
			x = x->left;
		}
		else
		{
			x = x->right;
		}
	}
	z->parent = y;
	if (y == NIL)
	{
		root = z;
	}
	else
	{
		if (z->key < y->key)
		{
			y->left = z;
		}
		else
		{
			y->right = z;
		}
	}
}

void inOrder(Node* u)
{
	if (u == NIL)
	{
		return;
	}
	inOrder(u->left);
	cout << " " << u->key;
	inOrder(u->right);
}

void preOrder(Node* u)
{
	if (u == NIL)
	{
		return;
	}
	cout << " " << u->key;
	preOrder(u->left);
	preOrder(u->right);
}

void solve()
{
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		string command;
		cin >> command;
		if (command == "insert")
		{
			int key;
			cin >> key;
			insert(key);
		}
		else if (command == "print")
		{
			inOrder(root);
			cout << endl;
			preOrder(root);
			cout << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}