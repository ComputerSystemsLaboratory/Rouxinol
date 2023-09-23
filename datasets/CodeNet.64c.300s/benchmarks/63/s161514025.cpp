#include <iostream>

int main() {
	long long int a, b, t, ab, gcd, lcm;

	while (std::cin >> a >> b) {
		ab = a * b;
		while (a % b > 0) {
			t = a % b;
			a = b;
			b = t;
		}
		gcd = b;
		lcm = ab / gcd;
		std::cout << gcd << " " << lcm << std::endl;
	}

	return 0;
}