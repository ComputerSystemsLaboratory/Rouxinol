#include <stdio.h>

int main(void) {
  int i, j, k, n, a[21][21], m;
  while( 1 ) {
    int x = 10, y = 10;
    for(i = 0; i < 21; ++i) for(j = 0; j < 21; ++j) a[i][j] = 0;
    scanf("%d", &n);
    if(!n) break;
    int c, b;
    for(i = 0; i < n; ++i) {
      scanf("%d%d", &c, &b);
      a[c][b] = 1;
    }
    scanf("%d", &m);
    char d;
    int l;
    for(i = 0; i < m; ++i) {
      scanf("%c", &d);
      scanf("%c", &d);
      scanf("%d", &l);
      if(d == 'N') {
        for(j = y; j <= y + l; ++j) a[x][j] = 0;
        y += l;
      } else if(d == 'S') {
        for(j = y; j >= y - l; --j) a[x][j] = 0;
        y -= l;
      } else if(d == 'W') {
        for(j = x; j >= x - l; --j) a[j][y] = 0;
        x -= l;
      } else {
        for(j = x; j <= x + l; ++j) a[j][y] = 0;
        x += l;
      }
    }
    int ans = 0;
    for(i = 0; i < 21; ++i) for(j = 0; j < 21; ++j) ans += a[i][j];
    if(ans) printf("No\n");
    else printf("Yes\n");
  }
  return 0;
}
