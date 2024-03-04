#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *((int*)a) - *((int*)b);
}

int main(int ac, char **argv) {
  int data[10];
  int i = 0;
  for(; i < 9; i++) {
    scanf("%d", &data[i]);
  }
  qsort(data, 10, sizeof(int), cmp);
  printf("%d\n%d\n%d\n", data[9], data[8], data[7]);
  return 0;
}