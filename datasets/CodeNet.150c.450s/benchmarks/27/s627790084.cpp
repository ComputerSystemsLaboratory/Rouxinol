#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int NILL = -1;

typedef long int lint;

typedef struct node
{
  lint key;
  struct node* parent;
  struct node* left;
  struct node* right;
  
}TREE;

TREE* root = NULL;

void insert(TREE* t)
{
  TREE* x;
  TREE* y;

  y = NULL;
  x = root;

  while(x != NULL)
  {
    y = x;
    if(t->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  
  if(y == NULL) root = t;
  else if(t->key < y->key){
    y->left = t;
  }
  else{
    y->right = t;
  }
}

void PreOrder(TREE* n)
{
  if(n == NULL) return;
  printf(" %ld",n->key);
  PreOrder(n->left);
  PreOrder(n->right);
}

void InOrder(TREE* n)
{
  if(n == NULL) return;
  InOrder(n->left);
  printf(" %ld",n->key);
  InOrder(n->right);
}

void print()
{
  InOrder(root);
  printf("\n");
  PreOrder(root);
  printf("\n");
}

int main()
{
  int m;
  int i;
  char order[20];
  lint key;
  
  scanf("%d",&m);

  for(i = 0; i < m;i++){
    scanf("%s",order);
    
    if(order[0] == 'i'){
      scanf("%ld", &key);

      //if(i == 0) root = tree;
      TREE* t = (TREE *)malloc(sizeof(TREE));
      t->right = t->left = NULL;

      t->key = key;
      insert(t);
    }
    else if(strcmp(order,"print") == 0){
      print();
    }
  }
  return 0;
}
