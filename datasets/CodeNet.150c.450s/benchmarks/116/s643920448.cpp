#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int n ;
	while( cin >> n ,n )
	{
		int m ;
		cin >> m ;
		int num[ n + 1 ] ;
		num[ 0 ] = 0 ;
		for( int i = 1 ; i <= n ; i++ )
		{
			cin >> num[ i ] ;
			num[ i ] += num[ i - 1 ] ;
		}
		int ans = 0 ;
		for( int i = m ; i <= n ; i++ )
			ans = max( ans ,num[ i ] - num[ i - m ] ) ;
		cout << ans << endl ;
	}
	return 0 ;
}