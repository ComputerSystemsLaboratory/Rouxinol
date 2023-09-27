#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; ++i)
#define REPR(i, n) for (int i = n - 1; i >= 0; --i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define FORR(i, a, b) for (int i = b - 1; i >= a; --i)
#define SORT(v) sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define REV(v) reverse(v.begin(), v.end())
#define ITER(itr, v) for (auto itr = v.begin(); itr != v.end(); ++itr)
#define LB(v, x) (lower_bound(v.begin(), v.end(), x) - v.begin())
#define UB(v, x) (upper_bound(v.begin(), v.end(), x) - v.begin())
#define SZ(v) (int)v.size()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V, E, r;
    cin >> V >> E >> r;
    vector<vector<P>> edge(V);
    REP(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s].emplace_back(d, t);
    }
    vector<int> cost(V, INT_MAX);
    cost[r] = 0;
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.emplace(0, r);
    while (!pq.empty()) {
        int c, i;
        tie(c, i) = pq.top();
        pq.pop();
        if (c > cost[i]) continue;
        for (auto &p : edge[i]) {
            int d, j;
            tie(d, j) = p;
            if (c + d < cost[j]) {
                cost[j] = c + d;
                pq.emplace(c + d, j);
            }
        }
    }
    REP(i, V) {
        if (cost[i] == INT_MAX) {
            cout << "INF" << endl;
        } else {
            cout << cost[i] << endl;
        }
    }

    return 0;
}
