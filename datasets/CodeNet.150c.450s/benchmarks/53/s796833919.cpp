#include <iostream>
#include <vector>

/// Prime factorize.
///
/// Usage example:
///
/// ```cpp
/// auto factors = factorize(12)
/// for (auto &factor : factors)
///   std::cout << factor.first << ":" << factor.second << std::endl;
/// ```
std::vector<std::pair<int, int>> factorize(long long n) {
  std::vector<std::pair<int, int>> res;
  for (long long p = 2; p * p <= n; ++p) {
    int exp = 0;
    while (n % p == 0) {
      n /= p;
      ++exp;
    }
    if (exp)
      res.push_back(std::make_pair(p, exp));
  }
  if (n != 1)
    res.push_back(std::make_pair(n, 1));
  return res;
}

int main() {
  int n;
  std::cin >> n;
  auto factors = factorize(n);

  std::cout << n << ":";
  for (auto &factor : factors)
    for (int i = 0; i < factor.second; ++i)
      std::cout << " " << factor.first;
  std::cout << std::endl;

  return 0;
}

