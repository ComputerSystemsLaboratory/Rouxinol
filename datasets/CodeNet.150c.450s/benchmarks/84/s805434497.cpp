#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

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

long long cnt = 0;

void merge(int *A, int n, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1 + 1], R[n2 + 1];
  rep(i, n1) L[i] = A[left + i];
  rep(i, n2) R[i] = A[mid + i];
  L[n1] = 1 << 30;
  R[n2] = 1 << 30;

  int l = 0, r = 0;
  for (int i = left; i < right; ++i) {
    if (L[l] < R[r]) {
      A[i] = L[l];
      l++;
    } else {
      cnt += n1 - l;
      A[i] = R[r];
      r++;
    }
  }
}

void mergeSort(int *A, int n, int left, int right) {
  if (right - left <= 1)
    return;
  int mid = (left + right) / 2;

  mergeSort(A, n, left, mid);
  mergeSort(A, n, mid, right);
  merge(A, n, left, mid, right);
}

int main() {
  int n;
  std::cin >> n;
  int *S = new int[n];
  rep(i, n) std::cin >> S[i];

  mergeSort(S, n, 0, n);
  // printArray(S, n);
  std::cout << cnt << '\n';
  return 0;
}

