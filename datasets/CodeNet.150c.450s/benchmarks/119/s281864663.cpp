#include<iostream>
using namespace std;

int w,h;
int filed[51][51];

void dfs(int x,int y){
  filed[x][y]=0;
  for(int dx=-1;dx<=1;dx++){
    for(int dy=-1;dy<=1;dy++){
      int nx=x+dx,ny=y+dy;
      if(0<=nx&&nx<h&&0<=ny&&ny<w&&filed[nx][ny]==1)dfs(nx,ny);
    }
  }
}

void solve(){
  int res=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(filed[i][j]==1){
	dfs(i,j);
	res++;
      }
    }
  }
  cout<<res<<endl;
}

int main(){
  
while(1){
    cin>>w>>h;
    if(w+h==0)break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>filed[i][j];
      }
    }
    solve();
  }
  return 0;
}