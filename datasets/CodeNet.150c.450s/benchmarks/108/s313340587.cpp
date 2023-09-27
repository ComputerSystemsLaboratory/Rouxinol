#include <iostream>
#include <queue>
using namespace std;

#define N 100
#define INFTY 1000000

int M[N][N],d[N];
int i,j,n,u,k,v;

void bfs(int s){

  queue <int> Q;

  for( i = 0; i < N; i++ ) d[i] = INFTY;
  

  d[s] = 0;
  Q.push(s);
    
  while ( !Q.empty() ){
    u = Q.front(); Q.pop();
    for( int v = 0; v < n; v++ ){
      if( M[u][v] == 0 ) continue;
      if( d[v] != INFTY ) continue;
	d[v] = d[u] + 1;
	Q.push(v);
      }
    }

  
  for( i = 0; i < n; i++ ){
    cout << i+1 << " ";
    if ( d[i] == INFTY ) cout << -1;
    else cout << d[i];
    cout << endl;
  }

}


int main(){
  for( i = 0; i < n; i++ ){
    for( j = 0; j < n; j++ ) M[u][v] = 0;
  }
  cin >> n;
  for( i = 0; i < n; i++ ){
    cin >> u;
    u--;
    cin >> k;
    for( j = 0; j < k; j++ ){
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }
  bfs(0);
  
  return 0;
}