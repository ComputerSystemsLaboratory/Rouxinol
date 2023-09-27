#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node
{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k)
{
	Node *y = NIL;
	Node *x = root;
	Node *z;
	
	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	
	while(x!=NIL) //不是空树 
	{
		y = x;
		if(z->key < x->key)
			x = x->left;
		else if(z->key > x->key)
			x = x->right;
	}
	z->parent = y;
	if(y == NIL)
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
			y->right = z;
	}
	
}

void InOrderTraverse(Node *u)
{
	if(u == NIL)
		return;
	InOrderTraverse(u->left);
	printf(" %d", u->key);
	InOrderTraverse(u->right);
}

void PreOrderTraverse(Node *u)
{
	if(u == NIL)
		return;
	printf(" %d", u->key);
	PreOrderTraverse(u->left);
	PreOrderTraverse(u->right);
}
int main()
{
	int n, x;
	scanf("%d", &n);
	char s[10];
	for(int i = 0; i < n; i++)
	{
		scanf("%s", s);
		if(s[0] == 'i')
		{
			scanf("%d", &x);
			insert(x);
		}
		else if(s[0] == 'p')
		{
			InOrderTraverse(root);
			putchar('\n');
			PreOrderTraverse(root);
			putchar('\n');
		}
	}
	
	return 0;
}

