#include <iostream>
using namespace std;

int main() {

  while( true ) {

    long long int x, y, s;
    cin >> x >> y >> s;
    if ( s == 0 ) break;

    x += 100;
    y += 100;

    long long int ans = 0;

    for ( long long int i = 1; i < s; i++ ) {

      for ( long long int j = 1; j < s; j++ ) {

	if ( i * x / 100 + j * x / 100 != s ) continue;
	ans = max( ans, i * y / 100 + j * y / 100 );

      }

    }

    cout << ans << endl;

  }

  return 0;

}