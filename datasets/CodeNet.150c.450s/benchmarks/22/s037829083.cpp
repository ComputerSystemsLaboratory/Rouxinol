/*
verified on 2020/3/1
http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=4221855
*/

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

/* snippet starts */

#include <limits>

// ベルマンフォード法でstartから各点までの最短距離を計算する O(MN)
// 負のループとつながっている部分はd[i] = -INFとなる
template<typename dist_t>
class BellmanFord {
    
    struct edge {
        int from, to;
        dist_t dist;
    };

    int n; // 頂点数

    vector<edge> E;

public:

    static const dist_t INF;

    BellmanFord(int _n) : n(_n) {}

    BellmanFord(int _n, vector<edge> &_E) : n(_n), E(_E.begin(), _E.end()) {}

    inline void add_edge(int from, int to, dist_t dist=1) {
        E.push_back(edge{from, to, dist});
    }

    struct result {
        bool negloop = false; // 負のループがあるかどうか

        result(int _n, int k) : n(_n), d(new dist_t[(size_t)_n]) {
            fill(d, d+n, INF); 
            d[k] = 0;
        }
        auto &operator[](int i) { return d[i]; } 
        auto begin() { return d; }
        auto end()   { return d + n; }
        operator dist_t*() { return d; } // dist_t* へのキャスト

        bool unreachable(int i) { return d[i] == INF; }  // 視点から到達不可能かどうか
        bool in_negloop(int i)  { return d[i] == -INF; } // 負のループに入っているかどうか
    private:
        const int n;
        dist_t *d;
    };

    inline result operator()(int start) {
        result d(n, start);

        for (int i = 1; i < n; i++) {
            for (auto &e:E) {
                if (d[e.from] == INF) continue;
                if (d[e.to] > d[e.from] + e.dist) {
                    d[e.to] = d[e.from] + e.dist;
                    if (i == n - 1) d.negloop = true;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (auto &e:E) {
                if (d[e.from] == INF) continue;
                if (d[e.to] > d[e.from] + e.dist) {
                    d[e.to] = -INF;
                } else if (d[e.from] == -INF)
                    d[e.to] = -INF;
            }
        }

        return d;
    }

    auto &operator[](int i) { return E[(size_t)i]; } 
    auto begin() { return E.begin(); }
    auto end()   { return E.end(); }
};


template<typename dist_t>
const dist_t BellmanFord<dist_t>::INF = numeric_limits<dist_t>::max();

/* Constructers
 *
 * BellmanFord(n) 
 * BellmanFord(n, E)
 */

/* snippet ends */

int main() {
    int n, m, r;
    cin >> n >> m >> r;

    BellmanFord<ll> bf(n);
    for (int i=0, u, v, d; i<m; i++) {
        cin >> u >> v >> d;
        bf.add_edge(u, v, (ll)d);
    }
    auto res = bf(r);

    if (res.negloop) cout << "NEGATIVE CYCLE" << '\n';
    else for (auto &ri:res) cout << (ri < BellmanFord<ll>::INF ? to_string(ri) : "INF") << '\n';

    return 0;
}
