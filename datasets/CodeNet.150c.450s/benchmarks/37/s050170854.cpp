#include "iostream"
#include<cstdio>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	double kotaemin, min;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double y,x;
		kotaemin = (a*f) - (c*d);
		min = a*e - b*d;
		y = kotaemin / min;
		x = (c - b*y) / a;
	//	y += 0.0005;
		//x += 0.0005;
		printf("%.3f %.3f\n",  x, y);
	}

	return 0;
}