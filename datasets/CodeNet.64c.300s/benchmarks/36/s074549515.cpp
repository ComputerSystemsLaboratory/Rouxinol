#include<iostream>

using namespace std;

int main() {
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;
	int alpha;
	if (x < y) {
		if (y < z) {
			cout << x << " " << y << " " << z << endl;
		}
		else if (z < x) {
			cout << z << " " << x << " " << y << endl;
		}
		else {
			cout << x << " " << z << " " << y << endl;
		}
	}
	else if (x < z) {
		cout << y << " " << x << " " << z << endl;
	}
	else if (z < y) {
		cout << z << " " << y << " " << x << endl;
	}
	else {
		cout << y << " " << z << " " << x << endl;
	}
	return 0;
}