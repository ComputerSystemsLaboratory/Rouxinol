#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, d, e, f; double xNum, xDen, yNum, yDen;
	while (cin >> a >> b >> c >> d >> e >> f) {
		xNum = c * e - b * f; xDen = a * e - b * d;
		yNum = a * f - c * d; yDen = a * e - b * d;
		cout << fixed << setprecision(3)
			<< xNum / xDen + 1e-9 << " " << yNum / yDen + 1e-9 << endl;
	}
	return 0;
}
