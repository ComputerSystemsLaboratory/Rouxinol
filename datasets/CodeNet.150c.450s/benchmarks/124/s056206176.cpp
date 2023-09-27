#include <iostream>
using namespace std;
 
#define MAX   100
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY  1
#define BLACK 2
 
int n, M[MAX][MAX];
 
void dijkstra() {
  int d[MAX], p[MAX], color[MAX];
  int minv, u;
  for ( int i = 0; i < n; i++ ) {
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }
 
  d[0] = 0;
color[0] = GRAY;
  while ( 1 ) {
    minv = INFTY;
    u = -1;
    for ( int i = 0; i < n; i++ ) {
      if ( minv > d[i] && color[i] != BLACK ) {
        minv = d[i];
u = i;
      }
    }
    if ( u == -1 ) break;
    color[u] = BLACK;
    for ( int v = 0; v < n; v++ ) {
      if ( color[v] != BLACK && M[u][v] != INFTY ) {
        if ( d[v] > d[u] + M[u][v] ) {
          d[v] = d[u] + M[u][v];
          color[v] = GRAY;
        }
      }
    }
  }
 
  for ( int i = 0; i < n; i++ ) {
    cout << i << " " << (d[i] == INFTY ? -1 : d[i]) << endl;
  }
}
 
int main() {
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      M[i][j] = INFTY;
    }
  }
 
  int k, c, u, v;
  for ( int i = 0; i < n; i++ ) {
    cin >> u >> k;
    for ( int j = 0; j < k; j++ ) {
      cin >> v >> c;
      M[u][v] = c;
    }
  }
 
  dijkstra();
 
  return 0;
}