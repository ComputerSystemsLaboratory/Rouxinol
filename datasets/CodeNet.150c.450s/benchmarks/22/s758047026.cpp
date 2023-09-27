#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

const int kInfinity = 0x3F3F3F3F;
const int kNil = -1;

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
decltype(auto) BellmanFord(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type root) {
  using size_type = typename vector<Edge>::size_type;
  using const_it = typename vector<Edge>::const_iterator;
  using w_type = typename Edge::w_type;

  w_type weight_sum{0};
  vector<w_type> dist(node_num, kInfinity);
  vector<int> parent(node_num, kNil);
  dist[root] = 0;

  for (unsigned i = 0; i < node_num - 1; ++i) {
    for (const auto & e: edges) {
      if (dist[e.v] > dist[e.u] + e.w && dist[e.u] != kInfinity) {
        dist[e.v] = dist[e.u] + e.w;
        parent[e.v] = e.u;
      }
    }
  }

  for (const auto & e: edges) {
    if (dist[e.v] > dist[e.u] + e.w && dist[e.u] != kInfinity) {
      return make_pair(false, dist);
    }
  }
  return make_pair(true, dist);
}

int main(int argc, char const *argv[]) {
  vector<Edge<int>> edges;
  unsigned V, E, r;
  cin >> V >> E >> r;
  for (unsigned i = 0; i < E; ++i) {
    unsigned u, v;
    int w;
    cin >> u >> v >> w;
    edges.emplace_back(u, v, w);
  }
  auto ans = BellmanFord(edges, V, r);
  auto have_neg_cycle = ans.first;
  auto dist = ans.second;
  if (!have_neg_cycle) {
    cout << "NEGATIVE CYCLE\n";
  } else {
    for (unsigned i = 0; i < V; ++i) {
      if (dist[i] == kInfinity) {
        cout << "INF\n";
      } else {
        cout << dist[i] << endl;
      }
    }
  }
  return 0;
}