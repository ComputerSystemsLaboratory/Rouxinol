//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0500
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	while (true) {
		int n; cin >> n;
		if (!n) break;
		int ans[2] = { 0 };
		for (int i = 0; i < n;i++) {
			int a, b; cin >> a >> b;
			if (a == b) { ans[0] += a, ans[1] += b; continue; }
			ans[a < b] += (a + b);
		}
		cout << ans[0] << " " << ans[1] << endl;
	}
}