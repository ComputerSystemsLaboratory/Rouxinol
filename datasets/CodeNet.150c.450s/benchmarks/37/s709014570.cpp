#include<iostream>
#include<cstdio>

int main()
{
	double a, b, c, d, e, f;
	double x, y;
	while (std::cin >> a >> b >> c >> d >> e >> f)
	{
		y = (a*f - c*d) / (a*e - b*d);
		x = (c - b*y) / a;
		printf("%.3lf ", x);
		printf("%.3lf\n", y);
	}
	return 0;
}