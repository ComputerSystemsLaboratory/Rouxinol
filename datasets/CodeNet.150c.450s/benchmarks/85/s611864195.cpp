#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> data;
  for (int i = 0; i < n; i++){
    int l , r;
    std::cin>> l >> r;
    data.push_back(std::make_pair(l, r));
  }

  std::vector<std::vector<int>> dp(n+1, std::vector<int>(n+1, 0));
  for (int w = 2; w <= n; w++){
    for (int l = 0; l < n; l++){
      int r = l+w;
      if(r>n)continue;
      dp[l][r] = 100000000;
      for (int mid = l+1; mid < r; mid++){
        dp[l][r] = std::min(dp[l][r], dp[l][mid] + dp[mid][r] + data[l].first*data[mid].first*data[r-1].second);
      }
    }
  }
  std::cout << dp[0][n] << std::endl;
}

