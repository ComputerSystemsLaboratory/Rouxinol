#include <cinttypes>
#include <cstdint>
#include <cstdio>
#include <iostream>

const int kMaxN = 200000;
const int kMaxAi = 1000000000;
const int kSentinel = kMaxAi + 1;

void Merge(int A[], int left, int mid, int right,
           int L[], int R[], std::int64_t *cnt) {
  int i, j, k;
  int n1 = mid - left;
  int n2 = right - mid;
  for (i = 0; i < n1; ++i) { L[i] = A[left + i]; }
  for (i = 0; i < n2; ++i) { R[i] = A[mid + i]; }
  L[n1] = R[n2] = kSentinel;
  i = j = 0;
  for (k = left; k < right; ++k) {
    if (L[i] <= R[j]) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
      *cnt += n1 - i;
    }
  }
}

void MergeSort(int A[], int left, int right,
               int L[], int R[], std::int64_t *cnt) {
  int mid;
  if (left + 1 < right) {
    mid = (left + right) / 2;
    MergeSort(A, left, mid, L, R, cnt);
    MergeSort(A, mid, right, L, R, cnt);
    Merge(A, left, mid, right, L, R, cnt);
  }
}

int main() {
  int n, i;
  std::scanf("%d", &n);
  int A[n];
  for (i = 0; i < n; ++i) { std::scanf("%d", &A[i]); }
  int L[n/2 + 1], R[n/2 + 1];
  std::int64_t cnt = 0;
  MergeSort(A, 0, n, L, R, &cnt);
  std::cout << cnt << std::endl;
}