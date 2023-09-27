#include<algorithm>
#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

const int MAX_N = 100000, INF = 1000000001;

int n, a[MAX_N];
int dp[MAX_N+1];

int main()
{
    scanf( "%d", &n );
    rep( i, n )
        scanf( "%d", a+i );

    std::fill( dp, dp+n+1, INF );

    rep( i, n )
        *std::lower_bound( dp, dp+n+1, a[i] ) = a[i];

    printf( "%d\n", std::lower_bound( dp, dp+n+1, INF )-dp );

    return 0;
}