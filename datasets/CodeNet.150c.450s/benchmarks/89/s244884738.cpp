///
// File:  1141.cpp
// Author: ymiyamoto
//
// Created on Mon Nov 13 01:51:59 2017
//

#include <cmath>
#include <cstdint>
#include <iostream>

using namespace std;

bool is_prime(uint32_t n)
{
  if (n <= 1) return false;

  for (uint32_t i = 2; i <= (uint32_t)sqrt((double)n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int32_t main()
{
  while (true) {
    uint32_t a, d, n;
    cin >> a >> d >> n;
    if (a == 0) break;

    for (uint32_t i = 0;; i++) {
      uint32_t num = a + i * d;
      if (is_prime(num)) {
        n--;
      }
      if (n == 0) {
        cout << num << endl;
        break;
      }
    }
  }

  return 0;
}