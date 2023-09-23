#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int ans = 0;
		for (int i = 1;i <= n / 2;i++) {
			int count = 0;
			for (int j = i;count < n;j++) {
				count += j;
			}
			if (n == count)ans++;
		}
		cout << ans << endl;
	}
	return 0;
}