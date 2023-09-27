#include <stdio.h>
#include <algorithm>
using namespace std;

typedef long long ll;
#define INF ((ll)10000000000)
#define MAX_N (110)
typedef struct {
    ll r;
    ll c;
} Mat;

int n;
Mat M[MAX_N];
ll dp[MAX_N][MAX_N];

ll dfs(int i, int j)
{
    if ( j - i == 1 ) return 0;
    else if ( dp[i][j] ) return dp[i][j];
    else {
	ll ret = INF;
	for ( int k = i + 1; k < j; k++ ) {
	    ret = min(ret, dfs(i, k) + dfs(k, j) + M[i].r * M[k].r * M[j-1].c );
	}

	return dp[i][j] = ret;
    }
}

int main()
{
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%lld %lld", &M[i].r, &M[i].c);
    }
    
    ll ans = dfs( 0, n );
    printf("%lld\n", ans);

    return 0;
}