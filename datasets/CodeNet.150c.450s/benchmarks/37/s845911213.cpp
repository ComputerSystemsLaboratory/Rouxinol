#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double a, b, c, d, e, f;
	double b1, c1, e1, f1;
	double x, y;

	while (cin >> a >> b >> c >> d >> e >> f) {
		b1 = b * d;
		c1 = c * d;
		e1 = e * a;
		f1 = f * a;

		if (b1 == e1) continue;
		y = (c1 - f1) / (b1 - e1);
		x = (c - b * y) / a;
		printf("%.3f %.3f\n", x, y);
	}
	
	return 0;
}