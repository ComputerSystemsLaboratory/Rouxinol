#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int e, m, a, x;
	double c, d;
	while (true) {
		cin >> e;
		if (e == 0) break;
		m = 90000000;

		c = pow(e, 1.0 / 3.0);
		d = sqrt(e);
		for (int z = 0; z <= c + 100; z++) {
			for (int y = 0; y <= d + 100; y++) {	
				x = e - y*y - z*z*z;
				if (x < 0) break;
				else {
					a = x + y + z;
					if (a < m) m = a;
				}
			}
		}

		cout << m << endl;
	}
	return 0;
}