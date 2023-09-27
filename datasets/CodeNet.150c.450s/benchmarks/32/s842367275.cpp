#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int m,nmin,nmax;
	while (cin >> m >> nmin >> nmax, m) {
		vector<int> p(m);
		for (int i = 0; i < m; ++i) {
			cin >> p[i];
		}
		int res = 0;
		int gap = 0;
		for (int i = nmin; i <= nmax; ++i) {
			if (p[i-1] - p[i] >= gap) {
				res = i;
				gap = p[i-1] - p[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}