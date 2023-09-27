///
// File:  alds1_10_a.cpp
// Author: ymiyamoto
//
// Created on Tue Oct 17 00:57:42 2017
//

#include <cstdint>
#include <iostream>

using namespace std;
#define SIZE 100
static uint64_t mem[SIZE];

uint64_t fib(uint32_t n)
{
  if (n == 0) {
    return mem[0] = 1;
  } else if (n == 1) {
    return mem[1] = 1;
  } else {
    uint64_t n1, n2;

    if (mem[n - 2] == 0) {
      n2 = mem[n - 2] = fib(n - 2);
    } else {
      n2 = mem[n - 2];
    }

    if (mem[n - 1] == 0) {
      n1 = mem[n - 1] = fib(n - 1);
    } else {
      n1 = mem[n - 1];
    }
    return n1 + n2;
  }
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  cout << fib(n) << endl;
  return 0;
}