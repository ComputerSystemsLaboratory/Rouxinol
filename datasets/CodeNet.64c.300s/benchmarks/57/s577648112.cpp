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

const int kMaxR = 10;
const int kMaxC = 10000;

int R, C;
bool grid[kMaxR][kMaxC];
int ans;

vector<int> selected;

int Count(int col) {
  int cnt = 0;
  REP(i, R) { if (!grid[i][col]) { ++cnt; } }
  return cnt;
}

void Ans() {
  // REP(i, R) {
  //   REP(j, C) {
  //     cout << grid[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  int cnt = 0;
  REP(j, C) {
    int cntcol = Count(j);
    cnt += MAX(cntcol, R-cntcol);
  }
  ans = MAX(ans, cnt);
}

void Turn(int row) {
  REP(j, C) { grid[row][j] = !grid[row][j]; }
  return;
}

void Dfs(int row) {
  if (row == R) {
    Ans();
    return;
  }

  Dfs(row+1);

  Turn(row);
  Dfs(row+1);
  Turn(row);

  return;
}

signed main() {
  while (true) {
    cin >> R >> C;
    if (R == 0) { break; }
    REP(i, R) { REP(j, C) { cin >> grid[i][j]; } }
    ans = 0;

    Dfs(0);

    cout << ans << endl;
  }

  return 0;
}

