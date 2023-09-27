#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m;

  cin >> n >> m;

  vector< vector<int> > matrix;
  matrix.resize( n );
  for( int i = 0; i < n; i++ ) {
    matrix[ i ].resize( m );
  }

  for( int i = 0; i < n; i++ ) {
    for( int j = 0; j < m; j++ ) {
      cin >> matrix[ i ][ j ];
    }
  }

  vector <int> ary;
  ary.resize( m );

  for( int j = 0; j < m; j++ ) {
    cin >> ary[ j ];
  }

  int sum;
  for( int i = 0; i < n; i++ ) {
    sum = 0;
    for( int j = 0; j < m; j++ ) {
      sum += matrix[ i ][ j ] * ary[ j ];
    }
    cout << sum << endl;
  }

  return 0;
}