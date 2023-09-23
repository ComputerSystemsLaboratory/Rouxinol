#include <iostream>

using namespace std;

int main ()
{
	int n,x,c = 0;
	//[012345....abc...n ]   a & b & c & .... <= n

	while (1)
	{
		c=0;
		cin >> n >> x;
	for (int q = 1; q <= n; q++)
	{
		for (int e = q + 1; e <= n; e++)
		{
			for (int y = e + 1; y <= n; y++)
			{
				if (q + e + y == x)
				{
					c++;
				}
			}
		}
	}

	if (n == 0 && x == 0)
				{
					break;
				}

	cout << c << endl;

	}
	return 0;
}