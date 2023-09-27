#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3, px, py;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> px >> py) {
		double j1 = (x1 - x2)*(py - y2) - (px - x2)*(y1 - y2),
		       j2 = (x3 - x1)*(py - y1) - (px - x1)*(y3 - y1),
			   j3 = (x2 - x3)*(py - y3) - (px - x3)*(y2 - y3);
		if ((j1 < 0 && j2 < 0 && j3 < 0) || (j1 > 0 && j2 > 0 && j3 > 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}