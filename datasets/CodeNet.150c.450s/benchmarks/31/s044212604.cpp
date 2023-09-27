#include <iostream>
#include <cmath>
#include <climits>

const int MAX_N = 200000;

int main() {
  int n = 0;
  int prices[MAX_N] = {0};

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> prices[i];
  }

  int minv = prices[0];
  int maxv = INT_MIN;

  for (int i = 1; i < n; i++) {
    maxv = std::max(maxv, prices[i] - minv);
    minv = std::min(minv, prices[i]);
  }

  std::cout << maxv << std::endl;
  
  return 0;
}