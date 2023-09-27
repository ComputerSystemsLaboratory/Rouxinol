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

void bubble_sort(int as[], const unsigned int n) {
  for (unsigned int j = 0; j < n-1; ++j) {
    for (unsigned int i = n-1; i > j; --i) {
      if (as[i-1] > as[i]) {
        swap(&as[i-1], &as[i]);
      }
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

  bubble_sort(as, n);
  print_ints(as, n);
  print_swap_count();

  return 0;
}
// end