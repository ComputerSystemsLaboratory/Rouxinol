#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string.h>
#include<queue>

using namespace std;

typedef pair<int,int> P;
#define INF 1000000

int dx[4]={1,0,0,-1}, dy[4]={0,1,-1,0};
int d[1010][1010];
char r[1010][1010];
char point[10]={'S','1','2','3','4','5','6','7','8','9'};
int H,W,N;
int res=0;

int bfs(int ah,int aw,int bh,int bw){
  queue<P> que;
  for(int i=0;i<H;i++)
    for(int j=0;j<W;j++)
      d[i][j]=INF;

  d[ah][aw]=0;
  que.push(P(ah,aw));

  while(que.size()){
    P p= que.front();
    que.pop();
    if(p.first==bh && p.second==bw) break;

    for(int i=0;i<4;i++){
      int nh=p.first+dx[i], nw=p.second+dy[i];

      if(0<=nh && nh<H && 0<=nw && nw<W && r[nh][nw]!='X' && d[nh][nw]==INF){
        que.push(P(nh,nw));
        d[nh][nw]=d[p.first][p.second]+1;
      }
    }
  }
  return d[bh][bw];
}

void solve(){
  queue<P> kyu;
  for(int k=0;k<=N;k++){
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        if(r[i][j]==point[k])
          kyu.push(P(i,j));
      }
    }
  }

  for(int i=0;i<N;i++){
    P p1=kyu.front();
    kyu.pop();
    P p2=kyu.front();
    res+=bfs(p1.first,p1.second,p2.first,p2.second);
  }

  printf("%d\n",res);

}


int main(){
  scanf("%d%d%d",&H,&W,&N);

  for(int i=0;i<H;i++)
    scanf("%s",&r[i]);

  solve();

  return 0;
}