#include<iostream>
#include<vector>
#include<string>

using namespace std;

int h,w;
string g[25];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int dfs(int x, int y){
  g[y][x]='#';
  int ans=0;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(0<=nx && nx<w && 0<=ny && ny < h && g[ny][nx]!='#'){
      ans+=dfs(nx,ny);
    }
  }
  return ans+1;
}

int main(void){

  while(cin >> w >> h, h|w){
    for(int i=0;i<h;i++)cin >> g[i];
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(g[i][j]=='@')cout << dfs(j,i) << endl;
      }
    }
  }
  
  return 0;
}