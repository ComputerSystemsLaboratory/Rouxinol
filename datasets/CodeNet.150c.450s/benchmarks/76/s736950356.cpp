#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
struct Node{
  int key;

  struct Node *right;

  struct Node *left;

  struct Node *parent;
};
  
struct Node *root,*NIL;

struct Node* treeGet(struct Node *,int );

void treeInsert(int);

void inorder(struct Node *);

void preorder(struct Node *);

int main(){

  int n,i,x;
  
  char com[7];

  struct Node *t;

  scanf("%d",&n);

  for(i = 0;i < n;i ++)
    {

      scanf("%s",com);
      
      if(strcmp(com,"find") == 0)
	{
	  scanf("%d",&x);
	  
	  t = treeGet(root,x);
	  
	  if(t != NIL)
	    {
	      printf("yes\n");
	    }
	  else{
	    printf("no\n");
	  }
	}
      else if(strcmp(com,"insert") == 0)
	{
	  scanf("%d",&x);
	  treeInsert(x);
	}
      else if(strcmp(com,"print") == 0)
	{
	  inorder(root);
	  printf("\n");
	  preorder(root);
	  printf("\n");
	}
    }
  return 0;
}

struct Node* treeGet(struct Node *u,int k){

  while(u != NIL && k != u -> key)
    {
      if(k < u -> key)
	{
	u = u -> left;
	}
      else {
	u = u -> right;
      }
    }
  return u;
}

void treeInsert(int k){

  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;
  
  z = (struct Node*)malloc(sizeof(struct Node));
  
  z -> key = k;
  z -> left = NIL;
  z -> right = NIL;

  while(x != NIL)
    {
      y = x;
      if(z -> key < x -> key)
	{
	  x = x -> left;
	}
      else{
	x = x -> right;
      }
    }
  z -> parent = y;
  if(y == NIL)
    {
      root= z;
    }
  else{
    if(z -> key < y -> key)
      {
	y -> left = z;
      }
    else{
      y -> right = z;
    }
  }
}

void inorder(struct Node *u){

  if(u == NIL)return ;
  inorder(u -> left);
  printf(" %d",u -> key);
  inorder(u -> right);
}
  
void preorder(struct Node *u){

  if(u == NIL) return ;
  printf(" %d",u -> key);
  preorder(u -> left);
  preorder(u -> right);
}