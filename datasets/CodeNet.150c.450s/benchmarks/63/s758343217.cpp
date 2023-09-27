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
vector< T > dijkstra(WeightedGraph< T > &g, int s) {
  const auto INF = numeric_limits< T >::max();
  vector< T > dist(g.size(), INF);

  using Pi = pair< T, int >;
  priority_queue< Pi, vector< Pi >, greater< Pi > > que;
  dist[s] = 0;
  que.emplace(dist[s], s);
  while(!que.empty()) {
    T cost;
    int idx;
    tie(cost, idx) = que.top();
    que.pop();
    if(dist[idx] < cost) continue;
    for(auto &e : g[idx]) {
      auto next_cost = cost + e.cost;
      if(dist[e.to] <= next_cost) continue;
      dist[e.to] = next_cost;
      que.emplace(dist[e.to], e.to);
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
  for(auto &dist : dijkstra(g, R)) {
    if(dist == numeric_limits< int >::max()) puts("INF");
    else printf("%d\n", dist);
  }
}
