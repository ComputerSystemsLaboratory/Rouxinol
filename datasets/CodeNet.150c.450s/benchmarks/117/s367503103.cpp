#include <cstdio>
#include <vector>
#include <limits>

using namespace std;

namespace {

static size_t Merge(size_t* A, size_t left, size_t mid, size_t right) {
  const size_t n1 = mid - left;
  const size_t n2 = right - mid;

  vector<size_t> L(n1+1);
  vector<size_t> R(n2+1);
  for (size_t i = 0; i < n1; ++i) {
    L[i] = A[left + i];
  }
  for (size_t i = 0; i < n2; ++i) {
    R[i] = A[mid + i];
  }

  static const size_t kInf = numeric_limits<size_t>::max();
  L[n1] = kInf;
  R[n2] = kInf;

  size_t i = 0;
  size_t j = 0;
  for (size_t k = left; k < right; ++k) {
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

static size_t MergeSortInternal(size_t* A, size_t left, size_t right) {
  if (left + 1 >= right) return 0;

  const size_t mid = (left + right) / 2;
  size_t ret = MergeSortInternal(A, left, mid);
  ret += MergeSortInternal(A, mid, right);
  return ret + Merge(A, left, mid, right);
}

static size_t MergeSort(size_t* A, size_t n) {
  return MergeSortInternal(A, 0, n);
}
} // namespace

int main() {
  size_t n;
  size_t S[500000];
  scanf("%lu", &n);
  for (size_t i = 0; i < n; ++i) {
    scanf("%lu", &S[i]);
  }

  const size_t swapped = MergeSort(S, n);
  for (size_t i = 0; i < n; ++i) {
    if (i > 0) printf(" ");
    printf("%lu", S[i]);
  }
  printf("\n");
  printf("%lu\n", swapped);

  return 0;
}