#include <iostream>
#include <algorithm>
const int MAX_N = 100;
const int INF = 999999999;
using namespace std;

int dp[MAX_N+1][MAX_N+1];
int p[MAX_N+1];

int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        dp[i][i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> p[i-1] >> p[i];
    }

    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n-l+1; i++) {
            int j = i+l-1;
            dp[i][j] = INF;
            for (int k = i; k <= j-1; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j] + p[i-1]*p[k]*p[j]);
            }
        }
    }

    cout << dp[1][n] << endl;

    return 0;
}