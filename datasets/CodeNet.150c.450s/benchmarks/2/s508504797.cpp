#include <iostream>
#include <vector>

uint32_t partition(std::vector<uint32_t>& A, uint32_t start, uint32_t end) {
  uint32_t pivot = end - 1, insert = start;
  for (size_t i = 0; i < end; i++) {
    if (A[i] <= A[pivot]) {
      std::swap(A[insert], A[i]);
      insert++;
    }
  }

  return insert - 1;
}

int main() {
  uint32_t n = 0;
  std::cin >> n;
  std::vector<uint32_t> A(n);
  for (auto&& a : A) std::cin >> a;

  uint32_t base = partition(A, 0, A.size());

  for (size_t i = 0; i < n; i++) {
    std::cout << (i == base ? "[" : "") << A[i] << (i == base ? "]" : "")
              << (i == n - 1 ? "" : " ");
  }
  std::cout << std::endl;

  return 0;
}
