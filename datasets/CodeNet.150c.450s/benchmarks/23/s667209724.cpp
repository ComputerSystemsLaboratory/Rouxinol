#include <iostream>

using namespace std;

int main() {
  int n;
  int dp[45];

  // 初期化
  dp[0] = 1;
  dp[1] = 1;

  //入力
  cin >> n;

  // DP
  for(int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];

  // 出力
  cout << dp[n] << endl;

  return 0;
}

