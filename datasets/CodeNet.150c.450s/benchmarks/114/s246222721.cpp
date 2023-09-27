#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (ll)n; i++)
#define PI 3.14159265358979323846
#define vll vector<long long>
using namespace std;
using ll = long long;
using ld = long double;

// -------------------------------------------------
class UnionFind {
private:
  ll n;
  vll P;
  ll root(ll x);
  void setN(ll N);
  void init();

public:
  UnionFind(ll N);
  void unite(ll x, ll y);
  bool same(ll x, ll y);
};

// コンストラクタ
UnionFind::UnionFind(ll N) {
  setN(N);
  init();
}

// nを変更
void UnionFind::setN(ll N) { n = N; }

// Union-Find Treeを初期化する
void UnionFind::init() {
  P.clear();
  rep(i, n) { P.push_back(i); }
}

// 根の値を返す
ll UnionFind::root(ll x) {
  if (P[x] == x) { return x; }
  return (P[x] = root(P[x])); // パス圧縮しつつ返す
}

// 木を結合する（rankはとりあえず無視）
void UnionFind::unite(ll x, ll y) { P[root(x)] = root(y); }

// xとyが同じ集合にあるか判別
bool UnionFind::same(ll x, ll y) {
  if (root(x) == root(y)) {
    return true;
  } else {
    return false;
  }
}
// -------------------------------------------------

// ----本問について----
// 問題：最小全域木
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_12_A
// 所要時間：
// 学んだこと：
// ------------------

// ----ここから本問のソースコード----

struct edge {
  ll w, s, e; // weight, start, end

  edge(ll W, ll S, ll E) {
    w = W;
    s = S;
    e = E;
  }
};

bool cmpI(const edge &a, const edge &b) { return a.w < b.w; }

// グローバル変数（入力）
ll n;
vector<vll> A;

// 隣接行列から辺の情報を取り出す
vector<edge> MakeEdges() {
  vector<edge> edges;
  rep(i, n) {
    for (ll j = i + 1; j < n; j++) {
      if (A[i][j] != -1) { edges.push_back(edge(A[i][j], i, j)); }
    }
  }
  return edges;
}

// 入力
void input() {
  cin >> n;
  rep(i, n) {
    vll a(n);
    rep(j, n) { cin >> a[j]; }
    A.push_back(a);
  }
}

// 最小全域木の重みの合計を求める（クラスカル法）．
void solve() {
  vector<edge> edges = MakeEdges();
  // 辺を重みをキーに昇順ソート
  sort(edges.begin(), edges.end(), cmpI);
  UnionFind u(n);
  ll ans = 0;
  rep(i, edges.size()) {
    if (!u.same(edges[i].s, edges[i].e)) { // 閉路ができない
      u.unite(edges[i].s, edges[i].e);
      ans += edges[i].w;
    }
  }
  cout << ans << endl;
}

int main() {
  input();
  solve();
  return 0;
}

