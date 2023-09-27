#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k, n, k) {

		int a[100005];
		for (int i = 0;i < n;i++) {
			cin >> a[i];
		}

		int ans = 0;
		for (int i = 0;i <= n - k;i++) {
			int s = 0;
			for (int j = 0;j < k;j++) {
				s += a[i + j];
			}
			if (s > ans)ans = s;
		}
		cout << ans << endl;
	}
	return 0;
}