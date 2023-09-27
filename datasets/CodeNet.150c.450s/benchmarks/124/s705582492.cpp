#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

const int INF = INT_MAX/2;

struct Edge{
  int to;
  int cost;
  Edge():to(0),cost(0){}
  Edge(int to, int cost):to(to),cost(cost){}
  bool operator<(const Edge& e)const{
    return cost < e.cost;
  }
};

void dijkstra(const int start, const vector< vector<Edge> >& G1, vector< vector<int> >& G2){
  for(int i = 0;  i < G2[start].size(); i++){
    G2[start][i] = INF;
  }

  G2[start][0] = 0;

  priority_queue< P > que; //cost, pos
  que.push(P(0, start));
  while(!que.empty()){
    P p = que.top(); que.pop();
    int pos = p.second;
    int cost = p.first;
    if(G2[start][pos] < cost) continue;
    for(int i = 0; i < G1[pos].size(); i++){
      int to = G1[pos][i].to;
      if(G2[start][to] > G2[start][pos] + G1[pos][i].cost){
        G2[start][to] = G2[start][pos] + G1[pos][i].cost;
        que.push(P(G2[start][to], to));
      }
    }
  }
}

int main(void){
  int n;
  cin >> n;
  vector< vector< Edge > >G(n);
  for(int i = 0; i < n; i++){
    int u, k; cin >> u >> k;
    for(int j = 0; j < k; j++){
      int v, c; cin >> v >> c;
      G[u].push_back(Edge(v, c));
    }
  }
  vector< vector<int> > ans(1, vector<int>(n));
  dijkstra(0, G, ans);
  for(int i = 0; i < n; i++) cout << i << " " << ans[0][i] << endl;

  return 0;
}