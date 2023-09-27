#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
struct Edge {
    int to, cost;
    Edge(int to, int cost) : to(to), cost(cost) {}
};
using P = pair<int, int>;
vector<Edge> G[50];
set<int> vs;
int dijkstra(int s) {
    int dp[50];
    rep(i, 50) dp[i] = INF;
    priority_queue<P> que;
    que.push(P(0, s));
    dp[s] = 0;
    while (que.size()) {
        auto p = que.top();
        que.pop();
        int v = p.second;
        rep(i, G[v].size()) {
            auto e = G[v][i];
            if (dp[e.to] > dp[v] + e.cost) {
                dp[e.to] = dp[v] + e.cost;
                que.push(P(-dp[e.to], e.to));
            }
        }
    }
    int ret = 0;
    for (auto v : vs) {
        ret += dp[v];
    }
    return ret;
}
int main() {
    while (cin >> n, n) {
        vs.clear();
        rep(i, 50) G[i].clear();
        rep(i, n) {
            int a, b, c;
            cin >> a >> b >> c;
            G[a].push_back(Edge(b, c));
            G[b].push_back(Edge(a, c));
            vs.insert(a);
            vs.insert(b);
        }
        int ans = INF;
        int ans_v = -1;
        for (auto v : vs) {
            auto ret = dijkstra(v);
            if (ans > ret) {
                ans = ret;
                ans_v = v;
            }
        }
        cout << ans_v << " " << ans << endl;
    }
    return 0;
}