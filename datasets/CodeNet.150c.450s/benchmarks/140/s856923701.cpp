#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

//Prim
struct edge{int to,cost;};

int main(){
  int V,E;
  vector<edge> G[10000];
  scanf("%d %d",&V,&E);
  for(int i=0;i<E;i++){
    int s,t,w;
    scanf("%d %d %d",&s,&t,&w);
    edge tmp;
    tmp.cost = w;
    tmp.to = t;
    G[s].push_back(tmp);
    tmp.to = s;
    G[t].push_back(tmp);
  }
  int ans = 0;
  bool used[V];
  fill(used,used+V,false);
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
  q.push(make_pair(0,0));
  while(!q.empty()){
    pair<int,int> p = q.top();
    q.pop();
    int c = p.first;
    int v = p.second;
    if(used[v]) continue;
    used[v] = true;
    ans+=c;
    for(int i=0;i<G[v].size();i++){
      q.push(make_pair(G[v][i].cost,G[v][i].to));
    }
  }
  printf("%d\n",ans);
  return 0;
}