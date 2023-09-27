#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
	int m, nmin, nmax; 
	while (cin >> m >> nmin >> nmax && (m || nmin || nmax)) {
		vector<int> p(m);
		for (int i = 0; i < m; ++i) cin >> p[i];
		pair<int, int> ans = { 0,0 };
		for (int i = nmin; i <= nmax; ++i) {
			if (p[i - 1] - p[i] >= ans.first) ans = make_pair(p[i - 1] - p[i], i);
		}
		cout << ans.second << endl;
	}

	return 0;
}
