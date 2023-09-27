#include <bits/stdc++.h>
using namespace std;
struct node{int p,l,r;};
node N[30];

void dfs1(int x){
  if(x==-1)return;
  cout <<" "<<x;
  dfs1(N[x].l);
  dfs1(N[x].r);
}

void dfs2(int x){
  if(x==-1)return;
  dfs2(N[x].l);
  cout <<" "<<x;
  dfs2(N[x].r);
}

void dfs3(int x){
  if(x==-1)return;
  dfs3(N[x].l);
  dfs3(N[x].r);
  cout <<" "<<x;
}

int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++) N[i].p=-1;

  for(int i=0,a;i<n;i++){
    cin>>a;
    cin>>N[a].l>>N[a].r;
    if(N[a].l !=-1) N[N[a].l].p=a;
    if(N[a].r !=-1) N[N[a].r].p=a;
  }

  int root;
  for(int i=0;i<n;i++)if(N[i].p==-1) root=i;

  
  cout <<"Preorder"<<endl;
  dfs1(root);
  cout <<endl<<"Inorder"<<endl;
  dfs2(root);
  cout <<endl<<"Postorder"<<endl;
  dfs3(root);
  cout <<endl;
  return 0;
}