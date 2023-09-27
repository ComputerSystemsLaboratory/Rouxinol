#include <cstdio>
#include <utility>

static const size_t H_MAX = 500000;
static int A[H_MAX+1];

int main() {
  size_t H;
  scanf("%zu", &H);
  for (size_t i = 1; i <= H; i++)
    scanf("%d\n", A + i);
  for (size_t i = H / 2; i >= 1; i--)
    for (auto j = i;;) {
      size_t l = 2 * j, r = 2 * j + 1, k;
      if (l <= H && A[l] > A[j])
        k = l;
      else
        k = j;
      if (r <= H && A[r] > A[k])
        k = r;
      if (j == k)
        break;
      std::swap(A[j], A[k]);
      j = k;
    }
  for (size_t i = 1; i <= H; i++)
    printf(" %d", A[i]);
  puts("");
  return 0;
}