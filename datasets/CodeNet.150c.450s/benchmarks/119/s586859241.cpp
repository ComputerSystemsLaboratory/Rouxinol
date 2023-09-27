#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int a[55][55]={};
int w,h;
void dfs(int y,int x){
  a[y][x]=0;
  int dy[8]={-1,-1,-1,0,0,1,1,1};
  int dx[8]={-1,0,1,-1,1,-1,0,1};
  for(int i=0;i<8;i++){
    int ny=y+dy[i];
    int nx=x+dx[i];
    if(nx<0||ny<0||nx>=w||ny>=h)continue;
    if(a[ny][nx]==0)continue;
    dfs(ny,nx);
  }
}
int main(){
  while(1){
    int ans=0;
    cin>>w>>h;
    if(w==0&&h==0)break;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>a[i][j];
      }
    }
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(a[i][j]==0)continue;
	ans++;
	dfs(i,j);
      }
    }
    cout<<ans<<endl;
  }
}