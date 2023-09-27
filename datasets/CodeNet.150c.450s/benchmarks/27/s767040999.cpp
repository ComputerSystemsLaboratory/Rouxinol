#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node{
  int num;
  Node *right,*left,*parent;
};

Node *NIL,*root;

void insert(int k){
  Node *y=NIL;
  Node *x=root;
  Node *T;
  
  T=(Node *)malloc(sizeof(Node));
  T->num=k;
  T->left=NIL;
  T->right=NIL;
  
  while(x!=NIL){
    y=x;
    if(T->num<x->num) x=x->left;
    else x=x->right;
    
  }
  
  T->parent=y;
    
  if(y==NIL) root=T;
  else{
    if(T->num<y->num) y->left=T;
    else y->right=T;
  }
}

void inorder(Node *T){
  if(T==NIL) return;
  inorder(T->left);
  cout<<" "<<T->num;
  inorder(T->right);
}

void preorder(Node *T){
  if(T==NIL) return;
  cout<<" "<<T->num;
  preorder(T->left);
  preorder(T->right);
}

int main(){
  int m,k;
  string S;

  cin>>m;
  for(int i=0;i<m;i++){
    cin>>S;
    if(S=="insert"){
      cin>>k;
      insert(k);
    }else if(S=="print"){
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }
  }
  return 0;
}