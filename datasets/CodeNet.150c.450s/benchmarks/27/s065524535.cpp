#include<cstdio>
#include<cstdlib>

struct Node
{
	int key;
	Node *left;
	Node *right;
	Node *parent;
};

Node *root;
Node *NIL;

void insert(int key)
{
	Node *z = (Node *)malloc(sizeof(Node));
	z->left = NIL;
	z->right = NIL;
	z->key = key;

	Node *y = NIL;
	Node *x = root;
	while (x != NIL)
	{
		y = x;
		if (z->key < x->key)x = x->left;
		else x = x->right;
	}

	z->parent = y;
	if (y == NIL)
	{
		root = z;
	}
	else
	{
		if (z->key < y->key)y->left = z;
		else y->right = z;
	}
}

void inorder(Node *u)
{
	if (u == NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preorder(Node *u)
{
	if (u == NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}

int main()
{
	int n;
	scanf("%d", &n);

	char com[20];
	int key;
	for (int i = 0; i < n; i++)
	{
		scanf("%s%d", com, &key);
		if (com[0] == 'i')
		{
			insert(key);
		}
		if (com[0] == 'p')
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
}
/*
二分探索木は、「左の子孫の値 < 親の値 <= 右の子孫の値」という特徴を持つ二分木。
中間順巡回を行うと照準に並べられたキーの列を得ることができる。
*/
