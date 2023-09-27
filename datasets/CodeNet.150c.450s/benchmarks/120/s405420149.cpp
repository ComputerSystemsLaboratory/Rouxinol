#include <bits/stdc++.h>
using namespace std;

struct Fast {Fast(){std::cin.tie(0);ios::sync_with_stdio(false);}} fast;

#define reps(i, a, b) for (int i = a; i < b; ++i)
#define rep(i, n) reps(i, 0, n)

int h, w;

int func(int y, bool f, int a[15][10005]) {
  if (y >= h) return 0;
  int ans = 0, res = max(func(y + 1, true, a), func(y + 1, false, a));
  if (f) {
    rep(i, w) a[y][i] = abs(a[y][i] - 1);
  }
  rep(i, w) {
    int cnt = 0;
    rep(j, h) cnt += a[j][i];
    ans += (cnt > h / 2) ? cnt : h - cnt;
  }
  return max(ans, res);
}

signed main()
{
  while (cin >> h >> w, h + w) {
    int table[15][10005];
    rep(i, h) rep(j, w) cin >> table[i][j];
    cout << max(func(0, true, table), func(0, false, table)) << '\n';
  }

  return (0);
}