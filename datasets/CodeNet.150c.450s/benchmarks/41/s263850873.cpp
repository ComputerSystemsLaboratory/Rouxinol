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
void warshall_floyd(Matrix< T > &g, T INF) {
  for(int k = 0; k < g.size(); k++) {
    for(int i = 0; i < g.size(); i++) {
      for(int j = 0; j < g.size(); j++) {
        if(g[i][k] == INF || g[k][j] == INF) continue;
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
      }
    }
  }
}

int main() {
  int V, E;
  scanf("%d %d", &V, &E);
  Matrix< int > mat(V, vector< int >(V, INT_MAX));
  for(int i = 0; i < V; i++) mat[i][i] = 0;
  for(int i = 0; i < E; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    mat[x][y] = z;
  }
  warshall_floyd(mat, INT_MAX);
  for(int i = 0; i < V; i++) {
    if(mat[i][i] < 0) {
      puts("NEGATIVE CYCLE");
      return 0;
    }
  }
  for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
      if(j > 0) putchar(' ');
      if(mat[i][j] == INT_MAX) printf("INF");
      else printf("%d", mat[i][j]);
    }
    putchar('\n');
  }
}

