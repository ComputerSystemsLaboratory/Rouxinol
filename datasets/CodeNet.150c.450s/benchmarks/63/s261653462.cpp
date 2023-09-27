#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
#include<queue>
#define INF 1000000000

using namespace std;

struct edge{int to,cost;};
typedef pair<int,int> P;

int v,e,r;
int s[500003],t[500003],c[500003];
int d[100003];
vector<edge> G[500003];

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+v,INF);
  d[s]=0;
  que.push(P(0,s));

  while(!que.empty()){
    P p=que.top(); que.pop();
    int u=p.second;
    if(d[u]<p.first) continue;
    for(int i=0;i<G[u].size();i++){
      edge e=G[u][i];
      if(d[e.to]>d[u]+e.cost){
        d[e.to]=d[u]+e.cost;
        que.push(P(d[e.to],e.to));
      }}}}


int main(){
  scanf("%d%d%d",&v,&e,&r);
  for(int i=0;i<e;i++){
    scanf("%d%d%d",&s[i],&t[i],&c[i]);
    edge tmp={t[i],c[i]};
    G[s[i]].push_back(tmp);
  }


  dijkstra(r);

  for(int i=0;i<v;i++){
    if(d[i]==INF) printf("INF\n");
    else printf("%d\n",d[i]);
  }
  return 0;

}