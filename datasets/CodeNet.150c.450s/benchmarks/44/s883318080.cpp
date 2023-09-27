# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
using namespace std;

int main() {
	int a[5];
	int b[5];
	while (cin >> a[1] >> a[2] >> a[3] >> a[4] >> b[1] >> b[2] >> b[3] >> b[4]) {
		int hit = 0, blow = 0;
		for (int i = 1; i <= 4; i++) {
			if (a[i] == b[i]) {
				hit++;
			}
		}
		for (int i = 1; i <= 4; i++) {
			for (int j = 1; j <= 4; j++) {
				if (a[i] == b[j] && i != j) {
					blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
}