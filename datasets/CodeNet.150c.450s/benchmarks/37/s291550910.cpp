#include<cmath>
#include<iostream>

int main(int, char**)
{
	double a, b, c, d, e, f = 0;
	while (std::cin >> a >> b >> c >> d >> e >> f)
	{
		double y = std::roundl((c * d - a * f) / (b * d - a * e) * 1000.0) / 1000.0;
		double x = std::roundl((c * e - b * f) / (a * e - b * d) * 1000.0) / 1000.0;
		printf("%.3f %.3f\n", x + 0, y + 0);
	}
}
