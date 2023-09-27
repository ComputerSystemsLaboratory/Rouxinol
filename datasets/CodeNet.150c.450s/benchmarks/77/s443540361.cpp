#include <cstdio>

int N, M;
int t[21][21];

int main() {
  while (true) {
    scanf("%d", &N);
    if (N == 0) break;
    for (int i=0;i<=20;i++) {
      for (int j=0;j<=20;j++) t[i][j] = 0;
    }
    for (int i=0;i<N;i++) {
      int x, y;
      scanf("%d %d", &x, &y);
      t[x][y]++;
    }
    scanf("%d", &M);
    int rx = 10, ry = 10;
    for (int i=0;i<M;i++) {
      char d;
      int  l;
      scanf(" %c %d", &d, &l);
      for (int j=0;j<l;j++) {
        switch (d) {
        case 'N': ry++; break;
        case 'E': rx++; break;
        case 'S': ry--; break;
        case 'W': rx--; break;
        }
        N -= t[rx][ry];
        t[rx][ry] = 0;
      }
    }
    if (N == 0) puts("Yes");
    else puts("No");
  }
  return 0;
}