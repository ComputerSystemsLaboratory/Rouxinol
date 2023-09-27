/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <cstdint>
#include <iostream>

constexpr int64_t kPrime = 1000000007;

void CallCalculatePower(std::istream &input_stream) noexcept;

int64_t CalculatePower(const int64_t x, const int64_t n) noexcept;

void CallCalculatePower(std::istream &input_stream) noexcept {
  input_stream.tie(0);
  std::ios::sync_with_stdio(false);
  int64_t m;
  int64_t n;
  input_stream >> m >> n;
  int64_t result = CalculatePower(m, n);
  std::cout << result << std::endl;
}

int64_t CalculatePower(const int64_t x, const int64_t n) noexcept {
  if (n == 0) {
    return 1;
  }
  int64_t result = CalculatePower((x * x) % kPrime, n / 2);
  if (n % 2 == 1) {
    result = (result * x) % kPrime;
  }
  return result;
}

int main() {
  try {
    CallCalculatePower(std::cin);
  } catch (...) {
    std::cerr << "ERROR: main()" << std::endl;
  }
  return 0;
}

