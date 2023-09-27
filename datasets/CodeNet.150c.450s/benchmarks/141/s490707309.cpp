#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double helon(double a, double b, double c)
{
	double s = (a + b + c) / 2;

	return sqrt(s * (s - a) * (s - b) * (s - c));
}

double helon(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double a = distance(x1, y1, x2, y2);
	double b = distance(x2, y2, x3, y3);
	double c = distance(x3, y3, x1, y1);

	return helon(a, b, c);
}

int main()
{
	double x1, y1, x2, y2, x3, y3, xp, yp;

	while ( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
		if (round(helon(x1, y1, x2, y2, x3, y3)*100) == round((helon(x1, y1, x2, y2, xp, yp) + helon(x2, y2, x3, y3, xp, yp) + helon(x3, y3, x1, y1, xp, yp)) *100)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

