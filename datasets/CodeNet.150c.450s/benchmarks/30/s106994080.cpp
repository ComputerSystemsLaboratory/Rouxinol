#include <stdio.h>

#define MAX 100

int main(void) {
  int i, j, n;
  int minj, tmp, cnt = 0;
  int a[MAX];

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < n; i++) {
    minj = i;
    for (j = i; j < n; j++) {
      if(a[j] < a[minj]) {
        minj = j;
      }
    }

    if (i != minj) {
      tmp = a[i];
      a[i] = a[minj];
      a[minj] = tmp;
      cnt++;
    }
  }

  printf("%d", a[0]);
  for (i = 1; i < n; i++)
    printf(" %d", a[i]);
  printf("\n%d\n", cnt);

  return 0;
}