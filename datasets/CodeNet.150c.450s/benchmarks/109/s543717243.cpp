#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while (cin >> n, n) {
		int imos[86410] = {};
		for (int i = 0; i < n; i++) {
			int a, b, c, d, e, f; char ch;
			cin >> a >> ch >> b >> ch >> c;
			cin >> d >> ch >> e >> ch >> f;
			imos[a * 3600 + b * 60 + c]++;
			imos[d * 3600 + e * 60 + f]--;
		}
		int ans = imos[0];
		for (int i = 1; i <= 86400; i++) {
			imos[i] += imos[i - 1];
			ans = max(ans, imos[i]);
		}
		cout << ans << endl;
	}
}