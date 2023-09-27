#include <iostream>
#include <cstring>
using namespace std;

int a, b;
bool con[20][20];
int memo[20][20];

inline bool inside(int y, int x) {
  return 0 <= y && y < b && 0 <= x && x < a;
}

int dfs(int y = 0, int x = 0) {
  if (!inside(y, x)) return 0;
  if (con[y][x]) return 0;
  if (y == b - 1 && x == a - 1) return 1;
  if (~memo[y][x]) return memo[y][x];

  return memo[y][x] = dfs(y + 1, x) + dfs(y, x + 1);
}

int main() {
  while (cin >> a >> b, a || b) {
    memset(memo, -1, sizeof(memo));
    memset(con, false, sizeof(con));
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int x, y;
      cin >> x >> y;
      con[y - 1][x - 1] = true;
    }
    cout << dfs() << endl;
  }
}