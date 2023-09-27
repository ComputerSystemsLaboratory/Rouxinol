#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
using namespace std;

#define ABS(a) (((a) >= 0) ? (a) : -(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define RFOR(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define int long long

typedef long long ll;
typedef pair<int, int> Pair;

const int kMaxH = 1000;
const int kMaxW = 1000;
const int kInf = 1000000000;

int H, W, N;
string maze[kMaxH];
int ans = 0;

int d[kMaxH][kMaxW];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int Bfs(char s, char g) {
  int sx, sy, gx, gy;
  REP(i, H) {
    REP(j, W) {
      if (maze[i][j] == s) { sx = i; sy = j; }
      if (maze[i][j] == g) { gx = i; gy = j; }
    }
  }

  queue<Pair> que;
  REP(i, H) { REP(j, W) { d[i][j] = kInf; } }
  que.push(Pair(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    Pair p = que.front(); que.pop();
    int x = p.first; int y = p.second;
    if (x == gx && y == gy) { break; }
    REP(i, 4) {
      int nx = x+dx[i]; int ny = y+dy[i];
      if (0 <= nx && nx < H && 0 <= ny && ny < W) {
        if (maze[nx][ny] != 'X' && d[nx][ny] == kInf) {
          que.push(Pair(nx, ny));
          d[nx][ny] = d[x][y]+1;
        }
      }
    }
  }

  return d[gx][gy];
}

signed main() {
  cin >> H >> W >> N;
  REP(i, H) { cin >> maze[i]; }

  ans += Bfs('S', '1');
  REP(i, N-1) { ans += Bfs('1'+i, '2'+i); }

  cout << ans << endl;
  return 0;
}

