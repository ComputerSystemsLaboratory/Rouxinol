#include <iostream>
#include <algorithm>
#include <cstring>

int n;
int m;
int ms[50];
int INF = 1000000000;
int dp[50010];

int pay ( int remained )
{
	if ( remained == 0 )
		return 0;
	if ( remained < 0 )
		return INF;
	if ( dp[remained] != -1 )
		return dp[remained];

	int result = INF;
	for ( int i = 0; i < m; ++i )
	{
		result = std::min( result, pay( remained - ms[ i ] ) + 1 );
	}
	return dp[ remained ] = result;	
}

int main()
{
	memset( dp, -1, sizeof( dp ) );
	std::cin >> n >> m;
	for ( int i = 0; i < m; ++i )
		std::cin >> ms[ i ];

	std::cout << pay( n )  << std::endl;
	return 0;
}