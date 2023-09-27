#include <cstdio>
#include <limits>

using namespace std;

namespace {

static int Merge(int* A, int left, int mid, int right) {
  const int n1 = mid - left;
  const int n2 = right - mid;

  // When sorting large arrays, allocating L and R in heap for
  // each Merge call makes a bit the program slower.
  //
  // In the real application, we should use std::vectors instead of
  // fixed sized arrays, though.
  // vector<int> L(n1+1);
  // vector<int> R(n2+1);
  int L[n1 + 1];
  int R[n2 + 1];

  for (int i = 0; i < n1; ++i) {
    L[i] = A[left + i];
  }
  for (int i = 0; i < n2; ++i) {
    R[i] = A[mid + i];
  }

  static const int kInf = numeric_limits<int>::max();
  L[n1] = kInf;
  R[n2] = kInf;

  int i = 0;
  int j = 0;
  for (int k = left; k < right; ++k) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
  return right - left;
}

inline int MergeSortInternal(int* A, int left, int right) {
  if (left + 1 >= right) return 0;

  const int mid = (left + right) / 2;
  int ret = MergeSortInternal(A, left, mid);
  ret += MergeSortInternal(A, mid, right);
  return ret + Merge(A, left, mid, right);
}

inline int MergeSort(int* A, int n) {
  return MergeSortInternal(A, 0, n);
}
} // namespace

int main() {
  int n;
  int S[500000];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &S[i]);
  }

  const int swapped = MergeSort(S, n);
  for (int i = 0; i < n; ++i) {
    if (i > 0) printf(" ");
    printf("%d", S[i]);
  }
  printf("\n");
  printf("%d\n", swapped);

  return 0;
}