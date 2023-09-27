#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int INF = (int)1e9;

struct Edge {
  int src, dst, cost;
  Edge(int s, int d, int c) : src(s), dst(d), cost(c) { }
};

typedef vector<vector<Edge>> Graph;

int main() {
  ios::sync_with_stdio(false);

  int V, E, r; cin >> V >> E >> r;
  Graph G(V);
  for(int i = 0; i < E; i++) {
    int s, t, d; cin >> s >> t >> d;
    G[s].push_back(Edge(s, t, d));
  }

  bool negative_loop = false;
  vector<int> d(V, INF);
  d[r] = 0;
  for(int v = 0; v < V; v++) {
    for(int i = 0; i < (int)G.size(); i++) {
      if(d[i] == INF) continue;
      for(int j = 0; j < (int)G[i].size(); j++) {
        if(d[G[i][j].dst] > d[G[i][j].src] + G[i][j].cost) {
          d[G[i][j].dst] = d[G[i][j].src] + G[i][j].cost;
          if(v == V - 1) {
            negative_loop = true;
          }
        }
      }
    }
  }
  if(negative_loop) {
    cout << "NEGATIVE CYCLE" << endl;
  }
  else {
    for(int i = 0; i < V; i++) {
      if(d[i] == INF) cout << "INF" << endl;
      else cout << d[i] << endl;
    }
  }
}