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
Node *root, *Nil;
char A[20];

void insert(int i)
{
	Node *x = root;
	Node *y = Nil;
	Node *z;
	z = (Node*)malloc(sizeof(Node));
	z->l = z->p = z->r = Nil;
	z->key = i;
	while (x != Nil)
	{
		y = x;
		if (z->key < x->key)
			x = x->l;
		else
			x = x->r;
	}
	if (y == Nil)
		root = z;
	else
	{
		if (z->key < y->key)
		{
			y->l = z;
			z->p = y;
		}
		else
		{
			y->r = z;
			z->p = y;
		}
	}
}

bool Find(int i)
{
	Node *x = root;
	while (x != Nil)
	{
		if (x->key == i)
			return true;
		else if (i < x->key)
			x = x->l;
		else
			x = x->r;
	}
	return false;
}

void Pre(Node *x)
{
	if (x == Nil)
		return;
	cout << ' ' << x->key;
	Pre(x->l);
	Pre(x->r);
}

void In(Node *x)
{
	if (x == Nil)
	{
		return;
	}
	In(x->l);
	cout << ' ' << x->key;
	In(x->r);
}

void Print()
{
	In(root);
	cout << endl;
	Pre(root);
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
		else if (A[0] == 'f')
		{
			cin >> k;
			if (Find(k))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else if (A[0] == 'p')
			Print();
			
	}
	return 0;
}
