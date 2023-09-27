#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using P = pair<ll, int>;
const ll INF = 1e+18;

struct edge{
  int to, cost;
  edge(int To, int Cost): to(To), cost(Cost){}
};

void dijkstra(vector<vector<edge>> &graph, vector<ll> &dist, int start) {
  int V = graph.size();
  dist.resize(V, INF);
  dist[start] = 0;
  priority_queue<P, vector<P>, greater<P>> pq;
  pq.emplace(dist[start], start);
  while(!pq.empty()) {
    P p = pq.top();
    pq.pop();
    int v = p.second;
    if(dist[v] < p.first) {
      continue;
    }
    for(auto node: graph[v]) {
      if(node.to >= V) {
        cout << node.to << endl;
      }
      if(dist[node.to] > dist[v] + node.cost) {
        dist[node.to] = dist[v] + node.cost;
        pq.emplace(dist[node.to], node.to);
      }
    }
  }
  
}

int main() {
  int v, e, start;
  cin >> v >> e >> start;
  vector<vector<edge>> graph(v);
  rep(i, e) {
    int s, t, d;
    cin >> s >> t >> d;
    graph[s].push_back(edge(t, d));
  }
  vector<ll> dist;
  dijkstra(graph, dist, start);
  rep(i, v) {
    if(dist[i] == INF) {
      cout << "INF" << endl;
    }
    else {
    cout << dist[i] << endl;
    }
  }
  return 0;
}
