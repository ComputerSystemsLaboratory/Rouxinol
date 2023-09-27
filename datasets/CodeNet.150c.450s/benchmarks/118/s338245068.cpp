#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long int y, m, d;
		cin >> y >> m >> d;
		long long int dd = 0;
		for (int j = 1; j < y; j++) {
			if (j % 3 == 0) {
				dd += 20 * 10;
			}
			else {
				dd += 20 * 5 + 19 * 5;
			}
		}
		//cout << dd << ' ';
		for (int j = 1; j < m; j++) {
			if (y % 3 == 0) {
				dd += 20;
			}
			else {
				if (j % 2 == 0) {
					dd += 19;
				}
				else {
					dd += 20;
				}
			}
		}
		//cout << dd << ' ';
		dd += d;
		//cout << dd << ' ';
		cout << 196471-dd << endl;
	}
	return 0;
}
