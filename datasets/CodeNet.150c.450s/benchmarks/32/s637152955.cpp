#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int m, nmin, nmax;
	while (cin >> m >> nmin >> nmax) {
		if (m == 0 && nmin == 0 && nmax == 0) {
			break;
		}
		vector<int> d(m);
		for (int i = 0; i < m; i++) {
			cin >> d[i];
		}
		int MAX = d[nmin-1]-d[nmin];
		int maxn = nmin;
		for (int i = nmin-1; i <= nmax-1; i++) {
			int mm = d[i]-d[i+1];
			if (mm >= MAX) {
				MAX = mm;
				maxn = i+1;
			}
			//cout << MAX << ' ' << maxn << endl;
		}
		cout << maxn << endl;
	}
	return 0;
}