#include <iostream>

int main(void) {
  int a = 0;
  int b = 0;
  std::cin >> a >> b;
  if (1 <= a && a <= 100 && 1 <= b && b <= 100) {
    std::cout << a*b << " ";
    std::cout << 2*(a+b) << "\n";
  }

  return 0;
}