#include<bits/stdc++.h>
using namespace std;

struct edge{
  int to,cost;
};

typedef pair<int,int> pii;
#define MAX_V 100000
#define INF pow(10,9)

int V;
int E;
int r;
vector<edge> G[MAX_V];
int d[MAX_V];//???????????¢

void dijkstra(int s){

  priority_queue<pii,vector<pii>,greater<pii> > que;
  fill(d,d+V,INF);
  d[s] = 0;
  que.push(pii(0,s));

  while(!que.empty()){
    pii p = que.top();que.pop();
    int v = p.second;
    if(d[v] < p.first)continue;
    for(int i=0;i<G[v].size();i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
	d[e.to] = d[v] + e.cost;
	que.push(pii(d[e.to],e.to));
      }
    }
  }
}

int main(){
  int s,t,D;
  edge e;
  cin>>V>>E>>r;
  for(int i=0;i<E;i++){
    cin>>s>>t>>D;
    e.to = t;e.cost = D;
    G[s].push_back(e);
  }

  dijkstra(r);

  for(int i=0;i<V;i++){
    if(d[i]==pow(10,9))
      cout<<"INF"<<endl;
    else
      cout<<d[i]<<endl;
  }
  
  return 0;
}