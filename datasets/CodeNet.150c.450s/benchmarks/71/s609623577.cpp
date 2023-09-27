#include <iostream>
using namespace std;
int main() {
	int n, a, b, c, d, cnt = 0;
	while (cin >> n) {
		cnt = 0;
		for (a = 0; a < 10 && a <= n; a++) {
			for (b = 0; b < 10 && b <= n; b++) {
				for (c = 0; c < 10 && c <= n; c++) {
					for (d = 0; d < 10 && d <= n; d++) {
						if (a + b + c + d == n) {
							cnt++;
							//break;
						}
					}
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
