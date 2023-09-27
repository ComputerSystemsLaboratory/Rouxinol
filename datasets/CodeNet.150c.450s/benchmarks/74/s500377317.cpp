#include <iostream>
static const int INF = int(1e8);
using namespace std;
 
int dp[55555] = {};
int denom[55555] = {};
int main() {
  int n; int m; 
  cin >> n; cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> denom[i];
  }
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    dp[i] = INF;
    for (int j = 0; j <= m; j++) {
      if (i >= denom[j]) {
        dp[i] = min(dp[i], dp[i-denom[j]]+1);
      }
    }
  }
  cout << dp[n] << "\n";
  return 0;
}