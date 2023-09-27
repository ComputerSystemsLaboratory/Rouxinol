#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1 << 29;
const int MOD = 1000000007;

int main() {
    int n, m;
    cin >> n >> m;

    // 通路を表す隣接リスト
    vector<vector<int>> graph(n);
    int a, b;
    rep(i, m) {
        cin >> a >> b;
        a--;
        b--;
        // 繋がっている部屋を追加
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // DFSのためのデータ構造
    // 部屋の深さ
    vector<int> depth(n, -1);
    queue<int> que;
    // BFSで最短路を復元する様子を図示すると木として表現できる
    // 一つ上の部屋
    vector<int> parent(n, -1);

    // 初期条件
    // スタートの部屋1
    depth[0] = 0;
    // 部屋1は距離0
    que.push(0);

    // BFS開始
    while (!que.empty()) {
        int v = que.front();
        que.pop();

        // 部屋vに対して繋がっている部屋を見ていく
        for (int nv : graph[v]) {
            // 既に調べてある場合は次の部屋へ
            if (depth[nv] != -1) continue;
            // 調べてないのなら距離を更新
            depth[nv] = depth[n] + 1;
            // 一つ上の部屋の番号を覚えておく
            parent[nv] = v;
            // キューに追加
            que.push(nv);
        }
    }

    // 必ず存在する
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) {
        cout << parent[i] + 1 << endl;
    }
}
