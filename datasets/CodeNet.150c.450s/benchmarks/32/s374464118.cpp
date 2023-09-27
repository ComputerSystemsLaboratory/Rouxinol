#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
  int m, l, r;
  while ( cin >> m >> l >> r, m ) {
    l--; r--;
    vector<int> P(m);
    for ( int i = 0; i < m; i++ ) cin >> P[i];
    int ans = 0;
    int gap = 0;
    for ( int i = l; i <= r; i++ ) {
      if ( P[i]-P[i+1] >= gap ) {
	ans = i;
	gap = P[i]-P[i+1];
      }
    }

    cout << ans+1 << endl;
  }

  return 0;
}

