#include <iostream>
#include <algorithm>
using namespace std;
int main( void )
{
	while (1)
	{
		int n;
		cin >> n;
		if ( n == 0 )
			break;

		bool flag = false;
		int max_value = 0;
		int now = 0;
		for ( int i = 0; i < n; i++ )
		{
			int value;
			cin >> value;
			now += value;
			if ( flag == false )
			{
				max_value = now;
				flag = true;
			}
			max_value = max( now, max_value );
			if ( now < 0 )
				now = 0;
		}

		if ( now > 0 )
			max_value = max( now, max_value );

		cout << max_value << endl;

	}
	return 0;
}