#include <iostream>

using namespace std;

int main() {
	int n, ans = 0;
	while (cin >> n) {
		ans = 0;
		if (cin.eof())
			return 0;
		for (int a = 0; a <= 9; a++) {
			for (int b = 0; b <= 9; b++) {
				for (int c = 0; c <= 9; c++) {
					for (int d = 0; d <= 9; d++) {
						if (a + b + c + d == n)
							ans++;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}