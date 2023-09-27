#include <stdio.h>

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	double s, t;

	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF) {
		s = ((xp - x1) * (y3 - y1) - (yp - y1) * (x3 - x1)) /
				((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));

		t = ((xp - x1) * (y2 - y1) - (yp - y1) * (x2 - x1)) /
				((x3 - x1) * (y2 - y1) - (x2 - x1) * (y3 - y1));

		if(s > 0 && t > 0 && s + t < 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}