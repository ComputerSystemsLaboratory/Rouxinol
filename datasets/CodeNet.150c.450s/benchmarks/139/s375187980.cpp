#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using PII = pair<ll, ll>;
#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
template<typename T> void chmin(T &a, const T &b) { a = min(a, b); }
template<typename T> void chmax(T &a, const T &b) { a = max(a, b); }
struct FastIO {FastIO() { cin.tie(0); ios::sync_with_stdio(0); }}fastiofastio;
#ifdef DEBUG
#include "../../program_contest_library/memo/dump.hpp"
#else
#define dump(...)
#endif
const ll INF = 1LL<<60;

int main(void) {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    REP(i, m) {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<ll> que;
    que.push(0);
    vector<ll> dist(n, INF);
    dist[0] = 0;
    while(que.size()) {
        ll x = que.front(); que.pop();
        for(auto to: g[x]) {
            if(dist[to] == INF) {
                dist[to] = dist[x] + 1;
                que.push(to);
            }
        }
    }

    cout << "Yes\n";
    FOR(i, 1, n) {
        ll mi = INF, idx = -1;
        for(auto to: g[i]) {
            if(mi > dist[to]) {
                mi = dist[to];
                idx = to;
            }
        }
        cout << idx+1 << "\n";
    }

    return 0;
}