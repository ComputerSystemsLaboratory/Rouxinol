#include <algorithm>
#include <cstdio>
#include <numeric>

static const int k_max = 10000;
static const size_t n_max = 2000000;
int A[n_max], B[n_max], C[k_max+1];

int main() {
  size_t n;
  scanf("%zu", &n);
  for (size_t i = 0; i < n; i++)
    scanf("%d", A + i);
  auto k = *std::max_element(A, A + n);
  for (size_t i = 0; i < n; i++)
    C[A[i]]++;
  std::partial_sum(C, C + k + 1, C);
  for (size_t i = 0; i < n; i++)
    B[--C[A[i]]] = A[i];
  for (size_t i = 0; i < n - 1; i++)
    printf("%d ", B[i]);
  printf("%d\n", B[n-1]);
  return 0;
}