#include <iostream>
using namespace std;

struct Node{
	int key;
	Node *parent;
	Node *left;
	Node *right;
	
	Node(): left(NULL), right(NULL){}
	Node(int _k): key(_k), left(NULL), right(NULL){}
};

void Insert(Node *&T, int key)
{
	Node *z = new Node(key);
	
	Node *y = NULL;
	Node *x = T;

	while(x != NULL)
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
	 
	if (y == NULL)
	{
		T = z;
	}
	else if (z->key < y->key)
	{
		y->left = z;
	}
	else
	{
		y->right = z;
	}
}

void Preorder(Node *T)
{
	if (T == NULL) return;
	
	cout << " " << T->key;
	Preorder(T->left);
	Preorder(T->right);
}

void Inorder(Node *T)
{
	if (T == NULL) return;
	
	Inorder(T->left);
	cout << " " << T->key;
	Inorder(T->right);
}

int main ()
{
	int n;
	cin >> n;
	string cmd;
	Node *Tree = NULL;
	while(n--)
	{
		cin >> cmd;
		if (cmd == "insert")
		{
			int k;
			cin >> k;
			Insert(Tree, k);
		}
		else if (cmd == "print")
		{
			Inorder(Tree);
			cout << endl;
			Preorder(Tree);
			cout << endl;
		}
	}
	
	return 0;
}
