#include <iostream>
#include <map>

uint32_t binary_pow(uint32_t base, uint32_t n, uint32_t mod) {
  if (n == 1) return base % mod;

  uint64_t value = binary_pow(base, n / 2, mod);
  return (n % 2 == 0) ? (value * value) % mod
                      : (((value * value) % mod) * base) % mod;
}

int main() {
  const uint32_t mod = 1'000'000'007;
  uint32_t m = 0, n = 0;
  std::cin >> m >> n;

  std::cout << binary_pow(m, n, mod) << std::endl;

  return 0;
}
