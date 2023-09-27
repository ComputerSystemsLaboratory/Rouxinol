#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define INF 1000000000000000000
typedef pair<ll, ll> pll;
typedef pair<int, int> pint;

struct edge {
    ll to;
    ll cost;
};

int N;
vector<vector<edge>> G;
vector<bool> seen;

ll prim() {
    priority_queue<pll, vector<pll>, greater<pll>> que;
    que.push({0, 0});
    ll ans = 0;

    while (!que.empty()) {
        pll p = que.top();
        que.pop();
        ll v = p.second;
        if (seen[v])
            continue;
        ans += p.first;
        seen[v] = true;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (!seen[e.to])
                que.push({e.cost, e.to});
        }
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;
    G.resize(N);
    seen.resize(N, false);
    rep(i, N) {
        rep(j, N) {
            ll a;
            cin >> a;
            if (a == -1)
                continue;
            else
                G[i].push_back({j, a});
        }
    }

    cout << prim() << endl;
}
