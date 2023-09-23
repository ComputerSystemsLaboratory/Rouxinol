#include <iostream>
using namespace std ;

int main()
{
	int Aslc[4] ;
	int Bslc[4] ;

	int hit = 0 ;
	int blow = 0 ;

	while( cin >> Aslc[0] >> Aslc[1] >> Aslc[2] >> Aslc[3] >> Bslc[0] >> Bslc[1] >> Bslc[2] >> Bslc[3] )
	{
		for( int i = 0 ; i < 4 ; i ++ )
		{
			for( int j = 0 ; j < 4 ; j ++ )
			{
				if( Aslc[i] == Bslc[j] )
				{
					if( i == j )
					{
						hit ++ ;
					}
					else
					{
						blow ++ ;
					}
				}
			}
		}

		cout << hit << " " << blow << endl ;
		hit = 0 ;
		blow = 0 ;
	}

	return 0 ;
}