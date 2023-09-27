#include <algorithm>
#include <iostream>
#include <vector>

// graph by adjacency list
template <typename T>
struct Edge {
  int src, dst;
  T weight;
  Edge(const int src, const int dst, const T weight)
      : src(src), dst(dst), weight(weight) {}
  Edge(const int dst, const T weight) : src(-1), dst(dst), weight(weight) {}
  bool operator<(const Edge<T> &e) const { return weight > e.weight; }
};

template <typename T>
struct Graph {
  int V;
  std::vector<std::vector<Edge<T>>> E;
  Graph(const int V) : V(V) { E.resize(V); }
  void add_edge(const int src, const int dst, const T weight) {
    E[src].emplace_back(src, dst, weight);
  }
};

template <typename T>
struct ShortestPath {
  Graph<T> g;
  T inf;
  std::vector<T> dist;
  std::vector<int> prev;
  bool has_negative_cycle;

  ShortestPath(const Graph<T> g, const T inf = 1 << 30)
      : g(g), inf(inf), dist(g.V), prev(g.V) {}

  void run(int start) {
    std::fill(dist.begin(), dist.end(), inf);
    dist[start] = 0;
    prev[start] = -1;
    has_negative_cycle = false;
    for (int cnt = 0; cnt < g.V; cnt++) {
      bool update = false;
      for (int i = 0; i < g.V; i++) {
        for (Edge<T> e : g.E[i]) {
          if (dist[i] != inf && dist[i] + e.weight < dist[e.dst]) {
            dist[e.dst] = dist[i] + e.weight;
            prev[e.dst] = i;
            update = true;
            if (cnt == g.V - 1) has_negative_cycle = true;
          }
        }
      }
      if (!update) break;
    }
  }

  std::vector<int> build_path(const int goal) const {
    std::vector<int> path;
    for (int v = goal; v != -1; v = prev[v]) {
      path.emplace_back(v);
    }
    std::reverse(path.begin(), path.end());
    return path;
  }
};

void aoj() {
  // https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/all/GRL_1_B
  int V, E, r;
  std::cin >> V >> E >> r;
  Graph<int> g(V);
  for (int i = 0; i < E; i++) {
    int s, t, d;
    std::cin >> s >> t >> d;
    g.add_edge(s, t, d);
  }
  ShortestPath<int> sp(g);
  sp.run(r);
  if (sp.has_negative_cycle) {
    std::cout << "NEGATIVE CYCLE" << std::endl;
  } else {
    for (int i = 0; i < g.V; i++) {
      if (sp.dist[i] == sp.inf) {
        std::cout << "INF" << std::endl;
      } else {
        std::cout << sp.dist[i] << std::endl;
      }
    }
  }
}

int main() {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(false);

  aoj();
  return 0;
}

