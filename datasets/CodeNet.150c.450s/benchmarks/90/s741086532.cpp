#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int number[101] = { 0 };
	int tmp, max_num = 0;

	while ( cin >> tmp )
	{
		number[tmp] = number[tmp] + 1;
		max_num = max( number[tmp], max_num );
	}

	tmp = 0;
	while ( tmp < 101 )
	{
		if ( max_num == number[tmp] )
		{
			cout << tmp << endl;
		}
		tmp = tmp + 1;
	}

	return 0;
}