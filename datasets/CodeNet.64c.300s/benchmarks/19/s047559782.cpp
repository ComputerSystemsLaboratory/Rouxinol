#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 11;
int a[N];

int main() {
	ios :: sync_with_stdio(false);
	int n;
	while(cin >> n) {
		if(n == 0) break;
		for(int i = 0; i < n; i ++)
			cin >> a[i];
		int ans = a[0], pre = min(a[0], 0);
		for(int i = 1; i < n; i ++) {
			a[i] += a[i - 1];
			ans = max(ans, a[i] - pre);
			pre = min(pre, a[i]);
		}
		cout << ans << '\n';
	}
	return 0;
}