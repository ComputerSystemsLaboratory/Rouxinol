#include <cstdio>
#include <utility>

static const size_t n_max = 100000;
static int A[n_max];

int main() {
  size_t n;
  scanf("%zu", &n);
  for (size_t i = 0; i < n; i++)
    scanf("%d", A + i);
  size_t i = 0;
  for (size_t j = 0; j < n; j++)
    if (A[j] <= A[n-1])
      std::swap(A[i++], A[j]);
  i--;
  for (size_t j = 0; j < n - 1; j++)
    if (i == j)
      printf("[%d] ", A[j]);
    else
      printf("%d ", A[j]);
  if (i == n-1)
    printf("[%d]\n", A[n-1]);
  else
    printf("%d\n", A[n-1]);
  return 0;
}