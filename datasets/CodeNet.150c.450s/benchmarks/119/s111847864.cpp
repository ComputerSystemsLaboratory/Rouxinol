#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {0,1,-1,1,-1,0,1,-1};
bool visited[100][100];
int w,h;
int f[100][100];
void dfs(int x,int y){
  visited[y][x] = true;
  for(int i=0;i<8;++i){
    int mx=x+dx[i];
    int my=y+dy[i];
    if(mx>=w||my>=h||mx<0||my<0) continue;
    if(visited[my][mx] || !f[my][mx]) continue;
    dfs(mx,my);
  }
}

int main(){
  while(cin>>w>>h,w||h){
    memset(visited,0,sizeof(visited));
    for(int i=0;i<h;++i)
      for(int j=0;j<w;++j) cin >> f[i][j];
    int cnt = 0;
    for(int i=0;i<h;++i)
      for(int j=0;j<w;++j){
	if(f[i][j]&&!visited[i][j]){
	  ++cnt;
	  dfs(j,i);
	}
      }
    cout << cnt << endl;
  }
  return 0;
}