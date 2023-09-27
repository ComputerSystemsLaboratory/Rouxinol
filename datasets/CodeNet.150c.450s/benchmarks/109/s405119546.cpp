#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  long long int n;

  while( true ) {

    cin >> n;
    if ( n == 0 ) break;

    vector< pair< long long int, long long int > > v;

    for ( long long int i = 0; i < n; i++ ) {

      long long int h, m, s;
      char c;

      cin >> h >> c >> m >> c >> s;
      v.push_back( make_pair( h * 60 * 60 + m * 60 + s, 1 ) );

      cin >> h >> c >> m >> c >> s;
      v.push_back( make_pair( h * 60 * 60 + m * 60 + s, 0 ) );

    }

    sort( v.begin(), v.end() );

    long long int ans = 0;
    long long int cnt = 0;

    for ( long long int i = 0; i < v.size(); i++ ) {

      if ( v[i].second == 0 ) {
	cnt--;
      }else {
	cnt++;
	ans = max( ans, cnt );
      }

    }

    cout << ans << endl;

  }

  return 0;

}