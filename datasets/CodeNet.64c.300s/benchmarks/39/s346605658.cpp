#include <iostream>
using namespace std;
int main( void )
{
	while ( !cin.eof() )
	{
		int n;
		cin >> n;
		if ( cin.eof() )
			break;

		int kotae = 0;

		for ( int a = 0; a <= 9; a++ )
		for ( int b = 0; b <= 9; b++ )
		for ( int c = 0; c <= 9; c++ )
		for ( int d = 0; d <= 9; d++ )
			if ( a + b + c + d == n )
				kotae++;

		cout << kotae << endl;

	}
	return 0;
}