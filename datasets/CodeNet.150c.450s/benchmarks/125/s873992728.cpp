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

vector<int> g[101];
bool visited[101]{};
P ans[101];

int dfs(int s, int t) {
    visited[s] = true;
    ans[s].first = t;
    REP(i, g[s].size()) {
        if (visited[g[s][i]]) continue;
        t = dfs(g[s][i], t + 1);
    }
    t++;
    ans[s].second = t;
    return t;
}

int main() {
    int n;
    cin >> n;
    REP(i, n) {
        int u, m;
        cin >> u >> m;
        REP(j, m) {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    for (int i = 1, T = 0; i <= n; i++) {
        if (visited[i]) continue;
        T = dfs(i, T+1);
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}
