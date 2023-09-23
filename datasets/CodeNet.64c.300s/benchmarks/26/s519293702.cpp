#include <iostream>

/// Calculate a^n in mod
long long modpow(int a, int n, int mod) {
  long long res = 1;
  long long apow = a; // a^1, a^2, a^4, ...
  while (n) {
    if (n & 1)
      res = (res * apow) % mod;
    apow = apow * apow % mod;
    n = n >> 1;
  }
  return res;
}

int main() {
  int m, n;
  std::cin >> m >> n;
  int MOD = 1000000007;
  std::cout << modpow(m, n, MOD) << std::endl;
}

