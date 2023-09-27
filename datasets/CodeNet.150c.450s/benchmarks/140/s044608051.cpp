#include <cstdio>  //{{{
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <algorithm>

#define ALL(c) (c).begin(), (c).end()
#define DUMP(x) std::cerr << #x << ':' << x << '\n';

typedef long long ll;
// clang-format off
template<typename T,typename U>inline bool chmax(T&x,U a){if(x>=a)return 0;x=a;return 1;}
template<typename T,typename U>inline bool chmin(T&x,U a){if(x<=a)return 0;x=a;return 1;}
inline int in(){int x;scanf("%d", &x);return x;}
// clang-format on
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
//{{{ prim.cc
#ifndef INCLUDE_GRAPH_HPP
#include "graph.hpp"
#endif
#include <queue>

namespace orliv {
namespace graph {

Edges prim(const Graph& g, int s = 0) {
  const int V = g.size();
  Edges spanning_tree;
  spanning_tree.reserve(V - 1);

  std::vector<bool> visited(V, false);
  std::priority_queue<Edge> pq;
  for (pq.emplace(-2, s, 0); !pq.empty();) {
    auto e = pq.top();
    pq.pop();
    if (visited[e.to]) continue;
    visited[e.to] = true;
    if (e.from >= 0) spanning_tree.emplace_back(e);
    for (const auto& f : g[e.to]) pq.emplace(f);
  }
  return std::move(spanning_tree);
}
}
}
//}}}

using namespace std;

int main() {
  int V = in(), E = in();
  orliv::Graph g(V);
  for (int i = 0; i < E; i++) {
    int s = in(), t = in(), w = in();
    g[s].emplace_back(s, t, w);
    g[t].emplace_back(t, s, w);
  }
  auto es = orliv::graph::prim(g);
  ll tot = 0;
  for (const auto& e : es) {
    tot += e.w;
  }
  cout << tot << endl;
  return 0;
}