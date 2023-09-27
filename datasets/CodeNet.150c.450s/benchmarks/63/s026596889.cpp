#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep2(i, x, n) for(int i = x, i##_len = (n); i < i##_len; ++i)
#define all(n) begin(n), end(n)
using ll = long long;
using P = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
using vc = vector<char>;
using vb = vector<bool>;
using vd = vector<double>;
vi dir = {-1, 0, 1, 0, -1, -1, 1, 1, -1};

struct Edge {
  ll to;
  ll cost;
};
using Graph = vector<vector<Edge>>;
const long long INF = 1LL << 60;
/* dijkstra(G,s,dis,prev)
    入力：グラフ G, 開始点 s, 距離を格納する dis, 最短経路の前の点を記録するprev
    計算量：O(|E|log|V|)
    副作用：dis, prevが書き換えられる
*/
void dijkstra(const Graph &G, int s, vl &dis, vi &prev) {
  int N = G.size();
  dis.resize(N, INF);
  prev.resize(N, -1);  // 初期化
  priority_queue<P, vector<P>, greater<P>>
      pq;  // 「仮の最短距離, 頂点」が小さい順に並ぶ
  dis[s] = 0;
  pq.emplace(dis[s], s);
  while(!pq.empty()) {
    P p = pq.top();
    pq.pop();
    int v = p.second;
    if(dis[v] < p.first) {  // 最短距離で無ければ無視
      continue;
    }
    for(auto &e : G[v]) {
      if(dis[e.to] >
         dis[v] + e.cost) {  // 最短距離候補なら priority_queue に追加
        dis[e.to] = dis[v] + e.cost;
        prev[e.to] = v;  // 頂点 v を通って e.to にたどり着いた
        pq.emplace(dis[e.to], e.to);
      }
    }
  }
}
/* get_path(prev, t)
    入力：dijkstra で得た prev, ゴール t
    出力： t への最短路のパス
*/
vi get_path(const vi &prev, int t) {
  vi path;
  for(int cur = t; cur != -1; cur = prev[cur]) {
    path.push_back(cur);
  }
  reverse(path.begin(), path.end());  // 逆順なのでひっくり返す
  return path;
}

int main() {
  ll v, e, r;
  cin >> v >> e >> r;
  Graph g(v);
  rep(i, e) {
    ll s, t, d;
    cin >> s >> t >> d;
    Edge ed;
    ed.to = t;
    ed.cost = d;
    g[s].push_back(ed);
  }
  vl dis;
  vi prev;
  dijkstra(g, r, dis, prev);
  rep(i, v) {
    if(dis[i] == INF)
      cout << "INF" << endl;
    else
      cout << dis[i] << endl;
  }
}
