#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;

int ar[1000];

int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0)break;
		for (int i = 0; i < n; i++)cin >> ar[i];

		sort(ar, ar + n);

		int ans = 99999999;

		for (int i = 0; i < n - 1; i++) {
			ans = min(ans, abs(ar[i] - ar[i + 1]));
		}
		cout << ans << endl;
	}
	return 0;
}
