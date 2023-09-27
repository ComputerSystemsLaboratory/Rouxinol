#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

Node* find(Node *u, int k){
	while(u != NIL && k != u->key)
	{
		if(k > u->key)
			u = u->right;
		else
			u = u->left;
	}
	return u;
}

void Insert(int k)
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

void PreOrderTraverse(Node *u)
{
	if(u == NIL)
		return;
	printf(" %d", u->key);
	PreOrderTraverse(u->left);
	PreOrderTraverse(u->right);
}

void InOrderTraverse(Node *u)
{
	if(u == NIL)
		return;
	InOrderTraverse(u->left);
	printf(" %d", u->key);
	InOrderTraverse(u->right);
}


int main()
{
	int n, x;
	char s[10];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%s", s);
		if(s[0] == 'i')
		{
			scanf("%d", &x);
			Insert(x);
		}
		else if(s[0] == 'f')
		{
			scanf("%d", &x);
			Node *t = find(root, x);
			if(t != NIL)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if(s[0] == 'p')
		{
			InOrderTraverse(root);
			printf("\n");
			PreOrderTraverse(root);
			printf("\n");
		}
			
	}
}

