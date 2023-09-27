#include<iostream>
#include<cstdio>

using namespace std;

// a = 1のとき
// x = c - by
// d(c-by)*ey=f
// y = (f - dc) / (e - db)

double func1(double y1, double r1, double x2, double y2, double r2) {
	double temp1 = x2 * y1;
	double temp2 = x2 * r1;
	return (r2 - temp2) / (y2 - temp1);
}

int main() {

	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
		double x = 0.0, y = 0.0;

		// double型は等価比較してはいけないといわれるが、
		// 一度も計算していないためこのケースは問題なし
		if (a == 1.0) {
			y = func1(b, c, d, e, f);
			x = c - b * y;
		}
		else if (d == 1.0) {
			y = func1(e, f, a, b, c);
			x = f - e * y;
		}
		else if (b == 1.0) {
			x = func1(a, c, e, d, f);
			y = c - a * x;
		}
		else if (e == 1.0) {
			x = func1(d, f, b, a, c);
			y = f - d * x;
		}
		else {
			// aが1となるように計算
			double a_1 = 1.0, b_1 = b / a, c_1 = c / a;
			y = func1(b_1, c_1, d, e, f);
			x = c_1 - b_1 * y;
		}

		printf("%.3f %.3f\n", x, y);
	}

	return 0;
}