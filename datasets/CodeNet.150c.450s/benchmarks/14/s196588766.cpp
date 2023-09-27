#include<iostream>
using namespace std;
int main() {
	int i;
	cin >> i;
	int x, y, z;
	for (x = 1; x <= i; x++) {
		z = x;
		y = 0;
		if (z % 3 == 0) y = 1;
		if (z % 10 == 3) y = 1;
		while (z > 10) {
			z = z / 10;
				if (z % 10 == 3) y = 1;
		}
		if (y == 1) cout << " " << x;
	}
	cout << endl ;
	return 0;
}
