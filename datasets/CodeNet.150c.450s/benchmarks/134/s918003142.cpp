#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
struct Node{int p,l,r;};
Node T[MAX];
int n,D[MAX],H[MAX];
void Preorder(int u){
  if(u==-1)return;
  cout << " "<<u;
  Preorder(T[u].l);
  Preorder(T[u].r);
}
void Inorder(int u){
  if(u==-1)return;
  Inorder(T[u].l);
  cout << " "<<u;
  Inorder(T[u].r);
}
void Postorder(int u){
  if(u==-1)return;
  Postorder(T[u].l);
  Postorder(T[u].r);
  cout << " " << u;
}


int main(){
  int v,l,r,root = 0;
  cin >> n;
  for(int i=0;i<n;i++)T[i].p=-1;
  for(int i=0;i<n;i++){
    cin >> v >> l >> r;
    T[v].l=l;
    T[v].r=r;
    if(l!=-1)T[l].p=v;
    if(r!=-1)T[r].p=v;
  }
  for(int i=0;i<n;i++)if(T[i].p==-1)root=i;
  cout <<"Preorder"<< endl;
  Preorder(root);
  cout << endl;

  cout <<"Inorder" << endl;
  Inorder(root);
  cout << endl;

  cout << "Postorder" << endl;
  Postorder(root);
  cout << endl;

  return 0;
}

 