#include <iostream>
#include <vector>
using namespace std;

int main() {

  long long int n, m;
  cin >> n >> m;

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

  vector< long long int > b;
  for ( long long int i = 0; i < m; i++ ) {
    long long int in;
    cin >> in;
    b.push_back( in );
  }

  for ( long long int i = 0; i < n; i++ ) {

    long long int cnt = 0;
    for ( long long int j = 0; j < m; j++ ) {

      cnt += a[i][j] * b[j];

    }

    cout << cnt << endl;

  }


  return 0;

}