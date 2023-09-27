#include<iostream>
using namespace std;
static const int N=1000;

int main( void ){
  int M[N][N];
  int n,m,l,k;
 
  cin >> n;

  for( int i = 0 ; i < n ; i++ ){
    for( int j = 0 ; j < n ; j++ ){
      M[i][j];
    }
  }
  for( int i = 0 ; i < n ; i++ ){
    cin >> m >> l;
    m--;
    for( int j = 0 ; j < l ; j++ ){
      cin >> k;
      k--;
      M[m][k] = 1;
    }
  }
  for( int i = 0 ; i < n ; i++ ){
    for( int j = 0 ; j < n ; j++ ){
      if( j ) cout << " ";
      cout << M[i][j];
    }
    cout << endl;
  }
  return 0;
}