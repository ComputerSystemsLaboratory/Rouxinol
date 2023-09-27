#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int>to[105];
int main(){
  int n;
  cin>>n;
  rep(i,n){
    int u,k;
    cin>>u>>k;
    --u;
    rep(j,k){
      int v;
      cin>>v;
      --v;
      to[u].push_back(v);
      //to[v].push_back(u);
    }
  }
  queue<int>q;
  vector<int>dist(n,-1);
  dist[0]=0;
  q.push(0);
  while(!q.empty()){
    int v=q.front();q.pop();
    for(int u:to[v]){
      if(dist[u]!=-1)continue;
      dist[u]=dist[v]+1;
      q.push(u);
    }
  }
  rep(i,n)cout<<i+1<<" "<<dist[i]<<endl;
  return 0;
}
