#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
const int MAX = 1000000010;
const ll MOD = 1000000007;

int main() {
    int N; cin >> N;
    vector<vector<int>> G(N, vector<int>(N, -1));
    for (int i = 0; i < N; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c; cin >> v >> c;
            G[u][v] = c;
        }
    }
    vector<bool> checked(N, false);
    vector<int> d(N, MAX);
    vector<int> p(N);
    d[0] = 0;
    p[0] = -1;

    while (true) {
        int MIN = MAX;
        int u;
        for (int v = 0; v < N; v++) {
            if (!checked[v] && chmin(MIN, d[v])) u = v;
        }

        if (MIN == MAX) break;
        checked[u] = true;

        for (int v = 0; v < N; v++) {
            if (!checked[v] && G[u][v] != -1) {
                chmin(d[v], d[u] + G[u][v]);
                p[v] = u;
            }
        }
    }

    for (int v = 0; v < N; v++) {
        cout << v << " " << d[v] << "\n";
    }
    return 0;
}
