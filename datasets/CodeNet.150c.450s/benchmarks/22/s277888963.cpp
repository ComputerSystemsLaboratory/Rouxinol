#include <bits/stdc++.h>

using namespace std;

template< typename T >
struct edge
{
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

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
vector< T > bellman_ford(Edges< T > &edges, int V, int s)
{
  const auto INF = numeric_limits< T >::max();
  vector< T > dist(V, INF);
  dist[s] = 0;
  for(int i = 0; i < V - 1; i++) {
    for(auto &e : edges) {
      if(dist[e.src] == INF) continue;
      dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
    }
  }
  for(auto &e : edges) {
    if(dist[e.src] == INF) continue;
    if(dist[e.src] + e.cost < dist[e.to]) return vector< T >();
  }
  return dist;
}


int main()
{
  int V, E, S;
  scanf("%d %d %d", &V, &E, &S);
  Edges< int > g;
  for(int i = 0; i < E; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    g.emplace_back(x, y, z);
  }
  auto cost = bellman_ford(g, V, S);
  if(cost.empty()) {
    puts("NEGATIVE CYCLE");
  } else {
    for(int i = 0; i < V; i++) {
      if(cost[i] == numeric_limits< int >::max()) puts("INF");
      else printf("%d\n", cost[i]);
    }
  }
}


