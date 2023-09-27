#include <bits/stdc++.h>
using namespace std;

template<typename T> struct Graph {
  struct Edge { int from, to; T cost; };
  size_t n;
  vector<T> dist;
  vector<int> hasPath;
  vector<Edge> es;
  Graph(size_t n_, T INF) : n(n_), dist(n_, INF + INF), hasPath(n_, 0), es(n_) {}

  void addEdge(int u, int v, T w) {
    es.push_back({u, v, w});
    //g[v].push_back({u, w});
  }
  bool bellmanFord(int s) {
    dist[s] = 0;
    hasPath[s] = 1;
    for (int i = 0; i < n; ++i) {
      for (auto&& e : es) {
        if (dist[e.to] > dist[e.from] + e.cost) {
          dist[e.to] = dist[e.from] + e.cost;
          hasPath[e.to] |= hasPath[e.from];
          if (i == n - 1 && hasPath[e.to]) return false;
        }
      }
    }
    return true;
  }
};

const int INF = 1e9;

int main() {
  int n, m, r; cin >> n >> m >> r;
  Graph<int> g(n, INF);
  while (m--) {
    int s, t, d; cin >> s >> t >> d;
    g.addEdge(s, t, d);
  }
  if (!g.bellmanFord(r)) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < n; ++i) {
      cout << ( (g.dist[i] >= INF || !g.hasPath[i]) ? "INF" : to_string(g.dist[i]) ) << endl;
    }
  }
  return 0;
}

