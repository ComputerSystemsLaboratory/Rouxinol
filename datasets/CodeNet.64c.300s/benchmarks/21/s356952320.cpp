#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
	double a, b, c, d, e, f;
	while (cin >> a >> b >> c >> d >> e >> f) {
	long double x = (b * f - c * e) / (b * d - a * e) * 1000.0f;
	long double y = (c * d - a * f) / (b * d - a * e) * 1000.0f;
	x = round(x) + 0.000001;
	y = round(y) + 0.000001;
	x /= 1000.0f;
	y /= 1000.0f;
	cout << fixed << setprecision(3) << x << ' ' << y << endl;
	}
	return 0;
}