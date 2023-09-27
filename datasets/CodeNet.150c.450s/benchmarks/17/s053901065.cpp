#include <algorithm>
#include <iostream>

int main(void) {
  int ary[5], i;

  for (i = 0; i < 5; i++) {
    std::cin >> ary[i];
  }

  std::sort(ary, ary + 5, std::greater<int>());

  for (i = 0; i < 5; i++) {
    std::cout << ary[i];

    if (i == 4) {
      std::cout << std::endl;
    } else {
      std::cout <<  " ";
    }
  }

  return 0;
}