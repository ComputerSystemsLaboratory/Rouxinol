#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int nmin, nmax, m;
	while (cin >> m >> nmin >> nmax, m) {
		int p[210];
		for (int i = 1; i <= m; i++)cin >> p[i];
		int ans = nmin, v = p[nmin] - p[nmin + 1];
		for (int i = nmin + 1; i <= nmax; i++) {
			if (v <= p[i] - p[i + 1]) {
				ans = i;
				v = p[i] - p[i + 1];
			}
		}
		cout << ans << endl;
	}
}