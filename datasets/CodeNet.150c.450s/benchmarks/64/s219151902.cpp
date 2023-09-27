#include <iostream>
#include <vector>


int n, q;
std::vector<int> A, ms;

bool solve(int m, int i) {
  if (m == 0)
    return true;
  if (i >= n)
    return false;
  return solve(m - A[i], i + 1) || solve(m, i + 1);
}

int main() {
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    int a;
    std::cin >> a;
    A.push_back(a);
  }
  std::cin >> q;
  for (int i = 0; i < q; ++i) {
    int m;
    std::cin >> m;
    ms.push_back(m);
  }
  for (int m : ms) {
    std::cout << (solve(m, 0) ? "yes" : "no") << std::endl;
  }
}