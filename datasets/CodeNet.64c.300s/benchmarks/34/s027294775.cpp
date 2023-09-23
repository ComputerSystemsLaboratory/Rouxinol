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

static void insert(int as[], const unsigned int i) {
  // as[0..i-1] is sorted
  const int asi = as[i];
  unsigned int j = i;
  while (j > 0 && asi < as[j-1]) {
    as[j] = as[j-1];
    --j;
  }
  as[j] = asi;
}

void insertion_sort(int as[], const unsigned int n) {
  for (unsigned int i = 1; i < n; ++i) {
    print_ints(as, n);
    insert(as, i);
  }
}
 
int main(void) {
  unsigned int n;
  std::cin >> n;
  int as[n];
  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> as[i];
  }

  insertion_sort(as, n);
  print_ints(as, n);
  return 0;
}
// end