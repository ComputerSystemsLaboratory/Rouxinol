#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

const int MAX_N = 100;

int n;
int r[MAX_N], c[MAX_N];

int dp[MAX_N][MAX_N];

int main() {
    cin >> n;
    REP(i, n) cin >> r[i] >> c[i];

    REP(i, n) {
        REP(j, n) dp[i][j] = MOD;
    }

    REP(i, n) dp[i][i] = 0;

    REP2(k, 1, n) {
        REP(i, n - k) {
            int j = i + k;
            REP2(l, i, j) {
                dp[i][j] = min(dp[i][j], dp[i][l] + dp[l+1][j] + r[i]*c[l]*c[j]);
            }
        }
    }

    PRINT(dp[0][n-1]);
    return 0;
}
