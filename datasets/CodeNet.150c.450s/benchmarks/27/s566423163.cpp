#include<iostream>
#include<string>
using namespace std;

struct NODE { int key; NODE *pa, *ri, *le; };
NODE *NIL, *root;

void insert(int k)
{
	NODE *z, *x = root, *y = NIL;

	z = new NODE;
	z->key = k;
	z->le = NIL;
	z->ri = NIL;

	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)
			x = x->le;
		else
			x = x->ri;
	}

	z->pa = y;

	if (y == NIL)
		root = z;
	else
	{
		if (z->key < y->key)
			y->le = z;
		else
			y->ri = z;
	}
}

void preorder(NODE *u)
{
	if (u == NIL)return;
	cout << " " << u->key;
	preorder(u->le);
	preorder(u->ri);
}

void inorder(NODE *u)
{
	if (u == NIL)return;
	inorder(u->le);
	cout << " " << u->key;
	inorder(u->ri);
}

int main()
{
	string str;
	int i, n, k;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> str;
		if (str[0] == 'i')
		{
			cin >> k;
			insert(k);
		}
		else  if (str[0] == 'p')
		{
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
	}
	return 0;
}
