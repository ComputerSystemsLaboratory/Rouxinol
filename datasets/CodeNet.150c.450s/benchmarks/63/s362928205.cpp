#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

const int INF = 1000000000;

struct edge{int to,cost;};
vector<edge> G[100000];
int v,e,r;
typedef pair<int,int> P;
priority_queue<P,vector<P>,greater<P> > q;

int main(){
  scanf("%d %d %d",&v,&e,&r);
  for(int i=0;i<e;i++){
    int s,t,d;
    scanf("%d %d %d",&s,&t,&d);
    edge tmp;
    tmp.to = t;
    tmp.cost = d;
    G[s].push_back(tmp);
  }
  int d[v];
  fill(d,d+v,INF);
  d[r] = 0;
  q.push(P(0,r));
  while(!q.empty()){
    P p = q.top();
    q.pop();
    int nv = p.second;
    if(p.first>d[nv]) continue;
    for(int i=0;i<G[nv].size();i++){
      if(d[nv]+G[nv][i].cost<d[G[nv][i].to]){
        d[G[nv][i].to] = d[nv]+G[nv][i].cost;
        q.push(P(d[G[nv][i].to],G[nv][i].to));
      }
    }
  }
  for(int i=0;i<v;i++){
    if(d[i]==INF) printf("INF\n");
    else printf("%d\n",d[i]);
  }
  return 0;
}