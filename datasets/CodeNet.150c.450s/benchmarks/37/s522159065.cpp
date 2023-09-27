#include <cstdio>

int main() {
	using namespace std;
	for (;;) {
		double a, b, c, d, e, f;
		if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) == EOF) { break; }

		double detA = (double)(a * e - b * d);
		if (detA == 0) { break; }
		double x = (double)(e * c - b * f) / detA;
		if (x <= 0 && x > -5e-4) { x = 0; }
		double y = (double)(-d * c + a * f) / detA;
		if (y <= 0 && y > -5e-4) { y = 0; }
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}