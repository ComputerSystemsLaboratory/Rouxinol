#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int m, nmin, nmax;
	while(cin >> m >> nmin >> nmax, !(m == 0 && nmin == 0 && nmax == 0)) {
		vector<int> p(m);

		for(int i = 0; i < m; ++i) {
			cin >> p[i];
		}

		sort(p.begin(), p.end());
		reverse(p.begin(), p.end());

		int ans = 0, gap = -1;
		for(int i = nmax; i >= nmin; --i) {
			int g = p[i - 1] - p[i];

			if(gap < g) {
				ans = i;
				gap = g;
			}
		}

		cout << ans << endl;
	}
}