#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  int pos = 0;
  for (int i = k; i < n; ++i) {
    if (a[i] > a[i - k]) std::cout << "Yes" << std::endl;
    else std::cout << "No" << std::endl;
  }
  return 0;
}