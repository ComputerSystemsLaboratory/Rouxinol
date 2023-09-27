#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

long long int INF = 1000000000000LL;
#define MAX_V 120000

struct edge{
  long long int to, cost;
};

typedef pair<long long int, long long int> P;

vector<edge> G[MAX_V];
long long int d[MAX_V];

void shortest_path(int s, int V){
  priority_queue<P, vector<P>, greater<P> > que;
  for(int i = 0; i < V; i++){
    d[i] = INF;
  }
  d[s] = 0;
  que.push(P(0, s));

  while(!que.empty()){
    P p = que.top();
    que.pop();
    int v = p.second;
    if(d[v] < p.first){
      continue;
    }
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to] > e.cost + d[v]){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main(){
  int V, E, s;
  cin >> V >> E >> s;

  for(int i = 0; i < E; i++){
    int u, v, cost;
    edge e;
    cin >> u >> v >> cost;
    e.cost = cost;
    e.to = v;
    G[u].push_back(e);
  }

  shortest_path(s, V);

  for(int i = 0; i < V; i++){
    if(d[i] == INF){
      cout << "INF" << endl;
    }else{
      cout << d[i] << endl;
    }
  }

  return 0;
}

