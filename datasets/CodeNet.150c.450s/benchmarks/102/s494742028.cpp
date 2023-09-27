#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int w,h;
char tbl[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
bool visited[30][30];
int ans;

void dfs(int x,int y){
  visited[y][x] = 1;
  ++ans;
  for(int i=0;i<4;++i){
    int mx = x+dx[i];
    int my = y+dy[i];
    if(mx>=w || my>=h || mx<0 || my<0) continue;
    if(visited[my][mx] || tbl[my][mx]=='#') continue;
    dfs(mx,my);
  }
}

int main(){
  while(cin>>w>>h,w||h){
    memset(visited,0,sizeof(visited));
    ans = 0;
    for(int i=0;i<h;++i) cin >> tbl[i];
    int sx=-1,sy=-1;
    for(int i=0;i<h;++i)
      for(int j=0;j<w;++j)
	if(tbl[i][j]=='@')
	  sy=i,sx=j;

    dfs(sx,sy);
    cout << ans << endl;
}
  return 0;
}