#include <iostream>
using namespace std;

int main() {
	int n, ans;
	while (cin >> n) {
		ans = 0;
		for (int a = 0; a <= 9; a++) {
			if (n < a) { continue; }
			for (int b = 0; b <= 9; b++) {
				if (n < a + b) { continue; }
				for (int c = 0; c <= 9; c++) {
					if (n < a + b + c) { continue; }
					for (int d = 0; d <= 9; d++) {
						if (n < a + b + c + d) { continue; }
						if (a + b + c + d == n) { ans++; }
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
