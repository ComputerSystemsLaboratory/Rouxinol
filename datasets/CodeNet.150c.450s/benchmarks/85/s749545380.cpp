#include <bits/stdc++.h>
#define rep(i, to) for (int i = 0; i < (to); i++)
#define rrep(i, to) for (int i = (to) - 1; i >= 0; i--)
#define repf(i, from, to) for (int i = (from); i < (to); i++)
#define all(v) v.begin(), v.end()
#define unless(cond) if (!(cond))
using namespace std;
using ll = long long;
template <typename T>
using V = vector<T>;
template <typename T, typename U>
using P = pair<T, U>;

int inf = INT32_MAX;

int main() {
  int n;
  cin >> n;
  V<int> column;

  rep(i, n) {
    int r, c;
    cin >> r >> c;
    if(i == 0) {
      column.push_back(r);
    }
    column.push_back(c);
  }

  V<V<int>> dp(n + 1, V<int>(n + 1));
  rep(i, n + 1) {
    dp[i][i] = 0;
  }

  int len = 2;
  while(len <= n) {
    for(int i = 1; i + len - 1 <= n; i++) {
      int j = i + len - 1;

      int min_cost = inf;
      for(int k = i; k < j; k++) {
        int cost = dp[i][k] + dp[k + 1][j] + column[i - 1] * column[k] * column[j];
        min_cost = min(min_cost, cost);
      }

      dp[i][j] = min_cost;
    }
    len++;
  }

  cout << dp[1][n] << endl;
}
