#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
	vector<int> v;
	int m, nmin, nmax, gap = -1, gapnum;
	for (;;) {
		cin >> m >> nmin >> nmax;
		if (m == 0 && nmin == 0 && nmax == 0) break;
		v.resize(m);
		for (int i = 0; i < m; i++) cin >> v[i];

		for (int i = nmin-1; i < nmax; i++) {
			if (gap == -1) {
				gap = v[i] - v[i + 1];
				gapnum = i+1;
			}
			else {
				if (gap <= v[i] - v[i + 1]) {
					gap = v[i] - v[i + 1];
					gapnum = i+1;
				}
			}
		}
		cout << gapnum << endl;
		gap = -1;
	}
}