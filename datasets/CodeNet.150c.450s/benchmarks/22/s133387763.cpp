#include<bits/stdc++.h>

using namespace std;

const int SIZE = 1013;
const int oo = 999999;

typedef pair<int, int> pii;

int dist[SIZE];
int parent[SIZE];

bool bellmanFord(vector<vector<pii> > &G, int &source, int &N){
    for(int i = 0; i < N; i++)
      dist[i] = oo;
    dist[source] = 0;
    for(int k = 0; k < N; k++){
      for(int u = 0; u < N; u++){
        for(int i = 0; i < G[u].size(); i++){
          pii v = G[u][i];
          if(dist[v.first] > dist[u] + v.second && dist[u] != oo){
            if(k == N-1)
              return true;
            dist[v.first] = dist[u] + v.second;
            parent[v.first] = u;
          }
        }
      }
    }
    return false;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  #ifdef Larra
  freopen("in","r",stdin);
  freopen("out","w",stdout);
  #endif
  int n, m, source;
  cin>>n>>m>>source;
  vector<vector<pii> > G(n);
  for(int i = 0; i < m; i++){
    int u,v,w;
    cin>>u>>v>>w;
    G[u].push_back({v,w});
  }
  bool hasCycle = bellmanFord(G, source, n);
  if(hasCycle){
    cout<<"NEGATIVE CYCLE\n";
  }
  else{
    for(int i = 0; i < n; i++){
      if(dist[i] == oo)
        cout<<"INF";
      else
        cout<<dist[i];
      cout<<"\n";
    }
  }
}