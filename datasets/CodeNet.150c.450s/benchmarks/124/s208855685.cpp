#include <iostream>
using namespace std;

#define WHITE 0 
#define GRAY 1
#define BLACK 2
#define INFTY 10000000
int n,color[100],M[100][100],d[100],p[100];
int i,j,u,k,v,c;

void dijkstra(){
  for( i = 0; i < n; i++ ){
    color[i] = WHITE;
    d[i] = INFTY;
  }
  d[0] = 0;
  p[0] = -1;
  int cnt = 0;
  // color[0] = GRAY;
  while(1){
    cnt++;
    //cout << cnt << endl;
    int u = -1;
    int mincost = INFTY;
    for( i = 0; i < n; i++ ){
      if( color[i] != BLACK && d[i] < mincost ){
	mincost = d[i];
	u = i;
      }
    }
    if( u == -1 ) break;
    //    if( mincost == INFTY ) break;
    color[u] = BLACK;

    for( v = 0; v < n; v++ ){
      if( color[v] != BLACK && M[u][v] != INFTY ){
	if( d[u] + M[u][v] < d[v] ){
	  d[v] = d[u] + M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }

  for( i = 0; i < n; i++ ){
    cout << i << " ";
    if( d[i] == INFTY ) cout << -1;
    else cout << d[i];
    cout << endl;
  }
}

int main(){
 
  cin >> n;

  for( i = 0; i < n; i++ ){
    for( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for( i = 0; i < n; i++ ){
    cin >> u >> k;
    for( j = 0; j < k; j++ ){
      cin >> v >> c;
      M[u][v] = c;
    }
  }
  
  dijkstra();

  return 0;
}