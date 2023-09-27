#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  int m, mn, mx;
  while (cin >> m >> mn >> mx) {
    if (m == 0 && mn == 0 && mx == 0) break;
    int p[m];
    REP(i, m) cin >> p[i];
    mn--, mx--;
    int d = 0;
    int ans = -1;
    for (int i = mn; i <= mx; ++i) {
      int tmp = p[i] - p[i + 1];
      if (d <= tmp) {
        d = tmp;
        ans = i;
      }
    }
    cout << ans + 1 << endl;
  }
  return 0;
}
