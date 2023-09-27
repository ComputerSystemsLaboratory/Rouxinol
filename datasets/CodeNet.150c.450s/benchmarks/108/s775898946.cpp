
//push(),pop():C++ではstackと統一されいる
//front():先頭の要素が何かを返す
//back():末尾の要素が何であるかを返す
//empty():キューが空であるかどうかを調べる
//size():要素数を調べる
#include<stdio.h>
#include <iostream>
#include <queue>
using namespace std;
#define MAX 101
#define WHITE 0
#define GRAY 1
#define BLACK 2
static const int INFTY = (1<<21);

int G[MAX][MAX],color[MAX],d[MAX],num;

void bfs(int s){
  int u;
  queue<int> Q; //Qを使うことでエンキュー、デキューの操作が容易になる
  for(int i=1; i<=num; i++) {
    d[i] = INFTY;
  }
  Q.push(s);
  d[s] = 0;
  while(!Q.empty()){
    u = Q.front();
    Q.pop();
    for(int v=1; v<=num; v++){
      if(G[u][v] == 0) continue;
      if(d[v] != INFTY) continue;
      d[v] = d[u] + 1;
      Q.push(v);
    }
  }
}


int main(){
  int i,j,u,k,v;

  scanf("%d",&num);
  for(i=1; i<=num; i++){
    color[i] = WHITE;
    for(j=1; j<=num; j++){
      G[i][j] = 0;
    }
  }
  for(i=1; i<=num; i++){
    scanf("%d%d",&u,&k);
    for(j=1; j<=k; j++){
      scanf("%d",&v);
      G[u][v] = 1;
    }
  }

  bfs(1);

  for(i=1; i<=num; i++) {
    if(d[i] == INFTY) printf("%d -1\n",i);
    else printf("%d %d\n",i,d[i]);
  }

  return 0;
}