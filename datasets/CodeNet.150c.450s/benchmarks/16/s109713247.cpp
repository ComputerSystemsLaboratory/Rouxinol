#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long int d[20010] = {};
long long int sum[20010] = {};
long long int to[20010] = {};

int main() {

  string s;
  cin >> s;

  long long int ma = 0;
  long long int mi = 0;

  long long int cnt = 0;

  for ( long long int i = 0; i < s.size(); i++ ) {

    if ( s[i] == '/' ) {
      cnt++;
    }else if ( s[i] == '_' ) {
    }else {
      cnt--;
    }
    ma = max( ma, cnt );
    mi = min( mi, cnt );

  }

  for ( long long int i = 0; i < ma - mi + 1; i++ ) {
    d[ i ] = -1;
  }
  for ( long long int i = 0; i < s.size() + 1; i++ ) {
    to[ i ] = -1;
  }

  long long int ans = 0;

  cnt = -mi;
  d[ cnt ] = 0;
  sum[ 0 ] = 0;

  for ( long long int i = 0; i < s.size(); i++ ) {

    if ( s[i] == '/' ) {
      cnt++;
      if ( d[ cnt ] != -1 ) {
	ans += ( i + 1 ) - d[ cnt ] - 1;
	to[ d[ cnt ] ] = i + 1;
      }
    }else if ( s[i] == '_' ) {
    }else {
      cnt--;
    }
    d[ cnt ] = i + 1;
    sum[ i + 1 ] = ans;

  }

  vector< long long int > v;

  for ( long long int i = 0; i < s.size() + 1; i++ ) {

    if ( to[ i ] != -1 ) {

      v.push_back( sum[ to[i] ] - sum[ i ] );
      i = to[i] - 1;

    }

  }

  cout << ans << endl;
  cout << v.size();
  for ( long long int i = 0; i < v.size(); i++ ) {
    cout << " " << v[i];
  }
  cout << endl;

  return 0;

}