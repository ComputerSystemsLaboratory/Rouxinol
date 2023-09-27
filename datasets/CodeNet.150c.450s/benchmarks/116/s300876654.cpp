#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, k;
	while (cin >> n >> k, n, k) {
		int s[114514] = {};
		for (int i = 1; i <= n; i++) {
			int a; cin >> a;
			s[i] = s[i - 1] + a;
		}
		long long ans = 0;
		for (int i = 1; i <= n - k; i++) {
			ans = max(ans, (long long)(s[i + k] - s[i]));
		}
		cout << ans << endl;
	}
}