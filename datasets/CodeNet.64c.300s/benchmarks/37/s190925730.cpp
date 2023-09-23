#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	int n;
	while ( cin >> n && n )
	{
		int answer = 0;

		for ( int right = 1; right < n; right++ )
		{
			for ( int left = 1; left < right; left++ )
			{
				int sum = ( right - left + 1 ) * ( left + right ) / 2;
				if ( sum == n ) answer++;
			}
		}

		cout << answer << endl;
	}
	return 0;
}