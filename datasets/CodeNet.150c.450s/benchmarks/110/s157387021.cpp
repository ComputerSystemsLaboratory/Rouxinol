#include<bits/stdc++.h>
using namespace std;

#define INF 1000000

typedef pair<int,int>P;

char maps[1001][1001];
int check[1000][1000];
int dy[4]={-1,0,1,0};
int dx[4]={0,-1,0,1};
int h,w,cheese;
int sy,sx;
char tekitou='1';

int bfs(){
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      check[i][j]=INF;
    }
  }
  queue<P> que;
  que.push(P(sy,sx));
  check[sy][sx]=0;
  while(!que.empty()){
    P p=que.front();que.pop();
    int y=p.first;
    int x=p.second;
    //goal
    if(maps[y][x]==tekitou){
      tekitou+=1;
      sy=y;
      sx=x;
      return check[y][x];
    }
    for(int i=0;i<4;i++){
      int ny = y+dy[i];
      int nx = x+dx[i];
      if(ny>=0 && ny<h && nx>=0 && nx<w && check[ny][nx]==INF && maps[ny][nx]!='X'){
	check[ny][nx]=check[y][x]+1;
	que.push(P(ny,nx));
      }
    }
  }
}

int main(){
  int ans=0;
  cin>>h>>w>>cheese;
  for(int i=0;i<h;i++){
    cin>>maps[i];
  }

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(maps[i][j]== 'S' ){
	sy=i;
	sx=j;
	break;
      }
    }
  }
  ans+=bfs();

  for(int i=0;i<cheese-1;i++){
    ans+=bfs();
  }
  cout<<ans<<endl;
}