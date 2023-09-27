#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int n;
vector<int> d;
int dp[102][102];

void solve() {
    for (int i = 0; i < n; ++i) {
        dp[i][i] = 0;
    }
    for (int span = 2; span <= n; ++span) {
        for (int i = 0; i <= n - span; ++i) {
            int j = i + span - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k <j ; ++k) {
                dp[i][j] = min(dp[i][j], d[i] * d[j+1] * d[k+1] + dp[i][k] + dp[k+1][j]);
            }
        }
    }
}

int main() {
    cin >> n;
    d.resize(n + 1);
    int r, c;
    for (int i = 0; i < n; ++i) {
        cin >> r >> c;
        d[i] = r;
    }
    d[n] = c;
    solve();
    cout << dp[0][n-1] << endl;

    return 0;
}


