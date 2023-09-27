#include <algorithm>
#include <cstdio>

using namespace std;
#define MAX_N (50010)
#define MAX_M (22)
#define INF (MAX_N << 1)

int c[MAX_M];

int dp[MAX_N];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for ( int i = 0; i < m; i++ ) scanf("%d", &c[i]);
    for ( int i = 0; i <= n; i++ ) dp[i] = INF;

    dp[0] = 0;

    for ( int i = 0; i < m; i++ ) {
	int x = c[i];
	for ( int j = 0; j <= n; j++ ) {
	    if ( j - x >= 0 && dp[j - x] != INF ) {
		dp[j] = min( dp[j], dp[j - x] + 1 );
	    }
	}
    }

    printf("%d\n", dp[n]);

    return 0;
}