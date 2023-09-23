#include <iostream>

using namespace std;

int main ( void )
{
	int x;
	unsigned int mx = 0, data[101] = { 0 };

	while (cin >> x)
	{
		++data[x];
		mx = max( mx, data[x] );
	}

	for (int i = 1; i < 101; ++i)
	{
		if (data[i] == mx)
			cout << i << endl;
	}

	return 0;
}