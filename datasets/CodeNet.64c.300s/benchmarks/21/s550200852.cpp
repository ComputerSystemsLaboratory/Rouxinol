#include <cstdio>
void calc(int x1, int y1, int a, int x2, int y2, int b)
{
	double d1 = x2;
	double d2 = x1;
	double xx1 = d1 * x1;
	double xy1 = d1 * y1;
	double a1 = d1 * a;
	double xx2 = d2 * x2;
	double xy2 = d2 * y2;
	double b1 = d2 * b;
	double y = xy1 - xy2;
	double c = a1 - b1;
	y = c / y;


	d1 = y2;
	d2 = y1;
	xx1 = d1 * x1;
	xy1 = d1 * y1;
	a1 = d1 * a;
	xx2 = d2 * x2;
	xy2 = d2 * y2;
	b1 = d2 * b;
	double x = xx1 - xx2;
	c = a1 - b1;
	x = c / x;
	if (x == 0)
	{
		x = 0;
	}
	if (y == 0)
	{
		y = 0;
	}
	printf("%.3lf %.3lf\n", x, y);
}
int main(int argc, char const *argv[])
{
	int x1, y1, a, x2, y2, b;

	while(scanf("%d %d %d %d %d %d", &x1, &y1, &a, &x2, &y2, &b) != EOF)
	{
		calc(x1, y1, a, x2, y2, b);
	}

		
	return 0;
}
