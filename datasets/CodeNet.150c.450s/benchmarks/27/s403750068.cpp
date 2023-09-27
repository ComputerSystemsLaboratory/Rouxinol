#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Node{
  int key;
  Node *parent,*left,*right;
};
Node *root=0,*NIL=0;

void insert(int k){
  Node* y=NIL;
  Node* x=root;
  Node* z;
  z=(Node*)malloc(sizeof(Node));
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
  if(y==NIL) root=z;
  else{
    if(y==NIL){
      root=z;
    }else{
      if(z->key<y->key) y->left=z;
      else y->right=z;
    }
  }
}

void inorder(Node* u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node* u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n;
  string command;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    string com;
    cin >> com;
    if(com=="print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
    else if(com=="insert"){
      int z;
      cin >> z;
      insert(z);
    }
  }
}