#include <iostream>
#include <queue>
using namespace std;

#define N 100
#define INFTY (1 << 21)

int n, M[N][N];
int d[N];

void bfs(int s) {
  queue<int> q;
  q.push(s);
  for ( int i = 0; i < n; i++ ) {
    d[i] = INFTY;
  }
  d[s] = 0;
  int u;
  while ( !q.empty() ) {
    u = q.front(); q.pop();
    for ( int v = 0; v < n; v++ ) {
      if ( M[u][v] == 0 ) continue;
      if ( d[v] != INFTY ) continue;
      d[v] = d[u] + 1;
      q.push(v);
    }
  }
  for ( int i = 0; i < n; i++ ) {
    cout << i + 1 << " " << ( (d[i] == INFTY) ? (-1) : d[i] ) << endl;
  }
}

int main() {
  cin >> n;

  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < n; j++ ) {
      M[i][j] = 0;
    }
  }

  for ( int i = 0; i < n; i++ ) {
    int a, b;
    cin >> a >> b;
    --a;
    for ( int j = 0; j < b; j++ ) {
      int c;
      cin >> c;
      M[a][--c] = 1;
    }
  }

  bfs(0);

  return 0;
}