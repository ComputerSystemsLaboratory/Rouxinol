#include <iostream>
#include <cmath>

using namespace std;

double get2pDist(double, double, double, double);
double getplDist(double, double, double, double, double, double);
double getTriangle(double, double, double, double, double, double);

int main(){
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		double S = getTriangle(x1, y1, x2, y2, x3, y3);
		double s =
			getTriangle(x1, y1, x2, y2, xp, yp)
			+ getTriangle(x2, y2, x3, y3, xp, yp)
			+ getTriangle(x3, y3, x1, y1, xp, yp);
		abs(S - s) == 0 ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}

double get2pDist(double x1, double y1, double x2, double y2){
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));	
}

double getplDist(double x, double y, double x1, double y1, double x2, double y2){
	double a, b, c;
	a = y1 - y2;
	b = x2 - x1;
	c = x1 * y2 - x2 * y1;
	return abs(a * x + b * y + c) / sqrt(a * a + b * b);
}

double getTriangle(double x1, double y1, double x2, double y2, double x3, double y3){
	return (get2pDist(x1, y1, x2, y2)
	 * getplDist(x3, y3, x1, y1, x2, y2)) / 2;
}