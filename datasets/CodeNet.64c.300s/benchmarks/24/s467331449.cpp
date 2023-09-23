#include <iostream>

using namespace std;

int main ( void )
{
	int n;

	while ( cin >> n, n )
	{
		int A, B;
		A = B = 0;

		for (int i = 0, a, b; i < n; ++i)
		{
			cin >> a >> b;

			if ( a > b )
				A += a + b;
			else if ( a < b )
				B += a + b;
			else
			{
				A += a;
				B += b;
			}
		}

		cout << A << ' ' << B << endl;
	}

	return 0;
}