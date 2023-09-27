#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int graph[100][100];
  for( int i = 0 ; i < 100 ; i++ )
    for( int j = 0 ; j < 100 ; j++ )
      graph[i][j] = 0;

  int n;
  cin >> n;
  for( int i = 0 ; i < n ; i++ ){
    int u, k;
    cin >> u >> k;
    u--;
    while( k-- ){
      int v;
      cin >> v;
      v--;
      graph[u][v] = 1;
    }
  }
  for( int i = 0 ; i < n ; i++ ){
    for( int j = 0 ; j < n ; j++ ){
      if( j == n - 1 ) cout << graph[i][j] << endl;
      else cout << graph[i][j] << " ";
    }
  }
  return 0;
}