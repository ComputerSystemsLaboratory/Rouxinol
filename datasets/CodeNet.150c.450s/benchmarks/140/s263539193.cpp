#include <bits/stdc++.h>

using namespace std;

const int INF = 1 << 30;

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
T prim(WeightedGraph< T > &g) {
  using Pi = pair< T, int >;

  T total = 0;
  vector< bool > used(g.size(), false);
  priority_queue< Pi, vector< Pi >, greater< Pi > > que;
  que.emplace(0, 0);
  while(!que.empty()) {
    auto p = que.top();
    que.pop();
    if(used[p.second]) continue;
    used[p.second] = true;
    total += p.first;
    for(auto &e : g[p.second]) {
      que.emplace(e.cost, e.to);
    }
  }
  return total;
}

int main() {
  int V, E;
  scanf("%d %d", &V, &E);
  WeightedGraph< int > g(V);
  for(int i = 0; i < E; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    g[a].emplace_back(b, c);
    g[b].emplace_back(a, c);
  }
  printf("%d\n", prim(g));
}
