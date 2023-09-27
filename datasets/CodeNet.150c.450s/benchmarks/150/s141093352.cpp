#include <array>
#include <iostream>
#include <vector>

int main() {
  uint32_t n = 0;
  std::cin >> n;

  std::vector<uint32_t> A(n);
  for (uint32_t i = 0; i < n; i++) std::cin >> A[i];

  std::array<uint32_t, 10'000 + 1> C;
  C.fill(0);
  for (uint32_t i = 0; i < n; i++) C[A[i]]++;
  for (size_t i = 1; i < C.size(); i++) C[i] += C[i - 1];

  std::vector<uint32_t> ans(n);
  for (size_t i = n; i > 0; i--) {
    C[A[i - 1]]--;
    ans[C[A[i - 1]]] = A[i - 1];
  }

  for (size_t i = 0; i < n - 1; i++) std::cout << ans[i] << " ";
  std::cout << ans[n - 1] << std::endl;

  return 0;
}
