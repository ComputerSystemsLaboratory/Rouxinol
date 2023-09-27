#include<iostream>
using namespace std;
 
int w, h;
int c[50][50];
int dx[8]={-1,0,1,-1,1,-1,0,1,};
int dy[8]={-1,-1,-1,0,0,1,1,1};
 
void dfs(int x,int y){
  c[y][x]=0;
  for(int i=0;i<8;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(ny>=0&&ny<h&&nx>=0&&nx<w){
      if(c[ny][nx]==1) dfs(nx, ny);
    }
  }
}
 
int main(){
 
  int ans;
 
  while(cin>>w>>h, w){
 
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>c[i][j];
      }
    }
     
    ans=0;
     
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(c[i][j]==0) continue;
	if(c[i][j]==1){
	  ans++;
	  dfs(j, i);
	}
      }
    }
     
    cout<<ans<<endl;
  }
     
     
  return 0;
}