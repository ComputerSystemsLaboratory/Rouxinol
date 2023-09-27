#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
class load {
public:
	int d, p;
	bool operator<(const load &other) {
		return this->p > other.p;
	}
};
int main() {
	int n, m;
	while (cin >> n >> m, n) {
		vector<load>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].d >> v[i].p;
		}
		sort(v.begin(), v.end());
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (m - v[i].d >= 0) {
				m -= v[i].d;
				v[i].d = 0;
			}
			else {
				v[i].d -= m;
				break;
			}

		}
		for (int i = 0; i < n; i++) {
			ans += v[i].d*v[i].p;
		}
		cout << ans << endl;
	}
	return 0;
}