#include <bits/stdc++.h>
using namespace std;
int h, w;
int sx, sy;
int ct;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, vector<vector<char> > &v) {
  v[x][y] = '#';
  ++ct;
  for(int i = 0; i < 4; ++i) {
    int nx = dx[i] + x;
    int ny = dy[i] + y;
    if(nx >= 0 && ny >= 0 && ny < h && nx < w && v[nx][ny] == '.') {
      dfs(nx, ny, v);
    }
  }
  return;
}
int main() {
  for(;;) {
    scanf("%d %d", &w, &h);
    if(w == 0 && h == 0) break;
    vector<vector<char> > v(w, vector<char>(h));
    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        scanf(" %c", &v[j][i]);
      }
    }

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        if(v[j][i] == '@') {
          sx = j, sy = i;
          break;
        }
      }
    }
    dfs(sx, sy, v);
    printf("%d\n", ct);
    h = 0, w = 0, sx = 0, sy = 0, ct = 0;
  }
  return 0;
}