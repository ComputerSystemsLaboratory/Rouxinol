#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int n ;
	while( cin >> n ,n )
	{
		int m ;
		cin >> m ;
		int num[ n ] ;
		for( int i  = 0 ; i < n ; i++ )
			cin >> num[ i ] ;
		int ans = 0 ;
		for( int i  = 0 ; i < n ; i++ )
		{
			int cnt = 0 ;
			for( int j = i ; j < m + i && m + i < n ; j++ )
				cnt += num[ j ] ;
			ans = max( ans ,cnt ) ;
		}
		cout << ans << endl ;
	}
	return 0 ;
}