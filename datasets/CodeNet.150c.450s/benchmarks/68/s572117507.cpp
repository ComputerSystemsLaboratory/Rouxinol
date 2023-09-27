#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1e18;

signed main() {
  int n;
  while ( cin >> n, n ) {
    vector<int> a(n);
    for ( int i = 0; i < n; i++ ) cin >> a[i];
    
    int ans = INF;
    sort(a.begin(), a.end());
    for ( int i = 1; i < n; i++ ) {
      ans = min(ans, a[i]-a[i-1]);
    }

    cout << ans << endl;
  }
  
  return 0;
}

