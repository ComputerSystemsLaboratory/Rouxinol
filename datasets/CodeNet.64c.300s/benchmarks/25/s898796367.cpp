#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int a[4], b[4];
	int hit, blo;

	while (true) {
		for (int i = 0; i < 2; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (i == 0) {
					cin >> a[j];
				} else {
					cin >> b[j];
				}
				if (cin.eof()) {
					return 0;
				}
			}
		}
		hit = blo = 0;
		
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (a[i] == b[j]) {
					if (i == j) {
						hit++;
					}
					else {
						blo++;
					}
				}
			}
		}
		cout << hit << " " << blo << endl;
	}
}