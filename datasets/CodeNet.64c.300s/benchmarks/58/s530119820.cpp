#include <bits/stdc++.h>
using namespace std;

int H, W;
char field[105][105];
bool visited[105][105];
int dx[] = {1,0,-1,}, dy[] = {0,1,0,-1};

void dfs(int x, int y, char sign) {
  visited[y][x] = true;
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i], ny = y + dy[i];
    if (0 <= nx && nx < W && 0 <= ny && ny < H && field[ny][nx] == sign && !visited[ny][nx]) {
      dfs(nx, ny, sign);
    }
  }
}

int main() {
  while (true) {
    cin >> H >> W;
    if (!(H|W)) break;
    for (int i = 0; i < H; i++) {
      cin >> field[i];
    }
    for (int y = 0; y < H; y++) {
      for (int x = 0; x < W; x++) {
        visited[y][x] = false;
      }
    }
    int res = 0;
    for (int y = 0; y < H; y++) {
      for (int x = 0; x < W; x++) {
        if (!visited[y][x]) {
          char sign = field[y][x];
          dfs(x, y, sign);
          res++;
        }
      }
    }
    cout << res << endl;
  }

  return 0;
}