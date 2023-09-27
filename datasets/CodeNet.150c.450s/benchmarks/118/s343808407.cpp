#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int x = 0; x < n; x++) {
		int y, m, d;
		cin >> y >> m >> d;

		int res = 0;
		while (1) {
			if (y == 1000)break;
			d++;
			res++;
			if (y % 3 == 0) {
				if (d == 21) {
					d = 1;
					m++;
				}
				if (m == 11) {
					m = 1;
					y++;
				}
			}
			else {
				if (m %2== 0) {
					if (d == 20) {
						d = 1;
						m++;
					}
					if (m == 11) {
						m = 1;
						y++;
					}
				}
				else {
					if (d == 21) {
						d = 1;
						m++;
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}