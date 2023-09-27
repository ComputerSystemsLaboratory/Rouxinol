#include <iostream>
#include <vector>
using namespace std;

int main() {

  long long int n, a, b, c, x, input;

  while( true ) {

    cin >> n >> a >> b >> c >> x;

    if ( n == 0 ) break;

    vector< long long int > y;

    for ( long long int i = 0; i < n; i++ ) {

      cin >> input;

      y.push_back( input );

    }

    long long int cnt = 0;
    long long int ans = 0;

    for ( ans = 0; true; ans++ ) {

      if ( ans > 10000 ) {
	cout << -1 << endl;
	break;
      }

      if ( x == y[cnt] ) {
	cnt++;
	if ( cnt == n ) {
	  cout << ans << endl;
	  break;
	}
      }

      x = ( a * x + b ) % c;

    }

  }

  return 0;

}