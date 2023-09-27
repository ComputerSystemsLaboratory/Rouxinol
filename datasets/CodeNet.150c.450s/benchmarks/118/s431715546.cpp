#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int y, m, d;
		cin >> y >> m >> d;
		int ans = 0;
		if (y % 3) {
			if (m % 2)ans += 21 - d + 19 + ((10 - m) / 2) * 39;
			else ans += 20 - d + ((10 - m) / 2) * 39;
		}
		else ans += 21 - d + (10 - m) * 20;
		ans += (999 - y) * 195 + (999 / 3 - y / 3) * 5;
		cout << ans << endl;
	}
}