#include<algorithm>
#include<cstdio>
#include<limits>
#define rep(i,a) for(int i=0;i<(a);++i)

const int MAX_M = 20, MAX_N = 50000, INF = std::numeric_limits<int>::max()>>2;

int n, m;
int d[MAX_M];
int dp[MAX_M+1][MAX_N+1];

int main()
{
    scanf( "%d%d", &n, &m );
    rep( i, m )
        scanf( "%d", d+i );

    std::fill( (int*)dp, (int*)(dp+m), INF );
    dp[0][0] = 0;

    rep( i, m ) rep( j, n+1 )
    {
        if( j >= d[i] )
            dp[i+1][j] = std::min( dp[i][j], dp[i+1][j-d[i]]+1 );
        else
            dp[i+1][j] = dp[i][j];
    }

    printf( "%d\n", dp[m][n] );

    return 0;
}