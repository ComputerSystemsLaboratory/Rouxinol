#include <iostream>
#include <vector>

int partition(std::vector<int>* A, int p, int r) {
  int x = (*A)[r];
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if ((*A)[j] <= x) {
      i = i + 1;
      std::swap((*A)[i], (*A)[j]);
    }
  }
  std::swap((*A)[i + 1], (*A)[r]);
  return i + 1;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> A;
  for (int i = 0; i < n; ++i) {
    int a;
    std::cin >> a;
    A.push_back(a);
  }
  int idx = partition(&A, 0, n - 1);
  for (int i = 0; i < n; ++i) {
    std::cout << (i == idx ? "[" : "" ) << A[i] << (i == idx ? "]" : "") <<
      (i == n-1 ? "\n" : " ");
  }
  return 0;
}