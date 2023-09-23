#include <iostream>
using namespace std;

int main() {
	int a[4];
	int b[4];

	while (cin >> a[0]) {
		int hit = 0, brow = 0;

		for (int i = 1; i < 4; i++) {
			cin >> a[i];
		}
		for (int j = 0; j < 4; j++) {
			cin >> b[j];
		}

		for (int k = 0; k < 4; k++) {
			for (int l = 0; l < 4; l++) {
				if (a[k] == b[l]) {
					if (k == l) {
						hit++;
					}
					else {
						brow++;
					}
				}
			}
		}

		cout << hit << " " << brow << endl;
	}

	return 0;
}