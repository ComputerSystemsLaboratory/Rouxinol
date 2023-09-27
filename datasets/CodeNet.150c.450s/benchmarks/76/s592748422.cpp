#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node{
  int key;
  Node  *right,*left,*parent;
};

Node *root,*NIL;


void insert(int k){
  Node *y =NIL;
  Node *x =root;//`アドレががそのままxに入る`
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }else{
    if(z->key<y->key){
      y->left=z;
    }else{
      y->right=z;
    }
  }
}

void inorder(Node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}
void preorder(Node *u){
  if(u==NIL)return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int Find(int k){
  Node *y =NIL;
  Node *x =root;//`アドレががそのままxに入る`
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->left;
    }else if(z->key>x->key){
      x=x->right;
    }else{
      return 1;
    }
  }
return 0;
  /*
  z->parent=y;
  if(y==NIL){
    root=z;
  }else{
    if(z->key<y->key){
      y->left=z;
    }else{
      y->right=z;
    }
  }
  */
}


/*
void Find(Node *u){
  while(1){
    if(u>x->key){
      x=x->left;
    }else if(u<x->key){
      x=x->right;
    }else if(u==x->key){
      printf("yes\n");
      break;
    }else if(u==NIL){
      printf("no\n");
      break;
    }
  }
}


*/
int main(){
  int n,i,x;
  string com;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    cin>>com;
    if(com=="insert"){
      scanf("%d",&x);
      insert(x);
    }else if(com=="print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n" );
    }else if(com=="find"){
      scanf("%d", &x);
      //printf("\n");
      if(Find(x)){
        printf("yes\n") ;
      }else{
        printf("no\n") ;
      };
    }
  }
  return 0;
}

