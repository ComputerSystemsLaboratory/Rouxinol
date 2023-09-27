#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;

		vector<int> t(n);
		for (int i = 0; i < n; ++i)
			cin >> t[i];

		vector<int> h(m);
		for (int i = 0; i < m; ++i)
			cin >> h[i];

		int diff = accumulate(t.begin(), t.end(), 0) - accumulate(h.begin(), h.end(), 0);

		int ans1 = -1, ans2 = -1;
		for (unsigned int i = 0; i < t.size(); ++i) {
			for (unsigned int j = 0; j < h.size(); ++j) {
				if (2*(t[i]-h[j]) == diff) {
					if (ans1 == -1 && ans2 == -1) {
						ans1 = t[i];
						ans2 = h[j];
					} else {
						if (ans1+ans2 > t[i]+h[j]) {
							ans1 = t[i];
							ans2 = h[j];
						}
					}
				}
			}
		}

		if (ans1 == -1 && ans2 == -1)
			cout << "-1" << endl;
		else
			cout << ans1 << " " << ans2 << endl;

	}

	return 0;
}