// AOJ 0515 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0515)
#include<cstdio>
#include<cstring>
#define rep(i,a) for(int i=0;i<(a);++i)
#define clr(a,v) memset((a),(v),sizeof(a))

typedef long long ll;

int a, b;
bool used[17][17];
ll dp[17][17];

int main()
{
	while( scanf( "%d%d", &a, &b ), a|b )
	{
		int n;
		scanf( "%d", &n );

		clr( used, false );
		clr( dp, 0 );

		rep( i, n )
		{
			int x, y;
			scanf( "%d%d", &x, &y );
			used[y-1][x-1] = true;
		}

		dp[0][0] = 1;

		rep( j, a ) rep( i, b ) if( !used[i][j] && (i||j) )
			dp[i][j] = (j-1>=0?dp[i][j-1]:0)+(i-1>=0?dp[i-1][j]:0);

		printf( "%lld\n", dp[b-1][a-1] );
	}

	return 0;
}