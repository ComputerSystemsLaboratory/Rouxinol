#include <bits/stdc++.h>
using namespace std;
int main() {
  int m, nmin, nmax;
  while (cin >> m >> nmin >> nmax) {
    if (m == 0)
      return 0;
    int mx = 0, ans = 0, a[m + 5];
    for (int i = 1; i <= m; i++)
      cin >> a[i];
    for (int i = nmin; i <= nmax; i++) {
      if (a[i] - a[i + 1] >= mx)
        mx = abs(a[i] - a[i + 1]), ans = i;
    }
    // cout << mx << endl;
    cout << ans << endl;
  }
}
