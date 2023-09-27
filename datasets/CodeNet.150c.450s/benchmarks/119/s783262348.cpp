#include <iostream>
#include <queue>
using namespace std;

int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={1,1,0,-1,-1,-1,0,1};
int d[55][55];

void init(){
  for(int i=0;i<55;i++)for(int j=0;j<55;j++)d[i][j]=0;
}

void Delete(int sx,int sy,int h,int w){
  queue<int>que;
  que.push(sx);que.push(sy);
  while(que.size()){
    int x=que.front();que.pop();
    int y=que.front();que.pop();
    for(int i=0;i<8;i++){
      if(d[y+dy[i]][x+dx[i]]==1&&0<=y+dy[i]&&y+dy[i]<h&&0<=x+dx[i]&&x+dx[i]<w){
	d[y+dy[i]][x+dx[i]]=0;
	que.push(x+dx[i]);
	que.push(y+dy[i]);
      }
    }
  }
}

int solve(int w,int h){
  int cnt=0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(d[i][j]==1){
	Delete(j,i,h,w);
	cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  int w,h;
  while(1){
    cin>>w>>h;
    if(w==0&&h==0)break;
    init();
    for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>d[i][j];
    cout<<solve(w,h)<<endl;
  }
}