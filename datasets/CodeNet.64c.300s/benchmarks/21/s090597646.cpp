#include <math.h>
#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <string>

#define YES "YES"
#define NO "NO"
#define space ' '

using namespace std;

void func();

int main(void)
{
	
	func();

	return 0;
}

// using matrix	?????????????????´??????
void func()
{
	double a, b, c, d, e, f;
	double x, y;

	while (cin >> a >> b >> c >> d >> e >> f, !cin.eof()){


		cout << fixed << setprecision(3);


		if ((a*e - d*b) == 0)
			x = 0.0, y = 0.0;
		else {
			x = (double)((e*c - b*f) / (a*e - d*b));
			y = (double)((-(d*c) + a*f) / (a*e - d*b));


			if (x == 0)
				x = 0.0;
			if (y == 0)
				y = 0.0;
		}
		cout << x << space << y << endl;


		cout << dec;
	}
}