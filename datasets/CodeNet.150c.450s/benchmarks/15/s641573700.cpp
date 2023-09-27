#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 25;
constexpr int MOD = 1000000007;

int main() {
  int n, q;
  cin >> n;
  vector<int> S(n);
  REP(i, n) cin >> S[i];
  cin >> q;
  vector<int> T(q);
  REP(i, n) cin >> T[i];
  
  int cnt = 0;
  REP(i, q) {
    REP(j, n) {
      if (T[i] == S[j]) {
        ++cnt;
        break;
      }
    }
  }

  cout << cnt << endl;
}

