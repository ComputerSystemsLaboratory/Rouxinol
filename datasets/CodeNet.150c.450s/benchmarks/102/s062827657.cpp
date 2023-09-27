#include <iostream>
using namespace std;

char field[30][30];
int res;
int w, h;
constexpr int dd[] = {0, 1, 0, -1, 0};

void dfs(int y, int x) {
  res++;
  field[y][x] = 'x';
  for (int i = 0; i < 4; ++i) {
    int ny = dd[i] + y, nx = dd[i + 1] + x;
    if (0 <= ny && ny < h && 0 <= nx && nx < w) {
      if (field[ny][nx] == '.') {
        dfs(ny, nx);
      }
    }
  }
}

int main() {
  while (cin >> w >> h, w || h) {
    int sy, sx;
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        cin >> field[i][j];
        if (field[i][j] == '@') {
          sy = i;
          sx = j;
          field[i][j] = '.';
        }
      }
    }
    res = 0;
    dfs(sy, sx);
    cout << res << endl;
  }
}