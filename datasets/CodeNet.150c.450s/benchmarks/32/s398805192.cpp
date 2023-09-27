#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int m, a, b;
	while (cin >> m >> a >> b,m,a,b) {
		int p[300];
		for (int i = 0;i < m;i++)cin >> p[i];

		int ans = 0;
		int g = 0;

		for (int i = 0;i < m - 1;i++) {
			int c = p[i] - p[i + 1];
			if (g <= c && (i + 1 >= a) && (i + 1 <= b)) {
				ans = i + 1;
				g = c;
			}
		}
		cout << ans << endl;
	}
	return 0;
}