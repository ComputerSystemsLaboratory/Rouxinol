#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

#define INF 2000000000

typedef pair<int, int> P;
struct edge{ int to, cost;};

int V, E;
vector<edge> G[100010];
int d[100010];

void dijkstra(int s){
  
  priority_queue<P, vector<P>, greater<P> > que;
  
  for(int i = 0;i < V;i++) d[i] = INF;
  d[s] = 0;
  que.push(P(0, s));
  
  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    
    if(d[v] < p.first) continue;
    for(int i = 0;i < G[v].size();i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main(){
  
  int r, s;
  edge e;
  
  cin >> V >> E >> r;
  for(int i = 0;i < E;i++){
    cin >> s >> e.to >> e.cost;
    G[s].push_back(e);
  }
  
  dijkstra(r);
  
  for(int i = 0;i < V;i++){
    if(d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
  
  return 0;
}
