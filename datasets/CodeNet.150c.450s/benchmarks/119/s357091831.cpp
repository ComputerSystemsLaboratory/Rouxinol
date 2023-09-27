#include<iostream>
#include<algorithm>

using namespace std;

int w,h;
int g[51][51];

void dfs(int x,int y){
  g[y][x]=0;
  for(int dy=-1;dy<=1;dy++){
    for(int dx=-1;dx<=1;dx++){
      int nx=x+dx,ny=y+dy;
      if(0<=nx && nx<w && 0<=ny && ny<h && g[ny][nx]==1)
	dfs(nx,ny);
    }
  }
}

int main(void){

  while(cin >> w >> h, w|h){
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)cin >> g[i][j];
    
    int cnt=0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	if(g[i][j]==1)cnt++,dfs(j,i);

    cout << cnt << endl;
  }
  
  return 0;
}