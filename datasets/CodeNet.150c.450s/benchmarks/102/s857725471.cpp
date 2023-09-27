#include<iostream>
using namespace std;

char mas[20][20];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int sx,sy;
int w,h,cnt;

void dfs(int x,int y);

int main(){
  while(1){
    cin>>w>>h;
    if(w==0&&h==0)break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>mas[i][j];
	if(mas[i][j]=='@'){
	  sx=j;
	  sy=i;
	}
      }
    }
    cnt=0;
    dfs(sx,sy);
    cout<<cnt<<endl;
  }
}

void dfs(int x,int y){
  mas[y][x]='#';
  cnt++;
  for(int i=0;i<4;i++){
    int nextx=x+dx[i];
    int nexty=y+dy[i];
    if(0<=nextx && nextx<w && 0<=nexty && nexty<h && mas[nexty][nextx]=='.'){
      dfs(nextx,nexty);
    }
  }
  return;
}