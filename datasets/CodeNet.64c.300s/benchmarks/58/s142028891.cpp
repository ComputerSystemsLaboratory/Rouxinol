#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
using namespace std;
char s[100][100];
int H, W;
void dfs(int x, int y, char f) {
  if (x < 0 || y < 0 || x >= W || y >= H)
    return;
  if (s[y][x] == f) {
    s[y][x] = 'x';
  } else
    return;
  dfs(x + 1, y, f);
  dfs(x - 1, y, f);
  dfs(x, y + 1, f);
  dfs(x, y - 1, f);
}
int main() {
  while (cin >> H >> W) {
    if (H == 0 && W == 0)
      break;
    int ans = 0;
    rep(i, H) rep(j, W) cin >> s[i][j];
    rep(i, H) rep(j, W) {
      if (s[i][j] == 'x') {
      } else {
        ans++;
        dfs(j, i, s[i][j]);
      }
    }
    cout << ans << endl;
  }
  return 0;
}