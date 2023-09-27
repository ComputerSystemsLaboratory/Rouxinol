#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

int cnt = 0;

void merge(std::vector<int>* A, int left, int mid, int right) {
  std::vector<int> L(A->begin() + left, A->begin() + mid);
  std::vector<int> R(A->begin() + mid, A->begin() + right);
  L.push_back(std::numeric_limits<int>::max());
  R.push_back(std::numeric_limits<int>::max());
  int i = 0, j = 0;
  for (int k = left; k < right; ++k) {
    cnt++;
    if (L[i] <= R[j]) {
      (*A)[k] = L[i];
      i = i + 1;
    } else {
      (*A)[k] = R[j];
      j = j + 1;
    }
  }
}

void mergeSort(std::vector<int>* A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  std::vector<int> ss;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i ++) {
    int s;
    std::cin >> s;
    ss.push_back(s);
  }
  mergeSort(&ss, 0, n);
  for (int i = 0; i < n; ++i) {
    std::cout << ss[i] << (i == n - 1 ? "\n" : " ");
  }
  std::cout << cnt << std::endl;
}