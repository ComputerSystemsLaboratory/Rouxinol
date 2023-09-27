#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	long long x, y, z, e, m;
	while (cin >> e&&e != 0) {
		m = 1000000000000000000;
		for (z = ceil(sqrt(e)); z >= 0; z--) {
			if (z*z*z <= e) {
				for (y = ceil(sqrt(e - z*z*z)); y >= 0; y--) {
					if (z*z*z + y*y <= e) {
						x = e - z*z*z - y*y;
						m = min(x + y + z, m);
					}
				}
			}
		}
		cout << m << endl;
	}
}