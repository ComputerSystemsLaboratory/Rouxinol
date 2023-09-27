#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  uint32_t n = 0;
  std::cin >> n;
  std::vector<uint32_t> mat(n + 1);
  for (uint32_t i = 0; i < n; i++) {
    std::cin >> mat[i] >> mat[i + 1];
  }

  std::vector<std::vector<uint32_t>> dp(n + 1,
                                        std::vector<uint32_t>(n + 1, -1));
  for (size_t i = 0; i < dp.size(); i++) dp[i][i] = 0;

  for (size_t d = 1; d < n; d++) {
    for (size_t i = 1; i < dp.size() - d; i++) {
      for (size_t j = 0; j < d; j++) {
        dp[i][i + d] =
            std::min(dp[i][i + d], mat[i - 1] * mat[i + j] * mat[i + d] +
                                       dp[i][i + j] + dp[i + j + 1][i + d]);
      }
    }
  }

  std::cout << dp[1][n] << std::endl;

  return 0;
}
