#include <stdio.h>
#include <complex>

double cross(double x1, double y1, double x2, double y2) {
	return x1*y2-x2*y1;
}

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",
				&x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp)!=EOF) {
		double c1 = cross(xp-x1, yp-y1, x2-x1, y2-y1);
		double c2 = cross(xp-x2, yp-y2, x3-x2, y3-y2);
		double c3 = cross(xp-x3, yp-y3, x1-x3, y1-y3);
		if((c1>0 && c2>0 && c3>0) || (c1<0 && c2<0 && c3<0)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}