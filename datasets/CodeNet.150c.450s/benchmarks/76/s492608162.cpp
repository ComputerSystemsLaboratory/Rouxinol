#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node
{
	int key;
	Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k)
{
	Node *y=NIL;
	Node *x=root;
	Node *z;
	
	z=(Node *)malloc(sizeof(Node));
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	
	while(x!=NIL)
	{
		y=x;
		if(z->key < x->key) x=x->left;
		else x=x->right;
	}
	z->parent=y;
	if(y==NIL) root=z;
	else
	{
		if(z->key < y->key) y->left=z;
		else y->right=z;
	}
}

int find(int k)
{
	Node *x=root;
	
	while(x!= NIL)
	{
		if(x->key == k) return 1;
		else if(x->key < k) x=x->right;
		else x=x->left;
	}
	return 0;
}

void inorder(Node *u)
{
	if(u==NIL) return;
	inorder(u->left);
	printf(" %d", u->key);
	inorder(u->right);
}

void preorder(Node *u)
{
	if(u==NIL) return;
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
}

int main()
{
	int i,n,x;
	string com;
	
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		cin >> com;
		if(com=="insert")
		{
			scanf("%d",&x);
			insert(x);
		}
		else if(com=="find")
		{
			scanf("%d",&x);
			if(find(x)==1) printf("yes");
			else printf("no");
			printf("\n");
		}
		else if(com=="print")
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}