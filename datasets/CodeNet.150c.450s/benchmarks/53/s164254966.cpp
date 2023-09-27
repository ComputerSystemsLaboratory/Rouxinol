#include <vector>

#include <iostream>

// nの素因数分解を行う
std::vector<int> prime_factorization(int n) {
  std::vector<int> ret;
  for (int d = 2; d * d <= n; d++) {
    while (n % d == 0) {
      ret.push_back(d);
      n /= d;
    }
  }
  if (n != 1)
    ret.push_back(n);
  return ret;
}

// verify: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
int main() {
  int n;
  std::cin >> n;
  std::vector<int> ans = prime_factorization(n);
  int m = ans.size();
  std::cout << n << ": ";
  for (int i = 0; i < m; i++) {
    std::cout << ans[i] << (i == m - 1 ? "\n" : " ");
  }
  return 0;
}

