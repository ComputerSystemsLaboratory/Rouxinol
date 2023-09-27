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

int main() {
	using namespace std;

	ui a, b;
	while (cin >> a >> b) {
		const ui GCD = gcd(a, b);
		const ui LCM = (a / GCD) * (b / GCD) * GCD;
		cout << GCD << ' ' << LCM << endl;
	}
	return 0;
}