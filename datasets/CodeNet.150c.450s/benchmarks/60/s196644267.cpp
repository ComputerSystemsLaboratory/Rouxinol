#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<std::vector<int>> am(n, std::vector<int>(n, 0));
  for (int i = 0; i < n; ++i) {
    int k, u;
    std::cin >> u >> k;
    for (int j = 0; j < k; ++j) {
      int v;
      std::cin >> v;
      am[u-1][v-1] = 1;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << am[i][j] << (j == n-1 ? "\n" : " ");
    }
  }
}
      