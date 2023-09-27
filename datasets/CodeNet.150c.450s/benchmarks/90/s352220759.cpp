#include <iostream>
using namespace std ;

int main()
{
	int ary[100] ;
	int get ;
	int tmp = 0 ;

	for( int i = 0 ; i < 100 ; i ++ )
	{
		ary[i] = 0 ;
	}

	while( cin >> get )
	{
		ary[get-1] ++ ;

		if( ary[get-1] > tmp )
		{
			tmp = ary[get-1] ;
		}
	}

	for( int i = 0 ; i < 100 ; i ++ )
	{
		if( ary[i] == tmp )
		{
			cout << (i+1) << endl ;
		}
	}
	return 0 ;
}