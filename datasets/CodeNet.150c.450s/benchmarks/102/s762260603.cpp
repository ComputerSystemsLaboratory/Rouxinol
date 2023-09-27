#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int h,w;
char grid[21][21];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int dfs(int x,int y){
  if(grid[y][x]=='#')return 0;
  grid[y][x]='#';
  int sum=1;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(0<=nx && nx<w && 0<=ny && ny<h)sum+=dfs(nx,ny);
  }
  return sum;
}

int main(void){

  while(cin >> w >> h,w|h){
    for(int i=0;i<h;i++)cin >> grid[i];
    
    for(int y=0;y<h;y++)
      for(int x=0;x<w;x++)
	if(grid[y][x]=='@')cout << dfs(x,y) << endl;
  }

  return 0;
}