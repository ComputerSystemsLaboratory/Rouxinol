#include <stdio.h>

double cr(double x1, double y1, double x2, double y2) {
	return x1*y2-x2*y1;
}

int main()
{
	for(;;) {
		double x[4], y[4];
		if (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
					x, y, x+1, y+1, x+2, y+2, x+3, y+3)==EOF) {
			return 0;
		}
		else {
			double cr1 = cr(x[3]-x[0], y[3]-y[0], x[3]-x[1], y[3]-y[1]);
			double cr2 = cr(x[3]-x[1], y[3]-y[1], x[3]-x[2], y[3]-y[2]);
			double cr3 = cr(x[3]-x[2], y[3]-y[2], x[3]-x[0], y[3]-y[0]);
			if (cr1*cr2>=0 && cr2*cr3>=0 && cr3*cr1>=0) printf("YES\n");
			else printf("NO\n");
		}
	}
}