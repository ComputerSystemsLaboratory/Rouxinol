#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 110;
constexpr int INF = 1e9;

int N;
int G[MAX][MAX];
bool seen[MAX];
int d[MAX];

int main(){
  for( int i = 0; i < MAX; i++ ){
    for( int j = 0; j < MAX; j++ ){
      G[i][j] = INF;
    }
  }
  
  cin >> N;
  for( int i = 0; i < N; i++ ){
    int u, k; cin >> u >> k;
    for( int j = 0; j < k; j++ ){
      int v, c; cin >> v >> c;
      G[u][v] = c;
    }
  }

  for( int i = 0; i < MAX; i++ ){
    d[i] = INF;
  }
  d[0] = 0;

  while( 1 ){
    int mincost = INF;
    int u;
    for( int i = 0; i < N; i++ ){
      if( d[i] < mincost && !seen[i] ){
	mincost = d[i];
	u = i;
      }
    }

    if( mincost == INF ) break;
    seen[u] = true;
    
    for( int i = 0; i < N; i++ ){
      if( G[u][i] != INF && !seen[i] ){
	if( G[u][i] + d[u] < d[i] ){
	  d[i] = G[u][i] + d[u];
	}
      }
    }
  }

  for( int i = 0; i < N; i++ ){
    cout << i << " " << d[i] << endl;
  }

}

