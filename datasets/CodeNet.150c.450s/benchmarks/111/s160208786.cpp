#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 1, 1, -1, -1};
int dx[]={1, -1, 0, 0, 1, -1, -1, 1};

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define mp make_pair
#define fi first
#define sc second
ll n;
ll a[200];

ll dp[200][30];
int main(){
    scanf("%lld",&n);
    REP(i,n)
        scanf("%lld",a + i);

    REP(i,21){
        dp[0][i] = (i == a[0]);
    }

    FOR(i,1,n - 1){
        REP(j,21){
            ll c = (j - a[i] >= 0) ? dp[i - 1][j - a[i]] : 0;
            ll d = (j + a[i] < 21) ? dp[i - 1][j + a[i]] : 0;
            dp[i][j] = c + d;
        }
    }
    printf("%lld\n", dp[n - 2][a[n - 1]]);
    return 0;
}