#include <iostream>

typedef unsigned int ui;

void swap(ui & a, ui & b)
{
	unsigned int tmp = a;
	a = b;
	b = tmp;
}

ui gcd(ui a, ui b)
{
	if (a < b) swap(a, b);

	ui c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}

	return b;
}

ui lcm(ui a, ui b, ui gcd)
{
	a /= gcd;
	b /= gcd;
	return a * b * gcd;
}

int main() {
	using namespace std;

	ui a, b;
	while (cin >> a >> b) {
		const ui GCD = gcd(a, b);
		cout << GCD << ' ' << lcm(a, b, GCD) << endl;
	}
	return 0;
}