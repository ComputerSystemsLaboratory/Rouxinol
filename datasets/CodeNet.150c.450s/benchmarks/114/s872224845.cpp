/* minimum_spanning_tree_prim.cpp
    プリム法で最小全域木とそのコストを求める（隣接行列 向き）
    計算量: O(|E|log|V|)

    verified: AOJ ALDS1_12_A Minimum Spanning Tree
        http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_12_A&lang=jp
 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> G;  // 隣接行列での表現

/* Prim : プリム法で minimum spanning tree を求める構造体
    入力: 隣接行列でのグラフ G
    最小全域木の重みの総和: sum
    計算量: O(|V|^2)
*/
struct Prim {
    const int INF = 1e9;
    int sum;              // MSTの重みの総和
    int n;                // 頂点数
    vector<int> mincost;  // 既に確定した頂点からの最小コスト（確定済みから行けない時は INF）
    vector<bool> used;    // 既に確定したかどうか
    Prim(vector<vector<int>> const& Graph) {
        init(Graph);
    }
    void init(vector<vector<int>> const& Graph) {
        n = (int)Graph.size();
        mincost.assign(n, INF);
        used.assign(n, false);
        sum = 0;
        mincost[0] = 0;  // 始め頂点0からスタートさせる
        while (true) {
            int v = -1;
            for (int u = 0; u < n; u++) {  // コストが最小で行ける頂点 v を探す
                if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
            }
            if (v == -1) break;  // MST ができたので終了
            used[v] = true;
            sum += mincost[v];
            for (int u = 0; u < n; u++) {  // 確定した頂点から行ける頂点について、最小コストを更新
                if (Graph[v][u] != -1) mincost[u] = min(mincost[u], Graph[v][u]);
            }
        }
    }
};

int main() {
    int n;
    cin >> n;
    G.assign(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }
    Prim prim(G);
    cout << prim.sum << endl;
    return 0;
}

