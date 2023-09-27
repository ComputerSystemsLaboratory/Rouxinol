#include <bits/stdc++.h>
using namespace std;
int w, h;
vector<vector<int>> a(55, vector<int>(55, 0));
int ct;

void dfs(int y, int x) {
  a[y][x] = 0;
  for(int i = -1; i <= 1; ++i) {
    for(int j = -1; j <= 1; ++j) {
      int ny = y + i, nx = x + j;
      if(0 <= ny && ny < h && 0 <= nx && nx < w && a[ny][nx] == 1) {
        dfs(ny, nx);
      }
    }
  }
}

int main() {
  for(;;) {
    scanf("%d %d", &w, &h);
    if(w == 0 && h == 0) break;
    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        scanf("%d", &a[i][j]);
      }
    }

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        if(a[i][j] == 1) {
          ++ct;
          dfs(i, j);
        }
      }
    }
    printf("%d\n", ct);
    ct = 0;
    a.clear();
  }
  return 0;
}