#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct node {
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
}Node;
Node *root;



void insert(Node *z){
  Node *y = NULL;
  Node *x = root;
  while(x!=NULL){
    y=x;
    if((z->key)<(x->key))x=x->l;
    else x=x->r;
  }
  z->p=y;
  if(y==NULL)root=z;
  else if(z->key<y->key)y->l=z;
  else y->r=z;
}
void inorder(Node *node){
  if(node==NULL){
    return;
  }
  inorder(node->l);
  cout<<" "<<node->key;
  inorder(node->r);
}
void preorder(Node *node){
  if(node==NULL){
    return;
  }
    cout<<" "<<node->key;
    preorder(node->l);
    preorder(node->r);
}
int main(){
  int n,i;
  Node *tmp;
  string str;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>str;
    if(str=="insert"){
      tmp=(Node *)malloc(sizeof(Node));
      tmp->p=tmp->l=tmp->r=NULL;
      cin>>tmp->key;
      
      insert(tmp);
    }
    else{
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }
  }


  return 0;
}

