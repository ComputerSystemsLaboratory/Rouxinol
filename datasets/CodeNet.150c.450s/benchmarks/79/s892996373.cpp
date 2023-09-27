#include <iostream>
using namespace std;
int main( void )
{
  while( 1 ){
    int n,r,p,c;
    int d[2][55];
    cin >> n >> r;
    if( n == 0 ) break;
    for( int i=0; i<n; i++ ){
      d[0][i] = n-i;
    }
    for( int i=0; i<r; i++ ){
      cin >> p >> c;
      int k = i & 1;
      for( int j=0; j<c; j++ ){
        d[1-k][j] = d[k][j+p-1];
      }
      for( int j=0; j<p-1; j++ ){
        d[1-k][j+c] = d[k][j];
      }
      for( int j=c+p-1; j<n; j++ ){
        d[1-k][j] = d[k][j];
      }
    }
    cout << d[r&1][0] << endl;
  }
}