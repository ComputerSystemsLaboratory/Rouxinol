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

		long long f = 1;
		for ( int i = 2; i <= n; i++ )
		{
			f *= i;
		}

		cout << f << endl;
	}

}