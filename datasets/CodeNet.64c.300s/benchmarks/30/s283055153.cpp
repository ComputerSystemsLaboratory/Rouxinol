#include <iostream>
#include <algorithm>

using namespace std;

int main ( void )
{
	const int m[] = { 1, 5, 10, 50, 100, 500 };
	int n;
	
	while ( cin >> n, n )
	{
		n = 1000 - n;
		int count = 0;
		for (int i = 5; i >= 0; --i)
		{
			count += n / m[i];
			n %= m[i];
		}
		cout << count << endl;
	}
	return 0;
}