#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a[4];
	int b[4];

	int B,H;

	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
		B = 0;
		H = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (a[i] == b[j]) {
					B++;
				}
			}
		}

		for (int i = 0; i < 4; i++) {
			if (a[i] == b[i]) {
				B--;
				H++;
			}
		}

		cout << H << " " << B << endl;
	}

	return 0;
}