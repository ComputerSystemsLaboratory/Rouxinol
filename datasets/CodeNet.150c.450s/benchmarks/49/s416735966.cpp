#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int ma=0, mi=1000000000;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int buf; cin >> buf;
			ma = max(ma, buf);
			mi = min(mi, buf);
			ans += buf;
		}
		cout << (ans - ma - mi) / (n - 2) << endl;
	}
}