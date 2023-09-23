#include <iostream>

using namespace std;

int cal(int v, int per) {
	return v * (100 + per) / 100;
}
int main() {
	int x, y, s;
	while ( cin >> x >> y >> s, x || y || s ) {
		int ans = 0;
		for (int i = 1; i <= s; ++i) {
			for (int j = i; j <= s-i; ++j) {
				if ( cal(i, x) + cal(j, x) == s ) {
					ans = max(ans, cal(i, y) + cal(j, y));
				}
			}
		}
		cout << ans << endl;
	}
}