#include <stdio.h>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	double x, y;
	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
		int a1 = a, b1 = b, c1 = c, d1 = d, e1 = e, f1 = f;
		a1 *= e;
		b1 *= e;
		c1 *= e;
		d1 *= b;
		e1 *= b;
		f1 *= b;
		if(f1 - c1 == 0) printf("0.000 ");
		else printf("%.3f ", (double) (f1 - c1) / (d1 - a1));

		b *= d;
		c *= d;
		d *= a;
		e *= a;
		f *= a;
		if(f - c == 0) printf("0.000\n");
		printf("%.3f\n", (double) (f - c) / (e - b));
	}
	return 0;
}