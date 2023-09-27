#include <bits/stdc++.h>
#define INF 10000000

using namespace std;

int n, m;
vector<int> c;
vector<int> dp;

int main() {
    cin >> n >> m;
    dp.resize(n + 1, INF);
    c.resize(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    dp[0] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = c[i]; j <= n; j++) {
            dp[j] = min(dp[j], dp[j - c[i]] + 1);
        }
    }

    cout << dp[n] << endl;

    return 0;
}