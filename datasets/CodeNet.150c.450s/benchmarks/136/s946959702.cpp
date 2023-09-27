#include <iostream>
#include <algorithm>
using namespace std;

void AOJ0005()
{
	long a, b;
	while (cin >> a)
	{
		cin >> b;
		long c = max(a,b);
		long d = min(a,b);
		while (c != d)
		{
			long e = c - d;
			c = max(d, e);
			d = min(d, e);
		}
		long f = a/c * b;
		cout << c << " " << f <<endl;
	}
}

int main()
{
	AOJ0005();
	return 0;
}