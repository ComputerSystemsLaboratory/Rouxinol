#include <stdio.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
int f[50];

void fi(int a) {
  f[a] = f[a - 2] + f[a - 1];
}

int main(void) {
  int n;
  scanf("%d", &n);
  rep(i, 50) f[i] = 0;
  f[0] = 1, f[1] = 1;
  for(int i = 2; i < 50; ++i) fi(i);
  printf("%d\n", f[n]);
  return 0;
}
