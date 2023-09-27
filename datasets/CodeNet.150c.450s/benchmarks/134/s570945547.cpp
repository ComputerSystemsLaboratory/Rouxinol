#include<bits/stdc++.h>
using namespace std;
int root;
int t[2][100000],hight[100000];
void dfs1(int p){
  if(p==-1)return;
  cout<<" "<<p;
  dfs1(t[0][p]);
  dfs1(t[1][p]);
}
void dfs2(int p){
  if(p==-1)return;
  dfs2(t[0][p]);
  cout<<" "<<p;
  dfs2(t[1][p]);
}
void dfs3(int p){
  if(p==-1)return;
  dfs3(t[0][p]);
  dfs3(t[1][p]);
  cout<<" "<<p;
}
int main(){
  int root;
  int n,par[100000];
  cin>>n;
  for(int i=0;i<n;i++)par[i]=-1;
  for(int i=0;i<n;i++){
    int a,b,c;
    cin>>a>>b>>c;
    t[0][a]=b;
    t[1][a]=c;
    if(b!=-1)par[b]=a;
    if(c!=-1)par[c]=a;
    }
  for(int i=0;i<n;i++)if(par[i]==-1)root=i;
  cout<<"Preorder"<<endl;
  dfs1(root);
  cout<<endl<<"Inorder"<<endl;
  dfs2(root);
  cout<<endl<<"Postorder"<<endl;
  dfs3(root);
  cout<<endl;
  return 0;
}