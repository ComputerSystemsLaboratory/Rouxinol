#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b);
        G[b-1].push_back(a);
    }

    // BFS のためのデータ構造
    vector<int> u(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    // 初期条件 (頂点 1 を初期ノードとする)
    u[0] = 0;
    que.push(1); // 1 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v-1]) {
            if (u[nv-1] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            u[nv-1] = v;
            que.push(nv);
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    cout << "Yes" << endl;
    for (int v = 1; v < N; ++v) cout << u[v] << endl;
}