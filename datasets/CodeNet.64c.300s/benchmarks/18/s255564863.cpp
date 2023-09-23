#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
	int n ;
	float dp[ 30 ] ;
	while( cin >> n , n )
	{
		dp[ 0 ] = 1 ;
		dp[ 1 ] = 2 ;
		dp[ 2 ] = 4 ;
		for( int i = 3 ; i < n ; i++ )
		{
			dp[ i ] = dp[ i - 1 ] + dp[ i - 2 ] + dp[ i - 3 ] ;
		}
		n-- ;
		cout << ceil( dp[ n ] / 3650 ) << endl ;
	}
	return 0 ;
}