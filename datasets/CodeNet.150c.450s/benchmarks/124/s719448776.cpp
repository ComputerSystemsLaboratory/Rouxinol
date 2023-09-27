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
vector<ll> d(150);

void dijkstra() {
    d.assign(N, INF);
    d[0] = 0;
    vector<bool> seen(N, false);
    while (true) {
        ll minv = INF;
        int v = -1;
        rep(i, N) {
            if (!seen[i] && minv > d[i]) {
                v = i;
                minv = d[i];
            }
        }

        if (v == -1)
            break;
        seen[v] = true;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (seen[e.to])
                continue;
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;
    G.resize(N);
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        rep(j, b) {
            ll c, d;
            cin >> c >> d;
            G[a].push_back({c, d});
        }
    }

    dijkstra();
    rep(i, N) { cout << i << " " << d[i] << endl; }
}
