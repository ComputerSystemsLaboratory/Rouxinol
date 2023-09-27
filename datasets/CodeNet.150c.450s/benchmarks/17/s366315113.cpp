#include <stdio.h>

int main(void) {
  int a[5], i, j, t;
  for(i = 0; i < 5; ++i) scanf("%d", &a[i]);
  for(i = 0; i < 5; ++i) for(j = i + 1; j < 5; ++j) if(a[i] < a[j]) t = a[i], a[i] = a[j], a[j] = t;
  for(i = 0; i < 4; ++i) printf("%d ", a[i]);
  printf("%d\n", a[4]);
  return 0;
}
