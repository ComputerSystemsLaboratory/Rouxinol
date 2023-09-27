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
vector< T > shortest_path_faster_algorithm(WeightedGraph< T > &g, int s)
{
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


int main()
{
  int V, E, S;
  scanf("%d %d %d", &V, &E, &S);
  WeightedGraph< int > g(V);
  for(int i = 0; i < E; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    g[x].emplace_back(y, z);
  }
  auto cost = shortest_path_faster_algorithm(g, S);
  if(cost.empty()) {
    puts("NEGATIVE CYCLE");
  } else {
    for(int i = 0; i < V; i++) {
      if(cost[i] == numeric_limits< int >::max()) puts("INF");
      else printf("%d\n", cost[i]);
    }
  }
}


