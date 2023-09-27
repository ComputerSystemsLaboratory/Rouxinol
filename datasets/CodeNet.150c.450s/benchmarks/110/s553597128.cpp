#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

#define p(x) cout << "(" << x.first << "," << x.second << ")" << endl;

using namespace std;
const int MAX_H = 1005;
const int MAX_W = 1005;

char D[MAX_H][MAX_W];
bool visited[MAX_H][MAX_W];

int H, W, N;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };

typedef pair<int, int> PII;
typedef pair<PII, int> PIII;
typedef vector<PII> VII;

int bfs(PII from, PII to) {
  queue<PIII> que;
  memset(visited, false, sizeof(visited[0][0]) * MAX_H * MAX_W);

  que.push(make_pair(from, 0));
  while (!que.empty()) {
    PIII p = que.front(); que.pop();
    int d = p.second;
    if (p.first == to) {
      return d;
    }
    for (int k = 0; k < 4; k++) {
      int i2 = p.first.first + dx[k];
      int j2 = p.first.second + dy[k];
      if (0 <= i2 && i2 < H && 0 <= j2 && j2 < W && D[i2][j2] != 'X' && !visited[i2][j2]) {
        visited[i2][j2] = true;
        que.push(make_pair(make_pair(i2, j2), d+1));
      }
    }
  }
  return -1;
}

int main() {
  cin >> H >> W >> N;

  VII pos(N+1);
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      char c;
      cin >> c;
      D[i][j] = c;
      if (c == 'S') {
        pos[0] = make_pair(i, j);
      } else if (c > '0') {
        pos[c - '0'] = make_pair(i, j);
      }
    }
  }

  int res = 0;
  for (int i = 0; i < N; i++) {
    res += bfs(pos[i], pos[i+1]);
  }
  cout << res << endl;

  return 0;
}