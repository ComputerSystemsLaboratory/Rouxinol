#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0, xxx_rep_end = (n); i < xxx_rep_end; ++i)
#define all(x) (x).begin(), (x).end()

template <class T1, class T2>
inline bool chmax(T1 &a, const T2 &b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <class T1, class T2>
inline bool chmin(T1 &a, const T2 &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr ll mod = 1000000007;

int main() {
    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> E(N);
    rep(i, M) {
        ll a, b;
        cin >> a >> b;
        --a;
        --b;
        E[a].emplace_back(b);
        E[b].emplace_back(a);
    }

    vector<ll> used(N, INF);
    used[0] = 0;

    queue<ll> que;
    que.emplace(0);

    while (!que.empty()) {
        ll cur = que.front();
        que.pop();
        for (auto to : E[cur]) {
            if (used[to] != INF) {
                continue;
            }
            used[to] = cur;
            que.emplace(to);
        }
    }

    for (auto &x : used) {
        if (x == INF) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    for (ll i = 1; i < N; ++i) {
        cout << used[i] + 1 << endl;
    }
}