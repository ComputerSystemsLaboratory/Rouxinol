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

    int V, E;
    cin >> V >> E;
    vector<vector<P>> edge(V);
    REP(i, E) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s].emplace_back(d, t);
        edge[t].emplace_back(d, s);
    }
    vector<int> used(V);
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.emplace(0, 0);
    int res = 0;
    while (!pq.empty()) {
        int c, i;
        tie(c, i) = pq.top();
        pq.pop();
        if (used[i]) continue;
        used[i] = true;
        res += c;
        for (auto &p : edge[i]) {
            int d, j;
            tie(d, j) = p;
            if (!used[j]) {
                pq.emplace(d, j);
            }
        }
    }
    cout << res << endl;

    return 0;
}
