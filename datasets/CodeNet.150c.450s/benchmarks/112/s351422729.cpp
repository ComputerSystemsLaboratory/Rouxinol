#include<iostream>

using namespace std ;

int main()
{
	int n ;
	while( cin >> n ,n )
	{
		char C[ n + 1 ] ,c[ n + 1 ] ;
		for( int i = 0 ; i < n ; i++ )
		{
			cin >> C[ i ] >> c[ i ] ;
		}
		int m ;
		char str ;
		cin >> m ;
		for( int i = 0 ; i < m ; i++ )
		{
			cin >> str ;
			for( int j = 0 ; j < n ; j++ )
			{
				if( str == C[ j ] )
				{
					cout << c[ j ] ;
					goto next ;
				}
			}
			cout << str ;
			next : ;
		}
		cout << endl ;
	}
	return 0 ;
}