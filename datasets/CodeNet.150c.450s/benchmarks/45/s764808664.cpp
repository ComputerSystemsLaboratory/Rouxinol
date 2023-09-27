///
// File:  ntl_1_b.cpp
// Author: ymiyamoto
//
// Created on Mon Nov 13 03:07:08 2017
//

#include <cstdint>
#include <iostream>

using namespace std;
#define MOD 1000000007

uint64_t pow(uint64_t m, uint64_t n)
{
  if (n == 0)
    return 1;
  else if (n == 1)
    return m;
  else if (n % 2 == 0)
    return pow(m * m % MOD, n / 2);
  else
    return (m * pow(m * m % MOD, n / 2)) % MOD;
}

int32_t main()
{
  uint64_t n, m;
  cin >> m >> n;
  cout << pow(m, n) % MOD << endl;

  return 0;
}