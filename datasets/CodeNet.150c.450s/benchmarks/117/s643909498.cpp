#include <cstdio>
#define MAX_N 500000
#define SENTINEL 1000000001

int n, S[MAX_N], cnt = 0, L[(MAX_N / 2) + 1], R[(MAX_N / 2) + 1];

void merge(int left, int mid, int right) {
  int n1, n2, i, j, k;
  n1 = mid - left;
  n2 = right - mid;
  for (i = 0; i < n1; ++i)
    L[i] = S[left + i];
  L[n1] = SENTINEL;
  for (i = 0; i < n2; ++i)
    R[i] = S[mid + i];
  R[n2] = SENTINEL;

  i = 0;
  j = 0;
  for (k = left; k < right; ++k) {
    ++cnt;
    if (L[i] <= R[j])
      S[k] = L[i++];
    else
      S[k] = R[j++];
  }
}

void mergeSort(int left, int right) {
  if (right - left > 1) {
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main() {
  int i;
  scanf("%d\n", &n);
  for (i = 0; i < n; ++i)
    scanf("%d ", &S[i]);

  mergeSort(0, n);

  for (i = 0; i < n - 1; ++i)
   printf("%d ", S[i]);
  printf("%d\n", S[n - 1]);
  printf("%d\n", cnt);

  return 0;
}