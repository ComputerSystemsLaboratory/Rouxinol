#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
int64_t mod=1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;

int main() {
  int N,M; cin>>N>>M;
  Graph G(N);
  rep(i,M){
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    G[a].push_back(b);
    G[b].push_back(a);
  }
    vector<int> dist(N, -1); 
    queue<int> q;  
    dist[0] = 0;
    q.push(0);
  while(!q.empty()){
    int v=q.front();
    q.pop();
    for(auto nv:G[v]){
      if (dist[nv] != -1) continue;
      dist[nv]= v+1;
      q.push(nv);
    }
  }
  cout<<"Yes"<<endl;
  rep(i,N-1){
    cout<<dist[i+1]<<endl;
  }
}