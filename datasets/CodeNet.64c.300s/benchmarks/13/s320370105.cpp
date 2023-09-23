#include <iostream>

const int MAX_SIZE = 44 + 1;

int main() {
  int f[MAX_SIZE] = {0};
  
  int n = 0;

  std::cin >> n;

  f[0] = 1;
  f[1] = 1;

  for (int i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i -2];
  }

  std::cout << f[n] << std::endl;

  
  return 0;
}