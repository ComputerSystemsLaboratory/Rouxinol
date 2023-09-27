#include <iostream>
#include <algorithm>
using namespace std;

int m, a, b, p[200], ans;

int main() {
	while (true) {
		cin >> m >> a >> b;
		if (m == 0)break;
		for (int i = 0; i < m; i++) {
			cin >> p[i];
		}
		sort(p, p + m);

		/*cout << "m:" << m << " a:" << a << " b:" << b << endl;
		for (int i = 0; i < m; i++) {
			cout << p[i] << " ";
		}
		cout << endl;*/

		int ans = 0, maxnum = 0;
		for (int i = a; i <= b; i++) {
			//cout << "i:" << i << " p[m-i]:" << p[m-i] << endl;
			if (maxnum <= p[m - i]-p[m - (i + 1)]) {
				maxnum = p[m - i] - p[m - (i + 1)];
				ans = i;
			}
		}

		cout << ans << endl;
	}
}
