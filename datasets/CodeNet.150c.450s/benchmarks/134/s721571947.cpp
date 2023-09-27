#include "bits/stdc++.h"
using namespace std;
struct Node{
  int parent,left,right;
};
Node T[100005];
int n,D[1000005],hei[1000005];

void Preorder(int pp){
  if(pp==-1)return;
  cout<<" "<<pp;
  Preorder(T[pp].left);
  Preorder(T[pp].right);
}


void Inorder(int in){
  if(in==-1)return;
  Inorder(T[in].left);
  cout<<" "<<in;
  Inorder(T[in].right);
}

void Postorder(int po){
  if(po==-1)return;
  Postorder(T[po].left);
  Postorder(T[po].right);
  cout<<" "<<po;
}
int main(){
  int i=0,j=0,k=0,c=0,l=0,r=0,Tc=0;
  int id=0;
  cin>>n;
  for( i=0;i<n;i++){
    T[i].parent=T[i].left=T[i].right=-1;
  }
  for(i=0;i<n;i++){
    cin>>id>>l>>r;
    T[id].right=r;
    if(r!=-1)T[r].parent=id;
    T[id].left=l;
    if(l!=-1)T[l].parent=id;
  }
  for(i=0;i<n;i++){
    if(T[i].parent==-1){
      Tc=i;
    }
  }
  cout<<"Preorder"<<endl;
  Preorder(Tc);
  cout<<endl;
  cout<<"Inorder"<<endl;
  Inorder(Tc);
  cout<<endl;
  cout<<"Postorder"<<endl;
  Postorder(Tc);
  cout<<endl;
  return 0;
}

