#include <cstdio>

#define MAX_W 110
#define MAX_H 110

using namespace std;

int w, h;
char orchard[MAX_H][MAX_W];
bool visited[MAX_H][MAX_W];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

void dfs(int x, int y) {
  visited[y][x] = true;
  for (int i = 0; i < 4; ++i) {
    int nx = x + dx[i], ny = y + dy[i];
    if ((0 <= nx && nx < w && 0 <= ny && ny < h) &&
        (!visited[ny][nx] && orchard[y][x] == orchard[ny][nx])) {
      dfs(nx, ny);
    }
  }
}

int main() {

  while (true) {
    scanf("%d %d", &h, &w);
    if (h == 0 && w == 0) break;
    
    for (int i = 0; i < h; ++i) {
      scanf("%s", orchard[i]);
    }
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        visited[i][j] = false;
      }
    }

    int ans = 0;
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        if (!visited[i][j]) {
          ++ans;
          dfs(j, i);
        }
      }
    }
    printf("%d\n", ans);
  }
  
  return 0;
}