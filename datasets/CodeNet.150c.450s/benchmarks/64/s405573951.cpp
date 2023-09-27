///
// File:  alds1_5_a.cpp
// Author: ymiyamoto
//
// Created on Mon Oct  9 09:57:55 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<uint32_t> A;

bool exhaustive_search(uint32_t m, uint32_t i, uint32_t sum)
{
  if (i >= A.size())
    return m == sum;
  else {
    return exhaustive_search(m, i + 1, sum + A[i]) || exhaustive_search(m, i + 1, sum);
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;
  for (uint32_t i = 0; i < n; i++) {
    uint32_t val;
    cin >> val;
    A.push_back(val);
  }

  uint32_t q;
  cin >> q;

  for (uint32_t i = 0; i < q; i++) {
    uint32_t m;
    cin >> m;
    if (exhaustive_search(m, 0, 0)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}