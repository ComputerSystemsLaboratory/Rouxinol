#include <bits/stdc++.h>
#define MAXV 100000
const int INF = INT_MAX;
using namespace std;
typedef pair<int, int> P;
struct edge {int to, cost; };

int V;
vector<edge> G[MAXV];
int d[MAXV];

void dijkstra(int s) {
  priority_queue<P, vector<P>, greater<P>> que;
  fill_n(d, V, INF);
  d[s] = 0;
  que.push(P(0, s));

  while(!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(int i = 0; i < G[v].size(); i++) {
      edge e = G[v][i];
      if (d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int E, r;
  cin >> V >> E >> r;
  for(int i = 0; i < E; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    struct edge tmp;
    tmp.to = t; tmp.cost = d;
    G[s].push_back(tmp);
  }
  dijkstra(r);
  for(int i = 0; i < V; i++) {
    if(d[i] == INF){
      cout << "INF" << endl;
      continue;
    }
    cout << d[i] << endl;
  }

  return 0;
}