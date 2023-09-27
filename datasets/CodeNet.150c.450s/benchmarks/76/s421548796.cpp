#include<iostream>
#include<cstdlib>

using namespace std;

struct Node {
	int key;
	Node *parent;
	Node *left;
	Node *right;
};
Node* NIL;
Node* root = NIL;

void insert(Node* rot, int key)
{
	Node* z = (Node*)malloc(sizeof(Node));
	z->key = key;
	z->parent = NIL;
	z->left = NIL;
	z->right = NIL;

	Node* y = NIL;
	Node* x = rot;
	while (x != NIL)
	{
		y = x;
		if (key > x->key)
			x = x->right;
		else
			x = x->left;
	}

	z->parent = y;

	if (y == NIL)
		root = z;
	else if (key < y->key)
		y->left = z;
	else
		y->right = z;
}
Node* find(Node* rot, int key)
{

	Node* x = rot;
	while (x != NIL)
	{
		if (x->key == key)
			return x;
		if (key > x->key)
			x = x->right;
		else
			x = x->left;
	}
	return x;
}
void inOrder(Node* x)
{
	if (x->left != NIL)
		inOrder(x->left);

	cout << ' ' << x->key;

    if(x->right != NIL)
		inOrder(x->right);
}
void preOrder(Node* x)
{
	cout << ' ' << x->key;

	if (x->left != NIL)
		preOrder(x->left);

	if (x->right != NIL)
		preOrder(x->right);
}
int main()
{
	int n,key;
	char C[10];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> C;
		if (C[0] == 'i')
		{
			cin >> key;
			insert(root, key);
		}
		else if(C[0] == 'p')
		{
			inOrder(root);
			cout << endl;
			preOrder(root);
			cout << endl;
		}
		else                  //find key;
		{
			cin >> key;
			if (find(root, key) != NIL)
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
	}
	return 0;
}
