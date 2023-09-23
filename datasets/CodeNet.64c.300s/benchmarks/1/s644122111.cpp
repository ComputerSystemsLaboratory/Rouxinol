// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_6-B: Partition

#include <algorithm>
#include <cstdio>

using uint = unsigned int;

static void print_partition_ints(const int as[], const uint q, const uint n)
{
  auto out_sep = "";
  for (auto i = 0u; i < n; ++i) {
    auto format = (i != q ? "%s%d" : "%s[%d]");
    std::printf(format, out_sep, as[i]);
    out_sep = " ";
  }
  std::printf("\n");
}

static uint partition(int as[], const uint first, const uint last)
{
  // as[last] is pivot
  auto less = first; // next index for smaller element
  for (auto i = first; i < last; ++i) {
    if (as[i] <= as[last]) {
      std::swap(as[less], as[i]);
      ++less;
    }
  }
  std::swap(as[less], as[last]);
  return less;
}

int main()
{
  uint n;
  std::scanf("%u", &n);
  int as[n];
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%d", &as[i]);
  }

  auto q = partition(as, 0, n-1);
  print_partition_ints(as, q, n);
}

// eof