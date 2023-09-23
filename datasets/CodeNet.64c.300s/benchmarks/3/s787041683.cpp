#include <stdio.h>
int main(void) {
  int i, n, num[100];

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);

  printf("%d", num[n - 1]);
  for (i =  n - 2; i >= 0; i--)
    printf(" %d", num[i]);
  puts("");

  return 0;
}