#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e9

typedef long long ll;
typedef pair<int, int> P;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int V;
struct edge { int to, cost; };
vector<vector<edge>> G;
vector<int> d;

void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P>> que;
  for(int i = 0; i < V; i++)d[i] = INF;
  d[s] = 0;
  que.push(P(0, s));

  while(!que.empty()){
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main(){
  int E, r;
  cin >> V >> E >> r;
  G.resize(V);
  d.resize(V);
  for(int i = 0; i < E; i++){
    int s, t, _d;
    cin >> s >> t >> _d;
    edge e; e.to = t; e.cost = _d;
    G[s].push_back(e);
  }
  dijkstra(r);
  for(auto t : d){
    if(t == INF)cout << "INF" << endl;
    else cout << t << endl;
  }
}