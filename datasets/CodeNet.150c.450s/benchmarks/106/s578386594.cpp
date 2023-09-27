#include <iostream>
#include <algorithm>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int n = 0;
  for (int i = 1; i <= c; ++i) {
    if (c % i == 0 && a <= i && i <= b) {
      ++n;
    }
  }
  std::cout << n << std::endl;
}