#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MAX = 103;
const int INF = 1 << 21;
int dp[MAX][MAX];
int p[MAX];

void solve(int n) {
  for (int i=1; i<=n; i++) {
    dp[i][i] = 0;
  }

  for (int l=2; l<=n; l++) {
    for (int i=1; i<=(n-l+1); i++) {
      int j = i + l - 1;
      dp[i][j] = INF;
      for (int k=i; k<=(j-1); k++) {
	dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + p[i-1] * p[k] * p[j]);
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  for (int i=1; i<=n; ++i) {
    cin >> p[i-1] >> p[i];
  }

  solve(n);
  cout << dp[1][n] << endl;
  return 0;
}

