#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>
#include <utility>
#define INF (LLONG_MAX>>2)
using namespace std;

typedef long long ll;

class edge{
public:
  int to;
  int weight;
  edge(int to, int weight){
    this->to = to;
    this->weight = weight;
  }
};

ll prim(int, vector<edge>*);
ll primWithPQ(int, vector<edge>*);

int main(){
  int v, e;
  cin >> v >> e;

  vector<edge> graph[v];

  int from, to, weight;
  for(int i=0; i<e; i++){
    cin >> from >> to >> weight;

    //無向グラフなので、両方枝をプッシュ
    graph[from].push_back(edge(to, weight));
    graph[to].push_back(edge(from, weight));
  }

  ll ans = primWithPQ(v, graph);

  cout << ans << endl;

  return 0;
}

ll prim(int v, vector<edge>* graph){
  ll minCost[v];
  bool used[v];

  for(int i=0; i<v; i++){
    minCost[i] = INF;
    used[i] = false;
  }

  minCost[0] = 0;
  ll res = 0;
  while(true){
    int minv=-1;
    for(int u=0; u<v; u++){
      if(!used[u] && (minv==-1 || minCost[u]<minCost[minv])){
        minv = u;
      }
    }
    if(minv==-1) break;

    used[minv] = true;
    res += minCost[minv];

    //minCost更新
    for(int i=0; i<v; i++){
      for(int k=0; k<graph[i].size(); k++){
        minCost[i] = min(minCost[i], 1LL*graph[i][k].weight);
      }
    }
  }

  return res;
}

ll primWithPQ(int v, vector<edge>* graph){
  ll minCost[v];
  bool used[v];
  for(int i=0; i<v; i++){
    minCost[i] = INF;
    used[i] = false;
  }

  priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
  minCost[0] = 0;
  pq.push(make_pair(0, 0));//とりあえず頂点0をプッシュ

  ll res=0;
  while(!pq.empty()){
    pair<ll, int> nowPair = pq.top(); pq.pop();
    ll nowDist = nowPair.first; int nowNode = nowPair.second;
    if(used[nowNode]) continue;

    res += nowDist;
    used[nowNode] = true;

    for(int i=0; i<graph[nowNode].size(); i++){
      edge e = graph[nowNode][i];
      if(e.weight < minCost[e.to]){
        minCost[e.to] = e.weight;
        pq.push(make_pair(minCost[e.to], e.to));
      }
    }
  }

  return res;
}

