#include <cstdio>
#include <iostream>
#include <queue>
#include <tuple>

#define MAX_W 1010
#define MAX_H 1010

using namespace std;

int w, h, n;
char sections[MAX_H][MAX_W];
bool visited[MAX_H][MAX_W];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};


int main() {
  scanf("%d %d %d", &h, &w, &n);
  for (int i = 0; i < h; ++i) {
    scanf("%s", sections[i]);
  }

  int sx, sy;
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (sections[i][j] == 'S') {
        sx = j; sy = i;
      }
    }
  }

  int ans = 0;
  queue<tuple<int, int, int> > que;
  que.push(make_tuple(sx, sy, 0));
  for (int hp = 1; hp <= n; ++hp) {
    for (int i = 0; i < h; ++i) {
      for (int j = 0; j < w; ++j) {
        visited[i][j] = false;
      }
    }

    tuple<int, int, int> res;
    while (!que.empty()) {
      int x, y, d;
      tie(x, y, d) = que.front(); que.pop();
      visited[y][x] = true;
      for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if ((0 <= nx && nx < w && 0 <= ny && ny < h) &&
            (!visited[ny][nx] && sections[ny][nx] != 'X')) {
          if (sections[ny][nx] == ('0' + hp)) {
            visited[ny][nx] = true;
            res = make_tuple(nx, ny, d + 1);
          }
          else {
            visited[ny][nx] = true;
            que.push(make_tuple(nx, ny, d + 1));
          }
        }
      }
    }

    int x, y, d;
    tie(x, y, d) = res;
    ans += d;
    que = queue<tuple<int, int, int> >();
    que.push(make_tuple(x, y, 0));
  }
  printf("%d\n", ans);
  
  return 0;
}