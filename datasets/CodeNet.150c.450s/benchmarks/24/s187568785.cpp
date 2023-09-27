#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  long long int n ,m, input1, input2;

  while( true ) {

    cin >> n >> m;

    if ( n == 0 ) break;

    vector< long long int > d, p, s;

    for ( long long int i = 0; i < n; i++ ) {

      cin >> input1 >> input2;

      d.push_back(input1);
      p.push_back(input2);
      s.push_back(input2);

    }

    sort( s.begin(), s.end() );

    for ( long long int i = s.size() - 1; i >= 0; i-- ) {

      long long int k = s[i];
      for ( long long int j = 0; j < n; j++ ) {

	if ( p[j] == k ) {
	  if ( d[j] > m ) {
	    d[j] -= m;
	    m = 0;
	  }else {
	    m -= d[j];
	    p[j] = 0;
	  }
	  break;
	}

      }
      if ( m == 0 ) break;

    }

    long long int ans = 0;

    for ( long long int i = 0; i < n; i++ ) {

      ans += d[i] * p[i];

    }

    cout << ans << endl;

  }

  return 0;

}