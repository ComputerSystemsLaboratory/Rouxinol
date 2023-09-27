#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int INF = 1000000000;

struct edge{int to,cost;};
typedef pair<int,int> P;
int v,e;
vector<edge> G[10000];
bool used[10000];
int ans = 0;
priority_queue<P,vector<P>,greater<P> > q;

int main(){
  scanf("%d %d",&v,&e);
  for(int i=0;i<e;i++){
    int s,t,d;
    scanf("%d %d %d",&s,&t,&d);
    edge e;
    e.cost = d;
    e.to = t;
    G[s].push_back(e);
    e.to = s;
    G[t].push_back(e);
  }
  fill(used,used+v,false);
  q.push(P(0,0));
  while(!q.empty()){
    P p = q.top(); q.pop();
    int nv = p.second;
    if(used[nv]) continue;
    ans += p.first;
    used[nv] = true;
    for(int i=0;i<G[nv].size();i++){
      q.push(P(G[nv][i].cost,G[nv][i].to));
    }
  }
  printf("%d\n",ans);
  return 0;
}