#include <bits/stdc++.h>
using namespace std;
#define REP(asd,fgh) for(int asd=0;asd<fgh;asd++)

const int dx[] = { 0, 1, 0, -1};
const int dy[] = {-1, 0, 1,  0};
int H, W;
int f[100][100];
bool used[100][100];

bool isField(int y, int x){
  return 0 <= x && x < W && 0 <= y && y < H;
}

void dfs(int y, int x){
  if(used[y][x]) return;
  used[y][x] = true;
  REP(i, 4){
    int nx = x + dx[i], ny = y + dy[i];
    if(!isField(ny, nx)) continue;
    if(f[ny][nx] == f[y][x]){
      dfs(ny, nx);
    }
  }
  return;
}

int main(void){
  while(cin >> H >> W, H || W){
    int ans = 0;
    REP(i, 100) REP(j, 100) used[i][j] = false;
    REP(i, H){
      string tmp;
      cin >> tmp;
      REP(j, W){
        f[i][j] = tmp[j];
      }
    }
    
    REP(i, H){
      REP(j, W){
        if(used[i][j]) continue;
        dfs(i, j);
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}