#include <iostream>
#include <cmath>

bool is_triangle(int a, int b, int c) {
  return (std::pow(a, 2) == (std::pow(b, 2) + std::pow(c, 2)));
}

int main(void) {
  int n = 0;
  
  int a = 0;
  int b = 0;
  int c = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    bool triangle = is_triangle(a, b, c) || is_triangle(b, c, a) || is_triangle(c, a, b);

    if (triangle) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
   
  return 0;
}