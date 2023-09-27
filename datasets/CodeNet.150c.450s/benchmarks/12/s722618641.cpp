#include <stdio.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repi(i, n) for(int i = 1; i <= n; ++i)

int main(void) {
  int n;
  scanf("%d", &n);
  int a[n + 1];
  repi(i, n) scanf("%d", &a[i]);
  repi(i, n) {
    printf("node %d: key = %d, ", i, a[i]);
    if(i / 2) printf("parent key = %d, ", a[i / 2]);
    if(2 * i <= n) printf("left key = %d, ", a[2 * i]);
    if(2 * i < n) printf("right key = %d, ", a[2 * i + 1]);
    printf("\n");
  }
  return 0;
}
