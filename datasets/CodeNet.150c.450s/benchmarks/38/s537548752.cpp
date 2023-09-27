#include <algorithm>
#include <iostream>
#include <vector>

int is_right_triangle(int min, int mid, int max) {
  return max * max == min * min + mid * mid;
}

int main() {
  int ntriangle;
  std::cin >> ntriangle;

  for (auto i = 0; i < ntriangle; i++) {
    std::vector<int> tri;
    for (auto j = 0; j < 3; j++) {
      int len;
      std::cin >> len;
      tri.push_back(len);
    }
    std::sort(tri.begin(), tri.end());
    if (is_right_triangle(tri[0], tri[1], tri[2])) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }
  return 0;
}