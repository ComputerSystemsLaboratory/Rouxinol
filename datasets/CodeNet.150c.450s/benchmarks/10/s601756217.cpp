#include <stdio.h>
#include <vector>

int main() {
  int n;
  int p[4][3][10];
  int b, f, r, v;

  int i, j, k;
  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      for(k = 0; k < 10; k++) {
        p[i][j][k] = 0;
      }
    }
  }

  scanf("%d", &n);
 
  char nl;
  for(i = 0; i < n; i++) {
    scanf("%d %d %d %d%c", &b, &f, &r, &v, &nl);
    p[b - 1][f - 1][r - 1] += v;
  }

  for(i = 0; i < 4; i++) {
    for(j = 0; j < 3; j++) {
      for(k = 0; k < 10; k++) {
        printf(" %d", p[i][j][k]);
      }
      printf("\n");
    }
    if(i < 3) {
      for(k = 0; k < 10; k++) {
        printf("##");
      }
      printf("\n");
    }
  }
  return 0;
}