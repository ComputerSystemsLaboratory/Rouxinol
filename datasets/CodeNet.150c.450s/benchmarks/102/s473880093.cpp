#include<iostream>
#include<utility>
#include<queue>
#define INF 10000000000
using namespace std;

typedef pair<int, int>P;

char maze[20][20];
int H,W;
int sx,sy,gx,gy;
int d[20][20];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int bfs(){
  int rel=1;
  queue<P> que;

  for(int i=0;i<H;i++)
    for(int j=0;j<W;j++) d[i][j]=0;

  que.push(P(sx,sy));
  d[sx][sy]=1;
 
  while(que.size()){
    P p=que.front();
    que.pop();

    for(int i=0;i<4;i++){
      int nx=p.first+dx[i],ny=p.second+dy[i];
      if(0<=nx&&nx<H&&0<=ny&&ny<W&&maze[nx][ny]!='#'&&d[nx][ny]==0){
	que.push(P(nx,ny));
	d[nx][ny]=1;
	rel++;
      }
    }
  }
  return rel;
}

void solve(){
  int res=bfs();
  cout<<res<<endl;
}

int main(){
  char s;

  while(1){
    cin>>W>>H;
    if(W+H==0)break;
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
	cin>>maze[i][j];
	if(maze[i][j]=='@'){
	  sx=i;
	  sy=j;
	}
      }
    }
    solve();
  }
  return 0;
}