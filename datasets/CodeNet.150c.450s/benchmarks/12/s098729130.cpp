#include <cstdio>

static const size_t H_MAX = 250;
static int A[H_MAX+1];

int main() {
  size_t H;
  scanf("%zu", &H);
  for (size_t i = 1; i <= H; i++)
    scanf("%d\n", A + i);
  for (size_t i = 1; i <= H; i++) {
    printf("node %zu: key = %d, ", i, A[i]);
    if (i > 1)
      printf("parent key = %d, ", A[i/2]);
    if (2 * i <= H)
      printf("left key = %d, ", A[2*i]);
    if (2 * i + 1 <= H)
      printf("right key = %d, ", A[2*i+1]);
    puts("");
  }
  return 0;
}