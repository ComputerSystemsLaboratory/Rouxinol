#include <iostream>
using namespace std;
#define INF 1e9
#define MAX_E 500000
#define MAX_V 100000

struct edge {int u, v, cost;};
edge es[MAX_E];

int dis[MAX_V];
int V, E, r;

void bellman_ford(int s){
  for(int i = 0; i < V; i++) dis[i] = INF;
  dis[s] = 0;
  while(true){
    bool update = false;
    for(int i = 0; i < E; i++){
      edge e = es[i];
      if(dis[e.u] != INF && dis[e.v] > dis[e.u] + e.cost){
        dis[e.v] = dis[e.u] + e.cost;
        update = true;
      }
    }
    if(!update) break;
  }
}

int main(void){
  int s, t, d;
  cin >> V >> E >> r;
  for(int i = 0; i < E; i++){
    cin >> s >> t >> d;
    edge e;
    e.u = s; e.v = t; e.cost = d;
    es[i] = e;
  }
  bellman_ford(r);
  for(int i = 0; i < V; i++){
    if(dis[i] == INF) cout << "INF" << endl;
    else cout << dis[i] << endl;
  }
  return 0;
}