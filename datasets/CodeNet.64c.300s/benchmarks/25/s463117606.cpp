#include <iostream>

#define SIZE 4

using namespace std;

int main() {
	int a[SIZE], b[SIZE], hit, blo;

	while (cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]) {
		hit = 0;
		blo = 0;
		for (int i = 0; i < SIZE; i++) {
			if (a[i] == b[i]) {
				hit++;
				a[i] = -1;
				b[i] = -1;
			}
		}

		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				if (a[i] == -1 || b[j] == -1) {
					continue;
				}

				if (a[i] == b[j]) {
					a[i] = -1;
					b[j] = -1;
					blo++;
				}
			}
		}
		cout << hit << " " << blo << endl;
	}

	return 0;
}