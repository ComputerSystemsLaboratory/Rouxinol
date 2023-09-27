#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
#define int long long



#define rep(i,s,n) for(int i = s;i<n;i++)
#define repe(i,s,n) for(int i = s;i<=n;i++)
#define rrep(i,s,n) for(int i = (n)-1;i>=(s);i--)
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
typedef pair<pint,int> P1;
typedef pair<int,pint> P2;
static const ll maxLL = (ll)1 << 62;
const ll MOD=1000000007,INF=1e18;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};



// 隣接リストで使う辺を表す型
struct Edge {
  int to, cost;  // 辺の接続先頂点, 辺の重み
  Edge(int to, int cost) : to(to), cost(cost) {}  // コンストラクタ
};

typedef vector<vector<Edge> > AdjList;  // 隣接リストの型
AdjList graph;  // グラフの辺を格納した構造体
                // graph[v][i]は頂点vから出るi番目の辺Edge

vector<int> dist; // 最短距離

// 戻り値がtrueなら負の閉路を含む
bool bellman_ford(int n, int s) { // nは頂点数、sは開始頂点
  dist = vector<int>(n, INF);
  dist[s] = 0; // 開始点の距離は0
  for (int i = 0; i < n; i++) {
    for (int v = 0; v < n; v++) {
      for (int k = 0; k < graph[v].size(); k++) {
        Edge e = graph[v][k];
        if (dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
          dist[e.to] = dist[v] + e.cost;
          if (i == n - 1) return true; // n回目にも更新があるなら負の閉路が存在
        }
      }
    }
  }
  return false;
}

signed main() {
  int n, m,r;
  cin >> n >> m>>r;

  graph = AdjList(n);

  for (int i = 0; i < m; i++) {
    int from, to, cost;
    cin >> from >> to >> cost;
    graph[from].push_back(Edge(to, cost));
  }

  if(bellman_ford(n, r)){
      cout<<"NEGATIVE CYCLE"<<endl;
      return 0;
  }

  for (int i = 0; i < n; i++) {
    if (dist[i] != INF)
      cout <<dist[i] << endl;
      else cout<<"INF"<<endl;
  }

  return 0;
}
