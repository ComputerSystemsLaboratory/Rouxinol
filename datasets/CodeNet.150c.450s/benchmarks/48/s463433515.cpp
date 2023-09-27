#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int x, y, z, e, m;
	while (cin >> e && e > 0){
		m = 10000000;
		for (y = 0; y*y <= e; y++) {
			for (z = 0; z*z*z <= e; z++) {
				int x = e - y*y - z*z*z;
				if (x >= 0)
					m = min (m, x + y + z);
			}
		}
		cout << m << endl;
	}
}