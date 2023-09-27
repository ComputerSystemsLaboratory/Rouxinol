#include<bits/stdc++.h>
using namespace std;

#define INF -1

struct Node{
  int parent,left,right;
};

Node T[30];
int F[30];

void Preorder(int u);
void Inorder(int u);
void Postorder(int u);

int main(){
  int n,r,l,id,root;
  cin>>n;
  //初期化
  for(int i=0;i<n;i++){
    T[i].parent=INF;
  }
  //入力
  for(int i=0;i<n;i++){
    cin>>id>>l>>r;
    T[id].left=l;
    T[id].right=r;
    if(l!=INF)T[l].parent=id;
    if(r!=INF)T[r].parent=id;
  }
  //root確認
  for(int i=0;i<n;i++){
    if(T[i].parent==INF)root=i;
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

void Postorder(int u){
  if(T[u].left!=INF)Postorder(T[u].left);
  if(T[u].right!=INF)Postorder(T[u].right);
  //if(T[u].parent!=INF)
    cout<<" "<<u;
  return;
}

void Preorder(int u){
  // if(F[u]==0)
    cout<<" "<<u;
  if(T[u].left!=INF)Preorder(T[u].left);
  if(T[u].right!=INF)Preorder(T[u].right);
  return;
}

void Inorder(int u){
  if(T[u].left!=INF)Inorder(T[u].left);
  cout<<" "<<u;
  if(T[u].right!=INF)Inorder(T[u].right);
  return;
}