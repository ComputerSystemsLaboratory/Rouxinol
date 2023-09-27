#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;


struct Node {
  int key;
  Node *right,*parent,*left;
};

  Node *root,*Nil;



void insert(int a){
  Node *x=root;
  Node *y=Nil;
  Node *z;

  z=(struct Node *)malloc(sizeof( Node));
  z->key=a;
  z->left=Nil;
  z->right=Nil;

  while(x!=Nil){
    y=x;
    if(z->key < x->key){x = x->left;}
    else {x = x->right;}
  }
 z->parent=y;

 if(y==Nil){root=z;}
 else {
   if(z->key < y->key){y->left=z;}
   else {y->right=z;}
 }
}

void inorder(Node *x){
   if(x==Nil)return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}

void preorder(Node *x){
  if(x==Nil)return;
  printf(" %d",x->key);
  preorder(x->left);
  preorder(x->right);
}

int main(){
  int n,i,a;
  string co;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    cin >> co;
    if(co=="insert"){
      scanf("%d",&a);
      insert(a);
    }
    else if(co=="print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

