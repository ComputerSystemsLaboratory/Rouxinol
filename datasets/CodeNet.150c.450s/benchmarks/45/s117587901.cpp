#include <cstdint>
#include <cstdio>

using namespace std;

uint64_t kLimit = 1'000'000'007;

uint64_t solve(uint64_t m, uint64_t n) {
  if (n <= 3) {
    uint64_t acc = 1;
    for (uint64_t i = 0; i < n; ++i) {
      acc *= m;
      acc %= kLimit;
    }
    return acc;
  }

  return (solve((m * m) % kLimit, n / 2) * (n % 2 == 0 ? 1 : m)) % kLimit;
}

int main() {
  uint64_t m, n;
  scanf("%llu %llu", &m, &n);
  printf("%llu\n", solve(m, n));

  return 0;
}

