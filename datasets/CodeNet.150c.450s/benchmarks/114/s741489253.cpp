#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
const int MAX = 1000000010;

vector<bool> checked;
vector<int> d;
vector<int> p;

int main() {
    int N; cin >> N;
    vector<vector<int>> G(N, vector<int>(N));
    checked.assign(N, false);
    d.assign(N, MAX);
    p.resize(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> G[i][j];
        }
    }
    d[0] = 0;
    p[0] = -1;

    while (true) {
        int MIN = MAX;
        int u;
        for (int i = 0; i < N; i++) {
            if(!checked[i] && chmin(MIN, d[i])) u = i;
        }

        if (MIN == MAX) break;
        checked[u] = true;

        for (int v = 0; v < N; v++) {
            if (!checked[v] && G[u][v] != -1) {
                chmin(d[v], G[u][v]);
                p[v] = u;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += d[i];
    }

    cout << sum << endl;
    return 0;
}
