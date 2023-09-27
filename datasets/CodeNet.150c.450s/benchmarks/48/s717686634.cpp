#include <iostream>

using namespace std;

int main() {
	int e;

	while (cin >> e && e > 0) {
		int min = 100000000;

		for (int z = 0; z <= 100; z++) {
			if (z * z * z > e) {
				break;
			}
			for (int y = 0; y <= 1000; y++) {
				if ((z * z * z) + (y * y) > e) {
					break;
				}
				else {
					if (min > z + y + (e - ((z * z * z) + (y * y)))) {
						min = z + y + (e - ((z * z * z) + (y * y)));
					}
				}
			}
		}

		cout << min << endl;
	}

	return 0;
}