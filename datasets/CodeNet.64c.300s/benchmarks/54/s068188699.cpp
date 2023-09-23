#include <bits/stdc++.h>
using namespace std;

/* {{{ */
#define CL(N) cout << N << endl
#define DCT(N) cout << "debug " << N << endl
#define REP(i, N) for (int i = 0; i < N; i++)
/* }}} */

long long dp[101][21];

int main()
{
    int n, num[101];

    cin >> n;

    REP(i, n){
       cin >> num[i];
    }

    dp[0][num[0]] = 1;

    for (int i = 1; i < n - 1; i++){
        REP(j, 21){
            if (0 <= j - num[i]){
                dp[i][j] += dp[i - 1][j - num[i]];
            }
            if (j + num[i] <= 20){
                dp[i][j] += dp[i - 1][j + num[i]];
            }
        }
    }

    CL(dp[n - 2][num[n - 1]]);

    return (0);
}