#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int c[51][51];
int w, h;
int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { -1,-1,0,1,1,1,0,-1 };

void dfs(int i, int j) {
  if(i < 0 || i >= h || j < 0 || j >= w || c[i][j] == 0)
    return;

  c[i][j] = 0;
  for(int k=0;k<8;k++) {
    dfs(i+dy[k], j+dx[k]);
  }
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  while(true) {
    cin >> w >> h;
    if(w == 0 && h == 0)
      break;
    for(int i=0;i<h;i++) {
      for(int j=0;j<w;j++) {
        cin >> c[i][j];
      }
    }

    ll ans = 0;
    for(int i=0;i<h;i++) {
      for(int j=0;j<w;j++) {
        if(c[i][j] == 1) {
          ans++;
          dfs(i, j);
        }
      }
    }
    cout << ans << endl;

  }
}

