#include <iostream>
#include <vector>
using namespace std;

int a[5000];

int main()
{
	int n, i, j, s, max;

	while (cin >> n)
	{
		if (n == 0) break;

		for (i = 0; i < n; i++)
			cin >> a[i];

		max = -2147483647;
		for (i = 0; i < n; i++)
		{
			s = 0;
			for (j = i; j < n; j++)
			{
				s += a[j];
				if (s > max)
					max = s;
			}
		}
		cout << max << endl;
	}
	return 0;
}