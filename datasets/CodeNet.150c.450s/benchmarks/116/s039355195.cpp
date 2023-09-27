#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
const int INF = (1 << 29);

int main()
{
  while (1)
  {
    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0)
      break;
    int a[n];
    rep(i, n) cin >> a[i];
    int s[n + 1];
    s[0] = 0;
    rep(i, n + 1) s[i + 1] = s[i] + a[i];
    int ans = -INF;
    rep(i, n - k) ans = max(ans, s[i + k] - s[i]);
    cout << ans << endl;
  }
}
