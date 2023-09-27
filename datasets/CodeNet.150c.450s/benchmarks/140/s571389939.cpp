#include<bits/stdc++.h>
using namespace std;

#define MAX_V 100000
#define INF 111111111
struct edge{int to,cost;};
typedef pair<int ,int> P; //firstは距離、secondは頂点の番号

int V; //頂点数
vector<edge> G[MAX_V]; //添字がfrom
int d[MAX_V]; //最短コスト

int prim(){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+V,INF);
  int res=0;
  que.push(P(0,0));
  while(!que.empty()){
    P p=que.top();
    que.pop();
    int v=p.second;
    if(d[v]!=INF)continue;
    res+=p.first;
    d[v]=p.first;
    for(int i=0;i<G[v].size();i++){
      edge e=G[v][i];
      if(d[e.to]==INF)que.push(P(e.cost,e.to));
    }
  }
  return res;
}

int main(){
  int E;
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int s,t,c;
    edge e;
    cin>>s>>t>>c;
    e.to=t,e.cost=c;
    G[s].push_back(e);
    e.to=s;
    G[t].push_back(e);
  }
  cout<<prim()<<endl;
  return 0;
}

