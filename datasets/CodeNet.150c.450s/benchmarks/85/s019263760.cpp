///
// File:  alds1_10_b.cpp
// Author: ymiyamoto
//
// Created on Tue Oct 17 21:37:26 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint32_t> matrix(101, 0);
static uint64_t dp[101][101];

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 1; i <= n; i++) {
    cin >> matrix[i - 1] >> matrix[i];
  }

  for (uint32_t l = 2; l <= n; l++) {
    for (uint32_t i = 1; i <= n - l + 1; i++) {
      uint32_t j = i + l - 1;
      uint64_t min_val = UINT64_MAX;
      for (uint32_t k = i; k <= j - 1; k++) {
        min_val = min(min_val, dp[i][k] + dp[k + 1][j] + matrix[i - 1] * matrix[k] * matrix[j]);
      }
      dp[i][j] = min_val;
    }
  }

  cout << dp[1][n] << endl;

  return 0;
}