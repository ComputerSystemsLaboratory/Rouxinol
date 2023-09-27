#include <bits/stdc++.h>
using namespace std;

const int INF = 10000000;
const int MAX_V = 11;

int d[MAX_V][MAX_V];
int V;

void warshall_floyd() {
  for ( int k = 0; k < V; k++ ) {
    for (int i = 0; i < V; i++ ) {
      for ( int j = 0; j < V; j++ ) {
	d[i][j] = min(d[i][j], d[i][k] + d[k][j] );
      }
    }
  }
}


int main() {

  int m;
  while ( cin >> m,m ) {
  for ( int i = 0; i < 51; i++ ) {
    for ( int j = 0; j < 51; j++ ) {
      if ( i == j ) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }

  int a,b,c;
  int maxn = 0;
  for ( int i = 0; i < m; i++ ) {
    cin >> a >> b >> c;
    maxn = max(maxn,max(a,b));
    d[a][b] = d[b][a] = c;
  }
  V = maxn + 1;
  warshall_floyd();


  int mincost = INF;
  int num;
  for ( int i = 0; i <= maxn; i++ ) {
    int total = 0;    
    for ( int j = 0; j <= maxn; j++ ) {
      if ( i != j ) {
	total += d[i][j];
      }
    }
    if ( mincost > total ) {
      mincost = total;
      num = i;
    }
  }
  cout << num << " " << mincost << endl;
  }

  return 0;
}