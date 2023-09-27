#include<iostream>
#include<cstdio>
using namespace std;
int mas[100][100];
int dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};
int sx,sy,gx,gy,w,h,cnt=0;
void dfs(int x,int y);
int main(){
  while(1){
    cnt=0;
  cin >> w >> h;
  if(w==0 && h==0) break;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> mas[i][j];
    }
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(mas[i][j]==1){
        cnt++;
        dfs(j,i);
      }
    }
  }
  cout << cnt << endl;
  }
}
void dfs(int x,int y){
  mas[y][x]=0;
  for(int i=0;i<8;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx >= 0&& nx < w && ny >= 0 && ny < h && mas[ny][nx]==1){
        dfs(nx,ny);
      }
  }
}
