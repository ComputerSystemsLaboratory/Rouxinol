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

struct UnionFind {
  vector< int > data;

  UnionFind(int sz) {
    data.assign(sz, -1);
  }

  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if(x == y) return (false);
    if(data[x] > data[y]) swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return (true);
  }

  int find(int k) {
    if(data[k] < 0) return (k);
    return (data[k] = find(data[k]));
  }

  int size(int k) {
    return (-data[find(k)]);
  }
};

template< typename T >
T kruskal(Edges< T > &edges, int V) {
  sort(begin(edges), end(edges), [](const edge< T > &a, const edge< T > &b) {
    return (a.cost < b.cost);
  });
  UnionFind tree(V);
  T ret = 0;
  for(auto &e : edges) {
    if(tree.unite(e.src, e.to)) ret += e.cost;
  }
  return (ret);
}


int main() {
  int V, E;
  scanf("%d %d", &V, &E);
  Edges< int > edges;
  for(int i = 0; i < E; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    edges.emplace_back(a, b, c);
  }
  printf("%d\n", kruskal(edges, V));
}
