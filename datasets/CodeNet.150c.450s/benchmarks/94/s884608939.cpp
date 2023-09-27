#include <stdio.h>
int main(void) {
  int n, a[100];
  int i, j, tmp;
  int cnt = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++) {
    for (j = 1; j < n - i; j++) {
      if (a[j - 1] > a[j]) {
        tmp = a[j - 1];
        a[j - 1] = a[j];
        a[j] = tmp;
        cnt++;
      }
    }
  }

  printf("%d", a[0]);
  for (i = 1; i < n; i++)
    printf(" %d", a[i]);
  printf("\n%d\n", cnt);

  return 0;
}