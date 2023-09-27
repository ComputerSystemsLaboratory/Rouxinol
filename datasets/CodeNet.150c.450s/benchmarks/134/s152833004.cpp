#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define max 100001
struct node {int p,l,r;};
struct node t[max];
int n;
void ppreorder(int root){
  if(root==-1)return;
  cout<<" "<<root;
  ppreorder(t[root].l);
  ppreorder(t[root].r);
}
void pinorder(int root){
  if(root==-1)return;
  pinorder(t[root].l);
  cout<<" "<<root;
  pinorder(t[root].r);
}
void ppostorder(int root){
  if(root==-1)return;
  ppostorder(t[root].l);
  ppostorder(t[root].r);
  cout<<" "<<root;
}
int main(){
  int i,id,root;
  cin>>n;
  for(int i=0;i<n;i++)
    t[i].p=t[i].l=t[i].r=-1;
  for(i=0;i<n;i++){
    cin>>id;
    cin>>t[id].l>>t[id].r;
    if(t[id].l!=-1)t[t[id].l].p=id;
    if(t[id].r!=-1)t[t[id].r].p=id;
  }

  for(int i=0;i<n;i++){
    if(t[i].p==-1)root=i;
  }
  cout<<"Preorder"<<endl;
  ppreorder(root);
  cout<<endl<<"Inorder"<<endl;;
  pinorder(root);
  cout<<endl<<"Postorder"<<endl;
  ppostorder(root);
  cout<<endl;
  return 0;
}

