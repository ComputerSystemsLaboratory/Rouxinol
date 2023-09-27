#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;

struct node
{
	int key;
	node *parent,*left,*right;
	node():key(-1),parent(NULL),left(NULL),right(NULL){}
};

node* newnode()
{
	return new node();
}
node *root=newnode();

void insert(int k)
{
	node* u=newnode();
	u->key=k;
	node* x=root;
	node* y;
	while(x!=NULL)
	{
		y=x;
		if(u->key > x->key)
		  x=x->right;
		else
		  x=x->left;
	}
	if(y->key==-1) root=u;
	else
	{
		u->parent=y;
		if(u->key<y->key)
		  y->left=u;
		else
		  y->right=u;
	}
	return;
}

void inorder(node* u)
{
	if(u->left!=NULL) inorder(u->left);
	printf(" %d",u->key);
	if(u->right!=NULL) inorder(u->right);
	return;
}

void preorder(node* u)
{
	printf(" %d",u->key);
	if(u->left!=NULL) preorder(u->left);
	if(u->right!=NULL) preorder(u->right); 
	return;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		char s[10];
		scanf("%s",s);
		if(s[0]=='i')
		{
			int x;
			scanf("%d",&x);
			insert(x);
		}
		else if(s[0]=='p')
		{
			inorder(root);
			printf("\n");
			preorder(root);
			printf("\n");
		}
	}
	return 0;
}