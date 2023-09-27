#include <iostream>

using namespace std;

const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};

// 0: 海, 1: 陸
int board[50][50] = {{0}};

void DFS(int i, int j, int w, int h) {
  if (board[i][j] == 0) return;
  board[i][j] = 0;  // mark as visited

  for (int d = 0; d < 8; ++d) {
    const int ny = i + dy[d];
    const int nx = j + dx[d];
    if (ny >= 0 && ny < h && nx >= 0 && nx < w) {
      DFS(ny, nx, w, h);
    }
  }
}

int main() {
  int w, h;

  for (;;) {
    cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        cin >> board[i][j];
      }
    }

    int ans = 0;
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        if (board[i][j] == 1) {
          DFS(i, j, w, h);
          ++ans;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

