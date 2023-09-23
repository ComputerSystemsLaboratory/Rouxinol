#include <iostream>

#define LL long long

LL GCD(LL a, LL b) {
	LL
		c = a > b ? a : b,
		d = a < b ? a : b;
	while (c != d) {
		c -= d;

		LL tmp[] = {c, d};
		c = std::max(tmp[0], tmp[1]);
		d = std::min(tmp[0], tmp[1]);
	}

	return c;
}

LL LCM(LL a, LL b) {
	return a * b / GCD(a, b);
}

int main() {
	int a, b;
	while (std::cin >> a >> b) {
		std::cout << GCD(a, b) << " " << LCM(a, b) << std::endl;
	}
}