#include<iostream>
using namespace std;

int gcd(int x, int y) {
	int tmp;
	while (y > 0) {
		tmp = y;
		y = x % y;
		x = tmp;
	}
	return x;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
	return 0;
}