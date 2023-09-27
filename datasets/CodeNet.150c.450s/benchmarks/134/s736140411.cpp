#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 25


struct Node{int p,l,r;};
Node A[MAX];
int n;

void Preorder(int u){
  if(u==NIL) return;
  cout<<" "<<u;
  Preorder(A[u].l);
  Preorder(A[u].r);
}

void Inorder(int u){
  if(u==NIL) return;
  Inorder(A[u].l);
  cout<<" "<<u;
  Inorder(A[u].r);
}

void Postorder(int u){
  if(u==NIL) return;
  Postorder(A[u].l);
  Postorder(A[u].r);
  cout<<" "<<u;
} 

int main() {
  cin>>n;
  
  rep(i,n) A[i].p=NIL;
  rep(i,n){
    int a,b,c;
    cin>>a>>b>>c;
    A[a].l=b;
    A[a].r=c;
    A[b].p=a;
    A[c].p=a;
  }
  int root;
  rep(i,n){
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
  
  return 0;
}
