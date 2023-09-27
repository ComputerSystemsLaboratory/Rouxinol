#include <bits/stdc++.h>

double xa, ya, xb, yb, xc, yc, xp, yp, x, y, z;
double m(double a, double b, double c, double d) {
	return a*d - b*c;
}
int main() {
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc, &xp, &yp) != EOF) {
		x = m(xp-xa, yp-ya, xb-xa, yb-ya);
		y = m(xp-xb, yp-yb, xc-xb, yc-yb);
		z = m(xp-xc, yp-yc, xa-xc, ya-yc);
		if ((x<0 && y<0 && z<0) || (x>0 && y>0 && z>0)) printf("YES\n");
		else printf("NO\n");
	}
}
