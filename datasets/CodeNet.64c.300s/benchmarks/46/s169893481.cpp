#include <iostream>
using namespace std;

int p[999999] = {-1};

int main(void)
{
	int a, d, n;

	for (int i = 2; i < 1000000; ++i)
	{
		if (p[i-1] != 0) continue;
		p[i-1] = 1;
		for (int j = i+i; j < 1000000; j += i) p[j-1] = -1;
	}

	while (cin >> a >> d >> n && a && d && n)
	{
		int m = 0, i;
		for (i = a; i < 1000000; i += d)
		{
			if (p[i-1] == 1)
			{
				++m;
				if (m == n) break;
			}
		}
		cout << i << endl;
	}
}