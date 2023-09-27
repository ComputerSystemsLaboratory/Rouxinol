#include <cstdio>
#include <iostream>
#include <queue>
#define ROP(i,n) for(int i=0;i<n;i++)
#define ROPP(i,n) for(int i=1;i<=n;i++)
#define NIL -1
using namespace std;
typedef pair<int,int> P;
int N,M,G,gx[10],gy[10];
char MAP[1005][1005];
int DX[4]={1,0,-1,0},DY[4]={0,1,0,-1},FAR[1005][1005];
int BFS(int u){
  queue<P> que;
  ROPP(i,N){ROPP(j,M) FAR[j][i]=NIL;}
  que.push(P(gx[u],gy[u]));
  FAR[gx[u]][gy[u]]=0;
  while(que.size()){
    P p=que.front();que.pop();
    if(p.first==gx[u+1]&&p.second==gy[u+1]) break;
    ROP(i,4){
      int nx=p.first+DX[i],ny=p.second+DY[i];
      if(1<=nx&&nx<=M&&1<=ny&&ny<=N
        &&MAP[nx][ny]!='X'&&FAR[nx][ny]==NIL){
        que.push(P(nx,ny));
        FAR[nx][ny]=FAR[p.first][p.second]+1;
      }
    }
  }
  return FAR[gx[u+1]][gy[u+1]];
}
void solve(){
  int res=0;
  ROP(i,G) res+=BFS(i);
  printf("%d\n",res);
}
int main(){
  scanf("%d %d %d",&N,&M,&G);
  ROPP(i,N){
    ROP(j,M+1){
      scanf("%c",&MAP[j][i]);
      if(MAP[j][i]=='S') gx[0]=j,gy[0]=i;
      if(MAP[j][i]=='1') gx[1]=j,gy[1]=i;
      if(MAP[j][i]=='2') gx[2]=j,gy[2]=i;
      if(MAP[j][i]=='3') gx[3]=j,gy[3]=i;
      if(MAP[j][i]=='4') gx[4]=j,gy[4]=i;
      if(MAP[j][i]=='5') gx[5]=j,gy[5]=i;
      if(MAP[j][i]=='6') gx[6]=j,gy[6]=i;
      if(MAP[j][i]=='7') gx[7]=j,gy[7]=i;
      if(MAP[j][i]=='8') gx[8]=j,gy[8]=i;
      if(MAP[j][i]=='9') gx[9]=j,gy[9]=i;
    }
  }
  solve();
  return 0;
}