#include <algorithm>
#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

void printArray(int *A, int n) {
  rep(i, n) {
    std::cout << A[i];
    if (i == n - 1)
      std::cout << '\n';
    else
      std::cout << ' ';
  }
}

void countingSort(int *A, int *B, int n, int k) {
  int C[k + 1];
  rep(i, k + 1) C[i] = 0;

  rep(i, n) C[A[i]]++;
  for (int i = 1; i < k + 1; ++i)
    C[i] += C[i - 1];

  for (int i = n - 1; i >= 0; --i) {
    B[C[A[i]] - 1] = A[i];
    C[A[i]]--;
  }
}

int main() {
  int n;
  std::cin >> n;
  int A[n], B[n];
  rep(i, n) std::cin >> A[i];

  int max = *std::max_element(A, A + n);
  countingSort(A, B, n, max);

  printArray(B, n);

  return 0;
}

