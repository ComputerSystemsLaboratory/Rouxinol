// {{{ include
#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
// }}}

//{{{ graph.hpp
#ifndef INCLUDE_GRAPH_HPP
#define INCLUDE_GRAPH_HPP
#include <vector>
#include <climits>
namespace orliv {
namespace graph {
struct Edge {
  typedef long long weight_type;
  static constexpr weight_type INF =
      std::numeric_limits<weight_type>::max() - 100;

  int from, to;
  weight_type w;
  Edge(int from, int to, weight_type w = 1) : from(from), to(to), w(w) {}
  bool operator<(const Edge& rhs) const {
    if (w != rhs.w) return w > rhs.w;
    if (from != rhs.from) return from < rhs.from;
    return to < rhs.to;
  }
};

typedef Edge::weight_type Weight;
typedef std::vector<Edge> Edges;
typedef std::vector<Weight> Weights;
typedef std::vector<int> Path;
}
typedef std::vector<graph::Edges> Graph;
}
#endif
//}}}
//{{{ dijkstra.cc
#ifndef INCLUDE_GRAPH_HPP
#include "graph.hpp"
#endif
#include <queue>

namespace orliv {
namespace graph {
namespace dijkstra_util {
Path buildPath(int t, std::vector<int>& prev) {
  Path path;
  for (int u = t; u >= 0; u = prev[u]) path.emplace_back(u);
  std::reverse(path.begin(), path.end());
  return std::move(path);
}
}

Weights dijkstra(const Graph& g, int s, std::vector<int>& prev) {
  const int V = g.size();
  auto inf = Edge::INF;
  Weights dist(V, inf);
  prev.assign(V, -1);

  dist[s] = 0;
  std::priority_queue<Edge> pq;
  for (pq.emplace(-2, s, 0); !pq.empty();) {
    auto e = pq.top();
    pq.pop();
    if (prev[e.to] != -1) continue;
    prev[e.to] = e.from;
    for (const auto& f : g[e.to]) {
      if (dist[f.to] <= e.w + f.w) continue;
      pq.emplace(f.from, f.to, dist[f.to] = e.w + f.w);
    }
  }
  return std::move(dist);
}

Weights dijkstra(const Graph& g, int s) {
  std::vector<int> prev;
  return std::move(dijkstra(g, s, prev));
}

std::pair<Weight, Path> dijkstra(const Graph& g, int s, int t) {
  std::vector<int> prev;
  auto ws = dijkstra(g, s, prev);
  auto path = dijkstra_util::buildPath(t, prev);
  return std::move(std::make_pair(ws[t], std::move(path)));
}
}
}
//}}}

using namespace std;

typedef long long ll;
inline int in() {
  int x;
  scanf("%d", &x);
  return x;
}

int main() {
  int V = in(), E = in(), r = in();
  orliv::Graph g(V);
  for (int i = 0; i < E; i++) {
    int s = in(), t = in(), d = in();
    g[s].emplace_back(s, t, d);
  }
  auto ws = orliv::graph::dijkstra(g, r);
  for (auto w : ws) {
    if (w == orliv::graph::Edge::INF) {
      cout << "INF" << endl;
    } else {
      cout << w << endl;
    }
  }

  return 0;
}