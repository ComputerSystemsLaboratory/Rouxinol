#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int partition(int *A, int p, int r) {
  int x = A[r];

  int i = p;
  for (int j = p; j < r; ++j) {
    if (A[j] <= x) {
      int temp = A[i];
      A[i] = A[j];
      A[j] = temp;
      i++;
    }
  }

  int temp = A[i];
  A[i] = A[r];
  A[r] = temp;

  return i;
}

int main() {
  int n;
  std::cin >> n;
  int A[n];
  rep(i, n) std::cin >> A[i];

  int q = partition(A, 0, n - 1);
  rep(i, n) {
    if (i)
      std::cout << ' ';
    if (i == q)
      std::cout << "[" << A[i] << "]";
    else
      std::cout << A[i];
  }

  std::cout << '\n';

  return 0;
}

