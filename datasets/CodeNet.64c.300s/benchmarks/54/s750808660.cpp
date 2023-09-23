#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int MAX_N = 110;
ll dp[MAX_N][21];
int d[MAX_N];

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> d[i];

    dp[0][d[0]] = 1;
    for (int i = 0; i < N - 1; ++i) {
        for (int sum = 0; sum <= 20; ++sum) {
            if (sum + d[i + 1] <= 20)
                dp[i + 1][sum + d[i + 1]] += dp[i][sum];
            if (sum - d[i + 1] >= 0)
                dp[i + 1][sum - d[i + 1]] += dp[i][sum];
        }
    }

    cout << dp[N - 2][d[N - 1]] << endl;

    return 0;
}