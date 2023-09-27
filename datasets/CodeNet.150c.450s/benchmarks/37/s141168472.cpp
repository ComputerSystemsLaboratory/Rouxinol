#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

template<typename T> void simultaneous_equation(T &x, T &y, T a, T b, T c, T d, T e, T f)
{
	if (a == 0 || b == 0 || d == 0 || e == 0)
	{
		if (a == 0)
		{
			y = c / b;
			x = (f - e * y) / d;
		}
		else if (b == 0)
		{
			x = c / a;
			y = (f - d * x) / e;
		}

		if (d == 0)
		{
			y = f / e;
			x = (c - b * y) / a;
		}
		else if (e == 0)
		{
			x = f / d;
			y = (c - a * x) / b;
		}
	}
	else
	{
		double a0 = a * e;
		double c0 = c * e;

		double d0 = d * b;
		double f0 = f * b;

		x = (f0 - c0) / (d0 - a0);

		y = (c - a * x) / b;
	}
}

int main()
{
	double a, b, c, d, e, f;
	for (; cin >> a >> b >> c >> d >> e >> f;)
	{
		double x, y;

		simultaneous_equation(x, y, a, b, c, d, e, f);
		cout << fixed << setprecision(3) << x + 0 << " " << y + 0 << endl;
	}
}
