/* warshall_floyd.cpp
    ワーシャルフロイド法を用いて、全点間最短路を求める。

    初期化：dis[i][j] = iからjへの距離(辺がなければINF) (i≠j)
            dist[i][i] = 0
            prev[i][j] = i

    負閉路の検出：dis[i][i] < 0 となる i が存在するか

    verified:
        http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C&lang=ja
*/

#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e17;

/* warshall_floyd(dist,prev)
    入力：初期化した dist, prev
    計算量：O(|V|^3)
    副作用：dis[i][j]にiからjへの最短路のコストを格納、prev[i][j]にiからjへの最短路でのjの1つ前の点を格納
*/
void warshall_floyd(vector<vector<long long>> &dist, vector<vector<long long>> &prev) {
    int V = dist.size();
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    prev[i][j] = prev[k][j];
                }
            }
        }
    }
}

/* get_path(prev, s, t)
    入力：warshall_floyd で得た prev, スタート s, ゴール t
    出力：s から t への最短路のパス
*/
vector<int> get_path(const vector<vector<long long>> &prev, int s, int t) {
    vector<int> path;
    for (int cur = t; cur != s; cur = prev[s][cur]) {
        path.push_back(cur);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}

/* is_negative(dist)
    入力：warshall_floyd で得た dist
    出力：負の有向路を含むかどうか
*/
bool is_negative(const vector<vector<long long>> &dist) {
    int V = dist.size();
    for (int i = 0; i < V; i++) {
        if (dist[i][i] < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >> E;

    // initialization
    vector<vector<long long>> dist(V, vector<long long>(V, INF));
    vector<vector<long long>> prev(V);
    for (int i = 0; i < V; ++i) {
        dist[i][i] = 0;
        prev[i] = vector<long long>(V, i);
    }

    // input
    for (int i = 0; i < E; i++) {
        long long s, t, c;
        cin >> s >> t >> c;
        dist[s][t] = c;
        // dist[t][s] = c;
    }

    warshall_floyd(dist, prev);

    if (is_negative(dist)) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][j] >= INF / 2) {
                    cout << "INF";
                } else {
                    cout << dist[i][j];
                }
                if (j != V - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

