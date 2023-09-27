#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 500001

void insert(int);

typedef struct node {
  int key;
  struct node *parent,*left,*right;
}Node;
  
Node *root,*NIL;

void inorder(Node *);
void preorder(Node *);

void insert(int k){
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }

  z->parent=y;

  if(y==NIL){
    root=z;
  }else{
    if(z->key < y->key){
      y->left=z;
    }else{
      y->right=z;
    }
  }
}

void inorder(Node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int m,i,x;
  char com[10];

  scanf("%d",&m);
  
  for(i=0;i<m;i++){
    scanf("%s",com);
    if(strcmp(com,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }else if(strcmp(com,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}