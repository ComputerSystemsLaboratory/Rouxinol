#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 2000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

const int MAX_N = 100000;

int n;
int a[MAX_N];

int dp[MAX_N + 1];

int main() {
    cin >> n;
    REP(i, n) cin >> a[i];

    REP(i, n+1) dp[i] = INF;
    dp[0] = -1;
    int i_max = 0;
    REP(j, n) {
        if (a[j] > dp[i_max]) {
            dp[i_max + 1] = a[j];
            i_max++;
        }
        else {
            int k = lower_bound(dp, dp + i_max + 1, a[j]) - dp;
            dp[k] = a[j];
        }
    }
    PRINT(i_max);
    return 0;
}
