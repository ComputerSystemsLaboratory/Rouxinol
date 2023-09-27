#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
const int MAX_V=100000;
const int INF=1000000000;
int V,E;
struct edge {int to, cost;};
typedef pair<int,int> P;
vector<edge> G[MAX_V];
int d[MAX_V];
void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> >que;
  fill(d,d+V,INF);
  d[s]=0;
  que.push(P(0,s));

  while(!que.empty()){
    P p=que.top();
    que.pop();
    int v=p.second;
    if(d[v] < p.first)continue;
    for(int i=0;i < G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to] > d[v]+e.cost){
	d[e.to] = d[v] + e.cost;
	que.push(P(d[e.to],e.to));
      }
    }
  }
}
int main(){
  int r;
  int s,t,c;
  scanf("%d %d %d",&V,&E,&r);
  for(int i=0;i<E;i++){
    scanf("%d %d %d",&s,&t,&c);
    edge e;
    e.to=t;e.cost=c;
    G[s].push_back(e);
  }
  dijkstra(r);
  for(int i=0;i<V;i++){
    if(d[i]==INF)printf("INF\n");
    else printf("%d\n",d[i]);
  }
  return 0;
}