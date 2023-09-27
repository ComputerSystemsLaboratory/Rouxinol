#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node {
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};
typedef struct node * Node;
Node root;
void Insert(int );
void inorder(Node );
void preorder(Node );
Node search(Node, int);

int main()
{
  int i,j,k,yflag=0,nflag=0;
  char c[10];
  Node a;
  scanf("%d",&k);
  
  for(i=0;i<k;i++)
    {
      scanf("%s",&c[0]);
      if(c[0]=='f')
	{
	  scanf("%d",&j);
	  a=search(root,j);
	  if(a!=NIL) printf("yes\n");
	  else printf("no\n");
	}
      if(c[0]=='i')
	{
	  scanf("%d",&j);
	  Insert(j);
	}
      else if(c[0]=='p') 
	{
	  /*while(yflag!=0)
	    {
	      printf("yes\n");
	      yflag--;
	    }
	  while(nflag!=0)
	    {
	      printf("no\n");
	      nflag--;
	    }*/
	  inorder(root);
	  printf("\n");
	  preorder(root);
	  printf("\n");
	}
    }
  return 0;
}

void Insert(int p)
{
  Node x=root;
  Node y=NIL;
  Node z;
  
  z=(Node )malloc(sizeof(struct node));
  z->key=p;
  z->left=NIL;
  z->right=NIL;
  
  while(x!=NIL)
    {
      y=x;
      if(z->key < x->key) x=x->left;
      else x=x->right;

      z->parent=y;
    }
  if(y==NIL) root=z;
  else if(z->key < y->key) y->left=z;
  else  y->right=z;
}

void inorder(Node x)
{
  if(x==NIL) return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}

void preorder(Node x)
{
  if(x==NIL) return;
  printf(" %d",x->key);
  preorder(x->left);
  preorder(x->right);
}

Node search(Node u,int k)
{
  while(u!=NIL && k!=u->key)
    {
      if(k < u->key) u=u->left;
      else u=u->right;
    }
  return u;
}