#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
	while ( !cin.eof() )
	{
		vector <int> v(5);
		for ( int i = 0; i < 5; i++ )
			cin >> v[i];
		if ( cin.eof() )
			break;

		sort( v.rbegin(), v.rend() );

		for ( int i = 0; i < 5; i++ )
		{
			cout << v[i];
			if ( i < 4 )
				cout << " ";
			else
				cout << endl;
		}

	}
	return 0;
}