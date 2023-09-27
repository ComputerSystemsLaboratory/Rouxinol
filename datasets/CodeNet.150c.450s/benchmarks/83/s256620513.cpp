#include<iostream>
#include<vector>
#include<algorithm>

int main(){
  int n, weight;
  std::cin >> n >> weight;
  std::vector<std::vector<int> > dp(n + 1, std::vector<int>(weight + 1, 0));
  std::vector<int> v(n), w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> v[i] >> w[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= weight; j++) {
      if(j + w[i] <= weight){
        dp[i + 1][j + w[i]] = std::max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
      }
      dp[i + 1][j] = std::max(dp[i + 1][j], dp[i][j]);
    }
  }
  std::cout << dp[n][weight] << std::endl;
  return 0;
}