#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int main() {
  int N, R;
  int maxv = -INF;
  int minv;
  cin >> N >> minv;
  REP(i, N - 1) {
    cin >> R;
    maxv = max(maxv, R - minv);
    minv = min(minv, R);
  }

  cout << maxv << endl;
}

