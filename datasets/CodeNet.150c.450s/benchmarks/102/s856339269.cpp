#include <bits/stdc++.h>
using namespace std;

#define repl(i, a, b) for(int i = ((int) a); i < ((int) b); i++)
#define rep(i, n) repl(i, 0, n)

int w, h;
char tile[20][20];
bool vis[20][20];
int dd[] = {-1, 0, 1, 0, -1};

bool range(int y, int x) {
  return 0 <= y && y < h && 0 <= x && x < w;
}

int dfs(int y, int x) {
  if (tile[y][x] == '#') return 0;
  // cout << y << " " << x << endl;
  vis[y][x] = true;
  int cnt = 1;
  rep(i, 4) {
    int ni = y + dd[i], nj = x + dd[i + 1];
    if(range(ni, nj) && tile[ni][nj] == '.' && !vis[ni][nj]) {
      cnt += dfs(ni, nj);
    }
  }
  return cnt;
}


int main(int argc, char const *argv[])
{
  while(cin >> w >> h, w | h) {
    int x, y;
    memset(vis, 0, sizeof(vis));
    rep(i, h)rep(j, w) {
      cin >> tile[i][j];
      if(tile[i][j] == '@') x = j, y = i;
    }

    cout << dfs(y, x) <<endl;

  }
  return 0;
}