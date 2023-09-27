#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
  int k;
  struct Node *r,*l,*p;
};
typedef struct Node* node;
node root;
node NIL;

void insert(int);
void inorder(node);
void preorder(node);

int main(){
  int n,i,x;
  char com[20];
  scanf("%d",&n);
  root = NIL;
  
  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
void insert(int k){
  node y=NIL;//xの親
  node x=root;
  node z;
  
  z=(node)malloc(sizeof(struct Node));

  z->k = k;
  z->l = NIL;
  z->r = NIL;
 
  while(x != NIL){
   y=x;//親を設定
    if( z->k < x->k )
      x = x->l;//左の子へ
    else x = x->r;//右の子へ
  }
  z->p = y;
  
  if(y==NIL)
    root = z;
  else {
    if( z->k < y->k ){
      y->l = z;
    }
    else
      y->r = z;
  }
}
void inorder(node u){
  if(u==NIL)return;
  inorder(u->l);
  printf(" %d",u->k);
  inorder(u->r);
}
void preorder(node u){
  if(u==NIL)return;
  printf(" %d",u->k);
  preorder(u->l);
  preorder(u->r);
}

