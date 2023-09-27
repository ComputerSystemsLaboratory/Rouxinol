#include <bits/stdc++.h>
using namespace std;

signed main() {
  int n;
  while ( cin >> n, n ) {
    int pre = 0;
    int asi = 0;
    int cnt = 0;
    for ( int i = 0; i < n; i++ ) {
      string f;
      cin >> f;
      if ( f == "lu" ) asi |= 1;
      if ( f == "ru" ) asi |= 2;
      if ( f == "ld" ) asi ^= 1;
      if ( f == "rd" ) asi ^= 2;
      if ( !pre && asi == 3 ) {
	cnt++;
	pre = 1;
      } else if ( pre && asi == 0 ) {
	cnt++;
	pre = 0;
      }
    }

    cout << cnt << endl;
  }
  
  return 0;
}

