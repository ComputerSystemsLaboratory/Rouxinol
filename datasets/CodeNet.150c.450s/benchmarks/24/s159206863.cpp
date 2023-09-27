#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

typedef pair<long long int, long long int> P;

int main() {
	long long int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		long long int d, p;
		vector<P> dd;
		for (long long int i = 0; i < n; i++) {
			cin >> d >> p;
			dd.push_back(P(p, d));
		}
		sort(dd.begin(), dd.end(), greater<P>());
		long long int ans = 0;
		for (long long int i = 0; i < n; i++) {
			P pp = dd[i];
			long long int p2 = pp.first;
			long long int d2 = pp.second;
			if (m >= d2) {
				m -= d2;
			}
			else if (m > 0){
				ans += p2*(d2 - m);
				m = 0;
			}
			else {
				ans += p2*d2;
			}
		}
		cout << ans << endl;
	}
	return 0;
}