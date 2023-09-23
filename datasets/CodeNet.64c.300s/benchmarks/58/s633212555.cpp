#include <ctype.h>
#include <stdio.h>
#include <string.h>

int W, H;
int map[100][100];
bool visited[100][100];

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void visitColor(int r, int c, char color) {
  for (int i = 0; i < 4; ++i) {
    int nr = r + dr[i];
    int nc = c + dc[i];
    if (nr >= 0 && nr < H && nc >= 0 && nc < W && !visited[nr][nc] && map[nr][nc] == color) {
      visited[nr][nc] = true;
      visitColor(nr, nc, color);
    }
  }
}

int getPartitions() {
  memset(visited, false, sizeof(visited));
  int result = 0;
  for (int r = 0; r < H; ++r) {
    for (int c = 0; c < W; ++c) {
      if (!visited[r][c]) {
        visited[r][c] = true;
        result++;
        visitColor(r, c, map[r][c]);
      }
    }
  }
  return result;
}

int main() {
  //freopen("PropertyDistribution.in", "r", stdin);
  while (scanf("%d%d", &H, &W) == 2 && H != 0 && W != 0) {
    for (int r = 0; r < H; ++r) {
      for (int c = 0; c < W; ++c) {
        char ch;
        do {
          ch = getchar();
        } while (isspace(ch));
        map[r][c] = ch;
      }
    }
    int result = getPartitions();
    printf("%d\n", result);
  }
  return 0;
}