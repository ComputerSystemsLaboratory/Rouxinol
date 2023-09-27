#include <iostream>

using namespace std;
const int MAX_H = 105;
const int MAX_W = 105;
char D[MAX_H][MAX_W];

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };

void dfs(char c, int y, int x, int w, int h) {
  for (int k = 0; k < 4; k++) {
    int x2 = x + dx[k];
    int y2 = y + dy[k];
    if (0 <= x2 && x2 < w && 0 <= y2 && y2 < h && c == D[y2][x2]) {
      D[y2][x2] = '.';
      dfs(c, y2, x2, w, h);
    }
  }
}

int main() {
  int H, W;

  while (true) {
    cin >> H >> W;
    if (H == 0 && W == 0) break;

    for (int i = 0; i < H; i++) {
      cin >> D[i];
    }

    int res = 0;
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        char c = D[i][j];
        if (c != '.') {
          dfs(c, i, j, W, H);
          res++;
        }
      }
    }

    cout << res << endl;
  }

  return 0;
}