#include <cstdio>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	while (scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f) != EOF) {
		double x, y;
		if (a != 0 && d != 0) {
			y = ((double)c / a - (double)f / d) / ((double)b / a - (double)e / d);
			x = (double)c / a - y * (double)b / a;
		}
		else if (b != 0 && e != 0) {
			x = ((double)c / b - (double)f / e) / ((double)a / b - (double)d / e);
			y = (double)c / b - x * (double)a / b;
		}
		else if (a == 0) {
			y = (double)c / b;
			x = (f - e * y) / (double)d;
		}
		else if (d == 0) {
			y = (double)f / e;
			x = (c - b * y) / (double)a;
		}
		else if (b == 0) {
			x = (double)c / a;
			y = (f - d * x) / (double)e;
		}
		else if (e == 0) {
			x = (double)f / d;
			y = (c - a * x) / (double)b;
		}
		printf("%.3f %.3f\n", x, y);
	}
	return 0;
}