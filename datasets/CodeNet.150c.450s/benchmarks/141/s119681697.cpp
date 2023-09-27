#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

bool judge(double x[2], double y[2]) {
	double cross = x[0] * y[1] - y[0] * x[1];
	if(cross >= 0) return true;
	else return false;
}

int main() {
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF) {
		double ax[2], ay[2];
		ax[0] = x2 - x1;
		ay[0] = y2 - y1; 
		ax[1] = xp - x1;
		ay[1] = yp - y1;
		double bx[2], by[2];
		bx[0] = x3 - x2;
		by[0] = y3 - y2;
		bx[1] = xp - x2;
		by[1] = yp - y2;
		double cx[2], cy[2];
		cx[0] = x1 - x3;
		cy[0] = y1 - y3;
		cx[1] = xp - x3;
		cy[1] = yp - y3;
		if(judge(ax, ay) && judge(bx, by) && judge(cx, cy) || !judge(ax, ay) && !judge(bx, by) && !judge(cx, cy)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}