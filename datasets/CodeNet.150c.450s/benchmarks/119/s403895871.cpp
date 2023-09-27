#include <iostream>

using namespace std;

// 0: 海, 1: 陸
int board[50][50] = {{0}};

const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[] = { 0,  1, 1, 1, 0, -1, -1, -1};

bool DFS(int i, int j, int w, int h) {
  if (i < 0 || i >= h || j < 0 || j >= w) return false;

  if (!board[i][j]) return false;

  board[i][j] = 0;
  for (int d = 0; d < 8; ++d)
    DFS(i + dy[d], j + dx[d], w, h);

  return true;
}

int main() {
  for (;;) {
    int w, h;
    cin >> w >> h;
    if (w == 0 && h == 0) break;

    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        cin >> board[i][j];
      }
    }

    int ans = 0;
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        if (DFS(i, j, w, h)) ++ans;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

