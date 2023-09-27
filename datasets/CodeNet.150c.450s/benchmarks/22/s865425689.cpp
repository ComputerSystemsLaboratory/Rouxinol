#include <bits/stdc++.h>

using namespace std;

template< typename T >
struct edge {
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< Edges< T > >;
using UnWeightedGraph = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;

template< typename T >
vector< T > shortest_path_faster_algorithm(WeightedGraph< T > &g, int s) {
  const auto INF = numeric_limits< T >::max();
  vector< T > dist(g.size(), INF);
  vector< int > pending(g.size(), 0), times(g.size(), 0);
  queue< int > que;

  que.emplace(s);
  pending[s] = true;
  ++times[s];
  dist[s] = 0;

  while(!que.empty()) {
    int p = que.front();
    que.pop();
    pending[p] = false;
    for(auto &e : g[p]) {
      T next_cost = dist[p] + e.cost;
      if(next_cost >= dist[e.to]) continue;
      dist[e.to] = next_cost;
      if(!pending[e.to]) {
        if(++times[e.to] >= g.size()) return vector< T >();
        pending[e.to] = true;
        que.emplace(e.to);
      }
    }
  }
  return dist;
}

int main() {
  int V, E, R;
  scanf("%d %d %d", &V, &E, &R);
  WeightedGraph< int > g(V);
  for(int i = 0; i < E; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    g[a].emplace_back(b, c);
  }
  auto dists = shortest_path_faster_algorithm(g, R);
  if(dists.empty()) puts("NEGATIVE CYCLE");
  for(auto &dist : dists) {
    if(dist == numeric_limits< int >::max()) puts("INF");
    else printf("%d\n", dist);
  }
}

