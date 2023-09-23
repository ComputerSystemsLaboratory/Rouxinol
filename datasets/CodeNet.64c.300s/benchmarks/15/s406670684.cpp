// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_2-B: Selection Sort

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

static void selection_sort(int as[], const unsigned int n)
{
  for (auto i = 0u; i < n-1; ++i) {
    auto min_j = i;
    for (auto j = i+1; j < n; ++j) {
      if (as[j] < as[min_j]) {
        min_j = j;
      }
    }
    if (i != min_j) {
      swap(as[i], as[min_j]);
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

  selection_sort(as, n);
  print_ints(as, n);
  print_int(swap_count);
}

// eof