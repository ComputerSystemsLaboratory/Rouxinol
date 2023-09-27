///
// File:  0007.cpp
// Author: ymiyamoto
//
// Created on Wed Nov  8 22:11:50 2017
//

#include <cstdint>
#include <iostream>

using namespace std;

#define DEBT_INIT 100000

int32_t main()
{
  uint32_t weeks;
  cin >> weeks;

  uint64_t debt = DEBT_INIT;
  for (uint32_t i = 0; i < weeks; i++) {
    uint64_t interest = ((uint64_t)(debt * 0.05 + 999) / 1000) * 1000;
    debt += interest;
  }

  cout << debt << endl;

  return 0;
}