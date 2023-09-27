#include <bits/stdc++.h>
using namespace std;

const int INF = 1 << 30;
int n;
vector<int> r, c;
vector<vector<int>> dp;

int dfs(int a, int b) {
    if (dp[a][b] != INF) return dp[a][b];
    if (a + 1 == b) return dp[a][b] = 0;
    int res = INF;
    for (int k = a + 1; k < b; ++k) {
        res = min(res, dfs(a, k) + dfs(k, b) + r[a] * r[k] * c[b - 1]);
    }
    return dp[a][b] = res;
}

int main() {
    cin >> n;
    r.resize(n);
    c.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> r[i] >> c[i];
    }
    dp.resize(n + 1, vector<int>(n + 1, INF));
    cout << dfs(0, n) << endl;
}
