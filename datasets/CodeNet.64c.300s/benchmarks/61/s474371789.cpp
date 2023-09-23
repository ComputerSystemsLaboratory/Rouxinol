#include <iostream>

int main() {
  int r;
  int c;
  std::cin >> r >> c;

  int *sheet = new int[r * c];
  int *rsum = new int[r];
  int *csum = new int[c];
  int sum = 0;
  for(int i = 0; i < r; ++i) {
    rsum[i] = 0;
  }
  for(int j = 0; j < c; ++j) {
    csum[j] = 0;
  }

  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      std::cin >> sheet[i * c + j];
      csum[j] += sheet[i * c + j];
      rsum[i] += sheet[i * c + j];
      sum += sheet[i * c + j];
    }
  }

  for(int i = 0; i <= r; ++i) {
    for(int j = 0; j <= c; ++j) {
      if(i == r && j == c) {
        std::cout << sum << std::endl;
      }
      else if(i == r) {
        std::cout << csum[j] << " ";
      }
      else if(j == c) {
        std::cout << rsum[i] << std::endl;
      }
      else {
        std::cout << sheet[i * c + j] << " ";
      }
    }
  }

  delete[] sheet;
  delete[] rsum;
  delete[] csum;

  return 0;
}