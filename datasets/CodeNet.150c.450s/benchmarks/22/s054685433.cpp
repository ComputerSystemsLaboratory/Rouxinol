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
  typedef int weight_type;
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
//{{{ bellmanford.cc
#ifndef INCLUDE_GRAPH_HPP
#include "graph.hpp"
#endif

namespace orliv {
namespace graph {
namespace bellmanford_util {
Path buildPath(int t, std::vector<int>& prev) {
  Path path;
  for (int u = t; u >= 0; u = prev[u]) path.emplace_back(u);
  std::reverse(path.begin(), path.end());
  return std::move(path);
}
}

bool bellmanford(const Graph& g, int s, Weights& dist, std::vector<int>& prev) {
  const int V = g.size();
  auto inf = Edge::INF;
  dist.assign(V, inf);
  prev.assign(V, -1);
  dist[s] = 0;
  bool negative_cycle = false;
  for (int i = 0; i < V; i++) {
    for (const auto& v : g) {
      for (const auto& e : v) {
        if (dist[e.from] == Edge::INF) continue;
        if (dist[e.to] <= dist[e.from] + e.w) continue;
        dist[e.to] = dist[e.from] + e.w;
        prev[e.to] = e.from;
        if (i == V - 1) {
          dist[e.to] = -Edge::INF;
          negative_cycle = true;
        }
      }
    }
  }
  return !negative_cycle;
}
std::pair<bool, Weights> bellmanford(const Graph& g, int s) {
  std::vector<int> prev;
  Weights dist;
  bool ok = bellmanford(g, s, dist, prev);
  return std::move(std::make_pair(ok, std::move(dist)));
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
  auto res = orliv::graph::bellmanford(g, r);
  if (!res.first) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for (auto w : res.second) {
    if (w == orliv::graph::Edge::INF) {
      cout << "INF" << endl;
    } else {
      cout << w << endl;
    }
  }
  return 0;
}