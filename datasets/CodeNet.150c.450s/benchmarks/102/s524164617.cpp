#include<bits/stdc++.h>
using namespace std;

int w,h;
int mcnt=0;
char maps[22][22];
int dy[]={-1,0,1,0};
int dx[]={0,-1,0,1};

void bfs(int y,int x,int nowcnt){
  mcnt++;
  maps[y][x]='#';
  for(int i=0;i<4;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(ny>=0 && ny<h && nx>=0 && nx<w && maps[ny][nx]!='#' ){
      bfs(ny,nx,nowcnt);
      //    maps[ny][nx]='.';
    }
  }
  return;
}
int main(){
  int sy,sx;
  while(1){
    mcnt=0;
    cin>>w>>h;
    if(!(w || h ))break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>maps[i][j];
	if(maps[i][j]=='@'){
	  sy=i;
	sx=j;
	}
      }
    }
    bfs(sy,sx,0);
    cout<<mcnt<<endl;
  }
}