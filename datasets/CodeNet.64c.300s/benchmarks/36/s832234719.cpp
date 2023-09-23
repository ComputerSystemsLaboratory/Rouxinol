#include <stdio.h>
int main(void) {
  int n[3], i, j;

  for (i = 0; i < 3; i++)
    scanf("%d", &n[i]);

  for (i = 0; i < 2; i++) {
    for (j = 1 + i; j < 3; j++) {
      if (n[i] > n[j]) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
      }
    }
  }

  printf("%d", n[0]);
  for (i = 1; i < 3; i++)
    printf(" %d", n[i]);
  puts("");

  return 0;
}