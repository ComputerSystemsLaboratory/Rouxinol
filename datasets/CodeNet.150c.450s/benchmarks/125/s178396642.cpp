#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int> > G;
int d[111],f[111],u[111];
void dfs(int v,int& p){
  if(u[v]) return;
  u[v]=1;
  sort(G[v].begin(),G[v].end());
  d[v]=++p;
  for(int u:G[v]) dfs(u,p);
  f[v]=++p;
}
signed main(){
  int n;
  cin>>n;
  G.resize(n,vector<int>());
  for(int i=0;i<n;i++){
    int u,k;
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      int c;
      cin>>c;
      c--;
      G[u].push_back(c);
    }
  }
  int p=0;
  for(int i=0;i<n;i++)
    if(!u[i]) dfs(i,p);
  for(int i=0;i<n;i++) cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;;
  return 0;
}