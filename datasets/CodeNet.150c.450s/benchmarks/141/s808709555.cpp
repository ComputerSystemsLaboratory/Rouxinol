#include <iostream>
using namespace std;

int main(void) {
	double x[4], y[4];
	double xp, yp;

	while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp) {
		bool l, r;
		l = r = false;
		
		x[3] = x[0];
		y[3] = y[0];

		for(int i = 0; i < 3; i++) {
			double ax = x[i+1] - x[i];
			double ay = y[i+1] - y[i];
			double px = xp - x[i];
			double py = yp - y[i];
			if(ax*py - ay*px < 0)
				r = true;
			else
				l = true;
		}
		cout << (r != l ? "YES" : "NO") << endl;
	}
	return 0;
}