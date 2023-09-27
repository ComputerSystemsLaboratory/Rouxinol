#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;

int W, H;
int c[1000][1000];

void dfs(int x, int y) {
  int moveX[3] = {0,-1,1};
  int moveY[3] = {0,-1,1};
  c[x][y] = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      int nx=x+moveX[i], ny=y+moveY[j];
      if(nx<0||ny<0) continue;
      if(c[nx][ny] == 1) dfs(nx,ny);
    }
  }
}

signed main() {
  cin>>W>>H;
  while (W+H!=0) {
    // i = y, j = x
    for(int i=0;i<1000;i++)for(int j=0;j<1000;j++)c[i][j]=0;
    for(int i=0;i<H;i++){
      for(int j= 0;j<W;j++){
        cin>>c[i][j];
      }
    }
    
    int ans = 0;
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (c[i][j] == 1) {
          dfs(i, j);
          ans++;
        }
      }
    }
    cout << ans << endl;
    cin >> W >> H;
  }
}

