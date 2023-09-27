#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int h, w;
char field[120][120];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, char c) {
  if(c != field[y][x]) return;
  field[y][x] = '.';
  rep(i, 4) {
    int nx = x+dx[i], ny = y+dy[i];
    if(0 <= nx && nx < w && 0 <= ny && ny < h && field[ny][nx] == c) {
      dfs(nx, ny, c);
    }
  }
}

int main() {
  while(cin >> h >> w, h+w) {
    rep(i, h) rep(j, w) cin >> field[i][j];

    int ans = 0;
    rep(i, h) {
      rep(j, w) {
        if(field[i][j] == '.') continue;
        else {
          ans++;
          dfs(j, i, field[i][j]);
        }
      }
    }
    cout << ans << endl;
  }
}