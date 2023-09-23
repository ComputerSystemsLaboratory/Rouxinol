#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f)
	{
		if (a == 0)
		{
			double x = (c * f - b * e) / d;
			double y = b / c;
			printf("%.3f %.3f\n", x, y);
		}
		else
		{
			double x = (c / a) - (a * b * f - b * c * d) / (a * a * e - a * b * d);
			double y = (a * f - c * d) / (a * e - b * d);
			printf("%.3f %.3f\n", x, y);
		}
	}

	return 0;
}