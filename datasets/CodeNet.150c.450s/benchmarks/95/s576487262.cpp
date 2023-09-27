#include <bits/stdc++.h>
using namespace std;
#define REP(i, m, n) for (int i = m; i < n; i++)
#define rep(i, n) REP(i, 0, n)

int main()
{
  while (1)
  {
    int n;
    cin >> n;
    if (n == 0)
      break;
    vector<string> v(n);
    rep(i, n) cin >> v[i];
    int cnt = 0;
    for (int i = 0; i + 1 < n; i += 2)
    {
      if (v[i][0] != v[i + 1][0])
        cnt++;
    }
    cout << cnt << "\n";
  }
  return 0;
}
