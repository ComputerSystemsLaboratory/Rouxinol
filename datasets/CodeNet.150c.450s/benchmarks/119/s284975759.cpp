#include <bits/stdc++.h>
using namespace std;

int w;
int h;
char field[1145][1419];
bool used[1145][1419];

void dfs(int y, int x) {
  if (y < 0 || h <= y) return;
  if (x < 0 || w <= x) return;
  if (field[y][x] == '0') return;
  if (used[y][x]) return;
  used[y][x] = true;

  for (int dy=-1; dy<=1; dy++) {
    for (int dx=-1; dx<=1; dx++) {
      if (dy == 0 && dx == 0) continue;
      int newy = y + dy;
      int newx = x + dx;
      dfs(newy, newx);
    }
  }
}

int main() {
  while (1) {
    if (scanf("%d%d", &w, &h) != 2) return 0;
    if (w == 0 && h == 0) return 0;

    for (int i=0; i<h; i++) {
      for (int j=0; j<w; j++) {
        scanf(" %c", &field[i][j]);
        used[i][j] = false;
      }
    }

    int ans = 0;
    for (int i=0; i<h; i++) {
      for (int j=0; j<w; j++) {
        if (!used[i][j] && field[i][j] == '1') {
          dfs(i, j);
          ans++;
        }
      }
    }
    printf("%d\n", ans);
  }
}