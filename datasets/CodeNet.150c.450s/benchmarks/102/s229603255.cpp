#include<iostream>
using namespace std;

int dfs(int x,int y);
int w,h;
int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};
int sum=1;
char maps[21][21];

int main(){
  int sx,sy;
  while(1){
    cin >> w >> h;
    if(w==0 && h==0) break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin >> maps[i][j];
	if(maps[i][j]=='@'){
	  sy=i;
	  sx=j;
	}
      }
    }
    
    dfs(sx,sy);
    cout << sum << endl;
    sum=1;
  }
  return(0);
}

int dfs(int x,int y){
  int nx,ny;
  for(int i=0;i<4;i++){
    nx=x+dx[i];
    ny=y+dy[i];
    maps[y][x]='#';
    if(0<=nx && nx<w && 0<=ny && ny<h && maps[ny][nx]!='#'){
      dfs(nx,ny);
      sum++;
    } 
  }
  return 0;
}