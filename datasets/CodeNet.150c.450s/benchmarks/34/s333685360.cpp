#include <iostream>
#include <vector>
using namespace std;

int limit;
int dfs( int n )
{
	if ( n == limit ) return 1;
	if ( n > limit ) return 0;
	int count = 0;
	for ( int i = 1; i <= 3; i++ )
	{
		count += dfs( n+i );
	}
	return count;
}

int calc( int n )
{
	limit = n;
	int count = dfs( 0 );
	return count / 10;
}

int calc2( int n )
{
	vector <int> dp(n+4,0);
	dp[1] = dp[2] = dp[3] = 1;
	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= 3; j++ ) dp[i+j] += dp[i];
	}
	return dp[n] / 10;
}

int main( void )
{
	int n;
	while ( cin >> n && n )
	{
		int days = calc2( n );
		cout << days/365+1 << endl;
	}
	return 0;
}