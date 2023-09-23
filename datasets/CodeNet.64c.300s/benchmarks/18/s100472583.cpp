#include <iostream>
#include <cstdio>

using namespace std;

long long dp[34];

int main()
{
    dp[0] = 1;
    for (int i = 0; i < 30; i++) {
        dp[i+1] += dp[i];
        dp[i+2] += dp[i];
        dp[i+3] += dp[i];
    }

    int n;
    while ( cin >> n, n) {
        cout << dp[n]/3650 + (dp[n]%3650?1:0) << endl;
    }

    return 0;
}