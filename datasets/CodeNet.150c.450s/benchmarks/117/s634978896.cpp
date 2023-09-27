#include <algorithm>
#include <cstdio>

static const size_t n_max = 500000;
static int S[n_max], L[n_max], R[n_max];
static int c = 0;

void merge_sort(size_t i, size_t j) {
  if (j - i <= 1)
    return;
  size_t k = (i + j) / 2;
  merge_sort(i, k);
  merge_sort(k, j);
  std::copy(S + i, S + k, L);
  std::copy(S + k, S + j, R);
  c += j - i;
  for (size_t l = i, p = 0, q = 0;; l++) {
    if (p < k - i && q < j - k) {
      if (L[p] <= R[q])
        S[l] = L[p++];
      else
        S[l] = R[q++];
    } else if (p < k - i)
      S[l]= L[p++];
    else if (q < j - k)
      S[l] = R[q++];
    else
      break;
  }
}

int main() {
  size_t n;
  scanf("%zu", &n);
  for (size_t i = 0; i < n; i++)
    scanf("%d", S + i);
  merge_sort(0, n);
  for (size_t i = 0; i < n - 1; i++)
    printf("%d ", S[i]);
  printf("%d\n%d\n", S[n-1], c);
  return 0;
}