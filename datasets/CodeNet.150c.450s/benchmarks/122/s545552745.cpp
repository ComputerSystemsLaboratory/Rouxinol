#include <cstdio>
#include <utility>

static const size_t H_MAX = 2000000;
static int A[H_MAX+1];

int main() {
  size_t H = 0;
  for (;;) {
    char s[8];
    scanf("%s", s);
    if (s[0] == 'e' && s[1] == 'n')
      return 0;
    if (s[0] == 'i') {
      int k;
      scanf("%d", &k);
      A[++H] = k;
      for (size_t i = H; i / 2 >= 1 && A[i] > A[i/2]; i /= 2)
        std::swap(A[i], A[i/2]);
    } else {
      printf("%d\n", A[1]);
      if (--H) {
        A[1] = A[H+1];
        for (size_t j = 1;;) {
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
      }
    }
  }
}