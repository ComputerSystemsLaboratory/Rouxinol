#include<iostream>
#include<queue>
using namespace std;
     
const int INF=100000000;
     
char maze[20][20];
int w, h;
int sx, sy;
int cnt;
     
int d[20][20];
     
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};
     
     
int bfs(){
  queue< pair<int, int> > que;
     
  for(int i=0;i<h;i++) for(int j=0;j<w;j++) d[i][j]=INF;
     
  que.push(pair<int, int>(sy, sx));
  d[sy][sx]=0;
     
  while(que.size()){
    pair<int, int> p=que.front();
    que.pop();
     
    for(int i=0;i<4;i++){
      int ny=p.first+dy[i], nx=p.second+dx[i];
     
      if(0<=ny&&ny<h&&0<=nx&&nx<w&&maze[ny][nx]!='#'&&d[ny][nx]==INF){
	que.push(pair<int, int>(ny, nx));
	d[ny][nx]=d[p.first][p.second]+1;
	cnt++;
      }
    }
  }
  return cnt+1;
}
     
int main(){
     
  while(cin>>w>>h, w){
  
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>maze[i][j];
	if(maze[i][j]=='@'){
	  sy=i;
	  sx=j;
	}
      }
    }
    cnt=0;
    int res=bfs();
     
    cout<<res<<endl;

  }
     
  return 0;
}