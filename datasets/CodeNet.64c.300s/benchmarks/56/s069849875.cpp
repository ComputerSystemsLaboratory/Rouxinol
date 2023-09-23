#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int Y, M , D;
		cin >> Y >> M >> D;
		int ans = -D + 1;
		if (M % 2 == 1 || Y % 3 == 0) {
			ans += 20;
		} else {
			ans += 19;
		}
		for (int y = Y; y < 1000; y++) {
			for (int m = (y==Y)?M+1:1; m <= 10; m++) {
				if (m % 2 == 1 || y % 3 == 0) {
					ans += 20;
				} else {
					ans += 19;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}