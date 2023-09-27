#define _GLIBCXX_DEBUG
 
#include <bits/stdc++.h>
 
using namespace std;


int h, w;
vector<string> field;

void dfs(int y, int x) {
  int dy[4] = { -1, 0, 1, 0 };
  int dx[4] = { 0, 1, 0, -1 };

  char c = field[y][x];
  field[y][x] = '.';
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= h) {
      continue;
    }
    if (nx < 0 || nx >= w) {
      continue;
    }
    if (field[ny][nx] == '.') {
      continue;
    }
    if (field[ny][nx] == c) {
      dfs(ny, nx);
    }
  }
}


int main() {
  while (true) {
    cin >> h >> w;
    if (h + w == 0) {
      break;
    }
    field.resize(h);
    for (int i = 0; i < h; i++) {
      cin >> field[i];
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (field[i][j] != '.') {
          ans++;
          dfs(i, j);
        }
      }
    }

    cout << ans << endl;
  }
  return 0;
}