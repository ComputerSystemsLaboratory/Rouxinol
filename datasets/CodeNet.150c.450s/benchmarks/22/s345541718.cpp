#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
template<class T>inline bool chmax(T &a, const T &b){if(a < b){a = b; return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if(a > b){a = b; return 1;}return 0;}
typedef long long ll;

struct Edge{
  int to, cost; // 辺の接続先頂点, 辺の重み
  Edge(int to, int cost) : to(to), cost(cost){} // コンストラクタ
};

const int INF = 1e9;
vector<int> d; // 最短距離

// ベルマンフォード法
// 戻り値がtrueなら負の閉路を含む
bool bellmanford(int n, int s, vector<vector<Edge> > graph) { // nは頂点数、sは開始頂点
  d.assign(n, INF);
  d[s] = 0; // 開始点の距離は0
  REP(i, n) REP(v, n) REP(k, graph[v].size()){
    Edge e = graph[v][k];
    if(d[v] != INF && d[e.to] > d[v] + e.cost){
      d[e.to] = d[v] + e.cost;
      if (i == n - 1) return true; // n回目にも更新があるなら負の閉路が存在
    }
  }
  return false;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, E, s; cin >> N >> E >> s;
  vector<vector<Edge> > G(N, vector<Edge>());
  REP(i, E){
    int from, to, cost; cin >> from >> to >> cost;
    G[from].push_back(Edge(to, cost));
  }
  
  if(bellmanford(N, s, G)){
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  };
  
  for(int i = 0; i < N; i++){
    if(d[i] != INF){
      cout << d[i] << endl;
    }else{
      cout << "INF" << endl; 
    }
  }
}

