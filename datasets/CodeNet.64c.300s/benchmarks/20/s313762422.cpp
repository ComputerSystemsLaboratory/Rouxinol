#include <iostream>
using namespace std;
int main( void )
{
	while ( 1 )
	{
		int d;
		cin >> d;
		if ( cin.eof() )
			break;

		int sum = 0;
		for ( int i = d; i < 600; i += d )
		{
			sum += (i*i*d);
		}

		cout << sum << endl;

	}
	return 0;
}