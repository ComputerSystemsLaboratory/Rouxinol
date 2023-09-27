#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>

#define Lens 500010

using namespace std;
struct Node
{
	int key;
	Node *p, *l, *r;
};

int N;
char A[10];
Node *root, *Nil;

void Preorder(Node *i)
{
	if (i == Nil)
		return;
	cout << ' ' << i->key;
	Preorder(i->l);
	Preorder(i->r);
}

void Inorder(Node *i)
{
	if (i == Nil)
		return;
	Inorder(i->l);
	cout << ' ' << i->key;
	Inorder(i->r);
}

void insert(int i)
{
	Node *x, *y, *z;
	x = root;
	y = Nil;
	z = (Node*)malloc(sizeof(Node));
	z->key = i;
	z->l = z->p = z->r = Nil;
	while (x != Nil)
	{
		y = x;
		if (z->key < x->key)
		{
			x = x->l;
		}
		else
		{
			x = x->r;
		}
	}
	if (y == Nil)
	{
		root = z;
	}
	else
	{
		z->p = y;
		if (z->key < y->key)
			y->l = z;
		else
			y->r = z;
	}
}

void Print()
{
	Inorder(root);
	cout << endl;
	Preorder(root);
	cout << endl;
}

int main()
{
	int k;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (A[0] == 'i')
		{
			cin >> k;
			insert(k);
		}

		else if (A[0] == 'p')
			Print();
	}
	return 0;
}
