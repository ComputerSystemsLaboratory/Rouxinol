#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

int INF = 1000000000;

int min(int i, int j)
{
    if (i > j) return j;
    else return i;
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    vec<int> c(m);
    rep(i, m) cin >> c[i];

    vec<int> dp(n + 1, INF);

    dp[0] = 0;
    rep(i, n) {
        rep(j, m) {
            if (i + c[j] <= n) dp[i + c[j]] = min(dp[i + c[j]], dp[i] + 1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}