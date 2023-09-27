#include<iostream>

using namespace std ;

int main()
{
	int len ,n ,ans = 0 ;
	cin >> len  ;
	int arry_[ len ] ;

	for( int i = 0 ; i < len ; i++ )
		cin >> arry_[ i ] ;

	cin >> len ;

	for( int i = 0 ; i < len ; i++ )
	{
		cin >> n ;
		for( int j = 0 ; j < sizeof arry_ / sizeof( int ) ; j++ )
		{
			if( n == arry_[ j ] )
			{
				ans++ ;
				break ;
			}
		}
	}

	cout << ans << endl ;

	return 0 ;
}