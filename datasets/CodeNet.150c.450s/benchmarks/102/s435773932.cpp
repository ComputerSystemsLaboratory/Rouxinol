#include<iostream>
#include<queue>

using namespace std;

typedef pair<int,int> P;
int W,H;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char ma[21][21];
int sx,sy;

int bfs(){
  int count=1;
  int d[21][21];
  queue<P> que;
   for(int i=0;i<W;i++)
   for(int j=0;j<H;j++) d[i][j]=1000000;
  que.push(P(sx,sy));
  d[sx][sy]=0;

  while(!que.empty()){
    P p=que.front(); que.pop();
    for(int i=0;i<4;i++){
	int nx=p.first+dx[i],ny=p.second+dy[i];
	if(0<=nx && nx<W && 0<=ny && ny<H && ma[nx][ny]!='#' &&
	   d[nx][ny] == 1000000){
	  que.push(P(nx,ny));
	  d[nx][ny]=0;
	  // cout<<nx<<"  "<<ny<<endl;
	  count++;
      }
    }
  }
    return count;
  }


int main(){
  while(1){
  cin>>H>>W;
  if(H+W==0) break;
  for(int i=0;i<W;i++){
    for(int j=0;j<H;j++){
      cin>>ma[i][j];
      if(ma[i][j]=='@') {
	sx=i;
	sy=j;
      }
    }
  }
  
  int ans =bfs();
  cout<<ans<<endl;
  }
  return 0;
}