#include <iostream>
#include <map>
#include <queue>
#define F first
#define S second
#define INF 1<<21
using namespace std;
typedef pair<int,int>P;
int bfs();
int d[1111][1111];
int sx,sy;
int h,w,n;
char num;
char s[1111][1111];
int main(){
  int ans=0;
  cin >> h >> w >> n;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> s[i][j];
      if(s[i][j]=='S'){
	sx=j,sy=i;
      }
    }
  }
  for(num='1';num<'1'+n;num++){
    ans+=bfs();
  }
  cout << ans << endl;
}

int bfs(){
  queue <P>q;
  int dx[4]={0,1,0,-1};
  int dy[4]={1,0,-1,0};
  int nx,ny;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      d[i][j]=INF;
    }
  }
  
  q.push(P(sy,sx));
  d[sy][sx]=0;
  while(q.size()){
    P p=q.front();
    q.pop();
    if(s[p.F][p.S]==num){
      sy=p.F;
      sx=p.S;
      return d[p.F][p.S];
    }    
    for(int i=0;i<4;i++){
      nx=p.S+dx[i],ny=p.F+dy[i];
      if(s[ny][nx]!='X' && nx<w && nx>=0 && ny<h && ny>=0 && d[ny][nx]==INF){
	q.push(P(ny,nx));
	d[ny][nx]=d[p.F][p.S]+1;
      }
    }
  }
}