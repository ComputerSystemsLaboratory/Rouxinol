#include <stdio.h>
int main(void) {
  int i, n[100000], num;

  i = 0;  num = 0;
  do {
    scanf("%d", &n[i]);
    num++;
    i++;
  } while (n[i - 1] != 0);

  for (i = 0; i < num - 1; i++){
    printf("Case %d: %d\n", i + 1, n[i]);
  }
  return 0;
}