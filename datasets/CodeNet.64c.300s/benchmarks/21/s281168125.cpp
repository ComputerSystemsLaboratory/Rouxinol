#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a, b, c, d, e, f,y,x;
	while (cin >> a >> b >> c >> d >> e >> f){
		x = ((e*c - b*f) / (a*e - b*d));
		y = ((-(d*c) + a*f) / (a*e - b*d));
		if (x == 0){ x = 0.0; }
		if (y == 0){ y = 0.0; }
		printf("%.3lf %.3lf\n", x, y);
	}
}