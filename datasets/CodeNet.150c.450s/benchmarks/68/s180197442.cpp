//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  vector<int> a;

  while (cin >> n, n) {
    a.resize(n);
    rep (i, n) cin >> a[i];

    sort(a.begin(), a.end());
    int ans = 1001001001;

    rep (i, n-1) {
      ans = min(ans, a[i+1] - a[i]);
    }

    cout << ans << endl;
  }

  return 0;
}