#include<iostream>
using namespace std;
int main() {
	long x, y,a,b,c;
	cin >> x;
	a = 1000001;
	b = -1000001;
	c = 0;
	for (; x > 0; x = x - 1) {
		cin >> y;
		if (a > y) {
			a=y;
		}
		if (b < y) {
			b = y;
		}
		c = c + y;
	}
	cout << a << " " << b << " " << c << endl;
}
