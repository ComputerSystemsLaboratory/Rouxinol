#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ALL(vec) vec.begin(), vec.end()
#define rALL(vec) vec.rbegin(), vec.rend()
using namespace std;
using ll = long long;

vector<vector<int>> A;
vector<int> color;
int num = 1;

void dfs(int u) {
    stack<int> S;
    S.push(u);
    color[u] = num;
    while (!S.empty()) {
        int now = S.top(); S.pop();
        rep(i, A[now].size()) {
            int next = A[now][i];
            if (color[next] == -1) {
                color[next] = num;
                S.push(next);
            }
        }
    }
    num += 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    A = vector<vector<int>>(n);
    color = vector<int>(n, -1);
    rep(i, m) {
        int s, t;
        cin >> s >> t;
        A[s].push_back(t);
        A[t].push_back(s);
    }
    rep(i, n) {
        if (color[i] == -1) dfs(i);
    }
    int q;
    cin >> q;
    rep(i, q) {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
