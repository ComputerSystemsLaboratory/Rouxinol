#include<algorithm>
#include<cstdio>
#include<cstring>
#include<limits>
#define rep(i,a) for(int i=0;i<(a);++i)
#define clr(a,v) memset((a),(v),sizeof(a))

const int MAX_N = 100, INF = std::numeric_limits<int>::max()>>2;

int n;
int r[MAX_N], c[MAX_N];
int dp[MAX_N][MAX_N];

int rec( int b, int e )
{
    if( b == e )
        return dp[b][e] = 0;

    if( ~dp[b][e] )
        return dp[b][e];

    int ret = INF;

    rep( i, e-b )
        ret = std::min( ret, rec( b, b+i )+rec( b+i+1, e )+r[b]*c[b+i]*c[e] );

    return dp[b][e] = ret;
}

int main()
{
    scanf( "%d", &n );
    rep( i, n )
        scanf( "%d%d", r+i, c+i );

    clr( dp, -1 );

    printf( "%d\n", rec( 0, n-1 ) );

    return 0;
}