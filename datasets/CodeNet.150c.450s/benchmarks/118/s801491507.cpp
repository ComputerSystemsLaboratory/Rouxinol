#include <iostream>

using namespace std;

bool uruu(int y) {
	return y % 3 == 0;
}

int main() {
	int n; cin >> n;
	int days[11] = {20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
	int Days[11];
	for (int i = 0; i < 10; ++i) {
		Days[i] = days[i];
	}
	for (int i = 0; i < 10; ++i) {
		days[i+1] += days[i];
	}
	for (int t = 0; t < n; ++t) {
		int Y, M, D; cin >> Y >> M >> D;
		int ans = 0;
		if (Y < 1000) {
			if (uruu(Y)) {
				ans += 20 * (10-M);
				ans += 20 - D;
			}
			else {
				ans += days[10]-days[M-1];
				ans += Days[M-1] - D;
			}
		}
		while (++Y < 1000) {
			ans += uruu(Y) ? 20*10 : days[10];
		}
		cout << ans+1 << endl;
	}
}