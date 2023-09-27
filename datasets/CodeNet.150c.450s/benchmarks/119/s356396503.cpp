#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int w,h;
int grid[51][51];

void dfs(int x,int y){
  if(grid[y][x]==0)return;
  grid[y][x]=0;
  for(int i=-1;i<2;i++){
    for(int j=-1;j<2;j++){
      int ny=y+i,nx=x+j;
      if(0<=nx && nx<w && 0<=ny && ny<h)dfs(nx,ny);
    }
  }
}

int main(void){

  while(cin >> w >> h,w|h){
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)cin >> grid[i][j];
    
    int ans=0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	if(grid[i][j]==1)ans++,dfs(j,i);
    cout << ans << endl;
  }

  return 0;
}