#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long 

int n,t;
vector<int>G[101];
int d[101],f[101];
bool used[101];

void dfs(int v){
  used[v]=true;
  d[v]=++t;
  rep(i,G[v].size()){
    int e=G[v][i];
    if(used[e]==false)dfs(e);
  }
  f[v]=++t;
}

int main(){
  cin>>n;
  rep(i,n){
    int u,k;
    cin>>u>>k;
    u--;
    rep(j,k){
      int v;
      cin>>v;
      v--;
      G[u].push_back(v);
    }
  }
  rep(i,n)if(used[i]==false)dfs(i);
  rep(i,n)cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
  return 0;
}
