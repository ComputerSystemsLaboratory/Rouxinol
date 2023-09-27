#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<pair<int, int>, int> PP;
const ll INF = 1LL << 60;
const ll MOD = 1000000007;
const int MAX = 1000000000;

int GCD(int a, int b) { return b ? GCD(b, a % b) : a; }
//------------------------------------------------------------------------------------------------------------------------------

int c, N;
vector<vector<int>> G;
vector<int> color;
void dfs(int v) {
    color[v] = c;
    for (auto nv : G[v]) {
        if (color[nv] >= 0) {
            continue;
        }
        dfs(nv);
    }
    return;
}

int main(void) {
    int M;
    cin >> N >> M;
    G.resize(N);
    color.resize(N, -1);
    c = 0;
    for (int i = 0; i < M; i++) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    for (int i = 0; i < N; i++) {
        if (color[i] >= 0) {
            continue;
        }
        dfs(i);
        c++;
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
