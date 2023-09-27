#include <iostream>
#include <queue>
using namespace std;
#define MAX_H 1000
#define MAX_W 1000
#define INF 100000000

typedef pair<int, int> P;

char a[MAX_H][MAX_W];
int d[MAX_H][MAX_W];
int h, w, n;
int sx, sy;
int gx, gy;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
  int count = 0;
  for (int k = 1; k <= n; k++) {
    for (int i = 0; i < h; i++)
      for (int j = 0; j < w; j++)
	d[i][j] = INF;

    queue<P> que;
    que.push(P(sx, sy));
    d[sy][sx] = 0;

    while (!que.empty()) {
      P p = que.front();
      que.pop();
      if (p.first == gx && p.second == gy) {
	count += d[p.second][p.first];
	break;
      }

      for (int i = 0; i < 4; i++) {
	int nx = p.first + dx[i], ny = p.second + dy[i];
	if (0 <= nx && nx < w && 0 <= ny && ny < h && a[ny][nx] != 'X' &&
	    d[ny][nx] == INF) {
	  que.push(P(nx, ny));
	  d[ny][nx] = d[p.second][p.first] + 1;
	}
      }
    }
    sx = gx;
    sy = gy;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
	if (a[i][j] == k + 1 + '0') {
	  gx = j;
	  gy = i;
	}
      }
    }
  }
  return count;
}

int main() {
  cin >> h >> w >> n;
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++)
      cin >> a[i][j];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] == 'S') {
	sx = j;
	sy = i;
      } else if (a[i][j] == '1') {
	gx = j;
	gy = i;
      }
    }
  }

  int ans = bfs();
  cout << ans << endl;

  return 0;
}