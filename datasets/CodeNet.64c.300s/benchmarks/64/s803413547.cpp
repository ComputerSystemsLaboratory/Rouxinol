#include<iostream>

using namespace std;


int gcd(int x, int y) {
	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}

	while (y != 0) {
		int tmp = x%y;
		x = y;
		y = tmp;
	}
	return x;
}

int main() {
	int x, y;

	cin >> x >> y;

	cout << gcd(x, y) << endl;

	return 0;
}