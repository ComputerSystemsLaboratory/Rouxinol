// 2016-12-06
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

struct section { int d, p; };

int main() {
	int n, m, d, p;
	vector<section> v;
	while (cin >> n >> m, n) {
		v.clear();
		for (int i = 0; i < n; i++) {
			cin >> d >> p;
			section s = {d, p};
			v.push_back(s);
		}
		sort(begin(v), end(v), [](const section& x, const section& y) { return x.p > y.p; });
		p = 0;
		for (auto s : v) {
			d = min(m, s.d);
			m -= d;
			p += (s.d - d) * s.p;
		}
		cout << p << endl;
	}
	return 0;
}