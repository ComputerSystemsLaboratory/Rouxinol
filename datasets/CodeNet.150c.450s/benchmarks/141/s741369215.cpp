#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>

double area(double a, double b, double c)
{
	double s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
	double x[3], y[3];
	double xp, yp;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf"
		, &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &xp, &yp) != EOF)
	{
		double edge[3];
		for (int i = 0; i < 3; ++i)
			edge[i] = distance(x[i], y[i], x[(i+1)%3], y[(i+1)%3]);
		double correctArea = area(edge[0], edge[1], edge[2]);
		double totalArea = 0;
		for (int i = 0; i < 3; ++i)
		{
			totalArea += area(distance(x[i], y[i], xp, yp)
				, distance(x[(i+1)%3], y[(i+1)%3], xp, yp), edge[i]);
		}
		if (abs(correctArea - totalArea) < 0.0001)
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}