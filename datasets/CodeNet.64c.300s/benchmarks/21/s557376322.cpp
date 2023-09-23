#include<iostream>
#include<iomanip>

int main()
{
	double a, b, c, d, e, f, x, y;
	std::cout << std::fixed << std::setprecision(3);
	while (std::cin >> a >> b >> c >> d >> e >> f)
	{
		x = (c * e - b * f) / (a * e - b * d);
		y = (c * d - a * f) / (b * d - a * e);
		if (-0.001 < x && x < 0.001)
			x = 0;
		if (-0.001 < y && y < 0.001)
			y = 0;
		std::cout << x << " " << y << std::endl;
	}

	return 0;
}
