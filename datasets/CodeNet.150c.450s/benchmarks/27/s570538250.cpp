#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 500000

typedef struct _n{
  int number;
  struct _n *parent;
  struct _n *successor;
  struct _n *left;
  struct _n *right;

}Node;

Node root;

void insert(int);
void output(Node *);
void out(Node *);

int main(){

  int i;
  int n, number;
  char order[7];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s", order);
    if(strcmp(order, "insert") == 0){
      scanf("%d", &number);
      insert(number);
    }
    if(strcmp(order, "print") == 0){
      output(&root);
      printf("\n");
      out(&root);
      printf("\n");

    }

  }

  return 0;
}

void insert(int number){
  
  int i;
  Node *p, *q;
  Node *set;  

  if(root.number == 0){
    root.number = number;
    root.left = NULL;
    root.right = NULL;
  }
  else{
    set = (Node *)malloc(sizeof(Node));
    set->number = number;
    set->left = NULL;
    set->right = NULL;
    
    q = NULL;
    p = &root;
    
    while(p != NULL){
      q = p;
      
      if(set->number < p->number) p = p->left;
      else p = p->right;
      
    }
    
    set->parent = q;

    if(set->number < q->number) q->left = set;
    else q->right = set;

  }


}


void output(Node *a){

  if(a == NULL) return;

  output(a->left);
  printf(" %d", a->number);
  output(a->right);
  
}

void out(Node *a){
  if(a == NULL) return;
  printf(" %d", a->number);
  out(a->left);
  out(a->right);

}