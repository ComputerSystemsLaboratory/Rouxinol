#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
const int INF=100000000;

int ans=0,H,W,N,sx,sy,ssx,ssy;
char cheese[]={'0','1','2','3','4','5','6','7','8','9'},town[1000][1000];
int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
int d[1000][1000];

void bfs(){
  queue<P> que;
  sx=ssx; sy=ssy;
  for(int c=1;c<=N;c++){
    //??¬???1???cheese??????????????¢?´¢
    for(int i=0;i<H;i++)
      for(int j=0;j<W;j++) d[i][j]=INF;

    que.push(P(sx,sy));
    d[sx][sy]=0;

    while(que.size()){
      P p=que.front(); que.pop();
      if(town[p.first][p.second]==cheese[c]) {
        sx=p.first; sy=p.second;
        ans+=d[p.first][p.second];
        break;
      }
      for(int i=0;i<4;i++){
        int nx=p.first+dx[i],ny=p.second+dy[i];
        if(0<=nx && nx<H && 0<=ny && ny<W && town[nx][ny]!='X' && d[nx][ny]==INF){
          que.push(P(nx,ny));
          d[nx][ny]=d[p.first][p.second]+1;
        }
      }
    }
    while(!que.empty()) que.pop();

  }

  return ;
}

int main(){
  scanf("%d %d %d",&H,&W,&N);
  for(int i=0;i<H;i++) scanf("%s",&town[i]);

  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(town[i][j]=='S'){
        ssx=i; ssy=j;
        goto OUT;
      }
    }
  }
  OUT:

  bfs();

  printf("%d\n",ans);

  return 0;
}