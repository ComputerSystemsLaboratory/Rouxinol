#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// Longest Increasing Subsequence
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_D&lang=ja

// ビットで全探索 O(2^N)
int bits(vector<int> a) {
  int ans = 0;
  int n = a.size();
  rep(seq, 1 << n) {
    int len = __builtin_popcount(seq);
    vector<int> sub(len);
    int j = 0;
    rep(i, n) if (seq & 1 << i) sub[j++] = a[i];

    bool is = true;
    rep(i, len - 1) {
      if (sub[i] >= sub[i + 1]) {
        is = false;
        break;
      }
    }
    if (is) ans = max(ans, len);
  }
  return ans;
}

int dp[100001];

// O(N^2) まだ遅い
int dp1(vector<int> a) {
  int n = a.size();
  rep(i, n) {
    dp[i] = 1;
    rep(j, i) if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
  }
  int ans = 0;
  rep(i, n) ans = max(ans, dp[i]);
  return ans;
}

// O(NlogN)
int dp2(vector<int> a) {
  int n = a.size();
  fill(dp, dp + n, 1e+9);
  rep(i, n) { *lower_bound(dp, dp + n, a[i]) = a[i]; }
  return lower_bound(dp, dp + n, 1e+9) - dp;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  // int ans = bits(a);
  // int ans = dp1(a);
  int ans = dp2(a);

  cout << ans << endl;
  return 0;
}
