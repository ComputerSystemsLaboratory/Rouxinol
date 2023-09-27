#include<iostream>
#include<cstdio>
using namespace std;
bool cross(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy) {
	double ta = (cx - dx) * (ay - cy) + (cy - dy) * (cx - ax);
	double tb = (cx - dx) * (by - cy) + (cy - dy) * (cx - bx);
	double tc = (ax - bx) * (cy - ay) + (ay - by) * (ax - cx);
	double td = (ax - bx) * (dy - ay) + (ay - by) * (ax - dx);
	return tc * td <= 0 && ta * tb <= 0;
}
signed main(){
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while( scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) != EOF ){
		double xc = ( x1 + x2 + x3 )/3;
		double yc = ( y1 + y2 + y3 )/3;
		if (cross(x1, y1, x2, y2, xc, yc, xp ,yp) ||
				cross(x2, y2, x3, y3, xc, yc, xp ,yp) ||
				cross(x3, y3, x1, y1, xc, yc, xp ,yp)){
			cout << "NO" << endl;
		}else cout << "YES" << endl;
	}
	return 0;
}