#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	double m[4], e, f, d, x, y;
	cout.setf (ios::fixed); cout.precision (3);
	while (cin >> m[0] >> m[1] >> e >> m[2] >> m[3] >> f) {
		d = m[0]*m[3] - m[1]*m[2];
		if (0.0 == ((x = (m[3]*e - m[1]*f)/d) + 0.0)) x = 0.0;
		if (0.0 == ((y = (m[0]*f - m[2]*e)/d) + 0.0)) y = 0.0;
		cout << x << " " << y << endl;
	}
}