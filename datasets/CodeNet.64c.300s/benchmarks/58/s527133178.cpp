#include <stdio.h>

#define SIZE_MAX 101

int h, w;
char field[SIZE_MAX][SIZE_MAX];

void fill(int x, int y, char target) {
  if (x < 0 || h <= x || y < 0 || w <= y) return;
  if (field[x][y] != target) return;

  field[x][y] = ' ';

  fill(x - 1, y, target);
  fill(x + 1, y, target);
  fill(x, y - 1, target);
  fill(x, y + 1, target);
}

int solve() {
  int result = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (field[i][j] == ' ') continue;
      fill(i, j, field[i][j]);
      result++;
    }
  }
  return result;
}

int main() {
  while (true) {
    scanf("%d %d", &h, &w);
    if (h == 0 && w == 0) break;

    for (int i = 0; i < h; i++) {
      scanf("%s", field[i]);
    }
    int answer = solve();
    printf("%d\n", answer);
  }
  return 0;
}