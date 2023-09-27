#include <iostream>
#include <vector>
#include <queue>
#include <bitset>
#include <utility>
#include <algorithm>
#include <numeric>

using namespace std;

const int kNil = -1;
const int kMaxV = 110;

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
                 typename vector<Edge>::size_type source) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;

  const w_type kInf = numeric_limits<w_type>::max();

  w_type weight_sum{};
  vector<w_type> dist(node_num, kInf);
  vector<int> parent(node_num, kNil);
  dist[source] = 0;

  for (unsigned i = 0; i < node_num - 1; ++i) {
    for (const auto & e: edges) {
      if (dist[e.v] > dist[e.u] + e.w && dist[e.u] != kInf) {
        dist[e.v] = dist[e.u] + e.w;
        parent[e.v] = e.u;
      }
    }
  }

  for (const auto & e: edges) {
    if (dist[e.v] > dist[e.u] + e.w && dist[e.u] != kInf) {
      return make_pair(false, dist);
    }
  }
  return make_pair(true, dist);
}

template <class Edge>
decltype(auto) Dijkstra(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type source) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;

  const w_type kInf = numeric_limits<w_type>::max();

  bitset<kMaxV> bs;
  vector<vector<Edge>> adjacency_list(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency_list[e.u].push_back(e);
  }
  vector<w_type> dist(node_num, kInf);
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
    for (const auto & e: adjacency_list[top_no]) {
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

template <class Edge>
decltype(auto) Johnson(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;
  const w_type kInf = numeric_limits<int>::max();
  bool has_cycle = false;

  ++node_num;
  auto new_edges(edges);
  for (unsigned i = 0; i < node_num - 1; i++) {
    new_edges.emplace_back(node_num - 1, i, 0);
  }

  auto bellman_ford_result = BellmanFord(new_edges, node_num, node_num - 1);
  has_cycle = !bellman_ford_result.first;
  auto h = bellman_ford_result.second;

  vector<vector<w_type>> adjacency_matrix(node_num, vector<w_type>(node_num, kInf));
  for (auto & e: new_edges) {
    e.w += h[e.u] - h[e.v];
  }

  vector<vector<w_type>> dist(node_num - 1, vector<w_type>(node_num - 1, kInf));
  for (unsigned i = 0; i < node_num - 1; ++i) {
    auto dist_single = Dijkstra(new_edges, node_num, i);
    for (unsigned j = 0; j < node_num - 1; ++j) {
      if (dist_single[j] == kInf) { continue; }
      dist[i][j] = dist_single[j] + h[j] - h[i];
    }
  }

  return make_pair(!has_cycle, dist);
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

  auto ans = Johnson(edges, V);
  auto have_neg_cycle = !ans.first;
  auto dist = ans.second;
  if (have_neg_cycle) {
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