///
// File:  1167.cpp
// Author: ymiyamoto
//
// Created on Sat Dec  2 18:27:58 2017
//

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

uint32_t polloc(uint32_t n)
{
  return n * (n + 1) * (n + 2) / 6;
}

static array<int32_t, 1000001> dp;
static array<int32_t, 1000001> odddp;

int32_t main()
{
  for (uint32_t i = 0; i < dp.size(); i++) {
    dp[i] = odddp[i] = i;
  }

  vector<int64_t> pollocs;
  for (uint32_t i = 0; i <= 181; i++) {
    pollocs.push_back(polloc(i));
  }

  for (int64_t i = 0; i < (int64_t)dp.size(); i++) {
    for (int64_t j = 0; j < (int64_t)pollocs.size(); j++) {
      if (i - pollocs[j] >= 0) {
        dp[i] = min(dp[i], dp[i - pollocs[j]] + 1);
        if (pollocs[j] % 2 == 1) {
          odddp[i] = min(odddp[i], odddp[i - pollocs[j]] + 1);
        }
      }
    }
  }

  while (true) {
    uint32_t n;
    cin >> n;
    if (n == 0) break;
    cout << dp[n] << " " << odddp[n] << endl;
  }

  return 0;
}