#include <cstdio>

int P[201];

int main() {
  int m, nmin, nmax;
  while (true) {
    scanf("%d %d %d", &m, &nmin, &nmax);
    if (m == 0 && nmin == 0 && nmax == 0) break;
    for (int i=0;i<m;i++) scanf("%d", &P[i]);
    int max_gap = -1, max_n = -1;
    for (int n=nmin;n<=nmax;n++) {
      const int gap = P[n-1]-P[n];
      if (gap >= max_gap) {
        max_gap = gap;
        max_n = n;
      }
    }
    printf("%d\n", max_n);
  }
  return 0;
}