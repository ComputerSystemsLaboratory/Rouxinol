#include<iostream>
#include<algorithm>

using namespace std;
typedef long long ll;

int main() {
	while (1) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		int a[100], b[100];
		int asum = 0, bsum = 0;
		int absum = 99999999;
		for (int i = 0; i < n; i++)cin >> a[i], asum += a[i];
		for (int i = 0; i < m; i++)cin >> b[i], bsum += b[i];

		int ans1 = -1, ans2 = -1;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (asum - a[i] + b[j] == bsum - b[j] + a[i] && absum > a[i] + b[j]) {
					absum = a[i] + b[j];
					ans1 = a[i], ans2 = b[j];
				}
			}
		}

		if (ans1 == -1) {
			cout << -1 << endl;
		}
		else {
			cout << ans1 << " " << ans2 << endl;
		}
	}
	return 0;
}
