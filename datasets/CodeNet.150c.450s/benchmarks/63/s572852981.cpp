#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <utility>
#include <fstream>
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

void dijkstra(int, int, vector<edge>*);

int main(){
  int v, e, r;
  cin >> v >> e >> r;

  vector<edge> graph[v];

  int from, to, weight;
  for(int i=0; i<e; i++){
    cin >> from >> to >> weight;
    graph[from].push_back(edge(to, weight));
  }

  dijkstra(r, v, graph);

  return 0;
}

void dijkstra(int start, int v, vector<edge>* graph){
  //各頂点のスタートからの距離を格納
  ll distance[v];
  for(int i=0; i<v; i++) distance[i] = INF;
  distance[start]=0;

  //プライオリティーキュー初期化
  priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > pq;
  pq.push(make_pair(0, start));//いい感じにするため、(距離、頂点番号)で格納

  while(!pq.empty()){
    pair<ll, int> now = pq.top(); pq.pop();
    ll nowDistance = now.first, nowNode = now.second;
    if(distance[nowNode]<nowDistance) continue;

    //ノードnowからの各枝について調査
    for(int i=0; i<graph[nowNode].size(); i++){
      ll nd = nowDistance + 1LL*graph[nowNode][i].weight;
      int nextNode = graph[nowNode][i].to;
      if(nd < distance[nextNode]){
        distance[nextNode] = nd;
        pair<ll, int> next = make_pair(nd, nextNode);
        pq.push(next);
      }
    }
  }

  for(int i=0; i<v; i++) {
    if(distance[i]==INF) cout << "INF" << endl;
    else cout << distance[i] << endl;
  }
}

