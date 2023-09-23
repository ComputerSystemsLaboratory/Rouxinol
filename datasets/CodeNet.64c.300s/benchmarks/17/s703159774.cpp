#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int x, y, s;
	while(cin >> x >> y >> s, x) {
		int ans = -1;
		for(int i = 1; i <= s - 1; i++) {
			for(int j = 1; j <= s - 1; j++) {
				if(i * (100 + x) / 100 + j * (100 + x) / 100 == s) {
					ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
				}
			}
		}
		cout << ans << endl;
	}
}