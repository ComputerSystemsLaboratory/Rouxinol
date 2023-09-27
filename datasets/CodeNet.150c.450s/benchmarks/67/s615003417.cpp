//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
# define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int sum (int l, int r) {
  return (r*(r+1)-l*(l-1)) / 2;
}

int main() {
  int n;
  while (cin >> n, n) {
    int l, r;
    int ans = 0;
    for (int l=1; l<=n; l++) {
      for (int r=l+1; r<=n; r++) {
        int ret = sum(l, r);
        /* if (ret == n) cout << l << ", " << r << "= " << ret << endl; */
        if (ret == n) ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}