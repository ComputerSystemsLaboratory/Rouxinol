#include <iostream>
using namespace std ;

int main()
{
	int ary[101] ;
	int get ;
	int tmp = 0 ;

	for( int i = 1 ; i < 101 ; i ++ )
	{
		ary[i] = 0 ;
	}

	while( cin >> get )
	{
		ary[get] ++ ;

		if( ary[get] > tmp )
		{
			tmp = ary[get] ;
		}
	}

	for( int i = 1 ; i < 101 ; i ++ )
	{
		if( ary[i] == tmp )
		{
			cout << i << endl ;
		}
	}
	return 0 ;
}