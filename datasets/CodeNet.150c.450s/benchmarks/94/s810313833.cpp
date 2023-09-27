// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_2-A: Bubble Sort

#include <algorithm>
#include <iostream>

static void print_ints(const int as[], const unsigned int n)
{
  auto sep = "";
  for (auto i = 0u; i < n; ++i) {
    std::cout << sep << as[i];
    sep = " ";
  }
  std::cout << std::endl;
}

static void print_int(const unsigned int n)
{
  std::cout << n << std::endl;
}

static unsigned int swap_count = 0u;

static void swap(int& a, int& b)
{
  ++swap_count;
  std::swap(a, b);
}

static void bubble_sort(int as[], const unsigned int n)
{
  for (auto j = 0u; j < n-1; ++j) {
    for (auto i = n-1; i > j; --i) {
      if (as[i] < as[i-1]) {
        swap(as[i], as[i-1]);
      }
    }
  }
}

int main()
{
  unsigned int n;
  std::cin >> n;
  int as[n];
  for (auto i = 0u; i < n; ++i) {
    std::cin >> as[i];
  }

  bubble_sort(as, n);
  print_ints(as, n);
  print_int(swap_count);
}

// eof