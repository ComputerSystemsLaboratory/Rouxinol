#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX_V 10000
#define MAX_E 100000
#define INF 1000000000
typedef pair<int ,int > P;
struct edge {int to, cost;};
int V,E;
vector<edge> G[MAX_V];
int mincost[MAX_V];
bool used[MAX_V];
int prim(){
  int res=0;
  priority_queue<P,vector<P>,greater<P> > que;
  for(int i=0;i<V;i++){
    mincost[i]=INF;
    used[i]=false;
  }
  mincost[0]=0;
  used[0]=true;
  for(int i=0;i<G[0].size();i++){
    que.push(P(G[0][i].cost,G[0][i].to));
  }
  
  while(!que.empty()){
    P p=que.top();
    que.pop();
    int v=p.second;
    if(used[v]==true)continue;
    used[v]=true;
    res+=p.first;
    for(int i=0;i<G[v].size();i++){
       que.push(P(G[v][i].cost,G[v][i].to));
    }
  }
  return res;
}
int main(){
  cin >> V >> E ;
  for(int i=0;i<E;i++){
    int s,t,c;
    cin >> s >> t >> c;
    edge e;
    e.to=t;e.cost=c;
    G[s].push_back(e);
    e.to=s;
    G[t].push_back(e);
  }
  cout << prim() << endl;
  return 0;
}