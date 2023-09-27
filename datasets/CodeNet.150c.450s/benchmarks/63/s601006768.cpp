#include <bits/stdc++.h>

using namespace std;


template< typename T >
struct edge
{
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using Graph = vector< Edges< T > >;
template< typename T >
using Matrix = vector< vector< T > >;


template< typename T >
vector< T > dijkstra(Graph< T > &g, int s)
{
  const auto INF = numeric_limits< T >::max();
  vector< T > dist;
  dist.assign(g.size(), INF);

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

int main()
{
  int V, E, S;
  scanf("%d %d %d", &V, &E, &S);
  Graph< int > g(V);
  for(int i = 0; i < E; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    g[x].emplace_back(y, z);
  }
  auto cost = dijkstra(g, S);
  for(int i = 0; i < V; i++) {
    if(cost[i] == numeric_limits< int >::max()) puts("INF");
    else printf("%d\n", cost[i]);
  }
}
