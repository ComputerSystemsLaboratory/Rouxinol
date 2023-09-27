///
// File:  alds1_10_c.cpp
// Author: ymiyamoto
//
// Created on Tue Oct 17 01:36:16 2017
//

#include <cstdint>
#include <iostream>
#include <string>

using namespace std;
static uint32_t dp[1001][1001];

static void init_dp(uint32_t len1, uint32_t len2)
{
  for (uint32_t i = 0; i < len1; i++) {
    dp[i][0] = 0;
  }
  for (uint32_t i = 0; i < len2; i++) {
    dp[0][i] = 0;
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    init_dp(str1.size(), str2.size());
    for (uint32_t i = 1; i <= str1.size(); i++) {
      for (uint32_t j = 1; j <= str2.size(); j++) {
        if (str1[i - 1] == str2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        } else {
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }
    cout << dp[str1.size()][str2.size()] << endl;
  }

  return 0;
}