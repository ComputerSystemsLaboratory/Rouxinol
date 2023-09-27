#include <iostream>
#include <algorithm>

int main(void)
{
  // input
  int n, W;
  std::cin >> n >> W;
  int weight[n], value[n];
  for ( int i = 0; i < n; i++ ) std::cin >> value[i] >> weight[i];

  // DP table
  int dp[n+1][W+1];
  for ( int w = 0; w <= W; w++ ) {
    dp[0][w] = 0;
  }

  for ( int i = 0; i < n; i++ ) {
    for ( int w = 0; w <= W; w++ ) {
      if ( weight[i] <= w ) {
        dp[i+1][w] = std::max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      } else {
        dp[i+1][w] = dp[i][w];
      }
    }
  }

  std::cout << dp[n][W] << std::endl;
  return 0;
}

