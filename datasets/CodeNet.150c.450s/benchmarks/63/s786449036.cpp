#include <bits/stdc++.h>
using namespace std;

template<typename T> struct Graph {
  struct Edge { int to; T cost; };
  vector<int> prev;
  vector<vector<Edge>> g;
  Graph(int n) : prev(n, -1), g(n) {}

  void addEdge(int u, int v, T w) {
    g[u].push_back({v, w});
    //g[v].push_back({u, w});
  }
  vector<T> dijkstra(int s) {
    vector<T> dist(g.size(), -1);
    using Node = pair<T, int>;
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    pq.push({dist[s] = 0, s});

    while (!pq.empty()) {
      auto d = pq.top().first;
      auto u = pq.top().second;
      pq.pop();
      if (dist[u] < d) continue;
      for (auto&& v : g[u]) {
        if (dist[v.to] < 0 || dist[v.to] > dist[u] + v.cost) {
          dist[v.to] = dist[u] + v.cost;
          prev[v.to] = u;
          pq.push({dist[v.to], v.to});
        }
      }
    }
    return dist;
  }
  vector<int> getPath(int t) {
    vector<int> path;
    for (; t != -1; t = prev[t]) path.push_back(t);
    reverse(begin(path), end(path));
    return path;
  }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, r; cin >> n >> m >> r;
  Graph<int> g(n);
  for (int i = 0; i < m; ++i) {
    int s, t, d; cin >> s >> t >> d;
    g.addEdge(s, t, d);
  }
  vector<int> d = g.dijkstra(r);
  for (int i = 0; i < n; ++i) cout << ( (d[i] < 0) ? "INF" : to_string(d[i]) ) << endl;
  return 0;
}

