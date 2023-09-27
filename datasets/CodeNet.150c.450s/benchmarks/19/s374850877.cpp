#include <iostream>
using namespace std;

int main() {
	auto cswap = [](int& x, int& y) { if (x > y) { auto tmp = x; x = y; y = tmp; }};
	while(1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		cswap(a, b);
		cout << a << " " << b << endl;
	}
}