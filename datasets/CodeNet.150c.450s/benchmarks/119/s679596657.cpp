#include <bits/stdc++.h>
using namespace std;

int w,h;
int mp[50][50];
void dfs(int y,int x){

  mp[y][x] = 0;
  for(int i=-1;i<=1;i++)
    for(int j=-1;j<=1;j++){
      int ny = y + i;
      int nx = x + j;
      if(nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
      if(mp[ny][nx] == 0) continue;
      dfs(ny,nx);
    }
}

signed main(){
  while(1){
    cin>>w>>h;
    if( w == 0 && h == 0) return 0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++) cin>>mp[i][j];

    int ans = 0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++){
        if(mp[i][j] == 0) continue;
        ans++;
        dfs(i, j);
      }

    cout<<ans<<endl;
  }
  return 0;
}

