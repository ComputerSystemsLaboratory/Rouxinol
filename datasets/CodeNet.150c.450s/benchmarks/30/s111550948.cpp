// -*- mode:c++; coding:utf-8; indent-tabs-mode:nil; -*-
 
#include <iostream>
 
static void print_ints(const int as[], const unsigned int n) {
  const char* sep = "";
  for (unsigned int i = 0; i < n; ++i) {
    std::cout << sep << as[i];
    sep = " ";
  }
  std::cout << std::endl;
}

static unsigned int swap_count = 0;

static void print_swap_count(void) {
  std::cout << swap_count << std::endl;
}

static void swap(int* a, int* b) {
  ++swap_count;
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void selection_sort(int as[], const unsigned int n) {
  for (unsigned int i = 0; i < n-1; ++i) {
    unsigned int min_j = i;
    for (unsigned int j = i+1; j < n; ++j) {
      if (as[min_j] > as[j]) {
        min_j = j;
      }
    }
    if (i != min_j) {
      swap(&as[i], &as[min_j]);
    }
  }
}
 
int main(void) {
  unsigned int n;
  std::cin >> n;
  int as[n];
  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> as[i];
  }

  selection_sort(as, n);
  print_ints(as, n);
  print_swap_count();

  return 0;
}
// end