#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <limits>
#include <sstream>

using namespace std;

int main (void)
{
	for (int u = 0; u < 300; u++)
	{
		long long n,a[1001];

		cin >> n;
		if (n == 0)
		{
			break;
		}

		long p = 1000001;

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort(a,a + n);

		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < n; j++)
			{
				if (i < j && a[j] - a[i] < p)
				{
					p = 0;
					p = a[j] - a[i];
				}
			}
		}

		cout << p << endl;
	}
}
