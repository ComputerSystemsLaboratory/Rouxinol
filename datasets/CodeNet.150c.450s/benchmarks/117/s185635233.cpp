// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_5-B: Merge Sort

#include <climits>
#include <cstdio>
#include <cstring>

static void print_ints(const int as[], const unsigned int n, const char* sep = " ") {
  const char* out_sep = "";
  for (auto i = 0u; i < n; ++i) {
    std::printf("%s%d", out_sep, as[i]);
    out_sep = sep;
  }
  std::printf("\n");
}

static void print_int(const unsigned int n) {
  std::printf("%d\n", n);
}

static unsigned int comparison_count = 0u;

static void merge(int* /*const*/ begin, int* const middle, int* /*const*/ end) {
  while (*begin < *middle) {
    ++begin;
    ++comparison_count;
  }
  while (*(middle-1) < *(end-1)) {
    --end;
    ++comparison_count;
  }
  auto size = middle - begin;
  int tmp[size+1]; // size+1(sentinel)
  std::memcpy(tmp, begin, sizeof(tmp[0])*size);
  tmp[size] = INT_MAX; // > 10**9
  auto ss0 = begin, ss1 = tmp, ss2 = middle;
  const auto end1 = ss1+size, end2 = end;
  while (ss2 < end2) {
    while (*ss1 <= *ss2) {
      *ss0++ = *ss1++;
      ++comparison_count;
    }
    *ss0++ = *ss2++;
    ++comparison_count;
  }
  while (ss1 < end1) {
    *ss0++ = *ss1++;
    ++comparison_count;
  }
}

void merge_sort(int* const begin, int* const end) {
  auto size = end - begin;
  if (size > 1) {
    auto middle = begin + size/2;
    merge_sort(begin, middle);
    merge_sort(middle, end);
    merge(begin, middle, end);
  }
}

int main(void) {
  unsigned int n;
  std::scanf("%d", &n);
  int ss[n];
  for (auto i = 0u; i < n; ++i) {
    std::scanf("%d", &ss[i]);
  }

  merge_sort(ss, ss+n);

  print_ints(ss, n);
  print_int(comparison_count);

  return 0;
}

// eof