#include <bits/stdc++.h>

using namespace std;

int n, m;
int c[20];
int dp[21][50001];

int solve(int idx, int sum) {

    if(sum == 0) return 0;
    if(idx == m) return 1 << 24;

    if(dp[idx][sum] != -1) return dp[idx][sum];

    int ret = 1 << 24;

    if(c[idx] <= sum) {
        ret = min(ret, solve(idx, sum - c[idx]) + 1);
        ret = min(ret, solve(idx + 1, sum - c[idx]) + 1);
    }
    ret = min(ret, solve(idx + 1, sum));

    return dp[idx][sum] = ret;

}

int main() {

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> c[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(0, n) << endl;

}