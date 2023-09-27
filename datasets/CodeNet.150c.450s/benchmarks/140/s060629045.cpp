#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
const int LLINF = 1001001001;
using ll = long long;

/**
 * @brief クラスカル法で最小全域木のコストを求める
 * 
 */

// 頂点a, bをつなぐコストcostの（無向）辺
struct Edge {
  int a, b, cost;

  // sortできるよう、コストの大小で順序定義
  bool operator<(const Edge& o) const {
    return cost < o.cost;
  }
};

int V, E;

// 素集合データ構造
struct UnionFind {
  // parent[i]：データiが属する木の親の番号。i == parent[i]のとき、データiは木の根ノードである
  vector<int> parent;
  // sizes[i]：根ノードiの木に含まれるデータの数。iが根ノードでない場合は無意味な値となる
  vector<int> sizes;

  UnionFind(int v_num) : parent(v_num), sizes(v_num, 1) {
    // 最初は全てのデータiがグループiに存在するものとして初期化
    for (int i = 0; i < v_num; ++i) parent[i] = i;
  }

  // データxが属する木の根を得る
  int find(int x) {
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x]);  // 根を張り替えながら再帰的に根ノードを探す
  }

  // 2つのデータx, yが属する木をマージする
  void unite(int x, int y) {
    // データの根ノードを得る
    x = find(x);
    y = find(y);

    // 既に同じ木に属しているならマージしない
    if (x == y) return;

    // xの木がyの木より大きくなるようにする
    if (sizes[x] < sizes[y]) swap(x, y);

    // xがyの親になるように連結する
    parent[y] = x;
    sizes[x] += sizes[y];
    // sizes[y] = 0;  // sizes[y]は無意味な値となるので0を入れておいてもよい
  }

  // 2つのデータx, yが属する木が同じならtrueを返す
  bool same(int x, int y) {
    return find(x) == find(y);
  }

  // データxが含まれる木の大きさを返す
  int size(int x) {
    return sizes[find(x)];
  }
};

// https://www.youtube.com/watch?v=CYEPCBFIwrY が流れわかりやすい
int kruskal(vector<Edge>& es, int V) {
  // costが小さいやつから順になるようソートする
  sort(es.begin(), es.end());

  UnionFind uf(V);
  int min_cost = 0;

  for (int ei = 0; ei < es.size(); ++ei) {
    Edge& e = es[ei];
    if (!uf.same(e.a, e.b)) {
      // 辺を追加しても閉路ができないなら、その辺を採用する
      min_cost += e.cost;
      uf.unite(e.a, e.b);
    }
  }
  return min_cost;
}

int main() {
  int v_num, e_num;  // V: 頂点数 | E: 辺の数
  cin >> v_num >> e_num;

  vector<Edge> es(e_num);  // edge setの略

  /** 
   * 頂点は0スタートな入力を想定しているので、--でデクリメントしていない。
   * 
   * 辺を格納していく。閉路が存在してもok。
   * 1 3 10
   * 4 2 20
   * 1 5 15
   * のような頂点1、頂点2、コストをあらわす入力を想定している。
   * e_num: 辺の本数
  */
  for (int i = 0; i < e_num; ++i) {
    cin >> es[i].a >> es[i].b >> es[i].cost;
  }

  cout << kruskal(es, v_num) << endl;

  return 0;
}

