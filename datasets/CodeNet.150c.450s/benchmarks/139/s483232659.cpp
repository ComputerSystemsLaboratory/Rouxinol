#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <tuple>
#include <vector>

using namespace std;
typedef long long ll;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define reps(i, f, n) for (ll i = (f); i < (n); i++)
#define repr(i, n) for (ll i = n; i >= 0; i--)
#define repv(v) for (auto it = (v).begin(); it != (v).end(); it++)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
#define pb push_back
#define INIT    \
    cin.tie(0); \
    ios::sync_with_stdio(false);

template <class T>
inline bool chmax(T& a, T b) {
    return a = (a < b) ? b : a;
}
template <class T>
inline bool chmin(T& a, T b) {
    return a = (a > b) ? b : a;
}

ll const INF = 1LL << 60;
ll const MOD = 1000000007;

ll const MAX_V = 100005;

struct edge {
    ll to, cost;
};
vector<edge> G[MAX_V];

int main() {
    INIT;

    ll N, M;
    cin >> N >> M;

    for (ll i = 0; i < M; i++) {
        // sからtへの辺を張る
        ll s, t;
        cin >> s >> t;
        s--;
        t--;
        edge et = {t, 1};
        G[s].push_back(et);

        // 無向グラフの場合はさらにtにsへの辺を張る
        edge es = {s, 1};
        G[t].push_back(es);
    }

    // 探索
    vector<ll> prev_v(N, -1);
    queue<ll> que;

    prev_v[0] = -1;
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (auto nv : G[v]) {
            if (nv.to == v) continue;

            if (prev_v[nv.to] != -1) continue;
            prev_v[nv.to] = v;
            que.push(nv.to);
        }
    }

    bool flg = true;
    rep(i, N) {
        if (prev_v[i] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    reps(i, 1, N) { cout << prev_v[i] + 1 << endl; }

    // rep(i, N) { cout << i << ": " << prev_v[i] << endl; }

    return 0;
}