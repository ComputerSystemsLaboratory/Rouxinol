#include<iostream>
using namespace std;
int main() {
	int a, b, c, x, y, z;
	while (cin >> a >> b) {
		y = a;
		z = b;
		if (a < b) {
			x = a;
			a = b;
			b = x;
		}
		while (b > 0) {
			x = a;
			a = b;
			b = x%b;
		}
		c = (y / a)*(z / a)*a;
		cout << a << " " << c << endl;
	}
	return 0;
}