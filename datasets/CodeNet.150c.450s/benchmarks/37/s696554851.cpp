#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
#include <stdio.h>
using namespace std;

// Simultaneous Equation(0004)
int main()
{
	int a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = (e*c - b*f) / static_cast<double>(a*e - b*d);
		double y = (d*c - a*f) / static_cast<double>(b*d - a*e);
		
		if (x >= 0)
			x += 0.0005;
		else
			x -= 0.0005;

		if (y >= 0)
			y += 0.0005;
		else
			y -= 0.0005;

		int xx = x * 1000;
		int yy = y * 1000;

		printf("%.3lf %.3lf\n", xx/1000.0, yy/1000.0);

	}
	return 0;
}