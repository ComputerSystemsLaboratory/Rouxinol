#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;

int main() {

    int n, m; cin >> n >> m;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // BFS のためのデータ構造
    vector<int> dist(n, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;
    vector<int> from(n, -1);

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int new_v : G[v]) {
            if (dist[new_v] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 new_v について距離情報を更新してキューに追加する
            dist[new_v] = dist[v] + 1;
            que.push(new_v);
            from[new_v] = v;
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) {
        cout << from[i] + 1 << endl;
    }
    return 0;
}