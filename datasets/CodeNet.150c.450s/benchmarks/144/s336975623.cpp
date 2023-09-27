#include <stdio.h>

int a[100][100];
int b[100][100];
double c[100][100];

int main() {
  int n, m, l;
  scanf("%d %d %d", &n, &m, &l);
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for(int i=0; i<m; i++) {
    for(int j=0; j<l; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<l; j++) {
      c[i][j] = 0;
    }
  }

  for(int bi=0; bi<n; bi+=16) {
    for(int bj=0; bj<l; bj+=16) {
      for(int bk=0; bk<m; bk+=16) {
        for(int i=bi; i<bi+16 && i<n; i++) {
          for(int j=bj; j<bj+16 && j<l; j++) {
            for(int k=bk; k<bk+16 && k<m; k++) {
              c[i][j] += a[i][k] * b[k][j];
            }
          }
        }
      }
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<l; j++) {
      if(j != 0) {
        printf(" ");
      }
      printf("%.0lf", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}