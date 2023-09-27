#include <stdio.h>

int main(void) {
  int m, f, r, i, j;
  while( 1 ) {
    scanf("%d%d%d", &m, &f, &r);
    if(m == -1 && f == -1 & r == -1) break;
    if(m == -1 || f == -1 || m + f < 30) {
      printf("F\n");
      continue;
    }
    int s = m + f;
    if(s >= 80) printf("A\n");
    else if(s >= 65) printf("B\n");
    else if(s >= 50) printf("C\n");
    else if(s >= 30) {
      if(r >= 50) printf("C\n");
      else printf("D\n");
    }
  }
  return 0;
}
