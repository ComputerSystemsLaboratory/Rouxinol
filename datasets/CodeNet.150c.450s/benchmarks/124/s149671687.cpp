#include <queue>
#include <algorithm>
#include <cstdio>
#define INF 100000000
//#define MAX_E 100
#define MAX_V 105
using namespace std;

struct edge{int to, cost;};
typedef pair<int,int> P;

int V; //????????°
vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+V,INF);
  d[s]=0;
  que.push(P(0,s));
  while(!que.empty()){
    P p=que.top();que.pop();
    int v=p.second;
    if(d[v]<p.first)continue;
    for(int i=0;i<G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]>d[v]+e.cost){
        d[e.to]=d[v]+e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
}

int main(){
  int n,u,k;
  edge e;
  scanf("%d",&n);
  V=n;
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(int j=0;j<k;j++){
      scanf("%d%d",&e.to,&e.cost);
      G[u].push_back(e);
    }
  }
  dijkstra(0);
  for(int i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}