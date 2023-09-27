#include <bits/stdc++.h>

using namespace std;

const int kInfinity = 0x3F3F3F3F;
const int kNil = -1;
const int kMaxV = 100010;

template <class T>
struct Edge {
  using w_type = T;
  Edge(int u, int v, w_type w): u(u), v(v), w(w) { }
  int u, v;
  w_type w;
  bool operator<(const Edge<T> & rhs) const {
    if (w != rhs.w) { return w < rhs.w; }
    if (u != rhs.u) { return u < rhs.u; }
    return v < rhs.v;
  }
};

template <class Edge>
decltype(auto) Dijkstra(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type source) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;

  bitset<kMaxV> bs;
  vector<vector<Edge>> adjacency(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency[e.u].push_back(e);
  }
  vector<w_type> dist(node_num, kInfinity);
  vector<int> parent(node_num, kNil);
  dist[source] = 0;

  using Pair = pair<size_type, w_type>;
  auto compare = [](const Pair & x, const Pair & y) {
    return y.second < x.second || (!(x.second < y.second) && y.first < x.first);
  };
  priority_queue<Pair, vector<Pair>, decltype(compare)> que(compare);
  que.emplace(source, 0);

  while (!que.empty()) {
    auto top_no = que.top().first;
    auto top_dist = que.top().second;
    que.pop();
    bs.set(top_no);
    for (const auto & e: adjacency[top_no]) {
      const auto cost = dist[e.u] + e.w;
      if (dist[e.v] > cost && !bs.test(e.v)) {
        dist[e.v] = cost;
        parent[e.v] = e.u;
        que.emplace(e.v, cost);
      }
    }
  }

  return dist;
}

int main(int argc, char const *argv[]) {
  vector<Edge<int>> edges;
  unsigned V, E, r;
  cin >> V >> E >> r;
  for (unsigned i = 0; i < E; ++i) {
    unsigned u, v;
    unsigned w;
    cin >> u >> v >> w;
    edges.emplace_back(u, v, w);
  }

  auto dist = Dijkstra(edges, V, r);
  for (unsigned i = 0; i < V; ++i) {
    if (dist[i] == kInfinity) {
      cout << "INF\n";
    } else {
      cout << dist[i] << endl;
    }
  }

  return 0;
}