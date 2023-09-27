#include <iostream>
using namespace std;

int main() {
	int n, i, j, k, l, ans;
	while (cin >> n) {
		ans = 0;
		for (i = 0; i <= 9; i++) {
			if (i > n) continue;
			for (j = 0; j <= 9; j++) {
				if (i + j > n) continue;
				for (k = 0; k <= 9; k++) {
					if (i + j + k > n) continue;
					for (l = 0; l <= 9; l++)
						if (i + j + k + l == n) {
							ans++; break;
						}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
