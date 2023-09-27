#include<cstdio>
using namespace std;

int w, h;
int c[50][50];
int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[8] = {1, 0, -1, -1, -1, 0, 1, 1};

int dfs(int x, int y) {
  if (x < 0 || y < 0 || x >= w || y >= h) return 0;
  if (c[y][x] == 0) return 0;
  c[y][x] = 0;
  for (int i = 0; i < 8; i++) dfs(x + dx[i], y + dy[i]);
  return 1;
}

int main() {
  while (1) {
    scanf("%d%d", &w, &h);
    if (w == 0) break;
    for (int i = 0; i < h; i++)
      for (int j = 0; j < w; j++) scanf("%d", &c[i][j]);
    int counter = 0;
    for (int i = 0; i < h; i++)
      for (int j = 0; j < w; j++) counter += dfs(j, i);
    printf("%d\n", counter);
  }
}

