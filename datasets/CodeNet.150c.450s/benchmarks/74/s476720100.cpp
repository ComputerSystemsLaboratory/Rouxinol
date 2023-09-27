#include <iostream>
using namespace std;

#define repeat(i,n) for (int i = 0; i < n; ++i)
#define repeat1_eq(i,n) for (int i = 1; i <= n; ++i)

#define MAX_N 50000
#define MAX_M 20
int n, m;
int d[MAX_M];
int dp[MAX_N+1];

int main() {
    cin >> n >> m;
    repeat (i,m) cin >> d[i];
    dp[0] = 0;
    repeat1_eq (i,n) {
        dp[i] = MAX_N;
        repeat (j,m) {
            int ix = i - d[j];
            if (0 <= ix) dp[i] = min(dp[i], dp[ix]+1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}