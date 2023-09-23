#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c;
	if (a > b) {
		n = b;
		b = a;
		a = n;
	}
	if (b > c) {
		n = c;
		c = b;
		b = n;
	}
	if (a > b) {
		n = b;
		b = a;
		a = n;
	}
	cout << a << " " << b << " " << c << endl;
}
