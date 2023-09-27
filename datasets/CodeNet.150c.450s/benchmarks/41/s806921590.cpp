#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

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
decltype(auto) FloydWarshall(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;
  const w_type kInf = numeric_limits<int>::max();

  vector<vector<w_type>> adjacency_matrix(node_num, vector<w_type>(node_num, kInf));
  for (const auto & e: edges) {
    adjacency_matrix[e.u][e.v] = e.w;
  }
  for (unsigned i = 0; i < node_num; ++i) {
    adjacency_matrix[i][i] = 0;
  }

  auto dist_prev = adjacency_matrix;
  for (unsigned k = 0; k < node_num; ++k) {
    vector<vector<w_type>> dist_now = dist_prev;
    for (unsigned i = 0; i < node_num; ++i) {
      for (unsigned j = 0; j < node_num; ++j) {
        if (dist_prev[i][k] == kInf || dist_prev[k][j] == kInf) { continue; }
        dist_now[i][j] = min(dist_prev[i][j], dist_prev[i][k] + dist_prev[k][j]);
      }
    }
    dist_prev = dist_now;
  }

  for (unsigned i = 0; i < node_num; ++i) {
    if (dist_prev[i][i] < 0) {
      return make_pair(false, dist_prev);
    }
  }

  return make_pair(true, dist_prev);
}

int main(int argc, char const *argv[]) {
  using w_type = int;
  const w_type kInf = numeric_limits<w_type>::max();
  vector<Edge<w_type>> edges;
  unsigned V, E;
  cin >> V >> E;
  for (unsigned i = 0; i < E; ++i) {
    unsigned u, v;
    w_type w;
    cin >> u >> v >> w;
    edges.emplace_back(u, v, w);
  }

  auto ans = FloydWarshall(edges, V);
  auto have_neg_cycle = ans.first;
  auto dist = ans.second;
  if (!have_neg_cycle) {
    cout << "NEGATIVE CYCLE\n";
  } else {
    for (unsigned i = 0; i < V; ++i) {
      for (unsigned j = 0; j < V; ++j) {
        if (dist[i][j] == kInf) {
          cout << "INF";
        } else {
          cout << dist[i][j];
        }
        if (j == V - 1) {
          cout << "\n";
        } else {
          cout << " ";
        }
      }
    }
  }

  return 0;
}