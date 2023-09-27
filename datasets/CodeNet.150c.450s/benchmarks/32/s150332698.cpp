#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, nmi, nma;
	while (cin >> m >> nmi >> nma, m || nmi || nma) {
		vector<int> P(m);
		for (int i = 0; i < m; i++) {
			cin >> P[i];
		}
		sort(P.begin(), P.end());
		int res = -1, gap = -1;
		for (int i = nmi; i <= nma; i++) {
			if (P[m - i] - P[m - i - 1] >= gap) {
				gap = P[m - i] - P[m - i - 1];
				res = i;
			}
		}
		cout << res << endl;
	}
	return 0;
}