#include <iostream>
#define eol '\n';
#define INT_BIG 1000000000;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,m;
  cin >> n >> m;
  int* c = new int[m];
  for (int i = 0; i < m; i++) {
    cin >> c[i];
  }

  int* dp = new int[n+1];
  for (int i = 1; i <= n; i++) {
    dp[i] = INT_BIG;
  }
  dp[0] = 0;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j <= n; j++) {
      if (j + c[i] <= n) {
        dp[j+c[i]] = min(dp[j+c[i]], dp[j] + 1);
      }
    }
  }
  cout << dp[n] << eol;
  return 0;
}