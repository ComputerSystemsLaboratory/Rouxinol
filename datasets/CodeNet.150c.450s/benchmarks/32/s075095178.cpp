#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, nmin, nmax, res;
	while (cin >> m >> nmin >> nmax, m || nmin || nmax) {
		int gmax = 0;
		for (int i = 0, tmp, btm = 100000; i < m; i++) {
			cin >> tmp;
			if (i >= nmin && i <= nmax && btm != 100000 && btm != tmp && btm - tmp >= gmax) {
				res = i;
				gmax = btm - tmp;
			}
			btm = tmp;
		}
		cout << res << endl;
	}
	return 0;
}