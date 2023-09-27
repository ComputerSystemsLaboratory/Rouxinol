#include <iostream>
#include <vector>

int main() {
  int n, k, x;
  std::vector<int> vec;
  std::cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;
    vec.push_back(x);
  }
  for (int i = k; i < n; ++i) {
    if (vec[i] > vec[i-k]) {
      std::cout << "Yes\n";
    }
    else {
      std::cout << "No\n";
    }
  }
}