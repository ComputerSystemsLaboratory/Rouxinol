#include <iomanip>
#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	double a[3], b[3];
	while (cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2])
	{
		if (a[0] == 0)
		{
			double c = a[2] / a[1];
			double d = (b[2] - b[1] * c) / b[1];
			a[2] = d;
			b[2] = d;
		}
		else
		{
			double c = 1;
			if (b[0] != 0)
			{
				c = a[0] / b[0];
				b[1] = b[1] * c - a[1];
				b[2] = b[2] * c - a[2];
			}
			b[2] /= b[1];
			b[1] = 1;
			a[2] -= b[2] * a[1];
			a[2] /= a[0];
		}
		if (a[2] < 0.0001 && a[2] > -0.0001)
			a[2] = 0.000;
		if (b[2] < 0.0001 && b[2] > -0.0001)
			b[2] = 0.000;

		cout << fixed << setprecision(3) << a[2]  << " " << b[2] << endl;
	}

	return 0;
}