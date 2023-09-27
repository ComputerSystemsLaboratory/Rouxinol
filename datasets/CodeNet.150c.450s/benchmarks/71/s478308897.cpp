#include <iostream>


int countPattern(int n) {
  int count = 0;
  int ni, ij, ijk;
  for (int i = 0; i < 10; i ++) {
    ni = n - i;
    for (int j = 0; j < 10; j ++) {
      ij = ni - j;
      for (int k = 0; k < 10; k ++) {
        ijk = ij - k;
        if (0 <= ijk && ijk <= 9) {
          count ++;
        }
      }
    }
  }
  return count;
}


int main () {
  int n;
  while (std::cin >> n) {
    std::cout << countPattern(n) << std::endl;
  }
  return 0;
}