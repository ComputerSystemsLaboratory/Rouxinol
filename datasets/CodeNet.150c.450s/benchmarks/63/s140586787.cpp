#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5;
const int INF = 1e9;
typedef pair<int, int> P;

struct edge{ int to,cost; };
vector< edge > G[N];

void dikstra(int s,int V){
  priority_queue<P,vector<P>,greater<P>> que;
  int d[N]; //sからの最短距離
  fill(d,d+N,INF);
  d[s] = 0;
  que.push({0,s});

  while( !que.empty() ){
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push( {d[e.to],e.to} );
      }
    }
  }

  for(int i = 0; i < V; i++){
    if(d[i] >= INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}

signed main(){

  int V,E,r; cin >> V >> E >> r;
  for(int i = 0; i < E; i++){
    int s,t,c; cin >> s >> t >> c;
    G[s].push_back({t,c});
  }

  dikstra(r,V);

  return 0;
}

