#include <stdio.h>
#include <algorithm>
using namespace std;

#define MAX_N (200010)
#define INF (1e9 + 10)


int n;

int main()
{
    int i;
    int ans = -INF;
    int min_v;
    scanf( "%d", &n );

    for ( i = 0; i < n; i++ ) {
	int r;
	scanf("%d", &r);
	if ( i == 0 ) {
	    min_v = r;
	}
	else {
	    ans = max( ans, r - min_v );
	    min_v = min( min_v, r );
	}
    }

    printf( "%d\n", ans );

    return 0;
}