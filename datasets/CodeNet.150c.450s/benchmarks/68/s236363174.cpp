#include <iostream>
#include <algorithm>
using namespace std;
int n, a[1009];
int main() {
	while (cin >> n, n) {
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int ret = 1999999999;
		for (int i = 1; i < n; i++) ret = min(ret, a[i] - a[i - 1]);
		cout << ret << endl;
	}
	return 0;
}