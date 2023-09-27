#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	double eps = 0.0000000001;
	while (n--){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double s1 = x2 - x1,
			   t1 = y2 - y1,
			   s2 = x4 - x3,
			   t2 = y4 - y3;
		double v = fabs(s1 * t2 - s2 * t1);
		if (v < eps) cout << "YES\n";
		else         cout << "NO\n";
	}
	return 0;
}