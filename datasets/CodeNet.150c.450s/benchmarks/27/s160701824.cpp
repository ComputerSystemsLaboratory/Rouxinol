#include<bits/stdc++.h>
using namespace std;
struct Node{
  int key;
  Node *parent,*left,*right;
};

Node *root,*NIL;

void Preorder(Node *pp){
  if(pp==NIL)return;
  cout<<" "<<pp->key;
  Preorder(pp->left);
  Preorder(pp->right);
}
void Inorder(Node *in){
  if(in==NIL)return;
  Inorder(in->left);
  cout<<" "<<in->key;
  Inorder(in->right);
}

void insert(int k){
  Node *z;
  Node *y=NIL; //x's parent
  Node *x=root; //T's root
  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  while(1){
    if(x==NIL)break;
    y=x;
    if(z->key<x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else {
    if(z->key<y->key){
      y->left=z;
    }
    else {
      y->right=z;
    }
  }
}
int main(){
  int n=0,in=0;
  int i=0;
  string cel;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>cel;
    if(cel=="insert"){
      cin>>in;
      insert(in);
    }
    else if(cel=="print"){
      Inorder(root);
      cout<<endl;
      Preorder(root);
      cout<<endl;
    }
  }
  return 0;
}

