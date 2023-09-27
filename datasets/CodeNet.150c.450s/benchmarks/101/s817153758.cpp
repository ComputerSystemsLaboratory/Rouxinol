#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const int inf = 1e9;
const ll INF = 1e18;
const double pi = 3.14159265358979323846;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
using pint = pair<int, int>;
int dx[4] = { 1, 0, -1, 0 }, dy[4] = { 0, 1, 0, -1 };

int main() {
    int n, m;
    cin >> n >> m;
    Graph g (n);
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        g[a].push_back (b);
        g[b].push_back (a);
    }
    //BFSを行う
    int color[n];
    rep (i, n) color[i] = -1;
    int now = 0;
    rep (i, n) {
        if (color[i] == -1) {
            queue<int> q;
            q.push (i);
            color[i] = now;
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                for (auto p : g[v]) {
                    if (color[p] != -1) continue;
                    color[p] = now;
                    q.push (p);
                }
            }
            now++;
        }
    }
    int q;
    cin >> q;
    rep (i, q) {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) cout << "yes"
                                       << "\n";
        else
            cout << "no"
                 << "\n";
    }
}

