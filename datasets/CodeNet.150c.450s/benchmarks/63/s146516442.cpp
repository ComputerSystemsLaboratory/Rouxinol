#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using P = pair<int, int>;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
int vector_finder(std::vector<ll> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}
struct edge {
  ll to, cost;
};

const ll INF = 1000000001;
const ll MAX_V = 100010;
int V, E, r;
vector<edge> G[MAX_V];
int d[MAX_V]; // スタート地点から各ノードまでの最短距離

void dijkstra(int s) {
  priority_queue<P, vector<P>, greater<P>> q;
  fill(d, d + V, INF); // dをすべてINFで埋める
  d[s] = 0; // スタート地点の重みは0
  q.push(P(0, s));
  while(!q.empty()) {
    P p = q.top(); q.pop(); // 先頭から値を取り出す
    int v = p.second; // 次の行き先
    if(d[v] < p.first) continue;

    for(int i = 0; i < G[v].size(); ++i) {
      edge e = G[v][i]; // あるノートsから伸びる全ノードを確認する
      if(d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        q.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  cin >> V >> E;
  cin >> r;
  REP(i, E) {
    int s, t, d; cin >> s >> t >> d;
    edge e = {t, d};
    G[s].push_back(e);
  }
  dijkstra(r);
  for(int i = 0; i < V; ++i) {
    if(d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}
