#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int a[100000];
int ra[100001];	//ra[i] = a[0] + ??? + a[i-1]

int main() {
	while (cin >> n >> k) {
		for(int ii = 0; ii < n; ii++) cin >> a[ii];
		if (!n) { break; }
		ra[0] = 0;
		for (int i = 0; i < n; i++) {
			ra[i+1] = ra[i] + a[i];
		}

		int ans = -1000000001;
		for (int i = k; i <= n; i++) {
			ans = max(ans, ra[i] - ra[i-k]);
		}

		cout << ans << endl;
	}
	return 0;
}