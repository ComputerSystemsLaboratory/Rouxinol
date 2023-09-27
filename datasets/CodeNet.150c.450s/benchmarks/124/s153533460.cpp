#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cassert>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll MOD = ll(1e9) + 7;
const ll INF = LLONG_MAX;
const ll MAX_N = ll(1e5) + 5;
const double EPS = 10e-8;
const double PI = 3.14159265359;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

struct UF {
    static const int MAX_N = 100000;
    int p[MAX_N];
    int r[MAX_N];

    void init(int n) {
        REP(i, n) {
            p[i] = i;
            r[i] = 0;
        }
    }
    int find(int x) {
        if (p[x] == x) return x;
        return p[x] = find(p[x]);
    }
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (r[x] < r[y]) swap(x, y);
        if (r[x] == r[y]) r[x]++;
        p[y] = x;
    }
    bool same(int x, int y) { return find(x) == find(y); }
};

int n, d[100];
vector<P> g[100];

void dijkstra(int s) {
    fill(d, d + n, 99999999);
    d[s] = 0;
    priority_queue<P> que;
    que.push({0, s});
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int u = p.second;
        if (p.first > d[u]) continue;
        REP(i, g[u].size()) {
            int v = g[u][i].first, cost = g[u][i].second;
            if (d[v] > d[u] + cost) {
                d[v] = d[u] + cost;
                que.push({d[v], v});
            }
        }
    }
}

int main() {
    cin >> n;
    REP(i, n) {
        int from, k;
        cin >> from >> k;
        REP(j, k) {
            int to, c;
            cin >> to >> c;
            g[from].push_back({to, c});
        }
    }
    dijkstra(0);
    REP(i, n) { cout << i << " " << d[i] << endl; }
    return 0;
}
