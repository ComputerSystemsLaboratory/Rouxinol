#include<iostream>
#include<map>
#include<queue>
using namespace std;
typedef pair<int,int> P;

int bfs();
char mas[1111][1111];
int d[1111][1111];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int sx,sy;
int ans=0;
char life='0';
int h,w,n;
int INF=10000000;

int main(){
  cin >> h >> w >> n;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> mas[i][j];
      if(mas[i][j] == 'S'){
	sx = i,sy = j;
      }
    }
  }
  for(int i=1;i<=n;i++){
    life++;
    ans += bfs();
  }
  cout << ans << endl;
}

int bfs(){
  queue <P> que;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      d[i][j] = INF;
    }
  }
  que.push(P(sx,sy));
  d[sx][sy] = 0;
  while(que.size()){
    P p = que.front();
    que.pop();
    if(mas[p.first][p.second] == life){
      sx = p.first,sy=p.second;
      break;
    }
    for(int i=0;i<4;i++){
      int nx=p.first + dx[i];
      int ny=p.second + dy[i];
      if(nx >= 0 && nx < h && ny >= 0 && ny < w && mas[nx][ny] != 'X' && d[nx][ny] == INF){
	que.push(P(nx,ny));
	d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return d[sx][sy];
}