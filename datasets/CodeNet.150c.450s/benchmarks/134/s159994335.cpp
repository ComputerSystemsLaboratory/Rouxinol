#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define MAX 25
#define NIL -1

struct node{
  int p,l,r;
};

node A[MAX];

void Preorder(int v){
  if(v==NIL) return;
  cout<<" "<<v;
  Preorder(A[v].l);
  Preorder(A[v].r);
}

void Inorder(int v){
  if(v==NIL) return;
  Inorder(A[v].l);
  cout<<" "<<v;
  Inorder(A[v].r);
}

void Postorder(int v){
  if(v==NIL) return;
  Postorder(A[v].l);
  Postorder(A[v].r);
  cout<<" "<<v;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    A[i].p=A[i].l=A[i].r=NIL;
  }
  int v,r,l,root;
  for(int i=0;i<n;i++){
    cin>>v>>l>>r;
    if(l!=NIL){
      A[v].l=l;
      A[l].p=v;
   }
   if(r!=NIL){
     A[v].r=r;
     A[r].p=v;
   }
  }
  for(int i=0;i<n;i++){
    if(A[i].p==NIL) root=i;
  }
  cout<<"Preorder"<<endl;
  Preorder(root);
  cout<<endl;
  cout<<"Inorder"<<endl;
  Inorder(root);
  cout<<endl;
  cout<<"Postorder"<<endl;
  Postorder(root);
  cout<<endl;
}

