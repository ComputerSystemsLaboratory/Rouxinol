#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int h, m, s;
		int h2, m2, s2;
		char c;
		vector<int> mm(100000, 0);
		for (int i = 0; i < n; i++) {
			cin >> h >> c >> m >> c >> s >> h2 >> c >> m2 >> c >> s2;
			//cout << h << ' ' << m << ' ' << s << ' ' << h2 << ' ' << m2 << ' ' << s2 << endl;
			int a = h * 3600 + m * 60 + s;
			int b = h2 * 3600 + m2 * 60 + s2;
			//cout << a << ' ' << b << endl;
			mm[a]++;
			mm[b]--;
		}
		int MAX = mm[0];
		for (int i = 1; i < 100000; i++) {
			mm[i] += mm[i - 1];
			MAX = max(MAX, mm[i]);
		}
		cout << MAX << endl;
	}
	return 0;
}