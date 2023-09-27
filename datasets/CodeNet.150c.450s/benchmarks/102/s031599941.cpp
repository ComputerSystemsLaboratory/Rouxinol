#include <cstdio>

int W, H;
char tile[21][21];

int search(int y, int x) {
  if (tile[y][x] == '#') return 0;
  int cnt = 1;
  tile[y][x] = '#';
  if (y > 0)   cnt += search(y-1, x);
  if (y < H-1) cnt += search(y+1, x);
  if (x > 0)   cnt += search(y, x-1);
  if (x < W-1) cnt += search(y, x+1);
  return cnt;
}

int main() {
  while (true) {
    scanf("%d %d", &W, &H);
    if (W == 0 && H == 0) break;
    for (int i=0;i<H;i++) scanf("%s", tile[i]);
    int cnt = 0;
    for (int i=0;i<H;i++) {
      for (int j=0;j<W;j++) {
        if (tile[i][j] == '@') {
          cnt = search(i, j);
          break;
        }
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}