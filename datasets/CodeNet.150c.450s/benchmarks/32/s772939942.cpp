#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int m,max,min;
	cin >> m >> min >> max;
	while (m != 0 || min != 0 || max != 0) {
		vector<int> P(m);
		for (int i = 0; i < m; ++i) {
			cin >> P[i];
		}
		int ret;
		int gap;
		for (int n = min; n < max+1; ++n) {
			if (n == min) {
				ret = n;
				gap = P[n-1] - P[n];
			}
			else if (gap <= P[n-1] - P[n]) {
				ret = n;
				gap = P[n-1] - P[n];
			}
		}
		cout << ret << endl;
		cin >> m >> min >> max;
	}
	return 0;
}