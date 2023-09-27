#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define MAX 25

struct node{
  int key;
  node *p,*l,*r;
};

node *NIL,*root;

void insert(node * z){
  node * y=NIL;
  node * x=root;
  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->l;
    }else{
      x=x->r;
    }
  }
  z->p=y;

  if(y==NIL){
    root=z;
  }else if(z->key < y->key){
    y->l=z;
  }else{
    y->r=z;
  }
}

void Preorder(node * x){
  if(x==NIL) return;
  cout<<" "<<x->key;
  Preorder(x->l);
  Preorder(x->r);
}

void Inorder(node * x){
  if(x==NIL) return;
  Inorder(x->l);
  cout<<" "<<x->key;
  Inorder(x->r);
}



int main(){
  int n,x;
  cin>>n;
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=="insert"){
      cin>>x;
      node * a=(node *)malloc(sizeof(node));
      a->key=x;
      a->l=a->r=NIL;
      insert(a);
    }else{
      Inorder(root);
      cout<<endl;
      Preorder(root);
      cout<<endl;
    }
  }
  return 0;
}

