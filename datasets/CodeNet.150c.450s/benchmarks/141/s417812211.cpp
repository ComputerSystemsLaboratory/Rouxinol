#include<iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		//cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << xp << " " << yp << " " << endl;
		//AB
		double abx = x2 - x1;
		double aby = y2 - y1;
		//BC
		double bcx = x3 - x2;
		double bcy = y3 - y2;
		//CA
		double cax = x1 - x3;
		double cay = y1 - y3;
		//AP
		double apx = xp - x1;
		double apy = yp - y1;
		//BP
		double bpx = xp - x2;
		double bpy = yp - y2;
		//CP
		double cpx = xp - x3;
		double cpy = yp - y3;

		//AB * BP
		double a = abx*bpy - aby*bpx;
		//BC * CP
		double b = bcx*cpy - bcy*cpx;
		//CA * AP
		double c = cax*apy - cay*apx;

		if ((a > 0 && b > 0 && c > 0) || (a < 0 && b < 0 && c < 0)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

    return 0;
}