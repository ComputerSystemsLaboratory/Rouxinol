#include <iostream>
#include <stdio.h>
#define swap(a,b) {a=a+b; b=a-b; a=a-b;}

using namespace std;

void q4() {
	double a, b, c, d, e, f;
	for (; cin >> a >> b >> c >> d >> e >> f;) {
		//cin >> a >> b >> c >> d >> e >> f;
		//scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

		if (a == 0) {
			swap(a, d);
			swap(b, e);
			swap(c, f);
		}
		b /= a;
		c /= a;
		a = 1;

		e -= b * d;
		f -= c * d;
		d = 0;

		f = f / e;
		e = 1;
		
		c -= f * b;
		b = 0;

		printf("%.3f %.3f\n", c, f);
	}
}

int main() {
	q4();
	return 0;
}