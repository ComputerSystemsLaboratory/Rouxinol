#include <iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	
	if ((x >= y) && (y >= z)) {
		cout << z << " " << y << " " << x << endl;
	} else if ((y >= x) && (x >= z)) {
		cout << z << " " << x << " " << y << endl;
	} else if ((x >= z) && (z >= y)) {
		cout << y << " " << z << " " << x << endl;
	} else if ((y >= z) && (z >= x)) {
		cout << x << " " << z << " " << y << endl;
	} else if ((z >= y) && (y >= x)) {
		cout << x << " " << y << " " << z << endl;
	} else if ((z >= x) && (x >= y)) {
		cout << y << " " << x << " " << z << endl;
	} else if ((x = y) && (y = z)) {
		cout << x << " " << y << " " << z << endl;
	}
	return 0;
}

