#include <iostream>
#include <vector>

struct trump {
  std::string suite;
  uint32_t rank;

  trump() : suite(""), rank(0) {}
  trump(const std::string s, uint32_t r) : suite(s), rank(r) {}

  trump& operator=(uint32_t r) {
    rank = r;
    return *this;
  }
  bool operator<=(const trump& lhs) const { return rank <= lhs.rank; }
  bool operator==(const trump& lhs) const {
    return suite == lhs.suite && rank == lhs.rank;
  }
};

uint32_t partition(std::vector<trump>& A, uint32_t start, uint32_t end) {
  uint32_t pivot = end - 1, insert = start;
  for (size_t i = start; i < end; i++) {
    if (A[i] <= A[pivot]) {
      std::swap(A[insert], A[i]);
      insert++;
    }
  }
  return insert - 1;
}

void quick_sort(std::vector<trump>& A, uint32_t start, uint32_t end) {
  if (end - start <= 1) return;
  uint32_t base = partition(A, start, end);
  quick_sort(A, start, base);
  quick_sort(A, base + 1, end);
  return;
}

void merge_sort(std::vector<trump>& A, uint32_t start, uint32_t end) {
  if (end - start == 1) return;
  uint32_t mid = (end + start + 1) / 2;
  merge_sort(A, start, mid);
  merge_sort(A, mid, end);

  std::vector<trump> L(mid - start + 1);
  std::vector<trump> R(end - mid + 1);
  for (uint32_t i = 0; i < mid - start; i++) L[i] = A[start + i];
  for (uint32_t i = 0; i < end - mid; i++) R[i] = A[mid + i];
  L.back() = -1;
  R.back() = -1;

  auto iter_L = L.begin(), iter_R = R.begin();
  for (uint32_t i = 0; i < end - start; i++) {
    if (*iter_L <= *iter_R) {
      A[start + i] = *iter_L;
      iter_L++;
    } else {
      A[start + i] = *iter_R;
      iter_R++;
    }
  }
  return;
}

int main() {
  uint32_t n = 0;
  std::cin >> n;
  std::vector<trump> A(n);
  for (auto&& a : A) std::cin >> a.suite >> a.rank;
  std::vector<trump> B(A);

  quick_sort(A, 0, A.size());
  merge_sort(B, 0, B.size());

  std::cout << (A == B ? "Stable" : "Not stable") << std::endl;
  for (size_t i = 0; i < n; i++) {
    std::cout << A[i].suite << " " << A[i].rank << std::endl;
  }

  return 0;
}
