#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;

#define INF (1<<30)
typedef pair< int , int > P;
struct Edge { int to,cost; };
vector< vector< Edge > > Graph;

void Dijkstra(int s,int g) {
  vector< int > min_cost(Graph.size(),INF);
  priority_queue < P ,vector< P >,greater< P > > que;
  que.push(P(0,s));
  min_cost[s] = 0;
  while(!que.empty()){
    int cost = que.top().first;
    int now = que.top().second;
    que.pop();
    //if(now == g) return cost;
    if(cost > min_cost[now]) continue;
    for(int i=0;i<Graph[now].size();i++){
      Edge e = Graph[now][i];
      if(cost + e.cost < min_cost[e.to]){
	min_cost[e.to] = cost + e.cost;
	que.push(P(min_cost[e.to],e.to));
      }
    }
  }
  for(int i=0;i<g;i++){
    if(min_cost[i] == INF) cout << "INF" << endl;
    else cout << min_cost[i] << endl;
  }
  //return (-1);
}

int main(){
  int V,E,r;
  cin >> V >> E >> r;
  Graph.resize(V);
  for(int i=0;i<E;i++){
    int a,b,c;
    cin >> a >> b >> c;
    Edge e; e.to = b; e.cost = c;
    Graph[a].push_back(e);
    //e.to = a;
    //Graph[b].push_back(e);
  }
  Dijkstra(r,V);
}