#include <iostream>
using namespace std;

int main()
{
	int r = 0 , c = 0 , i = 0 , j = 0 , box[256][256];
	cin >> r >> c ;
	for ( i = 0 ; i < r ; i ++ )
	{
		for ( j = 0 ; j < c ; j++ )
		{
			cin >> box[i][j] ;
			box[i][c] += box[i][j] ;
			box[r][j] += box[i][j] ;
			if ( i == r-1 ) box[r][c] += box[r][j] ;
		}
	}
	for ( int i2 = 0 ; i2 <= r ; i2++ )
	{
		for ( int j2 = 0 ; j2 <= c ; j2++ )
		{
			cout << box[i2][j2] ;
			if ( j2 != c ) cout << " " ;
			else cout << endl ;
		}
	}
	return 0;
}

