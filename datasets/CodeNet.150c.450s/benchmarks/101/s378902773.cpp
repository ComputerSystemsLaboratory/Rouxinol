#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
const ll MOD = 1000000007;

int N, M;
int cnt = 0;
vector<vector<int>> G;

vector<int> seen;
void dfs(int v) {
    seen[v] = cnt;

    for (auto nv : G[v]) {
        if (seen[nv] != -1) continue;

        dfs(nv);
    }
}

int main() {
    cin >> N >> M;
    G.resize(N);
    seen.assign(N, -1);
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int v = 0; v < N; v++) {
        if (seen[v] != -1) continue;

        dfs(v);
        cnt++;
    }

    int q;  cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        if (seen[a] == seen[b]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
