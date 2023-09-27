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
template< typename T >
using UnWeightedGraph = vector< vector< T > >;
template< typename T >
using Matrix = UnWeightedGraph< T >;


template< typename T >
T prim(WeightedGraph< T > &g)
{
  using Pi = pair< T, int >;

  T total = 0;
  vector< bool > used(g.size(), false);
  priority_queue< Pi, vector< Pi >, greater< Pi > > que;
  que.emplace(0, 0);
  while(!que.empty()) {
    Pi p = que.top();
    que.pop();
    if(used[p.second]) continue;
    used[p.second] = true;
    total += p.first;
    for(auto &e : g[p.second]) {
      que.emplace(e.cost, e.to);
    }
  }
  return (total);
}

int main()
{
  int V, E;
  cin >> V >> E;
  WeightedGraph< int > g(V);
  for(int i = 0; i < E; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    g[x].emplace_back(y, z);
    g[y].emplace_back(x, z);
  }
  cout << prim(g) << endl;
}
