#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define INF 334334334334
const int MAX_V=100005;

struct edge{int to, cost;};
typedef pair<int,int> P;//first:???????????¢???second:???????????????
vector<edge> G[MAX_V];
long long int d[MAX_V];
int V,E,s;

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;//
  fill(d,d+V,INF);
  d[s]=0;
  que.push(P(0,s));

  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    if(d[v]< p.first) continue;
    for(int i=0; i<G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to]>d[v]+e.cost){
        d[e.to]=d[v]+e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
}

int main(){
  scanf("%d%d%d",&V,&E,&s);
  for (int i=0; i<E; i++) {
      int from, to, cost;
      scanf("%d", &from);
      scanf("%d", &to);
      scanf("%d", &cost);
      edge e;
      e.to = to;
      e.cost = cost;
      G[from].push_back(e);
    }

  dijkstra(s);

  for(int i=0; i<V;i++){
    if(d[i]==INF)printf("INF\n");
    else printf("%lld\n",d[i]);
  }
  return 0;
}