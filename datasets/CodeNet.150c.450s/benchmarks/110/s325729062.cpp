#include <bits/stdc++.h>
using namespace std;
 
int h, w, n;
char m[1010][1010];
int d[1010][1010];
int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
 
void init()
{
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      d[i][j] = 1e9 + 9;
    }
  }
}
 
int main()
{
  int sx, sy;
 
  cin >> h >> w >> n;
  for (int i = 0; i < h; i++){
    for (int j = 0; j < w; j++){
      cin >> m[i][j];
      if (m[i][j] == 'S') sx = j, sy = i;
    }
  }
 
  int ans = 0;
  for (int i = 1; i <= n; i++){
    queue<pair<int, int> > q;
    q.push(make_pair(sy, sx));
 
    init();
    d[sy][sx] = 0;
    while (!q.empty()){
      pair<int, int> nv = q.front();
      q.pop();
 
      if (m[nv.first][nv.second] == '0' + i){
        sy = nv.first;
        sx = nv.second;
        ans += d[sy][sx];
        while (!q.empty()) q.pop();
        break;
      }
 
      for (int j = 0; j < 4; j++){
        int ny = nv.first + dy[j];
        int nx = nv.second + dx[j];
        if (ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
        if (d[ny][nx] != 1e9 + 9) continue;
        if (m[ny][nx] == 'X') continue;
        d[ny][nx] = d[nv.first][nv.second] + 1;
        q.push(make_pair(ny, nx));
      }
    }
  }
 
  cout << ans << endl;
}