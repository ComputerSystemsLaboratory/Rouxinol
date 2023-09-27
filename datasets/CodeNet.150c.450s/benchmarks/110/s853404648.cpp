#include <cstdio>
#include <iostream>
#include <queue>
#define ROP(i,n) for(int i=0;i<n;i++)
#define ROPP(i,n) for(int i=1;i<=n;i++)
#define INF 999999999
using namespace std;
typedef pair<int,int> P;
int N,M,G,gx[10],gy[10];
char MAP[1005][1005];
int DX[4]={1,0,-1,0},DY[4]={0,1,0,-1},FAR[1005][1005];
int BFS(int u){
  queue<P> que;
  ROPP(i,N){ROPP(j,M) FAR[j][i]=INF;}
  que.push(P(gx[u],gy[u]));
  FAR[gx[u]][gy[u]]=0;
  while(que.size()){
    P p=que.front();que.pop();
    if(p.first==gx[u+1]&&p.second==gy[u+1]) break;
    ROP(i,4){
      int nx=p.first+DX[i],ny=p.second+DY[i];
      if(1<=nx&&nx<=M&&1<=ny&&ny<=N
        &&MAP[nx][ny]!='X'&&FAR[nx][ny]==INF){
        que.push(P(nx,ny));
        FAR[nx][ny]=FAR[p.first][p.second]+1;
      }
    }
  }
  return FAR[gx[u+1]][gy[u+1]];
}
void solve(){
  int res=0;
  ROP(i,G){
    res+=BFS(i);
  }
  printf("%d\n",res);
}
int main(){
  scanf("%d %d %d",&N,&M,&G);
  ROPP(i,N){
    ROP(j,M+1){
      scanf("%c",&MAP[j][i]);
      if(MAP[j][i]=='S') gx[0]=j,gy[0]=i;
      ROPP(k,G) {char l='0'+k;
      if(MAP[j][i]==l) gx[k]=j,gy[k]=i;}
    }
  }
  solve();
  return 0;
}