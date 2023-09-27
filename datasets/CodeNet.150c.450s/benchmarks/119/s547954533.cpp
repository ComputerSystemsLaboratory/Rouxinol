#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <math.h>

using namespace std;
typedef long long ll;
static const double EPS = 1e-9;
static const double PI = acos(-1.0);

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, s, n) for (int i = (s); i < (int)(n); i++)
#define FOREQ(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define DEC(i, s) for (int i = (s); i >= 0; i--)

#define SIZE(v) (int)((v).size())
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define FIND(m, w) ((m).find(w) != (m).end())

int w, h;
int field[100][100];
bool visit[100][100];
const int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
const int dy[8] = { 1, 0, -1, -1, -1, 0, 1, 1 };

void dfs(int x, int y) {
  if (visit[y][x]) { return; }
  visit[y][x] = true;
  REP(i, 8) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx < 0 || nx >= w || ny < 0 || ny >= h) { continue; }
    if (field[ny][nx] == 0) { continue; }
    dfs(nx, ny);
  }
}

int main() {
  while (scanf("%d %d", &w, &h), w|h) {
    MEMSET(field, 0);
    MEMSET(visit, false);
    REP(y, h) REP(x, w) {
      scanf("%d", &field[y][x]);
    }
    int ans = 0;
    REP(y, h) REP(x, w) {
      if (visit[y][x] || field[y][x] == 0) { continue; }
      ans++;
      dfs(x, y);
    }
    printf("%d\n", ans);
  }
}