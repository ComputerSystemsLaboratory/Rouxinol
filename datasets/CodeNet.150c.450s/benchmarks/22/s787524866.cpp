//Bellman_Ford法
//ABC061D

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
#define REP(i, limit) for(int i=0; i< limit; ++i)
#define LINT long long


struct edge {
  int to;
  LINT cost;  // 辺の接続先頂点, 辺の重み
  edge(int to, LINT cost) : to(to), cost(cost) {}  // コンストラクタ
};

typedef vector<vector<edge> > AdjList;  // 隣接リストの型
AdjList graph;  // グラフの辺を格納した構造体
                // graph[v][i]は頂点vから出るi番目の辺edge

const LINT INF = 1000000000000000;

vector<LINT> dist; // 最短距離

// 戻り値がtrueなら負の閉路を含む
bool bellman_ford(int n, int s) { // nは頂点数、sは開始頂点
  dist = vector<LINT>(n, INF);
  dist[s] = 0; // 開始点の距離は0
  for (int i = 0; i < n; i++) {
    for (int v = 0; v < n; v++) {
      for (int k = 0; k < graph[v].size(); k++) {
        edge e = graph[v][k];
        if (dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
          dist[e.to] = dist[v] + e.cost;
          if (i == n - 1) return true; // n回目にも更新があるなら負の閉路が存在
        }
      }
    }
  }
  return false;
}

int main() {
  int n, m, r;
  cin >> n >> m >> r;

  graph = AdjList(n);

  for (int i = 0; i < m; i++) {
    int from, to;
    LINT cost;
    cin >> from >> to >> cost;
    graph[from].push_back(edge(to, cost));
  }

  bool closedloop = bellman_ford(n, r);
  if(closedloop) cout << "NEGATIVE CYCLE" << endl;
  else
  REP(i, n) {
    if(dist[i] == INF) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }

  return 0;
}

