#include <iostream>
#include <stdio.h>
using namespace std;

void houteisiki(double a, double b, double c, double d, double e, double f)
{
	double x, y;
    y = (c*d - a*f) / (b*d - a*e);
    x = (c - (b*y)) / a;
   
    printf("%4.3f %4.3f\n",x,y);
}

int main()
{
	double a, b, c, d, e, f;

	while(cin >> a >> b >> c >> d >> e >> f)
		houteisiki(a, b, c, d, e, f);

	return 0;
}