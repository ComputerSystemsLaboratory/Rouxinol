#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
  return *(short*)a > *(short*)b ? 1 : (*(short*)a == *(short*)b ? 0 : -1);
}

int main (void) {
  short h[10];
  char buf[10];
  int i;
  for (i=0; i<10; i++) {
    fgets(buf, 10, stdin);
    buf[strlen(buf)-1] = '\0';
    h[i] = atoi(buf);
  }
  qsort(h, 10, sizeof(short), cmp);
  for (i=9; i>=7; i--) {
    printf ("%d\n", h[i]);
  }
  return 0;
}