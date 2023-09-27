#include<bits/stdc++.h>
using namespace std;
using ll=long long;

struct Edge{
  int to;
  int weight;
  Edge(int t,int w) : to(t),weight(w){}
};

using Graph = vector<vector<Edge>>;

int main(){
  int n,m,r;
  cin >> n >> m >> r;
  Graph G(n);

  for(int i=0;i<m;++i){
    int from,to,weight;
    cin >> from >> to >> weight;
    G[from].push_back(Edge(to,weight));
  }
  vector<ll> dist(n,-1);
  queue<int> que;
  dist[r]=0;
  que.push(r);
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(auto nv : G[v]){
      if(dist[nv.to] == -1 || dist[nv.to]>dist[v]+nv.weight){
        dist[nv.to] = dist[v]+nv.weight;
        que.push(nv.to);
      }
    }
  }
  for(int i=0;i<n;++i){
    if(dist[i]==-1) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }
  return 0;

}

