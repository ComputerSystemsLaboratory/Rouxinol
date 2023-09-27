#include <bits/stdc++.h>

using namespace std;

template< typename T >
struct RadixHeap
{
  using uint = unsigned;

  vector< pair< uint, T > > v[33];
  uint size, last;

  RadixHeap() : size(0), last(0) {}

  bool empty() const { return size == 0; }

  inline int getbit(int a)
  {
    return a ? 32 - __builtin_clz(a) : 0;
  }

  void push(uint key, const T &value)
  {
    ++size;
    v[getbit(key ^ last)].emplace_back(key, value);
  }

  pair< uint, T > pop()
  {
    if(v[0].empty()) {
      int idx = 1;
      while(v[idx].empty()) ++idx;
      last = min_element(begin(v[idx]), end(v[idx]))->first;
      for(auto &p : v[idx]) v[getbit(p.first ^ last)].emplace_back(p);
      v[idx].clear();
    }
    --size;
    auto ret = v[0].back();
    v[0].pop_back();
    return ret;
  }
};

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
vector< T > dijkstra(WeightedGraph< T > &g, int s)
{
  const auto INF = numeric_limits< T >::max();
  vector< T > dist;
  dist.assign(g.size(), INF);

  using Pi = pair< T, int >;
  RadixHeap< int > que;
  dist[s] = 0;
  que.push(dist[s], s);
  while(!que.empty()) {
    T cost;
    int idx;
    tie(cost, idx) = que.pop();
    if(dist[idx] < cost) continue;
    for(auto &e : g[idx]) {
      auto next_cost = cost + e.cost;
      if(dist[e.to] <= next_cost) continue;
      dist[e.to] = next_cost;
      que.push(dist[e.to], e.to);
    }
  }
  return dist;
}

int main()
{
  int V, E, S;
  scanf("%d %d %d", &V, &E, &S);
  WeightedGraph< unsigned > g(V);
  for(int i = 0; i < E; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    g[x].emplace_back(y, z);
  }
  auto cost = dijkstra(g, S);
  for(int i = 0; i < V; i++) {
    if(cost[i] == numeric_limits< unsigned >::max()) puts("INF");
    else printf("%d\n", cost[i]);
  }
}

