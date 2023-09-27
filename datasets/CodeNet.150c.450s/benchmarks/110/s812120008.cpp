#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr first
#define sc second
typedef pair<int,int> pii;
typedef vector<int> vi;
const int INF = (1<<25);
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

char maze[1001][1001];
int d[1001][1001];
int h,w,n;
int sx,sy;

int bfs(int num){
  queue<pii> que;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      d[i][j]=INF;
    }
  }

  que.push(pii(sy,sx));
  d[sy][sx]=0;

  while(que.size()){
    pii p=que.front();que.pop();
    if(maze[p.fr][p.sc]=='1'+num) {
      sy=p.fr;
      sx=p.sc;
      return d[p.fr][p.sc];
    }
    for(int i=0;i<4;i++){
      int ny=p.fr+dy[i],nx=p.sc+dx[i];
      if(0<=ny && ny<h && 0<=nx && nx<w && maze[ny][nx]!='X' && d[ny][nx]==INF){
	que.push(pii(ny,nx));
	d[ny][nx]=d[p.fr][p.sc]+1;
      }
    }
  }
}

int main(){
  cin>> h>> w>> n;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>> maze[i][j];
      if(maze[i][j]=='S') {
	sy=i;sx=j;
      }
    }
  }

  int res=0;
  for(int i=0;i<n;i++){
    res+=bfs(i);
  }

  cout<< res<< endl;
}