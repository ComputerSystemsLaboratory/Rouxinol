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
int n, ans[101]{};

void bfs() {
    fill(ans, ans + n + 1, -1);
    ans[1] = 0;
    queue<P> que;
    que.push({1, 0});
    visited[1] = true;
    while (!que.empty()) {
        int u, d;
        u = que.front().first;
        d = que.front().second;
        que.pop();
        REP(i, g[u].size()) {
            if (visited[g[u][i]]) continue;
            que.push({g[u][i], d + 1});
            visited[g[u][i]] = true;
            ans[g[u][i]] = d + 1;
        }
    }
}

int main() {
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
    bfs();
    for(int i=1;i<=n;i++){
        cout << i << " " << ans[i] << endl;
    }
    return 0;
}
