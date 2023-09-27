#include <cstdio>
#include <map>
#include <queue>
#include <string>

using namespace std;

const int INF = -1;
const int MAX_H = 1010;
const int MAX_W = 1010;
const int MAX_N = 10;

int H, W, N;
char field[MAX_H][MAX_W];
int d[MAX_H][MAX_W];
int sx, sy, gx, gy;
int power = 1;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

typedef pair<int, int> P;

void reset_d() {
  for (int i = 0; i < H; i++)
    for(int j = 0; j < W; j++) d[i][j] = INF;
}

int bfs(int c) {
  queue<P> que;
  reset_d();
  d[sx][sy] = c;
  que.push(P(sx, sy));
  while(que.size()) {
    P p = que.front(); que.pop();
    for (int i = 0; i < 4; i++) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if ( 0 <= nx && nx <= H && 0 <= ny && ny <= W && field[nx][ny] != 'X' && d[nx][ny] == INF) {
        d[nx][ny] = d[p.first][p.second] + 1;
        que.push(P(nx, ny));
        if (field[nx][ny] - '0' == power) {
          sx = nx;
          sy = ny;
          power++;
          return d[nx][ny];
        }
      }
    }
  }
  return INF;
}

void solve() {
  int c = 0;
  for (int i = 0; i < N; i++) {
    c = bfs(c);
  }
  printf("%d\n", c);
}


int main() {
  scanf("%d %d %d", &H, &W, &N);
  for (int i = 0; i < H; i++) {
    scanf("%s", field[i]);
  }
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (field[i][j] == 'S') {
        sx = i;
        sy = j;
      }
      if (field[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }
  solve();
  return 0;
}