#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#define repi(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,a) repi(i,0,a)
#define clr(a,v) memset((a),(v),sizeof(a))

const int MAX_N = 100, INF = std::numeric_limits<int>::max()>>2;

int n;
int r[MAX_N], c[MAX_N];
std::vector<std::vector<int> > dp( MAX_N, std::vector<int>( MAX_N, INF ) );

/*int rec( int b, int e )
{
    if( b == e )
        return dp[b][e] = 0;

    if( ~dp[b][e] )
        return dp[b][e];

    int ret = INF;

    rep( i, e-b )
        ret = std::min( ret, rec( b, b+i )+rec( b+i+1, e )+r[b]*c[b+i]*c[e] );

    return dp[b][e] = ret;
}*/

int main()
{
    scanf( "%d", &n );
    rep( i, n )
        scanf( "%d%d", r+i, c+i );

    rep( i, n )
        dp[i][i] = 0;

    repi( w, 1, n ) rep( i, n ) if( i+w < n ) repi( j, i, i+w )
        dp[i][i+w] = std::min( dp[i][i+w], dp[i][j]+dp[j+1][i+w]+r[i]*c[j]*c[i+w] );

    printf( "%d\n", dp[0][n-1] );

    return 0;
}