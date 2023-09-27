#include <iostream>
#include <vector>
using namespace std;

int main() {

  long long int n, m, p, input;

  while( true ) {

    cin >> n >> m >> p;

    if ( n == 0 ) break;

    vector< long long int > x;

    long long int s = 0;

    for ( long long int i = 0; i < n; i++ ) {

      cin >> input;

      s += input;

      x.push_back( input );

    }

    if ( x[m-1] == 0 ) {
      cout << 0 << endl;
    }else {
      cout << s * 100 * ( 100 - p ) / x[m-1] / 100 << endl;
    }

  }

  return 0;

}