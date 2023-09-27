#include <iostream>
#include <vector>
using namespace std;

int main() {

  long long int n, m, l;
  cin >> n >> m >> l;

  vector< vector< long long int > > a;

  for ( long long int i = 0; i < n; i++ ) {
    vector< long long int > v;
    for ( long long int j = 0; j < m; j++ ) {
      long long int in;
      cin >> in;
      v.push_back( in );
    }
    a.push_back( v );
  }

  vector< vector< long long int > > b;
  for ( long long int i = 0; i < m; i++ ) {
    vector< long long int > v;
    for ( long long int j = 0; j < l; j++ ) {
      long long int in;
      cin >> in;
      v.push_back( in );
    }
    b.push_back( v );
  }

  for ( long long int i = 0; i < n; i++ ) {

    for ( long long int k = 0; k < l; k++ ) {

      if ( k > 0 ) cout << " ";
      long long int cnt = 0;
      for ( long long int j = 0; j < m; j++ ) {
	cnt += a[i][j] * b[j][k];
      }
      cout << cnt;

    }

    cout << endl;

  }

  return 0;

}