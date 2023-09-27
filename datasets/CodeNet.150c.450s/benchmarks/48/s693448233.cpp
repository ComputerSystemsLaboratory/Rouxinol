#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int e;
	while (cin >> e, e) {
		int m=20000000;
		int x, y, z;
	
		for (z = 0; z*z*z <= e; z++) {
			for (y = 0; y*y + z*z*z <= e; y++) {
				x = e - (y*y + z*z*z);
				m = min(m, x + y + z);
			}
		}
		cout << m << endl;

	}
	return 0;
}