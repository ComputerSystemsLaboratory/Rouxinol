// 5/28
// 2-5-4 ベルマンフォード
// 類題
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = INT32_MAX;

struct Edge {
    int from;
    int to;
    int cost;
    Edge(int f, int t, int c) : from(f), to(t), cost(c) { }
    bool operator<(const Edge& o) const {
        return cost < o.cost;
    }
};
using Graph = vector<Edge>;

vector<int> bellman_ford(int N, Graph& es, int s) {
    // 初期化
    vector<int> d(N, INF);
    d[s] = 0;
    bool have_negative_loop = false;

    // 辺の緩和を反復
    rep(i, N) {
        for (auto e : es) {
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if (i == N - 1) {
                    have_negative_loop = true;
                    break;
                }
            }
        }
    }

    // ネガティブループが存在する場合は全ての値を-1にする。
    // スタート地点の値でチェックする。
    if (have_negative_loop) d.assign(N, -1);
    return d;
}

int main() {
    int N;  // 与えられた有向グラフの頂点の数
    int M;  // 同辺の数（辺の重みは負の場合がある）
    int s;  // 最短経路の始点
    cin >> N >> M >> s;

    vector<Edge> es;
    rep(i, M) {
        int from;  // 辺の始点の番号（0始まり）
        int to;  // 辺の終点の番号（0始まり）
        int d;  // 重み
        cin >> from >> to >> d;
        es.push_back(Edge(from, to, d));
    }

    vector<int> d;  // 始点sからの最短経路の距離を格納
    d = bellman_ford(N, es, s);

    // negative cycleがある場合（＝収束しない）は-1を出力する。
    if (d[s] == -1) cout << "NEGATIVE CYCLE" << endl;

    // 各頂点の最短距離を出力する。経路が存在しない場合はINFと出力する。
    else {
        rep(i, N) {
            if (d[i] == INF) cout << "INF" << endl;
            else cout << d[i] << endl;
        }
    }
}

