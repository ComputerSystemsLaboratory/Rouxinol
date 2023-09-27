#include <bits/stdc++.h>
using namespace std;
#define rep(i,s,n) for(int i = (s); i < (n); i++)

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(18);
  
  int n;
  cin >> n;
  int dp[n+1][n+1];
  rep(i, 1, n+1) dp[i][i] = 0;
  int p[n+1];
  rep(i, 0, n) cin >> p[i] >> p[i+1];
  
  rep(l, 2, n+1) {
    rep(i, 1, n-l+2) {
      int j = i+l-1;
      dp[i][j] = 1000000007;
      rep(k, i, j) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j]);
      }
    }
  }
  
  cout << dp[1][n] << "\n";
}
