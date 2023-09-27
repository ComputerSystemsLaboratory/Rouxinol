// APSP 問題とも
// - グラフの各点におけるすべての組み合わせの最短経路を求める
// - グラフ中に負の重みを持つ辺があっても動作する
// - DPで各点の最短距離を更新していく
// - 
#include <bits/stdc++.h>
using namespace std;

#define REP(i, start, count) for (int i = (start); i < (int)(count); ++i)
#define rep(i, count) REP(i, 0, count)
#define ALLOF(c) (c).begin(), (c).end()

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> veci;
typedef vector<long long> vecll;
typedef vector<unsigned long long> vecull;

int V, E;
vector<vecll> G;

constexpr ll INF = (1LL << 32);

int main(void)
{
    cin >> V >> E;

    G.assign(V, vecll(V, INF));

    rep(i, E) {
        ll s, t, d;
        cin >> s >> t >> d;
        G[s][t] = d;
    }

    for (int i = 0; i < V; ++i) {
        G[i][i] = 0; // 自分から自分は距離0
    }

    // 使っていい頂点の数
    for (int k = 0; k < V; ++k) {
        // 始点
        for (int i = 0; i < V; ++i) {
            if (G[i][k] == INF) continue; // まだ道が見つかっていない
            // 終点
            for (int j = 0; j < V; ++j) {
                if (G[k][j] == INF) continue; // まだ道が見つかっていない
                // 新しい頂点を使った場合
                ll a = G[i][k] + G[k][j];

                // 新しい頂点を使わなかった場合
                ll b = G[i][j];
                
                G[i][j] = min(a, b);
            }
        }
    }

    // 自分to自分が0がベストなはずだが、負の閉路がある場合そこを回り続ければ無限にコストを減少させられるので、
    // 最短経路が定義できなくなる
    bool isNegative = false;
    for (int i = 0; i < V; ++i) if (G[i][i] < 0) { isNegative = true;  break; }

    if (isNegative) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }


    for (int i = 0; i < V; ++i) {
        for (int k = 0; k < V; ++k) {
            if (G[i][k] == INF) cout << "INF";
            else cout << G[i][k];
            if (k != V - 1) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
