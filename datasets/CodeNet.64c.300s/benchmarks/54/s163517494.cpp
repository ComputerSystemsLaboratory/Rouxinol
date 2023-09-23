#include <iostream>
#include <string>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long;

int n;
int a[102];
ll dp[102][21];
ll dfs(int idx, int sum) {
    if (!(0 <= sum && sum <= 20)) return 0;
    if (idx == n - 1) return sum == a[idx];
    if (dp[idx][sum] != -1) return dp[idx][sum];
    ll ret = 0;
    ret += dfs(idx + 1, sum + a[idx]);
    ret += dfs(idx + 1, sum - a[idx]);
    return dp[idx][sum] = ret;
}
int main() {
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, 102) rep(j, 21) dp[i][j] = -1;
    cout << dfs(1, a[0]) << endl;
}