#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
using namespace std;

struct node{int key; node *right,*left,*parent;};
node *root,*NIL;

void insert(int k)
{
	node *y=NIL;
	node *x=root;
	node *z;
	
	z=(node *)malloc(sizeof(node));
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	
	while(x!=NIL)
	{
		y=x;
		if(z->key < x->key)
		{
			x=x->left;
		}
		else
		{
			x=x->right;
		}
	}
	
	z->parent=y;
	if(y==NIL)
	{
		root=z;
	}
	else
	{
		if(z->key < y->key)
		{
			y->left=z;
		}
		else
		{
			y->right=z;
		}
	}
}

void find(int k)
{
	node *x=root;
	while(x!=NIL)
	{
		if(x->key > k)
		{
			x=x->left;
		}
		else if(x->key < k)
		{
			x=x->right;
		}
		else
		{
			cout<<"yes"<<endl;
			return;
		}
	}
	cout<<"no"<<endl;
	return;
}

void ino(node *u)
{
	if(u==NIL)return;
	ino(u->left);
	printf(" %d",u->key);
	ino(u->right);
}

void preo(node *u)
{
	if(u==NIL)return;
	printf(" %d",u->key);
	preo(u->left);
	preo(u->right);
}

int main()
{
	int n,i,x;
	string com;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		cin>>com;
		if(com=="insert")
		{
			scanf("%d",&x);
			insert(x);
		}
		else if(com=="print")
		{
			ino(root);
			printf("\n");
			preo(root);
			printf("\n");
		}
		else if(com=="find")
		{
			scanf("%d",&x);
			find(x);
		}
	}
	
	return 0;
}