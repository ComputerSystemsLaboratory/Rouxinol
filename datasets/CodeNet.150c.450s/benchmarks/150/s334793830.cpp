// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_6-A: Counting Sort

#include <cstdio>

static void print_ints(const int as[], const unsigned int n)
{
  auto out_sep = "";
  for (auto i = 0u; i < n; ++i) {
    std::printf("%s%d", out_sep, as[i]);
    out_sep = " ";
  }
  std::printf("\n");
}

static const unsigned int MAX_VALUE= 10000;
static void counting_sort(int as[], int bs[], const unsigned int n)
{
  int cs[MAX_VALUE+1] ={-1, 0};
  for (auto i = 0u; i < n; ++i) {
    ++cs[as[i]];
  }
  for (auto i = 1u; i < MAX_VALUE+1; ++i) {
    cs[i] += cs[i-1];
  }
  for (auto i = 0u; i < n; ++i) {
    bs[cs[as[i]]--] = as[i];
  }
}

int main()
{
  unsigned int n;
  std::scanf("%u", &n);
  int as[n], bs[n];
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%d", &as[i]);
  }

  counting_sort(as, bs, n);
  print_ints(bs, n);
}

// eof