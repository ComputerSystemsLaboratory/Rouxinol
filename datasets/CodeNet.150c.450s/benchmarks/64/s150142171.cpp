#include <stdio.h>
#include <string.h>

#define MAX_N (22)
#define MAX_M (2010)
int A[MAX_N];
bool dp[2][MAX_M];
int main()
{
    int n, q;

    scanf("%d", &n);

    memset( dp, false, 2 * MAX_M * sizeof( bool ) );
    dp[0][0] = 1;

    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }

    for ( int i = 0; i < n; i++ ) {
	int a = A[i];
	for ( int j = 0; j < MAX_M; j++ ) {
	    if ( dp[i % 2][j] ) {
		dp[( i + 1 ) % 2][j] = true;
		if ( j + a < MAX_M ) {
		    dp[( i + 1 ) % 2][j + a] = true;
		}
	    }
	}
    }

    scanf("%d", &q);

    for ( int i = 0; i < q; i++ ) {
	int m;
	scanf("%d", &m);
	if ( dp[n % 2][m] ) {
	    printf("yes\n");
	}
	else {
	    printf("no\n");
	}
    }

    return 0;
}