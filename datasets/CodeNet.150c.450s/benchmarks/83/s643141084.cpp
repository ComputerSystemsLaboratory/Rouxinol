#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n, W;
  std::cin >> n >> W;
  vector<int> v(n), w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> v[i] >> w[i];
  }
  int dp[n + 1][W + 1];
  for (int i = 0; i <= n; i++)
    for (int j = 0; j <= W; j++) 
      dp[i][j] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= W; j++) {
      if(j + w[i] <= W){
        dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
      }
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
    }
  }
  std::cout << dp[n][W] << std::endl;
  return 0;
}