#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,-1,sizeof(a))

int n;
int a[110];
ll dp[100][21];

int main() {
    cin >> n;
    rep(i,n) scanf("%d", a+i);

    ZERO(dp);
    dp[0][a[0]] = 1;
    FOR(i,1,n+1) {
        rep(j,21) {
            if(j+a[i] <= 20)
                dp[i][j + a[i]] += dp[i-1][j];
            if(j-a[i] >= 0)
                dp[i][j - a[i]] += dp[i-1][j];
        }
    }

    cout << dp[n-1][a[n]] << "\n";

    return 0;
}