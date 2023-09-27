#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<ll> rows(n + 5), cols(n + 5);
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%lld %lld", &rows[i + 1], &cols[i + 1]);
  }
  vector<vector<ll> > dp(n + 5, vector<ll>(n + 5, 0));
  for (int l = 2; l <= n; ++l) {
    for (int i = 1; i <= n - l + 1; ++i) {
      int j = l + i - 1;
      dp[i][j] = std::numeric_limits<ll>::max();
      for (int k = i; k <= j - 1; ++k) {
        dp[i][j] = min(dp[i][j],
                       dp[i][k] + dp[k + 1][j] + rows[i] * cols[k] * cols[j]);
      }
    }
  }
  fprintf(stdout, "%lld\n", dp[1][n]);
  return 0;
}