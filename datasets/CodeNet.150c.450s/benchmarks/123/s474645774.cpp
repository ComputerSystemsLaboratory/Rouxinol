#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
	int n, m, p, q;
	q = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		p = 0;
		cin >> m;
		if (m != 1) {
			for (int j = 2; j <= sqrt(m); j++) {
				if (m%j == 0) {
					p++;
				}
			}
			if (p == 0) {
				q++;
			}
		}
	}
	cout << q << endl;
	return 0;
}