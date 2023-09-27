#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
#define range(i, a, b) for (int i = a; i < b; ++i)
#define rep(i, n) range(i, 0, n)
const ll INF = 1e10;
#define pb push_back

struct edge {
    int cost, to;
};

int main() {
    int n, m, r;
    cin >> n >> m >> r;
    vector<vector<edge>> G(n);
    vll d(n, INF);
    rep(i, m) {
        int s;
        edge e;
        cin >> s >> e.to >> e.cost;
        G[s].pb(e);
    }

    priority_queue<pint, vector<pint>, greater<pint>> Q;  //距離,点
    d[r] = 0;
    Q.push(pint(0, r));

    while (!Q.empty()) {
        pint p = Q.top();
        Q.pop();
        int v = p.second;
        if (d[v] < p.first)
            continue;
        rep(i, G[v].size()) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                Q.push(pint(d[e.to], e.to));
            }
        }
    }

    rep(i, n) {
        if (d[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << d[i] << endl;
        }
    }
}

