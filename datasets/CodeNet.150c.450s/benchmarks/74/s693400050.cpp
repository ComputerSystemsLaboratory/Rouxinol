///
// File:  dpl_1_a.cpp
// Author: ymiyamoto
//
// Created on Wed Nov  1 01:41:22 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;
#define MAX_N 50001
static vector<int32_t> coins;
static uint32_t dp[MAX_N];

int32_t main()
{
  int32_t n, m;
  cin >> n >> m;
  for (int32_t i = 0; i < m; i++) {
    int32_t c;
    cin >> c;
    coins.push_back(c);
  }

  for (int32_t i = 0; i <= n; i++) {
    dp[i] = UINT32_MAX;
    dp[0] = 0;
    for (int32_t j = 0; j < (int32_t)coins.size(); j++) {
      if (i - coins[j] >= 0) {
        dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
      }
    }
  }

  cout << dp[n] << endl;

  return 0;
}