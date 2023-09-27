#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

const int INF=100000000;
typedef pair<int, int> P;

int n,h,w;
char maze[1111][1111];
int d[1111][1111];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int sy,sx;
int gy,gx;

int bfs();
int main(){

  int cnt=0;
  int num='0';
  char g,s;
  
  
  scanf("%d %d %d",&h,&w,&n);
  for(int i=0;i<h;i++){
    scanf("%s",maze[i]);
    for(int j=0;j<w;j++){
      if(maze[i][j]=='S'){
	sx=i;
	sy=j;
      }
      else if(maze[i][j]=='1'){
	g='1';
	gx=i;
	gy=j;
      }
    }
  }

  cnt+=bfs();
  // printf("%c=%d\n",g,cnt);

  for(int k=1;k<n;k++){
    s=g;
    sx=gx;
    sy=gy;
    g++;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	
	if(maze[i][j]==g){
	  gy=j;
	  gx=i;
	  break;
	}
      }
      if(maze[gy][gx]==g) break;
    }
    cnt+=bfs();
    // printf("%c=%d\n",g,cnt);
  }

  printf("%d\n",cnt);
  
  return 0;
}

int bfs(){
  queue<P> que;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      d[i][j]=INF;
    }
  }

  que.push(P(sx,sy));
  d[sx][sy]=0;

  while(que.size()){
    P p=que.front();
    que.pop();
    if(p.first==gx && p.second==gy){
      // printf("gx=%d gy=%d\n",gx,gy);
      break;
    }

    for(int i=0;i<4;i++){
      int nx=p.first+dx[i],ny=p.second+dy[i];
      if(0<=nx && nx<h && 0<=ny && ny<w && maze[nx][ny]!='X' && d[nx][ny]==INF){
	que.push(P(nx,ny));
	d[nx][ny]=d[p.first][p.second]+1;
      }
    }

  }
  /*
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(d[i][j]==INF){
	printf("  0");
      }else{
	printf("%3d",d[i][j]);
      }
    }
    printf("\n");
    }*/

  return d[gx][gy];
}