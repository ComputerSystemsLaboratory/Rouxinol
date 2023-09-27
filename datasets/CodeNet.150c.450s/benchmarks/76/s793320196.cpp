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

Node * find(Node *x,int k){
  while(x!=Nil && k!=x->key){
    if(k< x->key)x=x->left;
    else x=x->right;
  }return x;
}

void insert(int a){
  Node *x=root,*y=Nil,*z;

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
    if(co[0]=='f'){
      scanf("%d",&a);
      Node *b=find(root,a);
      if(b!=Nil)printf("yes\n");
      else printf("no\n");
    }
    else if(co=="insert"){
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

