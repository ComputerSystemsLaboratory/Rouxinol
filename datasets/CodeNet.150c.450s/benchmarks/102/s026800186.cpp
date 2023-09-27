#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
using namespace std;
char s[100][100];
int H, W, stx, sty;
void dfs(int x, int y) {
  if (x < 0 || y < 0 || x >= W || y >= H)
    return;
  if (s[y][x] == '.') {
    s[y][x] = 'x';
  } else
    return;
  dfs(x + 1, y);
  dfs(x - 1, y);
  dfs(x, y + 1);
  dfs(x, y - 1);
}
int main() {
  while (cin >> W >> H) {
    int ans = 0;
    if (H == 0 && W == 0)
      break;
    rep(i, H) rep(j, W) {
      cin >> s[i][j];
      if (s[i][j] == '@') {
        stx = j;
        sty = i;
      }
    }
    s[sty][stx] = '.';
    dfs(stx, sty);
    rep(i, H) rep(j, W) {
      if (s[i][j] == 'x')
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}