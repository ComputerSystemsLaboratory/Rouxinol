#include <iostream>
#include <string>
#include <cstdlib>
#include <utility>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

using namespace std;

int main(void)
{
	while(1) {
		int n;
		cin >> n;
		if (n == 0) break;
		vec<pair<int, int>> time(2 * n);

		rep(i, n) {
			string p, q;
			cin >> p >> q;
			time[2 * i].first = (p[0] - '0') * (int)pow(10, 5) + (p[1] - '0') * (int)pow(10, 4) + (p[3] - '0') * (int)pow(10, 3) + (p[4] - '0') * (int)pow(10, 2) + (p[6] - '0') * (int)pow(10, 1) + p[7] - '0';
			time[2 * i].second = 1;
			time[2 * i + 1].first = (q[0] - '0') * (int)pow(10, 5) + (q[1] - '0') * (int)pow(10, 4) + (q[3] - '0') * (int)pow(10, 3) + (q[4] - '0') * (int)pow(10, 2) + (q[6] - '0') * (int)pow(10, 1) + q[7] - '0';
			time[2 * i + 1].second = - 1;
		}

		sort(time.begin(), time.end());

		int train = 0;
		int ans = 0;
		rep(i, 2 * n) {
			train += time[i].second;
			if (train > ans) ans = train;
		}
		cout << ans << endl;
	}
	return 0;
}