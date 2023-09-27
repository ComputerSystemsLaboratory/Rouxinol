#include <iostream>

using namespace std;

int main() {
	int a[4], b[4];
	while (1) {
		for (int i=0; i<4; ++i) cin >> a[i];
		for (int i=0; i<4; ++i) cin >> b[i];

		if (cin.eof()) break;

		int hit = 0, blow = 0;
		for (int i=0; i<4; ++i) {
			for (int j=0; j<4; ++j) {
				if (a[i] == b[j] && i == j) {
					hit ++;
				} else if (a[i] == b[j]) {
					blow ++;
				}
			}
		}

		cout << hit << " " << blow << endl;
	}
}