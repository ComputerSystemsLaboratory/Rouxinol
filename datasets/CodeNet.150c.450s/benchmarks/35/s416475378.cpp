#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		int a[5001], ans = -114514;
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = i; j < n; j++) {
				cnt += a[j];
				if (ans < cnt)ans = cnt;
			}
		}
		cout << ans << endl;
	}
	return 0;
}