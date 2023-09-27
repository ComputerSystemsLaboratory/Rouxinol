#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f){
		/*
		a = 2;
		b = -1;
		c = -3;
		d = 1;
		e = -1;
		f = -3;
		*/
		double x, y;
		x = (c * e - b * f) / (a * e - b * d);
		y = (c * d - a * f) / (b * d - a * e);
		if (x == -0.000) x = 0.000;
		if (y == -0.000) y = 0.000;
		cout << fixed << setprecision(3) << x << " " << y << endl;
	}
	return 0;
}