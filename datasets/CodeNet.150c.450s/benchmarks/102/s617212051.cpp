#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
char field[21][21];
char visit[21][21];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int W,H;
void dfs(int y, int x){
  visit[y][x] = 1;
  rep(i,4){
    int ny = y+dy[i];
    int nx = x+dx[i];
    if(field[ny][nx] == '.'
       && visit[ny][nx] == 0
       && nx >= 0
       && nx < W
       && ny >= 0
       && ny < H){
          dfs(ny,nx);
        }
  }
}
int main(){
  while(cin >> W >> H && W){
    int y,x;
    rep(i,H){
      rep(j,W){
        cin >> field[i][j];
        if(field[i][j] == '@') y=i,x=j;
      }
    }
    memset(visit,0,sizeof(visit));
    dfs(y,x);
    int ans = 0;
    rep(i,H){
      rep(j,W){
        ans += visit[i][j];
      }
    }
    cout << ans << endl;
  }
  return 0;
}

