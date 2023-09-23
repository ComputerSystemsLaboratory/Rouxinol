#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int det(int a, int b, int c, int d) {
	return a * d - b * c;
}

int main() {
	int a[6];
	while(cin) {
		for(int i = 0; i < 6; i++)
			cin >> a[i];
		if(!cin)
			break;
		int d = det(a[0], a[1], a[3], a[4]);
		int x1 = det(a[2], a[1], a[5], a[4]);
		int x2 = det(a[0], a[2], a[3], a[5]);
		cout << setprecision(3) << fixed << 1. * x1 / d + 1e-9 << " ";
		cout << setprecision(3) << fixed << 1. * x2 / d + 1e-9 << endl;
	}

	return 0;
}