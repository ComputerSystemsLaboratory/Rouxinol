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
int treesearch(Node *x, int k){
    if(x==NIL){
      return false;
    }
    if(k==x->key)return true;
    if(k<x->key){
      return treesearch(x->left,k);
    }
    else{
      return treesearch(x->right,k);
    }
}

int main(){
  int n=0,in=0,f=0;
  int i=0;
  char cel[10];
  cin>>n;
  for(i=0;i<n;i++){
    cin>>cel;
    if(!strcmp(cel, "insert")){
      cin>>in;
      insert(in);
    }
    else if(!strcmp(cel, "print")){
      Inorder(root);
      cout<<endl;
      Preorder(root);
      cout<<endl;
    }
    else if(!strcmp(cel, "find")){
      cin>>in;
      f=treesearch(root,in);
      if(treesearch(root,in)){
	cout<<"yes"<<endl;
      }
      else {
	cout<<"no"<<endl;
      }
    }
  }
  return 0;
}

